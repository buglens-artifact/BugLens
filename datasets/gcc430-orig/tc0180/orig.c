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



static unsigned g_9 = 4294967294UL;
static int g_13[10] = {0L, 0L, (-1L), 0L, 0L, (-1L), 0L, 0L, (-1L), 0L};
static int g_19 = 0x5DCEFBDEL;
static unsigned g_29[3][4][3] = {{{18446744073709551615UL, 1UL, 0x227F44FBL}, {18446744073709551615UL, 1UL, 0x227F44FBL}, {18446744073709551615UL, 1UL, 0x227F44FBL}, {18446744073709551615UL, 1UL, 0x227F44FBL}}, {{18446744073709551615UL, 1UL, 0x227F44FBL}, {18446744073709551615UL, 1UL, 0x227F44FBL}, {18446744073709551615UL, 1UL, 0x227F44FBL}, {18446744073709551615UL, 1UL, 0x227F44FBL}}, {{18446744073709551615UL, 1UL, 0x227F44FBL}, {18446744073709551615UL, 1UL, 0x227F44FBL}, {18446744073709551615UL, 1UL, 0x227F44FBL}, {18446744073709551615UL, 1UL, 0x227F44FBL}}};
static char g_31 = 1L;
static unsigned g_33 = 0xF77771FDL;
static int *g_77[6][8] = {{(void*)0, &g_19, &g_13[3], &g_13[1], &g_13[1], &g_13[3], &g_19, (void*)0}, {(void*)0, &g_19, &g_13[3], &g_13[1], &g_13[1], &g_13[3], &g_19, (void*)0}, {(void*)0, &g_19, &g_13[3], &g_13[1], &g_13[1], &g_13[3], &g_19, (void*)0}, {(void*)0, &g_19, &g_13[3], &g_13[1], &g_13[1], &g_13[3], &g_19, (void*)0}, {(void*)0, &g_19, &g_13[3], &g_13[1], &g_13[1], &g_13[3], &g_19, (void*)0}, {(void*)0, &g_19, &g_13[3], &g_13[1], &g_13[1], &g_13[3], &g_19, (void*)0}};
static int **g_76 = &g_77[2][0];
static unsigned char g_92 = 0xA4L;
static short g_99 = (-3L);
static short g_101 = (-4L);
static int *g_106 = &g_19;
static unsigned char *g_128 = &g_92;
static char g_151[6][6][5] = {{{2L, 0xC3L, 0x60L, 9L, 0x84L}, {2L, 0xC3L, 0x60L, 9L, 0x84L}, {2L, 0xC3L, 0x60L, 9L, 0x84L}, {2L, 0xC3L, 0x60L, 9L, 0x84L}, {2L, 0xC3L, 0x60L, 9L, 0x84L}, {2L, 0xC3L, 0x60L, 9L, 0x84L}}, {{2L, 0xC3L, 0x60L, 9L, 0x84L}, {2L, 0xC3L, 0x60L, 9L, 0x84L}, {2L, 0xC3L, 0x60L, 9L, 0x84L}, {2L, 0xC3L, 0x60L, 9L, 0x84L}, {2L, 0xC3L, 0x60L, 9L, 0x84L}, {2L, 0xC3L, 0x60L, 9L, 0x84L}}, {{2L, 0xC3L, 0x60L, 9L, 0x84L}, {2L, 0xC3L, 0x60L, 9L, 0x84L}, {2L, 0xC3L, 0x60L, 9L, 0x84L}, {2L, 0xC3L, 0x60L, 9L, 0x84L}, {2L, 0xC3L, 0x60L, 9L, 0x84L}, {2L, 0xC3L, 0x60L, 9L, 0x84L}}, {{2L, 0xC3L, 0x60L, 9L, 0x84L}, {2L, 0xC3L, 0x60L, 9L, 0x84L}, {2L, 0xC3L, 0x60L, 9L, 0x84L}, {2L, 0xC3L, 0x60L, 9L, 0x84L}, {2L, 0xC3L, 0x60L, 9L, 0x84L}, {2L, 0xC3L, 0x60L, 9L, 0x84L}}, {{2L, 0xC3L, 0x60L, 9L, 0x84L}, {2L, 0xC3L, 0x60L, 9L, 0x84L}, {2L, 0xC3L, 0x60L, 9L, 0x84L}, {2L, 0xC3L, 0x60L, 9L, 0x84L}, {2L, 0xC3L, 0x60L, 9L, 0x84L}, {2L, 0xC3L, 0x60L, 9L, 0x84L}}, {{2L, 0xC3L, 0x60L, 9L, 0x84L}, {2L, 0xC3L, 0x60L, 9L, 0x84L}, {2L, 0xC3L, 0x60L, 9L, 0x84L}, {2L, 0xC3L, 0x60L, 9L, 0x84L}, {2L, 0xC3L, 0x60L, 9L, 0x84L}, {2L, 0xC3L, 0x60L, 9L, 0x84L}}};
static unsigned short g_180 = 1UL;
static unsigned short g_183 = 0x6D00L;
static unsigned g_207 = 0x216C94C7L;
static char g_239[5][6] = {{0xE4L, 0x1EL, 0xD0L, 0x8AL, 0x1EL, (-1L)}, {0xE4L, 0x1EL, 0xD0L, 0x8AL, 0x1EL, (-1L)}, {0xE4L, 0x1EL, 0xD0L, 0x8AL, 0x1EL, (-1L)}, {0xE4L, 0x1EL, 0xD0L, 0x8AL, 0x1EL, (-1L)}, {0xE4L, 0x1EL, 0xD0L, 0x8AL, 0x1EL, (-1L)}};
static unsigned *g_246 = (void*)0;
static unsigned **g_245 = &g_246;
static unsigned char **g_333 = &g_128;
static char *g_341 = &g_151[3][0][3];
static char **g_340 = &g_341;
static unsigned char g_375 = 0x13L;
static unsigned char g_414[10] = {0x20L, 0UL, 0xB2L, 0xB2L, 0UL, 0x20L, 0UL, 0xB2L, 0xB2L, 0UL};
static int ****g_428 = (void*)0;
static int *g_455[3][9][6] = {{{&g_13[3], (void*)0, &g_13[4], &g_13[4], (void*)0, &g_13[2]}, {&g_13[3], (void*)0, &g_13[4], &g_13[4], (void*)0, &g_13[2]}, {&g_13[3], (void*)0, &g_13[4], &g_13[4], (void*)0, &g_13[2]}, {&g_13[3], (void*)0, &g_13[4], &g_13[4], (void*)0, &g_13[2]}, {&g_13[3], (void*)0, &g_13[4], &g_13[4], (void*)0, &g_13[2]}, {&g_13[3], (void*)0, &g_13[4], &g_13[4], (void*)0, &g_13[2]}, {&g_13[3], (void*)0, &g_13[4], &g_13[4], (void*)0, &g_13[2]}, {&g_13[3], (void*)0, &g_13[4], &g_13[4], (void*)0, &g_13[2]}, {&g_13[3], (void*)0, &g_13[4], &g_13[4], (void*)0, &g_13[2]}}, {{&g_13[3], (void*)0, &g_13[4], &g_13[4], (void*)0, &g_13[2]}, {&g_13[3], (void*)0, &g_13[4], &g_13[4], (void*)0, &g_13[2]}, {&g_13[3], (void*)0, &g_13[4], &g_13[4], (void*)0, &g_13[2]}, {&g_13[3], (void*)0, &g_13[4], &g_13[4], (void*)0, &g_13[2]}, {&g_13[3], (void*)0, &g_13[4], &g_13[4], (void*)0, &g_13[2]}, {&g_13[3], (void*)0, &g_13[4], &g_13[4], (void*)0, &g_13[2]}, {&g_13[3], (void*)0, &g_13[4], &g_13[4], (void*)0, &g_13[2]}, {&g_13[3], (void*)0, &g_13[4], &g_13[4], (void*)0, &g_13[2]}, {&g_13[3], (void*)0, &g_13[4], &g_13[4], (void*)0, &g_13[2]}}, {{&g_13[3], (void*)0, &g_13[4], &g_13[4], (void*)0, &g_13[2]}, {&g_13[3], (void*)0, &g_13[4], &g_13[4], (void*)0, &g_13[2]}, {&g_13[3], (void*)0, &g_13[4], &g_13[4], (void*)0, &g_13[2]}, {&g_13[3], (void*)0, &g_13[4], &g_13[4], (void*)0, &g_13[2]}, {&g_13[3], (void*)0, &g_13[4], &g_13[4], (void*)0, &g_13[2]}, {&g_13[3], (void*)0, &g_13[4], &g_13[4], (void*)0, &g_13[2]}, {&g_13[3], (void*)0, &g_13[4], &g_13[4], (void*)0, &g_13[2]}, {&g_13[3], (void*)0, &g_13[4], &g_13[4], (void*)0, &g_13[2]}, {&g_13[3], (void*)0, &g_13[4], &g_13[4], (void*)0, &g_13[2]}}};
static short *g_596 = &g_101;
static short **g_595 = &g_596;
static int g_644 = 0x594B6C20L;
static unsigned g_680 = 0x8137BA3EL;
static unsigned char g_772[2] = {0xEDL, 0xEDL};
static int g_784 = 0xDCD68F5EL;
static char **g_795[6] = {&g_341, &g_341, &g_341, &g_341, &g_341, &g_341};
static unsigned char g_796 = 0x4EL;
static int **g_808 = &g_106;
static int *g_889 = &g_13[3];
static unsigned ***g_894[5] = {&g_245, (void*)0, &g_245, (void*)0, &g_245};
static int **g_930 = &g_77[3][4];
static unsigned char g_934 = 0x46L;
static int *g_978 = &g_644;
static int **g_977 = &g_978;
static unsigned *g_1085 = &g_29[0][0][2];
static unsigned **g_1084[4][1] = {{&g_1085}, {&g_1085}, {&g_1085}, {&g_1085}};
static unsigned g_1100 = 6UL;
static char g_1218 = (-1L);
static unsigned char g_1220[6] = {4UL, 4UL, 4UL, 4UL, 4UL, 4UL};
static int g_1224 = 1L;
static unsigned g_1254[2][1] = {{0x00B44991L}, {0x00B44991L}};
static int g_1259 = 0x44B0E3B7L;
static unsigned char g_1275 = 0x7DL;
static unsigned char g_1312 = 0UL;
static int g_1351 = 0xAFD95C1FL;
static int *g_1353 = &g_1351;



static int func_1(void);
static short func_2(unsigned p_3, unsigned short p_4, char p_5, unsigned p_6);
static unsigned char func_7(short p_8);
static int func_16(int * p_17);
static int * func_25(int p_26, int * p_27, unsigned p_28);
static unsigned char func_44(char p_45, int * p_46, unsigned short p_47, unsigned p_48);
static int * func_49(int * p_50, int p_51, char * p_52, int ** p_53, int p_54);
static short func_56(int * p_57, char * p_58);
static char func_63(unsigned short p_64, unsigned char p_65, int p_66);
static unsigned * func_69(int ** p_70, int ** p_71, short p_72, int p_73, int p_74);
static int func_1(void)
{
    char l_1098[10] = {0L, 0xB6L, 0L, 0xB6L, 0L, 0xB6L, 0L, 0xB6L, 0L, 0xB6L};
    int l_1099 = 0L;
    unsigned char l_1101 = 0UL;
    int **l_1168 = &g_77[2][0];
    unsigned l_1221[2];
    unsigned l_1244[5];
    short l_1283 = (-4L);
    unsigned short l_1288 = 0UL;
    unsigned short l_1290 = 0xC1A4L;
    char l_1298 = 0xD2L;
    int *l_1350 = (void*)0;
    int l_1352 = 0x12C6B40BL;
    int *l_1363 = &g_784;
    short l_1364 = 0x9A74L;
    int ***l_1370[2];
    int ****l_1369[9] = {&l_1370[1], &l_1370[1], (void*)0, &l_1370[1], &l_1370[1], (void*)0, &l_1370[1], &l_1370[1], (void*)0};
    int ****l_1371 = (void*)0;
    int l_1372 = (-1L);
    int *l_1377 = &g_1351;
    unsigned **l_1379[2];
    int *l_1385[7][10] = {{(void*)0, (void*)0, (void*)0, (void*)0, (void*)0, &g_1351, (void*)0, &g_1351, (void*)0, (void*)0}, {(void*)0, (void*)0, (void*)0, (void*)0, (void*)0, &g_1351, (void*)0, &g_1351, (void*)0, (void*)0}, {(void*)0, (void*)0, (void*)0, (void*)0, (void*)0, &g_1351, (void*)0, &g_1351, (void*)0, (void*)0}, {(void*)0, (void*)0, (void*)0, (void*)0, (void*)0, &g_1351, (void*)0, &g_1351, (void*)0, (void*)0}, {(void*)0, (void*)0, (void*)0, (void*)0, (void*)0, &g_1351, (void*)0, &g_1351, (void*)0, (void*)0}, {(void*)0, (void*)0, (void*)0, (void*)0, (void*)0, &g_1351, (void*)0, &g_1351, (void*)0, (void*)0}, {(void*)0, (void*)0, (void*)0, (void*)0, (void*)0, &g_1351, (void*)0, &g_1351, (void*)0, (void*)0}};
    int i, j;
    for (i = 0; i < 2; i++)
        l_1221[i] = 0UL;
    for (i = 0; i < 5; i++)
        l_1244[i] = 1UL;
    for (i = 0; i < 2; i++)
        l_1370[i] = (void*)0;
    for (i = 0; i < 2; i++)
        l_1379[i] = &g_246;
    if ((func_2((((func_7(g_9) > (safe_unary_minus_func_int32_t_s(((l_1099 = l_1098[0]) & g_1100)))) ^ l_1101) , 0x367FF0DFL), l_1098[0], l_1098[9], (+l_1101)) != l_1101))
    {
        unsigned char *l_1160[6][4][7] = {{{&g_772[1], &g_92, &g_375, &g_772[0], (void*)0, &g_375, &g_375}, {&g_772[1], &g_92, &g_375, &g_772[0], (void*)0, &g_375, &g_375}, {&g_772[1], &g_92, &g_375, &g_772[0], (void*)0, &g_375, &g_375}, {&g_772[1], &g_92, &g_375, &g_772[0], (void*)0, &g_375, &g_375}}, {{&g_772[1], &g_92, &g_375, &g_772[0], (void*)0, &g_375, &g_375}, {&g_772[1], &g_92, &g_375, &g_772[0], (void*)0, &g_375, &g_375}, {&g_772[1], &g_92, &g_375, &g_772[0], (void*)0, &g_375, &g_375}, {&g_772[1], &g_92, &g_375, &g_772[0], (void*)0, &g_375, &g_375}}, {{&g_772[1], &g_92, &g_375, &g_772[0], (void*)0, &g_375, &g_375}, {&g_772[1], &g_92, &g_375, &g_772[0], (void*)0, &g_375, &g_375}, {&g_772[1], &g_92, &g_375, &g_772[0], (void*)0, &g_375, &g_375}, {&g_772[1], &g_92, &g_375, &g_772[0], (void*)0, &g_375, &g_375}}, {{&g_772[1], &g_92, &g_375, &g_772[0], (void*)0, &g_375, &g_375}, {&g_772[1], &g_92, &g_375, &g_772[0], (void*)0, &g_375, &g_375}, {&g_772[1], &g_92, &g_375, &g_772[0], (void*)0, &g_375, &g_375}, {&g_772[1], &g_92, &g_375, &g_772[0], (void*)0, &g_375, &g_375}}, {{&g_772[1], &g_92, &g_375, &g_772[0], (void*)0, &g_375, &g_375}, {&g_772[1], &g_92, &g_375, &g_772[0], (void*)0, &g_375, &g_375}, {&g_772[1], &g_92, &g_375, &g_772[0], (void*)0, &g_375, &g_375}, {&g_772[1], &g_92, &g_375, &g_772[0], (void*)0, &g_375, &g_375}}, {{&g_772[1], &g_92, &g_375, &g_772[0], (void*)0, &g_375, &g_375}, {&g_772[1], &g_92, &g_375, &g_772[0], (void*)0, &g_375, &g_375}, {&g_772[1], &g_92, &g_375, &g_772[0], (void*)0, &g_375, &g_375}, {&g_772[1], &g_92, &g_375, &g_772[0], (void*)0, &g_375, &g_375}}};
        int l_1178[9] = {0x28E131D6L, (-6L), 0x28E131D6L, (-6L), 0x28E131D6L, (-6L), 0x28E131D6L, (-6L), 0x28E131D6L};
        unsigned short l_1190 = 0xD83EL;
        int *l_1205 = &g_784;
        unsigned char l_1209[1][10][3] = {{{255UL, 1UL, 252UL}, {255UL, 1UL, 252UL}, {255UL, 1UL, 252UL}, {255UL, 1UL, 252UL}, {255UL, 1UL, 252UL}, {255UL, 1UL, 252UL}, {255UL, 1UL, 252UL}, {255UL, 1UL, 252UL}, {255UL, 1UL, 252UL}, {255UL, 1UL, 252UL}}};
        short l_1219 = 0x436AL;
        unsigned **l_1231 = &g_246;
        int l_1238 = 0L;
        char l_1239 = 1L;
        int *l_1243[5][2] = {{&l_1178[3], (void*)0}, {&l_1178[3], (void*)0}, {&l_1178[3], (void*)0}, {&l_1178[3], (void*)0}, {&l_1178[3], (void*)0}};
        int *l_1250 = (void*)0;
        int ***l_1253 = &g_76;
        unsigned *l_1289[10] = {&g_1254[1][0], &l_1244[2], (void*)0, (void*)0, &l_1244[2], &g_1254[1][0], &l_1244[2], (void*)0, (void*)0, &l_1244[2]};
        int l_1318 = 0x7C09F8AEL;
        int l_1319 = 0x4AA9D685L;
        int l_1320 = 0xDD8435C4L;
        char l_1321 = (-1L);
        char **l_1347 = &g_341;
        int *l_1349 = &g_19;
        int i, j, k;
        if (((void*)0 == l_1160[3][3][0]))
        {
            int **l_1167 = &g_455[1][4][5];
            int *l_1172 = (void*)0;
            unsigned short l_1208[7][10][1] = {{{0xF6EAL}, {0xF6EAL}, {0xF6EAL}, {0xF6EAL}, {0xF6EAL}, {0xF6EAL}, {0xF6EAL}, {0xF6EAL}, {0xF6EAL}, {0xF6EAL}}, {{0xF6EAL}, {0xF6EAL}, {0xF6EAL}, {0xF6EAL}, {0xF6EAL}, {0xF6EAL}, {0xF6EAL}, {0xF6EAL}, {0xF6EAL}, {0xF6EAL}}, {{0xF6EAL}, {0xF6EAL}, {0xF6EAL}, {0xF6EAL}, {0xF6EAL}, {0xF6EAL}, {0xF6EAL}, {0xF6EAL}, {0xF6EAL}, {0xF6EAL}}, {{0xF6EAL}, {0xF6EAL}, {0xF6EAL}, {0xF6EAL}, {0xF6EAL}, {0xF6EAL}, {0xF6EAL}, {0xF6EAL}, {0xF6EAL}, {0xF6EAL}}, {{0xF6EAL}, {0xF6EAL}, {0xF6EAL}, {0xF6EAL}, {0xF6EAL}, {0xF6EAL}, {0xF6EAL}, {0xF6EAL}, {0xF6EAL}, {0xF6EAL}}, {{0xF6EAL}, {0xF6EAL}, {0xF6EAL}, {0xF6EAL}, {0xF6EAL}, {0xF6EAL}, {0xF6EAL}, {0xF6EAL}, {0xF6EAL}, {0xF6EAL}}, {{0xF6EAL}, {0xF6EAL}, {0xF6EAL}, {0xF6EAL}, {0xF6EAL}, {0xF6EAL}, {0xF6EAL}, {0xF6EAL}, {0xF6EAL}, {0xF6EAL}}};
            int *l_1215 = &g_13[6];
            int i, j, k;
            for (g_31 = 24; (g_31 < (-6)); g_31 = safe_sub_func_int8_t_s_s(g_31, 6))
            {
                unsigned short l_1163 = 7UL;
                int l_1164[4] = {8L, (-6L), 8L, (-6L)};
                unsigned l_1191 = 0x9CFE4074L;
                char *l_1202 = &g_239[2][2];
                int i;
                if (((l_1164[3] = l_1163) < 0x2F39E74AL))
                {
                    char *l_1175 = (void*)0;
                    int ***l_1179[4] = {&l_1168, &g_808, &l_1168, &g_808};
                    int ****l_1180 = (void*)0;
                    int ****l_1181 = &l_1179[3];
                    unsigned l_1192[7][1][6] = {{{0x158D2AE2L, 0x158D2AE2L, 4294967295UL, 0xB42F4431L, 4294967295UL, 0xB42F4431L}}, {{0x158D2AE2L, 0x158D2AE2L, 4294967295UL, 0xB42F4431L, 4294967295UL, 0xB42F4431L}}, {{0x158D2AE2L, 0x158D2AE2L, 4294967295UL, 0xB42F4431L, 4294967295UL, 0xB42F4431L}}, {{0x158D2AE2L, 0x158D2AE2L, 4294967295UL, 0xB42F4431L, 4294967295UL, 0xB42F4431L}}, {{0x158D2AE2L, 0x158D2AE2L, 4294967295UL, 0xB42F4431L, 4294967295UL, 0xB42F4431L}}, {{0x158D2AE2L, 0x158D2AE2L, 4294967295UL, 0xB42F4431L, 4294967295UL, 0xB42F4431L}}, {{0x158D2AE2L, 0x158D2AE2L, 4294967295UL, 0xB42F4431L, 4294967295UL, 0xB42F4431L}}};
                    int l_1203 = 0xFAF51FFAL;
                    int i, j, k;
                    for (g_375 = (-18); (g_375 <= 38); g_375 = safe_add_func_uint32_t_u_u(g_375, 5))
                    {
                        int *l_1171[3];
                        int i;
                        for (i = 0; i < 3; i++)
                            l_1171[i] = &l_1099;
                        (*l_1168) = l_1171[2];
                        (*l_1167) = l_1172;
                        (*g_889) = (safe_add_func_int8_t_s_s((func_56((*g_808), (*g_340)) >= 65535UL), (-1L)));
                    }
                    (*g_889) = (((*l_1181) = l_1179[3]) != &l_1167);
                    if (func_56((*l_1167), (l_1178[0] , &l_1098[6])))
                    {
                        unsigned short *l_1199 = &l_1190;
                        l_1192[2][0][2] = func_63(g_99, (((safe_mod_func_int32_t_s_s((-8L), ((safe_rshift_func_uint8_t_u_u((g_375 != (safe_add_func_uint32_t_u_u(((safe_rshift_func_int8_t_s_s((**g_340), 5)) , l_1190), l_1191))), 5)) | (l_1164[2] = ((**g_595) = (*g_596)))))) >= (-1L)) <= 7L), l_1178[0]);
                        (*g_889) = (safe_add_func_int32_t_s_s((((((*l_1199) = (safe_rshift_func_uint8_t_u_u((0xA7L && ((safe_rshift_func_int8_t_s_u(0xC3L, (*g_128))) > 0x9D620F43L)), 3))) != (*g_596)) , (safe_mod_func_int32_t_s_s(func_56((*g_808), l_1202), l_1178[0]))) > 0x8C22L), (-6L)));
                        (*l_1168) = (*g_808);
                    }
                    else
                    {
                        (*l_1168) = (*g_808);
                    }
                    l_1203 = ((*g_889) = l_1164[3]);
                }
                else
                {
                    int *l_1204 = (void*)0;
                    l_1205 = l_1204;

                    ;
                }
                for (l_1101 = 0; (l_1101 <= 1); l_1101 += 1)
                {
                    unsigned short *l_1214[5];
                    int l_1222[10][10] = {{0L, 0x14F30CEEL, (-9L), 0x2A7C17CFL, 0x7786DF07L, 1L, 1L, 0xE0847F02L, 8L, (-10L)}, {0L, 0x14F30CEEL, (-9L), 0x2A7C17CFL, 0x7786DF07L, 1L, 1L, 0xE0847F02L, 8L, (-10L)}, {0L, 0x14F30CEEL, (-9L), 0x2A7C17CFL, 0x7786DF07L, 1L, 1L, 0xE0847F02L, 8L, (-10L)}, {0L, 0x14F30CEEL, (-9L), 0x2A7C17CFL, 0x7786DF07L, 1L, 1L, 0xE0847F02L, 8L, (-10L)}, {0L, 0x14F30CEEL, (-9L), 0x2A7C17CFL, 0x7786DF07L, 1L, 1L, 0xE0847F02L, 8L, (-10L)}, {0L, 0x14F30CEEL, (-9L), 0x2A7C17CFL, 0x7786DF07L, 1L, 1L, 0xE0847F02L, 8L, (-10L)}, {0L, 0x14F30CEEL, (-9L), 0x2A7C17CFL, 0x7786DF07L, 1L, 1L, 0xE0847F02L, 8L, (-10L)}, {0L, 0x14F30CEEL, (-9L), 0x2A7C17CFL, 0x7786DF07L, 1L, 1L, 0xE0847F02L, 8L, (-10L)}, {0L, 0x14F30CEEL, (-9L), 0x2A7C17CFL, 0x7786DF07L, 1L, 1L, 0xE0847F02L, 8L, (-10L)}, {0L, 0x14F30CEEL, (-9L), 0x2A7C17CFL, 0x7786DF07L, 1L, 1L, 0xE0847F02L, 8L, (-10L)}};
                    int *l_1223[4] = {&l_1099, &g_19, &l_1099, &g_19};
                    int i, j;
                    for (i = 0; i < 5; i++)
                        l_1214[i] = &g_180;
                }
                for (l_1101 = 0; (l_1101 <= 3); l_1101 += 1)
                {
                    for (g_92 = 0; (g_92 <= 0); g_92 += 1)
                    {
                        int i, j, k;
                        (*l_1215) = ((safe_add_func_int16_t_s_s(((**g_595) = ((&l_1205 != &g_106) != (0xD1C7L < (safe_lshift_func_uint16_t_u_s((safe_add_func_uint8_t_u_u(((void*)0 != l_1231), (safe_sub_func_uint16_t_u_u((safe_rshift_func_uint8_t_u_u(l_1208[(g_92 + 2)][(l_1101 + 1)][g_92], (safe_add_func_uint8_t_u_u((*g_128), (l_1164[3] = (!0x20L)))))), (-7L))))), (*g_596)))))), g_375)) && 0x60C0L);
                    }
                    if (l_1238)
                        continue;
                    for (g_99 = 0; (g_99 >= 0); g_99 -= 1)
                    {
                        int i, j, k;
                        l_1205 = (*g_808);

                        ;
                        if (l_1208[g_99][(l_1101 + 2)][g_99])
                            continue;
                        l_1164[3] = (*g_889);
                    }
                }
            }


            ;
        }
        else
        {
            unsigned l_1240 = 1UL;
            unsigned short *l_1248 = (void*)0;
            int *l_1249 = &g_13[9];
            int **l_1252[5];
            int i;
            for (i = 0; i < 5; i++)
                l_1252[i] = (void*)0;
            l_1240 = l_1239;
            if (l_1240)
            {
                int *l_1245 = &g_784;
                unsigned short *l_1247[10][7][3] = {{{(void*)0, &g_180, &g_180}, {(void*)0, &g_180, &g_180}, {(void*)0, &g_180, &g_180}, {(void*)0, &g_180, &g_180}, {(void*)0, &g_180, &g_180}, {(void*)0, &g_180, &g_180}, {(void*)0, &g_180, &g_180}}, {{(void*)0, &g_180, &g_180}, {(void*)0, &g_180, &g_180}, {(void*)0, &g_180, &g_180}, {(void*)0, &g_180, &g_180}, {(void*)0, &g_180, &g_180}, {(void*)0, &g_180, &g_180}, {(void*)0, &g_180, &g_180}}, {{(void*)0, &g_180, &g_180}, {(void*)0, &g_180, &g_180}, {(void*)0, &g_180, &g_180}, {(void*)0, &g_180, &g_180}, {(void*)0, &g_180, &g_180}, {(void*)0, &g_180, &g_180}, {(void*)0, &g_180, &g_180}}, {{(void*)0, &g_180, &g_180}, {(void*)0, &g_180, &g_180}, {(void*)0, &g_180, &g_180}, {(void*)0, &g_180, &g_180}, {(void*)0, &g_180, &g_180}, {(void*)0, &g_180, &g_180}, {(void*)0, &g_180, &g_180}}, {{(void*)0, &g_180, &g_180}, {(void*)0, &g_180, &g_180}, {(void*)0, &g_180, &g_180}, {(void*)0, &g_180, &g_180}, {(void*)0, &g_180, &g_180}, {(void*)0, &g_180, &g_180}, {(void*)0, &g_180, &g_180}}, {{(void*)0, &g_180, &g_180}, {(void*)0, &g_180, &g_180}, {(void*)0, &g_180, &g_180}, {(void*)0, &g_180, &g_180}, {(void*)0, &g_180, &g_180}, {(void*)0, &g_180, &g_180}, {(void*)0, &g_180, &g_180}}, {{(void*)0, &g_180, &g_180}, {(void*)0, &g_180, &g_180}, {(void*)0, &g_180, &g_180}, {(void*)0, &g_180, &g_180}, {(void*)0, &g_180, &g_180}, {(void*)0, &g_180, &g_180}, {(void*)0, &g_180, &g_180}}, {{(void*)0, &g_180, &g_180}, {(void*)0, &g_180, &g_180}, {(void*)0, &g_180, &g_180}, {(void*)0, &g_180, &g_180}, {(void*)0, &g_180, &g_180}, {(void*)0, &g_180, &g_180}, {(void*)0, &g_180, &g_180}}, {{(void*)0, &g_180, &g_180}, {(void*)0, &g_180, &g_180}, {(void*)0, &g_180, &g_180}, {(void*)0, &g_180, &g_180}, {(void*)0, &g_180, &g_180}, {(void*)0, &g_180, &g_180}, {(void*)0, &g_180, &g_180}}, {{(void*)0, &g_180, &g_180}, {(void*)0, &g_180, &g_180}, {(void*)0, &g_180, &g_180}, {(void*)0, &g_180, &g_180}, {(void*)0, &g_180, &g_180}, {(void*)0, &g_180, &g_180}, {(void*)0, &g_180, &g_180}}};
                unsigned short **l_1246[8] = {&l_1247[7][5][0], (void*)0, &l_1247[7][5][0], (void*)0, &l_1247[7][5][0], (void*)0, &l_1247[7][5][0], (void*)0};
                char *l_1251 = &l_1098[4];
                char l_1274 = 0x1CL;
                int i, j, k;
                (*l_1168) = l_1245;
                (*g_76) = (*g_808);
                g_1254[1][0] = (&g_930 == l_1253);
                (*l_1205) = ((safe_rshift_func_int8_t_s_s(6L, 7)) , (2L < (safe_rshift_func_int8_t_s_s(((((*g_978) , ((((&g_455[1][4][5] != ((*l_1253) = &l_1249)) != ((g_1259 < 0L) , (((safe_rshift_func_uint16_t_u_s((safe_rshift_func_int8_t_s_s(((safe_rshift_func_int16_t_s_s((safe_mod_func_uint8_t_u_u(((safe_add_func_uint8_t_u_u(((**g_333) = (safe_lshift_func_uint16_t_u_s((safe_rshift_func_int16_t_s_s(l_1274, (*l_1245))), 6))), (**g_340))) | (*l_1249)), l_1244[2])), (**g_595))) > 0x17L), (**g_340))), 4)) > g_1275) & 0xF2EC58E8L))) < (**g_595)) != (*g_341))) > g_31) ^ 0x15D138F3L), 2))));

                ;
            }
            else
            {
                for (l_1239 = 0; (l_1239 >= 4); l_1239 = safe_add_func_int8_t_s_s(l_1239, 4))
                {
                    int l_1278 = 0L;
                    return l_1278;
                }
                (*l_1249) = ((**g_340) , ((*g_341) ^ (**g_333)));
            }

            ;
        }



        ;
        (*l_1168) = (*g_808);
        if ((safe_mod_func_uint8_t_u_u((safe_rshift_func_uint16_t_u_s(((**g_333) | l_1283), ((((**g_333) | (safe_lshift_func_int16_t_s_s((safe_mod_func_int32_t_s_s(l_1288, l_1288)), l_1101))) ^ (l_1290 = ((0x44L || (**g_333)) | l_1221[1]))) | (*g_596)))), (**g_340))))
        {
            (*g_808) = (void*)0;

            ;
        }
        else
        {
            int *l_1295[2][4] = {{(void*)0, &g_1259, (void*)0, &g_1259}, {(void*)0, &g_1259, (void*)0, &g_1259}};
            short l_1313 = (-2L);
            int l_1337 = 0xDB0220D4L;
            char **l_1344 = &g_341;
            int *l_1348[6] = {&g_13[3], &l_1178[1], &g_13[3], &l_1178[1], &g_13[3], &l_1178[1]};
            int i, j;
            for (g_19 = 0; (g_19 >= 0); g_19 -= 1)
            {
                unsigned short l_1293 = 0x5C1DL;
                int *l_1294[10] = {&g_13[0], &l_1178[0], &g_13[0], &l_1178[0], &g_13[0], &l_1178[0], &g_13[0], &l_1178[0], &g_13[0], &l_1178[0]};
                unsigned char **l_1302 = &l_1160[5][1][0];
                unsigned short l_1310[5][1][2] = {{{0x5907L, 0x3B49L}}, {{0x5907L, 0x3B49L}}, {{0x5907L, 0x3B49L}}, {{0x5907L, 0x3B49L}}, {{0x5907L, 0x3B49L}}};
                int i, j, k;
                if ((safe_rshift_func_uint8_t_u_u(((l_1293 = (0xF5F6L | 1UL)) , (**g_333)), (**g_333))))
                {
                    l_1295[1][2] = l_1294[9];
                }
                else
                {
                    short *l_1297 = &g_101;
                    short **l_1296 = &l_1297;
                    l_1298 = ((*g_889) = ((*g_595) == ((*l_1296) = (*g_595))));
                    if (l_1221[1])
                        break;
                }
                (*g_808) = (void*)0;

                ;
                for (g_784 = 0; (g_784 >= 0); g_784 -= 1)
                {
                    int l_1299[8];
                    short *l_1311[4][5][10] = {{{(void*)0, &l_1283, &l_1219, &l_1283, (void*)0, (void*)0, &g_99, &g_99, &l_1219, &l_1283}, {(void*)0, &l_1283, &l_1219, &l_1283, (void*)0, (void*)0, &g_99, &g_99, &l_1219, &l_1283}, {(void*)0, &l_1283, &l_1219, &l_1283, (void*)0, (void*)0, &g_99, &g_99, &l_1219, &l_1283}, {(void*)0, &l_1283, &l_1219, &l_1283, (void*)0, (void*)0, &g_99, &g_99, &l_1219, &l_1283}, {(void*)0, &l_1283, &l_1219, &l_1283, (void*)0, (void*)0, &g_99, &g_99, &l_1219, &l_1283}}, {{(void*)0, &l_1283, &l_1219, &l_1283, (void*)0, (void*)0, &g_99, &g_99, &l_1219, &l_1283}, {(void*)0, &l_1283, &l_1219, &l_1283, (void*)0, (void*)0, &g_99, &g_99, &l_1219, &l_1283}, {(void*)0, &l_1283, &l_1219, &l_1283, (void*)0, (void*)0, &g_99, &g_99, &l_1219, &l_1283}, {(void*)0, &l_1283, &l_1219, &l_1283, (void*)0, (void*)0, &g_99, &g_99, &l_1219, &l_1283}, {(void*)0, &l_1283, &l_1219, &l_1283, (void*)0, (void*)0, &g_99, &g_99, &l_1219, &l_1283}}, {{(void*)0, &l_1283, &l_1219, &l_1283, (void*)0, (void*)0, &g_99, &g_99, &l_1219, &l_1283}, {(void*)0, &l_1283, &l_1219, &l_1283, (void*)0, (void*)0, &g_99, &g_99, &l_1219, &l_1283}, {(void*)0, &l_1283, &l_1219, &l_1283, (void*)0, (void*)0, &g_99, &g_99, &l_1219, &l_1283}, {(void*)0, &l_1283, &l_1219, &l_1283, (void*)0, (void*)0, &g_99, &g_99, &l_1219, &l_1283}, {(void*)0, &l_1283, &l_1219, &l_1283, (void*)0, (void*)0, &g_99, &g_99, &l_1219, &l_1283}}, {{(void*)0, &l_1283, &l_1219, &l_1283, (void*)0, (void*)0, &g_99, &g_99, &l_1219, &l_1283}, {(void*)0, &l_1283, &l_1219, &l_1283, (void*)0, (void*)0, &g_99, &g_99, &l_1219, &l_1283}, {(void*)0, &l_1283, &l_1219, &l_1283, (void*)0, (void*)0, &g_99, &g_99, &l_1219, &l_1283}, {(void*)0, &l_1283, &l_1219, &l_1283, (void*)0, (void*)0, &g_99, &g_99, &l_1219, &l_1283}, {(void*)0, &l_1283, &l_1219, &l_1283, (void*)0, (void*)0, &g_99, &g_99, &l_1219, &l_1283}}};
                    int i, j, k;
                    for (i = 0; i < 8; i++)
                        l_1299[i] = 0L;
                    if (g_1254[(g_19 + 1)][g_784])
                    {
                        unsigned char **l_1300 = &g_128;
                        unsigned char ***l_1301[8][3] = {{&g_333, &l_1300, &l_1300}, {&g_333, &l_1300, &l_1300}, {&g_333, &l_1300, &l_1300}, {&g_333, &l_1300, &l_1300}, {&g_333, &l_1300, &l_1300}, {&g_333, &l_1300, &l_1300}, {&g_333, &l_1300, &l_1300}, {&g_333, &l_1300, &l_1300}};
                        int i, j;
                        if (g_1254[(g_784 + 1)][g_784])
                            break;
                        (*g_889) = (-7L);
                        l_1299[2] = (-4L);
                        l_1302 = l_1300;

                        ;
                    }
                    else
                    {
                        int *l_1303 = &l_1299[2];
                        (*g_889) = 0x0CDF70CFL;
                        (*g_930) = l_1303;


                    }


                    l_1313 = (safe_sub_func_int16_t_s_s(((**g_595) = ((safe_lshift_func_int8_t_s_u(g_1254[g_19][g_784], 6)) , (g_1254[(g_19 + 1)][g_784] < ((g_101 , (*g_889)) , 0xE19AL)))), (g_1312 = (g_99 = (safe_lshift_func_uint16_t_u_s((g_180 = 8UL), l_1310[2][0][0]))))));
                    for (g_1312 = 11; (g_1312 >= 3); --g_1312)
                    {
                        unsigned short *l_1316[8][9][2] = {{{(void*)0, &l_1310[2][0][0]}, {(void*)0, &l_1310[2][0][0]}, {(void*)0, &l_1310[2][0][0]}, {(void*)0, &l_1310[2][0][0]}, {(void*)0, &l_1310[2][0][0]}, {(void*)0, &l_1310[2][0][0]}, {(void*)0, &l_1310[2][0][0]}, {(void*)0, &l_1310[2][0][0]}, {(void*)0, &l_1310[2][0][0]}}, {{(void*)0, &l_1310[2][0][0]}, {(void*)0, &l_1310[2][0][0]}, {(void*)0, &l_1310[2][0][0]}, {(void*)0, &l_1310[2][0][0]}, {(void*)0, &l_1310[2][0][0]}, {(void*)0, &l_1310[2][0][0]}, {(void*)0, &l_1310[2][0][0]}, {(void*)0, &l_1310[2][0][0]}, {(void*)0, &l_1310[2][0][0]}}, {{(void*)0, &l_1310[2][0][0]}, {(void*)0, &l_1310[2][0][0]}, {(void*)0, &l_1310[2][0][0]}, {(void*)0, &l_1310[2][0][0]}, {(void*)0, &l_1310[2][0][0]}, {(void*)0, &l_1310[2][0][0]}, {(void*)0, &l_1310[2][0][0]}, {(void*)0, &l_1310[2][0][0]}, {(void*)0, &l_1310[2][0][0]}}, {{(void*)0, &l_1310[2][0][0]}, {(void*)0, &l_1310[2][0][0]}, {(void*)0, &l_1310[2][0][0]}, {(void*)0, &l_1310[2][0][0]}, {(void*)0, &l_1310[2][0][0]}, {(void*)0, &l_1310[2][0][0]}, {(void*)0, &l_1310[2][0][0]}, {(void*)0, &l_1310[2][0][0]}, {(void*)0, &l_1310[2][0][0]}}, {{(void*)0, &l_1310[2][0][0]}, {(void*)0, &l_1310[2][0][0]}, {(void*)0, &l_1310[2][0][0]}, {(void*)0, &l_1310[2][0][0]}, {(void*)0, &l_1310[2][0][0]}, {(void*)0, &l_1310[2][0][0]}, {(void*)0, &l_1310[2][0][0]}, {(void*)0, &l_1310[2][0][0]}, {(void*)0, &l_1310[2][0][0]}}, {{(void*)0, &l_1310[2][0][0]}, {(void*)0, &l_1310[2][0][0]}, {(void*)0, &l_1310[2][0][0]}, {(void*)0, &l_1310[2][0][0]}, {(void*)0, &l_1310[2][0][0]}, {(void*)0, &l_1310[2][0][0]}, {(void*)0, &l_1310[2][0][0]}, {(void*)0, &l_1310[2][0][0]}, {(void*)0, &l_1310[2][0][0]}}, {{(void*)0, &l_1310[2][0][0]}, {(void*)0, &l_1310[2][0][0]}, {(void*)0, &l_1310[2][0][0]}, {(void*)0, &l_1310[2][0][0]}, {(void*)0, &l_1310[2][0][0]}, {(void*)0, &l_1310[2][0][0]}, {(void*)0, &l_1310[2][0][0]}, {(void*)0, &l_1310[2][0][0]}, {(void*)0, &l_1310[2][0][0]}}, {{(void*)0, &l_1310[2][0][0]}, {(void*)0, &l_1310[2][0][0]}, {(void*)0, &l_1310[2][0][0]}, {(void*)0, &l_1310[2][0][0]}, {(void*)0, &l_1310[2][0][0]}, {(void*)0, &l_1310[2][0][0]}, {(void*)0, &l_1310[2][0][0]}, {(void*)0, &l_1310[2][0][0]}, {(void*)0, &l_1310[2][0][0]}}};
                        int l_1317 = 0xEE09F6A8L;
                        int i, j, k;
                        (*g_889) = (g_29[0][3][2] > (g_183 = l_1299[6]));
                        l_1317 = l_1283;
                        l_1299[4] = (!l_1318);
                        if (l_1319)
                            break;
                    }
                }

                ;
            }


            if ((&g_596 != ((6L & (l_1321 = l_1320)) , &g_596)))
            {
                unsigned short l_1333[4][9] = {{65526UL, 1UL, 0xF0FAL, 0x5341L, 0x3A05L, 0UL, 0x92DAL, 0x2501L, 0x92DAL}, {65526UL, 1UL, 0xF0FAL, 0x5341L, 0x3A05L, 0UL, 0x92DAL, 0x2501L, 0x92DAL}, {65526UL, 1UL, 0xF0FAL, 0x5341L, 0x3A05L, 0UL, 0x92DAL, 0x2501L, 0x92DAL}, {65526UL, 1UL, 0xF0FAL, 0x5341L, 0x3A05L, 0UL, 0x92DAL, 0x2501L, 0x92DAL}};
                int *l_1334 = &l_1320;
                char *l_1338 = (void*)0;
                int i, j;
                for (g_375 = 3; (g_375 <= 9); g_375 += 1)
                {
                    int l_1335[10][8][3] = {{{0x7461ED18L, 0x91CC037DL, (-1L)}, {0x7461ED18L, 0x91CC037DL, (-1L)}, {0x7461ED18L, 0x91CC037DL, (-1L)}, {0x7461ED18L, 0x91CC037DL, (-1L)}, {0x7461ED18L, 0x91CC037DL, (-1L)}, {0x7461ED18L, 0x91CC037DL, (-1L)}, {0x7461ED18L, 0x91CC037DL, (-1L)}, {0x7461ED18L, 0x91CC037DL, (-1L)}}, {{0x7461ED18L, 0x91CC037DL, (-1L)}, {0x7461ED18L, 0x91CC037DL, (-1L)}, {0x7461ED18L, 0x91CC037DL, (-1L)}, {0x7461ED18L, 0x91CC037DL, (-1L)}, {0x7461ED18L, 0x91CC037DL, (-1L)}, {0x7461ED18L, 0x91CC037DL, (-1L)}, {0x7461ED18L, 0x91CC037DL, (-1L)}, {0x7461ED18L, 0x91CC037DL, (-1L)}}, {{0x7461ED18L, 0x91CC037DL, (-1L)}, {0x7461ED18L, 0x91CC037DL, (-1L)}, {0x7461ED18L, 0x91CC037DL, (-1L)}, {0x7461ED18L, 0x91CC037DL, (-1L)}, {0x7461ED18L, 0x91CC037DL, (-1L)}, {0x7461ED18L, 0x91CC037DL, (-1L)}, {0x7461ED18L, 0x91CC037DL, (-1L)}, {0x7461ED18L, 0x91CC037DL, (-1L)}}, {{0x7461ED18L, 0x91CC037DL, (-1L)}, {0x7461ED18L, 0x91CC037DL, (-1L)}, {0x7461ED18L, 0x91CC037DL, (-1L)}, {0x7461ED18L, 0x91CC037DL, (-1L)}, {0x7461ED18L, 0x91CC037DL, (-1L)}, {0x7461ED18L, 0x91CC037DL, (-1L)}, {0x7461ED18L, 0x91CC037DL, (-1L)}, {0x7461ED18L, 0x91CC037DL, (-1L)}}, {{0x7461ED18L, 0x91CC037DL, (-1L)}, {0x7461ED18L, 0x91CC037DL, (-1L)}, {0x7461ED18L, 0x91CC037DL, (-1L)}, {0x7461ED18L, 0x91CC037DL, (-1L)}, {0x7461ED18L, 0x91CC037DL, (-1L)}, {0x7461ED18L, 0x91CC037DL, (-1L)}, {0x7461ED18L, 0x91CC037DL, (-1L)}, {0x7461ED18L, 0x91CC037DL, (-1L)}}, {{0x7461ED18L, 0x91CC037DL, (-1L)}, {0x7461ED18L, 0x91CC037DL, (-1L)}, {0x7461ED18L, 0x91CC037DL, (-1L)}, {0x7461ED18L, 0x91CC037DL, (-1L)}, {0x7461ED18L, 0x91CC037DL, (-1L)}, {0x7461ED18L, 0x91CC037DL, (-1L)}, {0x7461ED18L, 0x91CC037DL, (-1L)}, {0x7461ED18L, 0x91CC037DL, (-1L)}}, {{0x7461ED18L, 0x91CC037DL, (-1L)}, {0x7461ED18L, 0x91CC037DL, (-1L)}, {0x7461ED18L, 0x91CC037DL, (-1L)}, {0x7461ED18L, 0x91CC037DL, (-1L)}, {0x7461ED18L, 0x91CC037DL, (-1L)}, {0x7461ED18L, 0x91CC037DL, (-1L)}, {0x7461ED18L, 0x91CC037DL, (-1L)}, {0x7461ED18L, 0x91CC037DL, (-1L)}}, {{0x7461ED18L, 0x91CC037DL, (-1L)}, {0x7461ED18L, 0x91CC037DL, (-1L)}, {0x7461ED18L, 0x91CC037DL, (-1L)}, {0x7461ED18L, 0x91CC037DL, (-1L)}, {0x7461ED18L, 0x91CC037DL, (-1L)}, {0x7461ED18L, 0x91CC037DL, (-1L)}, {0x7461ED18L, 0x91CC037DL, (-1L)}, {0x7461ED18L, 0x91CC037DL, (-1L)}}, {{0x7461ED18L, 0x91CC037DL, (-1L)}, {0x7461ED18L, 0x91CC037DL, (-1L)}, {0x7461ED18L, 0x91CC037DL, (-1L)}, {0x7461ED18L, 0x91CC037DL, (-1L)}, {0x7461ED18L, 0x91CC037DL, (-1L)}, {0x7461ED18L, 0x91CC037DL, (-1L)}, {0x7461ED18L, 0x91CC037DL, (-1L)}, {0x7461ED18L, 0x91CC037DL, (-1L)}}, {{0x7461ED18L, 0x91CC037DL, (-1L)}, {0x7461ED18L, 0x91CC037DL, (-1L)}, {0x7461ED18L, 0x91CC037DL, (-1L)}, {0x7461ED18L, 0x91CC037DL, (-1L)}, {0x7461ED18L, 0x91CC037DL, (-1L)}, {0x7461ED18L, 0x91CC037DL, (-1L)}, {0x7461ED18L, 0x91CC037DL, (-1L)}, {0x7461ED18L, 0x91CC037DL, (-1L)}}};
                    char *l_1336[6] = {&l_1298, &l_1298, (void*)0, &l_1298, &l_1298, (void*)0};
                    int i, j, k;
                    for (g_1218 = 9; (g_1218 >= 2); g_1218 -= 1)
                    {
                        unsigned char l_1322[1][4];
                        int i, j;
                        for (i = 0; i < 1; i++)
                        {
                            for (j = 0; j < 4; j++)
                                l_1322[i][j] = 250UL;
                        }
                        g_13[g_1218] = (l_1322[0][0] < (((safe_lshift_func_uint8_t_u_u((safe_lshift_func_uint16_t_u_s(g_414[1], 11)), 5)) == (safe_rshift_func_int8_t_s_u(l_1322[0][0], (g_33 < ((+(safe_rshift_func_uint8_t_u_s((l_1322[0][0] <= l_1337), (**g_340)))) >= 0L))))) , 0xBC3D4BE9L));
                    }
                    (*g_889) = ((**g_340) != (**g_340));
                    return (*g_889);


                }
                for (l_1313 = 0; (l_1313 <= 12); l_1313++)
                {
                    (*g_889) = (((void*)0 == (*g_595)) ^ (*g_889));
                    for (g_1275 = (-17); (g_1275 == 25); g_1275++)
                    {
                        int *l_1343 = &l_1178[0];
                        (*l_1168) = l_1343;
                        (*g_930) = (*g_808);
                    }
                }


            }
            else
            {
                char ***l_1345 = (void*)0;
                char ***l_1346[6][10] = {{&g_795[5], (void*)0, &g_340, (void*)0, &g_795[4], &g_795[1], &g_340, (void*)0, &g_340, (void*)0}, {&g_795[5], (void*)0, &g_340, (void*)0, &g_795[4], &g_795[1], &g_340, (void*)0, &g_340, (void*)0}, {&g_795[5], (void*)0, &g_340, (void*)0, &g_795[4], &g_795[1], &g_340, (void*)0, &g_340, (void*)0}, {&g_795[5], (void*)0, &g_340, (void*)0, &g_795[4], &g_795[1], &g_340, (void*)0, &g_340, (void*)0}, {&g_795[5], (void*)0, &g_340, (void*)0, &g_795[4], &g_795[1], &g_340, (void*)0, &g_340, (void*)0}, {&g_795[5], (void*)0, &g_340, (void*)0, &g_795[4], &g_795[1], &g_340, (void*)0, &g_340, (void*)0}};
                int i, j;
                l_1347 = l_1344;
                l_1350 = (l_1349 = l_1348[3]);

                ;
                ;
                (*l_1349) = (((**g_333) ^ (*g_128)) ^ (*g_128));
            }


            ;
            ;
            for (g_1275 = 0; (g_1275 <= 2); g_1275 += 1)
            {
                if ((*l_1349))
                    break;
                return g_1351;


            }
        }


        ;
        ;
        (*g_808) = (*g_808);
    }
    else
    {
        short l_1356 = 0x06F2L;
        int l_1360 = (-2L);
        (*g_808) = (*g_808);
        (*g_889) = 0xE4356949L;
        for (g_680 = 0; (g_680 != 29); ++g_680)
        {
            unsigned l_1357[7] = {0x1D6F0230L, 0x1D6F0230L, 18446744073709551610UL, 0x1D6F0230L, 0x1D6F0230L, 18446744073709551610UL, 0x1D6F0230L};
            int i;
            (*g_889) = l_1356;
            if (l_1357[5])
                continue;
        }
        l_1360 = (safe_mod_func_uint16_t_u_u(l_1356, g_772[0]));
    }



    ;
    ;

    if (((safe_sub_func_uint16_t_u_u(g_151[2][0][0], (((*g_596) , 0xF45A19CEL) , (-1L)))) <= ((((*g_889) = ((*g_1353) = l_1244[2])) > (((l_1364 , (safe_mod_func_int8_t_s_s((safe_sub_func_uint16_t_u_u(65530UL, (*l_1363))), (**g_333)))) , l_1369[5]) == l_1371)) == l_1372)))
    {
        unsigned short l_1373 = 0x2765L;
        for (l_1364 = 0; (l_1364 >= 0); l_1364 -= 1)
        {
            if (l_1373)
                break;
            return (*g_1353);


        }
    }
    else
    {
        char l_1374 = (-5L);
        int *l_1378 = (void*)0;
        int l_1380 = 0x15CECA8CL;
        (*l_1168) = l_1378;
        l_1379[0] = l_1379[0];
        for (g_9 = 0; (g_9 <= 4); g_9 += 1)
        {
            int *l_1382 = &g_13[3];
            char ***l_1383 = &g_795[1];
            char *l_1384[8] = {(void*)0, &g_151[5][1][3], (void*)0, &g_151[5][1][3], (void*)0, &g_151[5][1][3], (void*)0, &g_151[5][1][3]};
            int i;
            (*g_1353) = l_1380;
            (*g_808) = (*g_808);
            for (l_1364 = 1; (l_1364 >= 0); l_1364 -= 1)
            {
                unsigned char l_1381 = 255UL;
                int i;
                (*g_808) = l_1382;

                ;
                for (l_1290 = 0; (l_1290 <= 2); l_1290 += 1)
                {
                    int i, j, k;
                    (*l_1382) = g_29[(l_1364 + 1)][(l_1290 + 1)][(l_1364 + 1)];
                }
            }
            (*l_1168) = l_1385[3][9];
            for (g_1275 = 0; (g_1275 <= 4); g_1275 += 1)
            {
                return (*l_1377);


            }
        }


    }


    return (*l_1363);


}







static short func_2(unsigned p_3, unsigned short p_4, char p_5, unsigned p_6)
{
    short **l_1104 = &g_596;
    int l_1112[3][6][1] = {{{0x672CCBEDL}, {0x672CCBEDL}, {0x672CCBEDL}, {0x672CCBEDL}, {0x672CCBEDL}, {0x672CCBEDL}}, {{0x672CCBEDL}, {0x672CCBEDL}, {0x672CCBEDL}, {0x672CCBEDL}, {0x672CCBEDL}, {0x672CCBEDL}}, {{0x672CCBEDL}, {0x672CCBEDL}, {0x672CCBEDL}, {0x672CCBEDL}, {0x672CCBEDL}, {0x672CCBEDL}}};
    int *l_1118 = &g_644;
    unsigned *l_1143 = &g_9;
    char *l_1154[6] = {&g_31, &g_239[1][0], &g_31, &g_239[1][0], &g_31, &g_239[1][0]};
    int l_1159 = (-2L);
    int i, j, k;
    for (g_31 = 5; (g_31 >= 1); g_31 -= 1)
    {
        int l_1102 = 7L;
        int *l_1111 = &g_784;
        short **l_1113[6][10] = {{&g_596, &g_596, (void*)0, &g_596, &g_596, &g_596, &g_596, &g_596, (void*)0, &g_596}, {&g_596, &g_596, (void*)0, &g_596, &g_596, &g_596, &g_596, &g_596, (void*)0, &g_596}, {&g_596, &g_596, (void*)0, &g_596, &g_596, &g_596, &g_596, &g_596, (void*)0, &g_596}, {&g_596, &g_596, (void*)0, &g_596, &g_596, &g_596, &g_596, &g_596, (void*)0, &g_596}, {&g_596, &g_596, (void*)0, &g_596, &g_596, &g_596, &g_596, &g_596, (void*)0, &g_596}, {&g_596, &g_596, (void*)0, &g_596, &g_596, &g_596, &g_596, &g_596, (void*)0, &g_596}};
        unsigned char *l_1115 = &g_934;
        unsigned l_1119 = 0xA9993276L;
        int i, j;
        for (g_33 = 0; (g_33 <= 5); g_33 += 1)
        {
            int **l_1103 = &g_77[1][6];
            unsigned char *l_1114 = &g_92;
            int i;
            l_1102 = p_6;
            (*g_889) = (((l_1103 == (void*)0) != (((((g_239[1][5] >= 0x636AL) , l_1104) == ((safe_mod_func_int16_t_s_s((((safe_lshift_func_uint8_t_u_u((safe_lshift_func_int8_t_s_s(l_1112[1][4][0], (**g_340))), 5)) , l_1104) != l_1113[1][5]), g_796)) , (void*)0)) <= l_1112[1][4][0]) == p_5)) > p_3);
            (*l_1103) = ((((*l_1111) , (l_1114 == (p_6 , l_1115))) & ((safe_sub_func_int32_t_s_s(((l_1118 == l_1118) > (-7L)), p_4)) & ((l_1119 > l_1112[0][4][0]) , p_5))) , l_1111);
        }
        if (l_1112[0][0][0])
            break;
    }


    for (g_1100 = (-16); (g_1100 > 5); ++g_1100)
    {
        return p_6;
    }
    for (g_92 = 3; (g_92 > 30); ++g_92)
    {
        char l_1128 = 0xE7L;
        int l_1138 = 0L;
        for (g_375 = 0; (g_375 > 32); g_375 = safe_add_func_int8_t_s_s(g_375, 6))
        {
            unsigned l_1139[1][8] = {{0xED4FDC6EL, 0x1C361309L, 0xED4FDC6EL, 0x1C361309L, 0xED4FDC6EL, 0x1C361309L, 0xED4FDC6EL, 0x1C361309L}};
            int i, j;
            for (g_31 = 0; (g_31 > (-25)); g_31--)
            {
                unsigned *l_1135 = &g_29[2][3][1];
                int l_1140 = (-10L);
                (*g_889) = (((0x90L != l_1128) > ((safe_mod_func_uint32_t_u_u(p_6, (safe_sub_func_uint32_t_u_u(((**g_340) == (safe_mod_func_int16_t_s_s(((l_1135 != ((0UL & 65535UL) , &p_6)) < (safe_add_func_int32_t_s_s((l_1139[0][3] = ((l_1138 = p_4) > 0x41612124L)), 0x2A25586DL))), 0x6E5CL))), l_1140)))) > 0xC4L)) >= l_1128);
                (*g_930) = (*g_808);
            }
            return (**g_595);
        }
        if ((l_1138 = ((l_1143 = ((*g_245) = ((safe_rshift_func_uint8_t_u_u((**g_333), 6)) , l_1118))) == (((**g_977) = (p_3 , (safe_add_func_uint16_t_u_u((((0x91L <= ((p_3 , p_5) , (-2L))) < l_1112[1][4][0]) || 0x5DDFL), l_1112[1][4][0])))) , (void*)0))))
        {
            unsigned l_1148[4] = {7UL, 0x2F2172DFL, 7UL, 0x2F2172DFL};
            int *l_1151 = &l_1138;
            int i;
            for (g_207 = 0; (g_207 <= 4); g_207 += 1)
            {
                int i, j;
                l_1138 = g_239[g_207][(g_207 + 1)];
                for (p_3 = 0; (p_3 <= 9); p_3 += 1)
                {
                    int i;
                    (*g_930) = &l_1112[1][4][0];
                    g_13[(g_207 + 2)] = 1L;
                    (*l_1151) = (safe_rshift_func_int8_t_s_s((l_1148[3] >= (g_13[(g_207 + 2)] != func_56(((*g_76) = l_1151), &p_5))), g_239[g_207][(g_207 + 1)]));
                }
            }


        }
        else
        {
            int l_1157[6];
            int *l_1158[9][4][7] = {{{(void*)0, &l_1112[1][4][0], &l_1138, &g_13[3], &l_1138, (void*)0, &l_1112[1][4][0]}, {(void*)0, &l_1112[1][4][0], &l_1138, &g_13[3], &l_1138, (void*)0, &l_1112[1][4][0]}, {(void*)0, &l_1112[1][4][0], &l_1138, &g_13[3], &l_1138, (void*)0, &l_1112[1][4][0]}, {(void*)0, &l_1112[1][4][0], &l_1138, &g_13[3], &l_1138, (void*)0, &l_1112[1][4][0]}}, {{(void*)0, &l_1112[1][4][0], &l_1138, &g_13[3], &l_1138, (void*)0, &l_1112[1][4][0]}, {(void*)0, &l_1112[1][4][0], &l_1138, &g_13[3], &l_1138, (void*)0, &l_1112[1][4][0]}, {(void*)0, &l_1112[1][4][0], &l_1138, &g_13[3], &l_1138, (void*)0, &l_1112[1][4][0]}, {(void*)0, &l_1112[1][4][0], &l_1138, &g_13[3], &l_1138, (void*)0, &l_1112[1][4][0]}}, {{(void*)0, &l_1112[1][4][0], &l_1138, &g_13[3], &l_1138, (void*)0, &l_1112[1][4][0]}, {(void*)0, &l_1112[1][4][0], &l_1138, &g_13[3], &l_1138, (void*)0, &l_1112[1][4][0]}, {(void*)0, &l_1112[1][4][0], &l_1138, &g_13[3], &l_1138, (void*)0, &l_1112[1][4][0]}, {(void*)0, &l_1112[1][4][0], &l_1138, &g_13[3], &l_1138, (void*)0, &l_1112[1][4][0]}}, {{(void*)0, &l_1112[1][4][0], &l_1138, &g_13[3], &l_1138, (void*)0, &l_1112[1][4][0]}, {(void*)0, &l_1112[1][4][0], &l_1138, &g_13[3], &l_1138, (void*)0, &l_1112[1][4][0]}, {(void*)0, &l_1112[1][4][0], &l_1138, &g_13[3], &l_1138, (void*)0, &l_1112[1][4][0]}, {(void*)0, &l_1112[1][4][0], &l_1138, &g_13[3], &l_1138, (void*)0, &l_1112[1][4][0]}}, {{(void*)0, &l_1112[1][4][0], &l_1138, &g_13[3], &l_1138, (void*)0, &l_1112[1][4][0]}, {(void*)0, &l_1112[1][4][0], &l_1138, &g_13[3], &l_1138, (void*)0, &l_1112[1][4][0]}, {(void*)0, &l_1112[1][4][0], &l_1138, &g_13[3], &l_1138, (void*)0, &l_1112[1][4][0]}, {(void*)0, &l_1112[1][4][0], &l_1138, &g_13[3], &l_1138, (void*)0, &l_1112[1][4][0]}}, {{(void*)0, &l_1112[1][4][0], &l_1138, &g_13[3], &l_1138, (void*)0, &l_1112[1][4][0]}, {(void*)0, &l_1112[1][4][0], &l_1138, &g_13[3], &l_1138, (void*)0, &l_1112[1][4][0]}, {(void*)0, &l_1112[1][4][0], &l_1138, &g_13[3], &l_1138, (void*)0, &l_1112[1][4][0]}, {(void*)0, &l_1112[1][4][0], &l_1138, &g_13[3], &l_1138, (void*)0, &l_1112[1][4][0]}}, {{(void*)0, &l_1112[1][4][0], &l_1138, &g_13[3], &l_1138, (void*)0, &l_1112[1][4][0]}, {(void*)0, &l_1112[1][4][0], &l_1138, &g_13[3], &l_1138, (void*)0, &l_1112[1][4][0]}, {(void*)0, &l_1112[1][4][0], &l_1138, &g_13[3], &l_1138, (void*)0, &l_1112[1][4][0]}, {(void*)0, &l_1112[1][4][0], &l_1138, &g_13[3], &l_1138, (void*)0, &l_1112[1][4][0]}}, {{(void*)0, &l_1112[1][4][0], &l_1138, &g_13[3], &l_1138, (void*)0, &l_1112[1][4][0]}, {(void*)0, &l_1112[1][4][0], &l_1138, &g_13[3], &l_1138, (void*)0, &l_1112[1][4][0]}, {(void*)0, &l_1112[1][4][0], &l_1138, &g_13[3], &l_1138, (void*)0, &l_1112[1][4][0]}, {(void*)0, &l_1112[1][4][0], &l_1138, &g_13[3], &l_1138, (void*)0, &l_1112[1][4][0]}}, {{(void*)0, &l_1112[1][4][0], &l_1138, &g_13[3], &l_1138, (void*)0, &l_1112[1][4][0]}, {(void*)0, &l_1112[1][4][0], &l_1138, &g_13[3], &l_1138, (void*)0, &l_1112[1][4][0]}, {(void*)0, &l_1112[1][4][0], &l_1138, &g_13[3], &l_1138, (void*)0, &l_1112[1][4][0]}, {(void*)0, &l_1112[1][4][0], &l_1138, &g_13[3], &l_1138, (void*)0, &l_1112[1][4][0]}}};
            int i, j, k;
            for (i = 0; i < 6; i++)
                l_1157[i] = 0x93C06B28L;
            (*g_930) = l_1158[4][2][6];


        }


        ;
        ;
        return p_3;


    }
    return l_1159;
}







static unsigned char func_7(short p_8)
{
    int *l_12[4][1][4] = {{{&g_13[3], &g_13[3], &g_13[3], &g_13[3]}}, {{&g_13[3], &g_13[3], &g_13[3], &g_13[3]}}, {{&g_13[3], &g_13[3], &g_13[3], &g_13[3]}}, {{&g_13[3], &g_13[3], &g_13[3], &g_13[3]}}};
    int *****l_1061 = &g_428;
    char *l_1094 = &g_239[0][2];
    int i, j, k;
    for (p_8 = 25; (p_8 <= 29); p_8 = safe_add_func_uint32_t_u_u(p_8, 1))
    {
        int **l_14 = &l_12[2][0][2];
        (*l_14) = l_12[2][0][2];
    }
    for (g_9 = 0; (g_9 <= 0); g_9 += 1)
    {
        unsigned short l_15 = 0x04B0L;
        int *l_18 = (void*)0;
        int **l_1062 = &g_106;
        char *l_1091[6][8][5] = {{{&g_239[4][5], (void*)0, &g_151[0][2][4], &g_151[2][0][0], &g_151[2][0][0]}, {&g_239[4][5], (void*)0, &g_151[0][2][4], &g_151[2][0][0], &g_151[2][0][0]}, {&g_239[4][5], (void*)0, &g_151[0][2][4], &g_151[2][0][0], &g_151[2][0][0]}, {&g_239[4][5], (void*)0, &g_151[0][2][4], &g_151[2][0][0], &g_151[2][0][0]}, {&g_239[4][5], (void*)0, &g_151[0][2][4], &g_151[2][0][0], &g_151[2][0][0]}, {&g_239[4][5], (void*)0, &g_151[0][2][4], &g_151[2][0][0], &g_151[2][0][0]}, {&g_239[4][5], (void*)0, &g_151[0][2][4], &g_151[2][0][0], &g_151[2][0][0]}, {&g_239[4][5], (void*)0, &g_151[0][2][4], &g_151[2][0][0], &g_151[2][0][0]}}, {{&g_239[4][5], (void*)0, &g_151[0][2][4], &g_151[2][0][0], &g_151[2][0][0]}, {&g_239[4][5], (void*)0, &g_151[0][2][4], &g_151[2][0][0], &g_151[2][0][0]}, {&g_239[4][5], (void*)0, &g_151[0][2][4], &g_151[2][0][0], &g_151[2][0][0]}, {&g_239[4][5], (void*)0, &g_151[0][2][4], &g_151[2][0][0], &g_151[2][0][0]}, {&g_239[4][5], (void*)0, &g_151[0][2][4], &g_151[2][0][0], &g_151[2][0][0]}, {&g_239[4][5], (void*)0, &g_151[0][2][4], &g_151[2][0][0], &g_151[2][0][0]}, {&g_239[4][5], (void*)0, &g_151[0][2][4], &g_151[2][0][0], &g_151[2][0][0]}, {&g_239[4][5], (void*)0, &g_151[0][2][4], &g_151[2][0][0], &g_151[2][0][0]}}, {{&g_239[4][5], (void*)0, &g_151[0][2][4], &g_151[2][0][0], &g_151[2][0][0]}, {&g_239[4][5], (void*)0, &g_151[0][2][4], &g_151[2][0][0], &g_151[2][0][0]}, {&g_239[4][5], (void*)0, &g_151[0][2][4], &g_151[2][0][0], &g_151[2][0][0]}, {&g_239[4][5], (void*)0, &g_151[0][2][4], &g_151[2][0][0], &g_151[2][0][0]}, {&g_239[4][5], (void*)0, &g_151[0][2][4], &g_151[2][0][0], &g_151[2][0][0]}, {&g_239[4][5], (void*)0, &g_151[0][2][4], &g_151[2][0][0], &g_151[2][0][0]}, {&g_239[4][5], (void*)0, &g_151[0][2][4], &g_151[2][0][0], &g_151[2][0][0]}, {&g_239[4][5], (void*)0, &g_151[0][2][4], &g_151[2][0][0], &g_151[2][0][0]}}, {{&g_239[4][5], (void*)0, &g_151[0][2][4], &g_151[2][0][0], &g_151[2][0][0]}, {&g_239[4][5], (void*)0, &g_151[0][2][4], &g_151[2][0][0], &g_151[2][0][0]}, {&g_239[4][5], (void*)0, &g_151[0][2][4], &g_151[2][0][0], &g_151[2][0][0]}, {&g_239[4][5], (void*)0, &g_151[0][2][4], &g_151[2][0][0], &g_151[2][0][0]}, {&g_239[4][5], (void*)0, &g_151[0][2][4], &g_151[2][0][0], &g_151[2][0][0]}, {&g_239[4][5], (void*)0, &g_151[0][2][4], &g_151[2][0][0], &g_151[2][0][0]}, {&g_239[4][5], (void*)0, &g_151[0][2][4], &g_151[2][0][0], &g_151[2][0][0]}, {&g_239[4][5], (void*)0, &g_151[0][2][4], &g_151[2][0][0], &g_151[2][0][0]}}, {{&g_239[4][5], (void*)0, &g_151[0][2][4], &g_151[2][0][0], &g_151[2][0][0]}, {&g_239[4][5], (void*)0, &g_151[0][2][4], &g_151[2][0][0], &g_151[2][0][0]}, {&g_239[4][5], (void*)0, &g_151[0][2][4], &g_151[2][0][0], &g_151[2][0][0]}, {&g_239[4][5], (void*)0, &g_151[0][2][4], &g_151[2][0][0], &g_151[2][0][0]}, {&g_239[4][5], (void*)0, &g_151[0][2][4], &g_151[2][0][0], &g_151[2][0][0]}, {&g_239[4][5], (void*)0, &g_151[0][2][4], &g_151[2][0][0], &g_151[2][0][0]}, {&g_239[4][5], (void*)0, &g_151[0][2][4], &g_151[2][0][0], &g_151[2][0][0]}, {&g_239[4][5], (void*)0, &g_151[0][2][4], &g_151[2][0][0], &g_151[2][0][0]}}, {{&g_239[4][5], (void*)0, &g_151[0][2][4], &g_151[2][0][0], &g_151[2][0][0]}, {&g_239[4][5], (void*)0, &g_151[0][2][4], &g_151[2][0][0], &g_151[2][0][0]}, {&g_239[4][5], (void*)0, &g_151[0][2][4], &g_151[2][0][0], &g_151[2][0][0]}, {&g_239[4][5], (void*)0, &g_151[0][2][4], &g_151[2][0][0], &g_151[2][0][0]}, {&g_239[4][5], (void*)0, &g_151[0][2][4], &g_151[2][0][0], &g_151[2][0][0]}, {&g_239[4][5], (void*)0, &g_151[0][2][4], &g_151[2][0][0], &g_151[2][0][0]}, {&g_239[4][5], (void*)0, &g_151[0][2][4], &g_151[2][0][0], &g_151[2][0][0]}, {&g_239[4][5], (void*)0, &g_151[0][2][4], &g_151[2][0][0], &g_151[2][0][0]}}};
        int i, j, k;
        l_15 = p_8;
        for (p_8 = 0; (p_8 <= 0); p_8 += 1)
        {
            int *l_1063 = &g_13[3];
            unsigned char **l_1096[6][1][2] = {{{&g_128, &g_128}}, {{&g_128, &g_128}}, {{&g_128, &g_128}}, {{&g_128, &g_128}}, {{&g_128, &g_128}}, {{&g_128, &g_128}}};
            int i, j, k;
            for (l_15 = 0; (l_15 <= 0); l_15 += 1)
            {
                (*g_889) = func_16(l_18);
                (*g_889) = ((*g_596) < p_8);
            }
            (*g_808) = func_25((((void*)0 == l_1061) , (+((void*)0 != l_1062))), ((*g_808) = l_1063), p_8);
            if ((*l_1063))
            {
                short l_1077 = 0xE715L;
                for (g_796 = 0; (g_796 <= 0); g_796 += 1)
                {
                    unsigned *l_1066[7][10] = {{(void*)0, &g_680, (void*)0, &g_680, (void*)0, &g_207, (void*)0, &g_680, &g_207, &g_680}, {(void*)0, &g_680, (void*)0, &g_680, (void*)0, &g_207, (void*)0, &g_680, &g_207, &g_680}, {(void*)0, &g_680, (void*)0, &g_680, (void*)0, &g_207, (void*)0, &g_680, &g_207, &g_680}, {(void*)0, &g_680, (void*)0, &g_680, (void*)0, &g_207, (void*)0, &g_680, &g_207, &g_680}, {(void*)0, &g_680, (void*)0, &g_680, (void*)0, &g_207, (void*)0, &g_680, &g_207, &g_680}, {(void*)0, &g_680, (void*)0, &g_680, (void*)0, &g_207, (void*)0, &g_680, &g_207, &g_680}, {(void*)0, &g_680, (void*)0, &g_680, (void*)0, &g_207, (void*)0, &g_680, &g_207, &g_680}};
                    int l_1067[1];
                    int *l_1076 = &l_1067[0];
                    int i, j;
                    for (i = 0; i < 1; i++)
                        l_1067[i] = 0xA63352ECL;
                    for (g_33 = 0; (g_33 <= 0); g_33 += 1)
                    {
                        int i, j, k;
                        l_12[(p_8 + 2)][g_796][(g_33 + 1)] = (*l_1062);
                    }
                    for (g_33 = 0; (g_33 <= 0); g_33 += 1)
                    {
                        int i, j, k;
                        if (p_8)
                            break;
                        l_12[(g_9 + 2)][g_9][(g_796 + 1)] = l_1063;
                        if (p_8)
                            break;
                    }
                    for (g_19 = 2; (g_19 >= 0); g_19 -= 1)
                    {
                        int i, j, k;
                        return g_29[(g_796 + 1)][(g_796 + 1)][g_19];
                    }
                    if ((safe_sub_func_uint32_t_u_u((l_1067[0] = p_8), p_8)))
                    {
                        (*g_930) = (*l_1062);
                        (*l_1076) = (safe_rshift_func_uint8_t_u_u((p_8 , (((*g_245) = l_18) == l_18)), p_8));
                        (*l_1076) = l_1077;
                    }
                    else
                    {
                        short *l_1088 = &g_99;
                        int l_1095 = 0x446B067FL;
                        (*l_1063) = ((safe_rshift_func_int16_t_s_s((1UL && (safe_mod_func_int16_t_s_s(((*l_1088) = ((*g_596) = (safe_add_func_int8_t_s_s(((void*)0 == g_1084[2][0]), (safe_rshift_func_uint8_t_u_s(p_8, 5)))))), ((safe_add_func_int8_t_s_s(((*g_341) = ((void*)0 == l_1091[3][7][2])), (0x3865L > g_92))) , (func_56((((safe_sub_func_int32_t_s_s((p_8 && p_8), 0xE62CE980L)) >= (-10L)) , &l_1067[0]), l_1094) , l_1095))))), 10)) == 0x39BA4DE1L);


                        (*g_889) = (l_1096[1][0][1] == (void*)0);
                        return (*g_128);


                    }
                }
            }
            else
            {
                (*l_1063) = (&g_245 != (void*)0);
            }
        }
    }


    ;
    return (**g_333);
}







static int func_16(int * p_17)
{
    int l_22[10] = {1L, 2L, 5L, 5L, 2L, 1L, 2L, 5L, 5L, 2L};
    int **l_24 = (void*)0;
    char *l_30 = &g_31;
    unsigned *l_32 = &g_33;
    unsigned l_1044 = 0xDAE59B3FL;
    int l_1045 = 9L;
    unsigned short l_1046 = 0x9D99L;
    int i;
    for (g_19 = 18; (g_19 != 17); g_19 = safe_sub_func_int8_t_s_s(g_19, 1))
    {
        int *l_23 = &g_13[3];
        (*l_23) = (!l_22[7]);
        return (*l_23);
    }
    (*g_889) = (((((g_13[6] ^ ((-7L) && 0x2B94L)) && ((void*)0 != l_24)) >= ((((&g_13[8] == (p_17 = func_25(g_13[9], &g_13[3], ((*l_32) = ((((*l_30) = (g_29[0][3][2] = 1L)) >= 6L) <= g_9))))) >= (*g_128)) && 0x5058C943L) & l_1044)) , l_1045) != l_1046);

    ;
    (*g_889) = (((((*g_978) = (safe_sub_func_uint16_t_u_u((safe_mod_func_uint16_t_u_u(((safe_lshift_func_int16_t_s_u((safe_rshift_func_int8_t_s_s(((*g_341) = l_1046), l_22[7])), 1)) , ((safe_rshift_func_uint16_t_u_s((l_30 == (void*)0), 9)) != l_1045)), (*g_596))), (-3L)))) , g_772[1]) , 1UL) <= l_22[7]);
    l_1045 = ((*g_596) != (safe_add_func_uint8_t_u_u((**g_333), (safe_lshift_func_uint8_t_u_u((**g_333), 2)))));
    return l_22[0];
}







static int * func_25(int p_26, int * p_27, unsigned p_28)
{
    unsigned short l_81 = 0x9FA0L;
    int l_163[8];
    int **l_461 = &g_455[0][8][1];
    short l_995 = 6L;
    char *l_1011 = &g_239[0][2];
    int ***l_1022 = &g_76;
    int ****l_1021 = &l_1022;
    char l_1040[1][10][9] = {{{(-1L), 0xBFL, (-2L), 0xC5L, (-8L), 8L, 0xC7L, 0L, (-9L)}, {(-1L), 0xBFL, (-2L), 0xC5L, (-8L), 8L, 0xC7L, 0L, (-9L)}, {(-1L), 0xBFL, (-2L), 0xC5L, (-8L), 8L, 0xC7L, 0L, (-9L)}, {(-1L), 0xBFL, (-2L), 0xC5L, (-8L), 8L, 0xC7L, 0L, (-9L)}, {(-1L), 0xBFL, (-2L), 0xC5L, (-8L), 8L, 0xC7L, 0L, (-9L)}, {(-1L), 0xBFL, (-2L), 0xC5L, (-8L), 8L, 0xC7L, 0L, (-9L)}, {(-1L), 0xBFL, (-2L), 0xC5L, (-8L), 8L, 0xC7L, 0L, (-9L)}, {(-1L), 0xBFL, (-2L), 0xC5L, (-8L), 8L, 0xC7L, 0L, (-9L)}, {(-1L), 0xBFL, (-2L), 0xC5L, (-8L), 8L, 0xC7L, 0L, (-9L)}, {(-1L), 0xBFL, (-2L), 0xC5L, (-8L), 8L, 0xC7L, 0L, (-9L)}}};
    int i, j, k;
    for (i = 0; i < 8; i++)
        l_163[i] = (-7L);
    g_19 = 0xFA8B742DL;
    for (p_28 = 17; (p_28 < 52); p_28 = safe_add_func_int16_t_s_s(p_28, 5))
    {
        int **l_75 = (void*)0;
        unsigned *l_82 = &g_9;
        unsigned *l_161 = (void*)0;
        int l_982 = 0x71EC9150L;
        char *l_985 = (void*)0;
        int l_986 = 0x2A2ECA79L;
        int **l_987[2];
        int **l_991 = &g_889;
        unsigned short l_1016 = 0x1118L;
        int *****l_1025 = &g_428;
        int i;
        for (i = 0; i < 2; i++)
            l_987[i] = &g_978;
        for (g_31 = 0; (g_31 == (-15)); g_31 = safe_sub_func_int16_t_s_s(g_31, 5))
        {
            int ***l_78 = &g_76;
            unsigned **l_83 = &l_82;
            unsigned *l_162 = &g_9;
            char *l_456 = &g_239[3][4];
            short *l_460[9] = {&g_99, &g_101, &g_99, &g_101, &g_99, &g_101, &g_99, &g_101, &g_99};
            unsigned char *l_975 = &g_375;
            int *l_976[2][4];
            unsigned *l_981 = &g_680;
            int *l_989 = &l_163[0];
            int l_1042[8][1] = {{0x3DC38830L}, {0x3DC38830L}, {0x3DC38830L}, {0x3DC38830L}, {0x3DC38830L}, {0x3DC38830L}, {0x3DC38830L}, {0x3DC38830L}};
            int i, j;
            for (i = 0; i < 2; i++)
            {
                for (j = 0; j < 4; j++)
                    l_976[i][j] = (void*)0;
            }
        }
        for (g_183 = 0; (g_183 <= 2); g_183 += 1)
        {
            return (*g_808);


        }
        return p_27;


    }
    (*g_808) = (*g_930);
    return (*l_461);


}







static unsigned char func_44(char p_45, int * p_46, unsigned short p_47, unsigned p_48)
{
    unsigned l_897 = 7UL;
    int l_902 = 1L;
    char l_931[4][3][3] = {{{0x3DL, 0xFEL, 1L}, {0x3DL, 0xFEL, 1L}, {0x3DL, 0xFEL, 1L}}, {{0x3DL, 0xFEL, 1L}, {0x3DL, 0xFEL, 1L}, {0x3DL, 0xFEL, 1L}}, {{0x3DL, 0xFEL, 1L}, {0x3DL, 0xFEL, 1L}, {0x3DL, 0xFEL, 1L}}, {{0x3DL, 0xFEL, 1L}, {0x3DL, 0xFEL, 1L}, {0x3DL, 0xFEL, 1L}}};
    int l_933 = 0L;
    int i, j, k;
    if ((p_45 , (safe_sub_func_int16_t_s_s(((*g_596) = (safe_sub_func_int8_t_s_s(p_45, (**g_333)))), ((g_894[0] = &g_245) != &g_245)))))
    {
        short *l_899[9] = {&g_101, &g_99, &g_101, &g_99, &g_101, &g_99, &g_101, &g_99, &g_101};
        short **l_898 = &l_899[5];
        unsigned short *l_900 = &g_183;
        int *l_901 = &g_784;
        int i;
        l_902 = ((*l_901) = ((((*l_900) = ((safe_lshift_func_int16_t_s_u((l_897 <= ((*g_595) == ((*l_898) = (*g_595)))), 14)) , p_48)) >= 0x8E57L) >= l_897));
    }
    else
    {
        unsigned l_911[1];
        unsigned *l_928 = &g_207;
        unsigned short *l_929 = &g_180;
        int l_932[3];
        int **l_948 = &g_106;
        char *l_965 = &g_239[0][2];
        int i;
        for (i = 0; i < 1; i++)
            l_911[i] = 18446744073709551611UL;
        for (i = 0; i < 3; i++)
            l_932[i] = (-1L);
        for (p_47 = 24; (p_47 != 4); p_47 = safe_sub_func_int8_t_s_s(p_47, 5))
        {
            for (g_19 = (-15); (g_19 == 19); g_19 = safe_add_func_uint32_t_u_u(g_19, 3))
            {
                (*g_76) = p_46;
            }
        }
        if (l_897)
        {
            unsigned char **l_935 = (void*)0;
            unsigned char ***l_936 = &g_333;
            (*l_936) = l_935;

            ;
        }
        else
        {
            int l_945 = 0x3C38FC3BL;
            int l_946 = 0x43AFD07EL;
lbl_941:
            for (g_375 = 0; (g_375 > 60); g_375++)
            {
                p_46 = p_46;
                (*g_930) = &l_902;
            }
            for (g_680 = 0; (g_680 < 30); g_680++)
            {
                unsigned l_947 = 1UL;
                int *l_968 = &g_13[3];
                for (g_183 = 0; (g_183 <= 4); g_183 += 1)
                {
                    unsigned **l_944 = &g_246;
                    int *l_958[9][1][8] = {{{&l_902, &g_784, &g_13[3], &l_932[1], &g_13[3], &l_932[1], &g_13[3], &g_784}}, {{&l_902, &g_784, &g_13[3], &l_932[1], &g_13[3], &l_932[1], &g_13[3], &g_784}}, {{&l_902, &g_784, &g_13[3], &l_932[1], &g_13[3], &l_932[1], &g_13[3], &g_784}}, {{&l_902, &g_784, &g_13[3], &l_932[1], &g_13[3], &l_932[1], &g_13[3], &g_784}}, {{&l_902, &g_784, &g_13[3], &l_932[1], &g_13[3], &l_932[1], &g_13[3], &g_784}}, {{&l_902, &g_784, &g_13[3], &l_932[1], &g_13[3], &l_932[1], &g_13[3], &g_784}}, {{&l_902, &g_784, &g_13[3], &l_932[1], &g_13[3], &l_932[1], &g_13[3], &g_784}}, {{&l_902, &g_784, &g_13[3], &l_932[1], &g_13[3], &l_932[1], &g_13[3], &g_784}}, {{&l_902, &g_784, &g_13[3], &l_932[1], &g_13[3], &l_932[1], &g_13[3], &g_784}}};
                    int i, j, k;
                    if (p_45)
                        goto lbl_941;
                    for (g_19 = 4; (g_19 >= 1); g_19 -= 1)
                    {
                        int i, j;
                        if (g_239[g_183][g_183])
                            break;
                    }
                    if ((((((void*)0 != &g_808) & g_239[4][3]) && 0x8CL) <= (l_897 , (safe_sub_func_int32_t_s_s(((*p_46) >= ((void*)0 == l_944)), (l_946 = ((g_151[5][2][1] | l_902) >= l_945)))))))
                    {
                        (*g_76) = &l_902;
                        if ((*p_46))
                            continue;
                    }
                    else
                    {
                        unsigned short l_957 = 65533UL;
                        if (l_947)
                            break;
                        (*g_930) = &l_902;
                    }
                    (*g_808) = ((*g_930) = l_958[5][0][5]);

                    ;
                }
                for (g_101 = 0; (g_101 < 25); g_101 = safe_add_func_uint16_t_u_u(g_101, 2))
                {
                    int *l_969 = &l_932[1];
                    for (g_784 = 1; (g_784 != 23); ++g_784)
                    {
                        int *l_966 = (void*)0;
                        int *l_967 = &l_932[1];
                        (*l_967) = ((safe_add_func_uint16_t_u_u(p_48, 0UL)) || func_56(p_46, l_965));
                        if ((*g_889))
                            break;
                        (*l_948) = l_968;

                        ;
                        (*g_76) = (void*)0;
                    }
                    (*l_969) = (l_902 = (*p_46));
                    for (l_947 = 0; (l_947 == 24); l_947 = safe_add_func_int32_t_s_s(l_947, 9))
                    {
                        unsigned l_972[7];
                        int i;
                        for (i = 0; i < 7; i++)
                            l_972[i] = 0UL;
                        (*g_930) = p_46;
                        if (l_947)
                            goto lbl_941;
                        (*g_808) = ((*g_76) = p_46);


                        l_902 = l_972[3];
                    }
                    (*l_948) = p_46;


                }
                return (**g_333);



            }
        }



        ;
        (*l_948) = p_46;


        for (p_47 = 0; (p_47 <= 2); p_47 += 1)
        {
            unsigned char *l_973 = &g_92;
            l_902 = ((void*)0 == l_973);
            l_902 = 0L;
            for (g_101 = 0; (g_101 <= 2); g_101 += 1)
            {
                short l_974 = 1L;
                l_974 = (((**l_948) || 0xEBL) ^ 0xFEE50F4CL);
                for (g_92 = 0; (g_92 <= 2); g_92 += 1)
                {
                    if ((*p_46))
                        break;
                    return (**l_948);


                }
            }
        }
    }



    ;
    return p_47;


}







static int * func_49(int * p_50, int p_51, char * p_52, int ** p_53, int p_54)
{
    int *l_464 = &g_19;
    unsigned *l_469 = &g_207;
    char *l_470 = &g_239[2][4];
    unsigned l_471 = 18446744073709551613UL;
    int l_478 = 0x88E984CCL;
    unsigned char **l_482 = &g_128;
    unsigned l_583 = 0x2BDCF58BL;
    unsigned short l_588 = 0x6262L;
    short l_591 = (-1L);
    short *l_592 = &l_591;
    int l_598 = 0x2C400D86L;
    unsigned l_609 = 4294967295UL;
    unsigned char *l_635 = (void*)0;
    char **l_734 = &l_470;
    unsigned *l_743 = &l_471;
    unsigned **l_742[10][5] = {{&l_743, (void*)0, &l_743, &l_743, (void*)0}, {&l_743, (void*)0, &l_743, &l_743, (void*)0}, {&l_743, (void*)0, &l_743, &l_743, (void*)0}, {&l_743, (void*)0, &l_743, &l_743, (void*)0}, {&l_743, (void*)0, &l_743, &l_743, (void*)0}, {&l_743, (void*)0, &l_743, &l_743, (void*)0}, {&l_743, (void*)0, &l_743, &l_743, (void*)0}, {&l_743, (void*)0, &l_743, &l_743, (void*)0}, {&l_743, (void*)0, &l_743, &l_743, (void*)0}, {&l_743, (void*)0, &l_743, &l_743, (void*)0}};
    unsigned l_755[3][4] = {{7UL, 1UL, 7UL, 1UL}, {7UL, 1UL, 7UL, 1UL}, {7UL, 1UL, 7UL, 1UL}};
    char l_809 = 0x58L;
    int *l_816 = &g_19;
    short l_852 = (-7L);
    char l_871 = 0xE5L;
    short l_872 = (-6L);
    int *l_887[9][9] = {{(void*)0, &l_598, &g_13[5], &l_598, &g_784, &l_598, &g_13[5], &l_598, (void*)0}, {(void*)0, &l_598, &g_13[5], &l_598, &g_784, &l_598, &g_13[5], &l_598, (void*)0}, {(void*)0, &l_598, &g_13[5], &l_598, &g_784, &l_598, &g_13[5], &l_598, (void*)0}, {(void*)0, &l_598, &g_13[5], &l_598, &g_784, &l_598, &g_13[5], &l_598, (void*)0}, {(void*)0, &l_598, &g_13[5], &l_598, &g_784, &l_598, &g_13[5], &l_598, (void*)0}, {(void*)0, &l_598, &g_13[5], &l_598, &g_784, &l_598, &g_13[5], &l_598, (void*)0}, {(void*)0, &l_598, &g_13[5], &l_598, &g_784, &l_598, &g_13[5], &l_598, (void*)0}, {(void*)0, &l_598, &g_13[5], &l_598, &g_784, &l_598, &g_13[5], &l_598, (void*)0}, {(void*)0, &l_598, &g_13[5], &l_598, &g_784, &l_598, &g_13[5], &l_598, (void*)0}};
    int i, j;
    if (((((safe_sub_func_uint32_t_u_u(p_51, 0xEE8E53D1L)) , (**g_340)) | 4L) , ((*g_341) || ((*g_128) = func_63(g_414[9], (func_56(l_464, ((safe_rshift_func_uint8_t_u_u((safe_rshift_func_int8_t_s_u((((((*l_469) = (((*l_464) , p_52) != p_52)) , 0x3AFBL) , p_54) && (*p_50)), p_54)), p_54)) , l_470)) , (**g_333)), l_471)))))
    {
        int *l_476[8] = {(void*)0, &g_13[3], (void*)0, &g_13[3], (void*)0, &g_13[3], (void*)0, &g_13[3]};
        unsigned short *l_477 = &g_183;
        int **l_479[8][8][4] = {{{(void*)0, &l_476[3], &l_476[3], &g_106}, {(void*)0, &l_476[3], &l_476[3], &g_106}, {(void*)0, &l_476[3], &l_476[3], &g_106}, {(void*)0, &l_476[3], &l_476[3], &g_106}, {(void*)0, &l_476[3], &l_476[3], &g_106}, {(void*)0, &l_476[3], &l_476[3], &g_106}, {(void*)0, &l_476[3], &l_476[3], &g_106}, {(void*)0, &l_476[3], &l_476[3], &g_106}}, {{(void*)0, &l_476[3], &l_476[3], &g_106}, {(void*)0, &l_476[3], &l_476[3], &g_106}, {(void*)0, &l_476[3], &l_476[3], &g_106}, {(void*)0, &l_476[3], &l_476[3], &g_106}, {(void*)0, &l_476[3], &l_476[3], &g_106}, {(void*)0, &l_476[3], &l_476[3], &g_106}, {(void*)0, &l_476[3], &l_476[3], &g_106}, {(void*)0, &l_476[3], &l_476[3], &g_106}}, {{(void*)0, &l_476[3], &l_476[3], &g_106}, {(void*)0, &l_476[3], &l_476[3], &g_106}, {(void*)0, &l_476[3], &l_476[3], &g_106}, {(void*)0, &l_476[3], &l_476[3], &g_106}, {(void*)0, &l_476[3], &l_476[3], &g_106}, {(void*)0, &l_476[3], &l_476[3], &g_106}, {(void*)0, &l_476[3], &l_476[3], &g_106}, {(void*)0, &l_476[3], &l_476[3], &g_106}}, {{(void*)0, &l_476[3], &l_476[3], &g_106}, {(void*)0, &l_476[3], &l_476[3], &g_106}, {(void*)0, &l_476[3], &l_476[3], &g_106}, {(void*)0, &l_476[3], &l_476[3], &g_106}, {(void*)0, &l_476[3], &l_476[3], &g_106}, {(void*)0, &l_476[3], &l_476[3], &g_106}, {(void*)0, &l_476[3], &l_476[3], &g_106}, {(void*)0, &l_476[3], &l_476[3], &g_106}}, {{(void*)0, &l_476[3], &l_476[3], &g_106}, {(void*)0, &l_476[3], &l_476[3], &g_106}, {(void*)0, &l_476[3], &l_476[3], &g_106}, {(void*)0, &l_476[3], &l_476[3], &g_106}, {(void*)0, &l_476[3], &l_476[3], &g_106}, {(void*)0, &l_476[3], &l_476[3], &g_106}, {(void*)0, &l_476[3], &l_476[3], &g_106}, {(void*)0, &l_476[3], &l_476[3], &g_106}}, {{(void*)0, &l_476[3], &l_476[3], &g_106}, {(void*)0, &l_476[3], &l_476[3], &g_106}, {(void*)0, &l_476[3], &l_476[3], &g_106}, {(void*)0, &l_476[3], &l_476[3], &g_106}, {(void*)0, &l_476[3], &l_476[3], &g_106}, {(void*)0, &l_476[3], &l_476[3], &g_106}, {(void*)0, &l_476[3], &l_476[3], &g_106}, {(void*)0, &l_476[3], &l_476[3], &g_106}}, {{(void*)0, &l_476[3], &l_476[3], &g_106}, {(void*)0, &l_476[3], &l_476[3], &g_106}, {(void*)0, &l_476[3], &l_476[3], &g_106}, {(void*)0, &l_476[3], &l_476[3], &g_106}, {(void*)0, &l_476[3], &l_476[3], &g_106}, {(void*)0, &l_476[3], &l_476[3], &g_106}, {(void*)0, &l_476[3], &l_476[3], &g_106}, {(void*)0, &l_476[3], &l_476[3], &g_106}}, {{(void*)0, &l_476[3], &l_476[3], &g_106}, {(void*)0, &l_476[3], &l_476[3], &g_106}, {(void*)0, &l_476[3], &l_476[3], &g_106}, {(void*)0, &l_476[3], &l_476[3], &g_106}, {(void*)0, &l_476[3], &l_476[3], &g_106}, {(void*)0, &l_476[3], &l_476[3], &g_106}, {(void*)0, &l_476[3], &l_476[3], &g_106}, {(void*)0, &l_476[3], &l_476[3], &g_106}}};
        short *l_483[4][5] = {{&g_99, &g_101, &g_101, &g_101, &g_99}, {&g_99, &g_101, &g_101, &g_101, &g_99}, {&g_99, &g_101, &g_101, &g_101, &g_99}, {&g_99, &g_101, &g_101, &g_101, &g_99}};
        int i, j, k;
lbl_488:
        l_478 = ((*l_464) = (g_180 >= ((safe_mod_func_int16_t_s_s(g_29[0][3][0], (((*l_477) = (safe_add_func_uint8_t_u_u(((func_56(l_476[3], (*g_340)) > 65535UL) , ((g_19 ^ p_51) >= (*l_464))), (*p_52)))) || g_92))) < g_31)));
        (*g_76) = ((*p_52) , (*p_53));
        if (l_471)
            goto lbl_488;
        for (l_478 = (-9); (l_478 >= (-12)); l_478--)
        {
            short l_491 = 0xF00FL;
            (*g_76) = (*p_53);
        }
    }
    else
    {
        unsigned l_509 = 0xCF7A15A0L;
        int l_510[4][10] = {{(-7L), 0x9F1D7BDCL, (-7L), 0x9F1D7BDCL, (-7L), 0x9F1D7BDCL, (-7L), 0x9F1D7BDCL, (-7L), 0x9F1D7BDCL}, {(-7L), 0x9F1D7BDCL, (-7L), 0x9F1D7BDCL, (-7L), 0x9F1D7BDCL, (-7L), 0x9F1D7BDCL, (-7L), 0x9F1D7BDCL}, {(-7L), 0x9F1D7BDCL, (-7L), 0x9F1D7BDCL, (-7L), 0x9F1D7BDCL, (-7L), 0x9F1D7BDCL, (-7L), 0x9F1D7BDCL}, {(-7L), 0x9F1D7BDCL, (-7L), 0x9F1D7BDCL, (-7L), 0x9F1D7BDCL, (-7L), 0x9F1D7BDCL, (-7L), 0x9F1D7BDCL}};
        int **l_536 = &g_77[2][0];
        char *l_555 = &g_151[2][0][0];
        unsigned l_581[7][5] = {{0x8926F77AL, 18446744073709551609UL, 0xD25B76F8L, 18446744073709551615UL, 18446744073709551609UL}, {0x8926F77AL, 18446744073709551609UL, 0xD25B76F8L, 18446744073709551615UL, 18446744073709551609UL}, {0x8926F77AL, 18446744073709551609UL, 0xD25B76F8L, 18446744073709551615UL, 18446744073709551609UL}, {0x8926F77AL, 18446744073709551609UL, 0xD25B76F8L, 18446744073709551615UL, 18446744073709551609UL}, {0x8926F77AL, 18446744073709551609UL, 0xD25B76F8L, 18446744073709551615UL, 18446744073709551609UL}, {0x8926F77AL, 18446744073709551609UL, 0xD25B76F8L, 18446744073709551615UL, 18446744073709551609UL}, {0x8926F77AL, 18446744073709551609UL, 0xD25B76F8L, 18446744073709551615UL, 18446744073709551609UL}};
        unsigned char l_582[8] = {0x21L, 0x1CL, 0x21L, 0x1CL, 0x21L, 0x1CL, 0x21L, 0x1CL};
        int i, j;
        for (g_183 = 14; (g_183 >= 17); g_183++)
        {
            char l_521 = 0x6EL;
            int *l_533 = (void*)0;
            int l_558 = 0xC4C03B10L;
        }
        if ((((**g_340) = (((*p_50) , (safe_rshift_func_int16_t_s_u((safe_rshift_func_int8_t_s_s((*g_341), 7)), 3))) < (g_375 & 0UL))) , ((((void*)0 == &l_471) , p_51) == g_180)))
        {
            unsigned l_573 = 4294967295UL;
            int *l_576 = &l_510[2][2];
            (*l_464) = (((*l_470) = (**g_340)) & (((safe_lshift_func_uint16_t_u_u((*l_464), ((p_54 && (safe_sub_func_uint32_t_u_u(3UL, (safe_sub_func_int16_t_s_s((safe_sub_func_uint16_t_u_u(((((((((!((*l_576) = (l_573 & (safe_lshift_func_uint8_t_u_u(((l_576 != (*p_53)) > (safe_mod_func_uint16_t_u_u((safe_add_func_uint8_t_u_u((l_581[1][3] , (l_509 & l_582[2])), (**g_333))), p_54))), 2))))) , g_13[8]) || p_51) < 0UL) == p_51) | g_31) != 4UL) < 0xB9L), p_54)), 0UL))))) < (*l_464)))) > 0x3B19L) || l_581[1][3]));
        }
        else
        {
            return &g_19;


        }
    }
    if ((func_63(l_583, ((0xB8L & (((func_63((safe_mod_func_int32_t_s_s((safe_rshift_func_int8_t_s_u(func_63(g_151[2][0][0], (*g_128), l_588), (safe_lshift_func_int16_t_s_s(((*l_592) = l_591), 13)))), (safe_sub_func_uint16_t_u_u(0UL, p_54)))), l_471, (*p_50)) >= 0x1BL) | 0x17L) > 1L)) , (*g_128)), l_583) && 0x90F6L))
    {
        unsigned l_597[10][8][3] = {{{0x075DBCEBL, 4294967295UL, 0xE4D35B60L}, {0x075DBCEBL, 4294967295UL, 0xE4D35B60L}, {0x075DBCEBL, 4294967295UL, 0xE4D35B60L}, {0x075DBCEBL, 4294967295UL, 0xE4D35B60L}, {0x075DBCEBL, 4294967295UL, 0xE4D35B60L}, {0x075DBCEBL, 4294967295UL, 0xE4D35B60L}, {0x075DBCEBL, 4294967295UL, 0xE4D35B60L}, {0x075DBCEBL, 4294967295UL, 0xE4D35B60L}}, {{0x075DBCEBL, 4294967295UL, 0xE4D35B60L}, {0x075DBCEBL, 4294967295UL, 0xE4D35B60L}, {0x075DBCEBL, 4294967295UL, 0xE4D35B60L}, {0x075DBCEBL, 4294967295UL, 0xE4D35B60L}, {0x075DBCEBL, 4294967295UL, 0xE4D35B60L}, {0x075DBCEBL, 4294967295UL, 0xE4D35B60L}, {0x075DBCEBL, 4294967295UL, 0xE4D35B60L}, {0x075DBCEBL, 4294967295UL, 0xE4D35B60L}}, {{0x075DBCEBL, 4294967295UL, 0xE4D35B60L}, {0x075DBCEBL, 4294967295UL, 0xE4D35B60L}, {0x075DBCEBL, 4294967295UL, 0xE4D35B60L}, {0x075DBCEBL, 4294967295UL, 0xE4D35B60L}, {0x075DBCEBL, 4294967295UL, 0xE4D35B60L}, {0x075DBCEBL, 4294967295UL, 0xE4D35B60L}, {0x075DBCEBL, 4294967295UL, 0xE4D35B60L}, {0x075DBCEBL, 4294967295UL, 0xE4D35B60L}}, {{0x075DBCEBL, 4294967295UL, 0xE4D35B60L}, {0x075DBCEBL, 4294967295UL, 0xE4D35B60L}, {0x075DBCEBL, 4294967295UL, 0xE4D35B60L}, {0x075DBCEBL, 4294967295UL, 0xE4D35B60L}, {0x075DBCEBL, 4294967295UL, 0xE4D35B60L}, {0x075DBCEBL, 4294967295UL, 0xE4D35B60L}, {0x075DBCEBL, 4294967295UL, 0xE4D35B60L}, {0x075DBCEBL, 4294967295UL, 0xE4D35B60L}}, {{0x075DBCEBL, 4294967295UL, 0xE4D35B60L}, {0x075DBCEBL, 4294967295UL, 0xE4D35B60L}, {0x075DBCEBL, 4294967295UL, 0xE4D35B60L}, {0x075DBCEBL, 4294967295UL, 0xE4D35B60L}, {0x075DBCEBL, 4294967295UL, 0xE4D35B60L}, {0x075DBCEBL, 4294967295UL, 0xE4D35B60L}, {0x075DBCEBL, 4294967295UL, 0xE4D35B60L}, {0x075DBCEBL, 4294967295UL, 0xE4D35B60L}}, {{0x075DBCEBL, 4294967295UL, 0xE4D35B60L}, {0x075DBCEBL, 4294967295UL, 0xE4D35B60L}, {0x075DBCEBL, 4294967295UL, 0xE4D35B60L}, {0x075DBCEBL, 4294967295UL, 0xE4D35B60L}, {0x075DBCEBL, 4294967295UL, 0xE4D35B60L}, {0x075DBCEBL, 4294967295UL, 0xE4D35B60L}, {0x075DBCEBL, 4294967295UL, 0xE4D35B60L}, {0x075DBCEBL, 4294967295UL, 0xE4D35B60L}}, {{0x075DBCEBL, 4294967295UL, 0xE4D35B60L}, {0x075DBCEBL, 4294967295UL, 0xE4D35B60L}, {0x075DBCEBL, 4294967295UL, 0xE4D35B60L}, {0x075DBCEBL, 4294967295UL, 0xE4D35B60L}, {0x075DBCEBL, 4294967295UL, 0xE4D35B60L}, {0x075DBCEBL, 4294967295UL, 0xE4D35B60L}, {0x075DBCEBL, 4294967295UL, 0xE4D35B60L}, {0x075DBCEBL, 4294967295UL, 0xE4D35B60L}}, {{0x075DBCEBL, 4294967295UL, 0xE4D35B60L}, {0x075DBCEBL, 4294967295UL, 0xE4D35B60L}, {0x075DBCEBL, 4294967295UL, 0xE4D35B60L}, {0x075DBCEBL, 4294967295UL, 0xE4D35B60L}, {0x075DBCEBL, 4294967295UL, 0xE4D35B60L}, {0x075DBCEBL, 4294967295UL, 0xE4D35B60L}, {0x075DBCEBL, 4294967295UL, 0xE4D35B60L}, {0x075DBCEBL, 4294967295UL, 0xE4D35B60L}}, {{0x075DBCEBL, 4294967295UL, 0xE4D35B60L}, {0x075DBCEBL, 4294967295UL, 0xE4D35B60L}, {0x075DBCEBL, 4294967295UL, 0xE4D35B60L}, {0x075DBCEBL, 4294967295UL, 0xE4D35B60L}, {0x075DBCEBL, 4294967295UL, 0xE4D35B60L}, {0x075DBCEBL, 4294967295UL, 0xE4D35B60L}, {0x075DBCEBL, 4294967295UL, 0xE4D35B60L}, {0x075DBCEBL, 4294967295UL, 0xE4D35B60L}}, {{0x075DBCEBL, 4294967295UL, 0xE4D35B60L}, {0x075DBCEBL, 4294967295UL, 0xE4D35B60L}, {0x075DBCEBL, 4294967295UL, 0xE4D35B60L}, {0x075DBCEBL, 4294967295UL, 0xE4D35B60L}, {0x075DBCEBL, 4294967295UL, 0xE4D35B60L}, {0x075DBCEBL, 4294967295UL, 0xE4D35B60L}, {0x075DBCEBL, 4294967295UL, 0xE4D35B60L}, {0x075DBCEBL, 4294967295UL, 0xE4D35B60L}}};
        unsigned l_603[5][8][6] = {{{2UL, 0x2420B9ECL, 0UL, 0x2420B9ECL, 2UL, 0xE854B5C8L}, {2UL, 0x2420B9ECL, 0UL, 0x2420B9ECL, 2UL, 0xE854B5C8L}, {2UL, 0x2420B9ECL, 0UL, 0x2420B9ECL, 2UL, 0xE854B5C8L}, {2UL, 0x2420B9ECL, 0UL, 0x2420B9ECL, 2UL, 0xE854B5C8L}, {2UL, 0x2420B9ECL, 0UL, 0x2420B9ECL, 2UL, 0xE854B5C8L}, {2UL, 0x2420B9ECL, 0UL, 0x2420B9ECL, 2UL, 0xE854B5C8L}, {2UL, 0x2420B9ECL, 0UL, 0x2420B9ECL, 2UL, 0xE854B5C8L}, {2UL, 0x2420B9ECL, 0UL, 0x2420B9ECL, 2UL, 0xE854B5C8L}}, {{2UL, 0x2420B9ECL, 0UL, 0x2420B9ECL, 2UL, 0xE854B5C8L}, {2UL, 0x2420B9ECL, 0UL, 0x2420B9ECL, 2UL, 0xE854B5C8L}, {2UL, 0x2420B9ECL, 0UL, 0x2420B9ECL, 2UL, 0xE854B5C8L}, {2UL, 0x2420B9ECL, 0UL, 0x2420B9ECL, 2UL, 0xE854B5C8L}, {2UL, 0x2420B9ECL, 0UL, 0x2420B9ECL, 2UL, 0xE854B5C8L}, {2UL, 0x2420B9ECL, 0UL, 0x2420B9ECL, 2UL, 0xE854B5C8L}, {2UL, 0x2420B9ECL, 0UL, 0x2420B9ECL, 2UL, 0xE854B5C8L}, {2UL, 0x2420B9ECL, 0UL, 0x2420B9ECL, 2UL, 0xE854B5C8L}}, {{2UL, 0x2420B9ECL, 0UL, 0x2420B9ECL, 2UL, 0xE854B5C8L}, {2UL, 0x2420B9ECL, 0UL, 0x2420B9ECL, 2UL, 0xE854B5C8L}, {2UL, 0x2420B9ECL, 0UL, 0x2420B9ECL, 2UL, 0xE854B5C8L}, {2UL, 0x2420B9ECL, 0UL, 0x2420B9ECL, 2UL, 0xE854B5C8L}, {2UL, 0x2420B9ECL, 0UL, 0x2420B9ECL, 2UL, 0xE854B5C8L}, {2UL, 0x2420B9ECL, 0UL, 0x2420B9ECL, 2UL, 0xE854B5C8L}, {2UL, 0x2420B9ECL, 0UL, 0x2420B9ECL, 2UL, 0xE854B5C8L}, {2UL, 0x2420B9ECL, 0UL, 0x2420B9ECL, 2UL, 0xE854B5C8L}}, {{2UL, 0x2420B9ECL, 0UL, 0x2420B9ECL, 2UL, 0xE854B5C8L}, {2UL, 0x2420B9ECL, 0UL, 0x2420B9ECL, 2UL, 0xE854B5C8L}, {2UL, 0x2420B9ECL, 0UL, 0x2420B9ECL, 2UL, 0xE854B5C8L}, {2UL, 0x2420B9ECL, 0UL, 0x2420B9ECL, 2UL, 0xE854B5C8L}, {2UL, 0x2420B9ECL, 0UL, 0x2420B9ECL, 2UL, 0xE854B5C8L}, {2UL, 0x2420B9ECL, 0UL, 0x2420B9ECL, 2UL, 0xE854B5C8L}, {2UL, 0x2420B9ECL, 0UL, 0x2420B9ECL, 2UL, 0xE854B5C8L}, {2UL, 0x2420B9ECL, 0UL, 0x2420B9ECL, 2UL, 0xE854B5C8L}}, {{2UL, 0x2420B9ECL, 0UL, 0x2420B9ECL, 2UL, 0xE854B5C8L}, {2UL, 0x2420B9ECL, 0UL, 0x2420B9ECL, 2UL, 0xE854B5C8L}, {2UL, 0x2420B9ECL, 0UL, 0x2420B9ECL, 2UL, 0xE854B5C8L}, {2UL, 0x2420B9ECL, 0UL, 0x2420B9ECL, 2UL, 0xE854B5C8L}, {2UL, 0x2420B9ECL, 0UL, 0x2420B9ECL, 2UL, 0xE854B5C8L}, {2UL, 0x2420B9ECL, 0UL, 0x2420B9ECL, 2UL, 0xE854B5C8L}, {2UL, 0x2420B9ECL, 0UL, 0x2420B9ECL, 2UL, 0xE854B5C8L}, {2UL, 0x2420B9ECL, 0UL, 0x2420B9ECL, 2UL, 0xE854B5C8L}}};
        unsigned char ***l_608 = &g_333;
        int l_610 = 0x52992729L;
        int **l_611 = &g_106;
        int *l_620 = &g_19;
        int i, j, k;
        (*l_611) = (p_50 = ((*p_53) = ((*g_76) = &l_598)));


        ;

        ;
        (*p_53) = (void*)0;
        (*p_53) = l_620;
    }
    else
    {
        unsigned char **l_626 = &g_128;
        short **l_634 = &g_596;
        int *l_647 = &g_644;
        int l_649 = (-8L);
        short l_677 = 0L;
        int *l_702 = &l_478;
        char l_827 = 0L;
        char l_836 = 0L;
        short l_861 = 0L;
        char l_863[9][10][2] = {{{0xDEL, 0x02L}, {0xDEL, 0x02L}, {0xDEL, 0x02L}, {0xDEL, 0x02L}, {0xDEL, 0x02L}, {0xDEL, 0x02L}, {0xDEL, 0x02L}, {0xDEL, 0x02L}, {0xDEL, 0x02L}, {0xDEL, 0x02L}}, {{0xDEL, 0x02L}, {0xDEL, 0x02L}, {0xDEL, 0x02L}, {0xDEL, 0x02L}, {0xDEL, 0x02L}, {0xDEL, 0x02L}, {0xDEL, 0x02L}, {0xDEL, 0x02L}, {0xDEL, 0x02L}, {0xDEL, 0x02L}}, {{0xDEL, 0x02L}, {0xDEL, 0x02L}, {0xDEL, 0x02L}, {0xDEL, 0x02L}, {0xDEL, 0x02L}, {0xDEL, 0x02L}, {0xDEL, 0x02L}, {0xDEL, 0x02L}, {0xDEL, 0x02L}, {0xDEL, 0x02L}}, {{0xDEL, 0x02L}, {0xDEL, 0x02L}, {0xDEL, 0x02L}, {0xDEL, 0x02L}, {0xDEL, 0x02L}, {0xDEL, 0x02L}, {0xDEL, 0x02L}, {0xDEL, 0x02L}, {0xDEL, 0x02L}, {0xDEL, 0x02L}}, {{0xDEL, 0x02L}, {0xDEL, 0x02L}, {0xDEL, 0x02L}, {0xDEL, 0x02L}, {0xDEL, 0x02L}, {0xDEL, 0x02L}, {0xDEL, 0x02L}, {0xDEL, 0x02L}, {0xDEL, 0x02L}, {0xDEL, 0x02L}}, {{0xDEL, 0x02L}, {0xDEL, 0x02L}, {0xDEL, 0x02L}, {0xDEL, 0x02L}, {0xDEL, 0x02L}, {0xDEL, 0x02L}, {0xDEL, 0x02L}, {0xDEL, 0x02L}, {0xDEL, 0x02L}, {0xDEL, 0x02L}}, {{0xDEL, 0x02L}, {0xDEL, 0x02L}, {0xDEL, 0x02L}, {0xDEL, 0x02L}, {0xDEL, 0x02L}, {0xDEL, 0x02L}, {0xDEL, 0x02L}, {0xDEL, 0x02L}, {0xDEL, 0x02L}, {0xDEL, 0x02L}}, {{0xDEL, 0x02L}, {0xDEL, 0x02L}, {0xDEL, 0x02L}, {0xDEL, 0x02L}, {0xDEL, 0x02L}, {0xDEL, 0x02L}, {0xDEL, 0x02L}, {0xDEL, 0x02L}, {0xDEL, 0x02L}, {0xDEL, 0x02L}}, {{0xDEL, 0x02L}, {0xDEL, 0x02L}, {0xDEL, 0x02L}, {0xDEL, 0x02L}, {0xDEL, 0x02L}, {0xDEL, 0x02L}, {0xDEL, 0x02L}, {0xDEL, 0x02L}, {0xDEL, 0x02L}, {0xDEL, 0x02L}}};
        int l_886 = 0xC63CAF19L;
        int i, j, k;
    }


    ;

    ;
    (*g_808) = (*p_53);
    return g_889;





}







static short func_56(int * p_57, char * p_58)
{
    int ***l_457 = &g_76;
    int *l_458 = &g_19;
    int l_459[2][5][6] = {{{1L, 1L, 0x798CB993L, 0x7F54ED38L, 0L, 0xFB769225L}, {1L, 1L, 0x798CB993L, 0x7F54ED38L, 0L, 0xFB769225L}, {1L, 1L, 0x798CB993L, 0x7F54ED38L, 0L, 0xFB769225L}, {1L, 1L, 0x798CB993L, 0x7F54ED38L, 0L, 0xFB769225L}, {1L, 1L, 0x798CB993L, 0x7F54ED38L, 0L, 0xFB769225L}}, {{1L, 1L, 0x798CB993L, 0x7F54ED38L, 0L, 0xFB769225L}, {1L, 1L, 0x798CB993L, 0x7F54ED38L, 0L, 0xFB769225L}, {1L, 1L, 0x798CB993L, 0x7F54ED38L, 0L, 0xFB769225L}, {1L, 1L, 0x798CB993L, 0x7F54ED38L, 0L, 0xFB769225L}, {1L, 1L, 0x798CB993L, 0x7F54ED38L, 0L, 0xFB769225L}}};
    int i, j, k;
    (*l_458) = (l_457 != l_457);
    (**l_457) = p_57;


    (**l_457) = l_458;
    return l_459[0][0][0];
}







static char func_63(unsigned short p_64, unsigned char p_65, int p_66)
{
    int l_173 = 0xDB56AC2CL;
    int **l_178[1];
    unsigned short l_186 = 0UL;
    unsigned *l_188[1];
    unsigned **l_187 = &l_188[0];
    unsigned l_270 = 1UL;
    unsigned l_329 = 0xCB21D4D2L;
    unsigned char **l_330 = &g_128;
    unsigned short l_342 = 65535UL;
    unsigned short l_351 = 65535UL;
    short l_370 = 0x8FB2L;
    short **l_378 = (void*)0;
    unsigned short l_401[9] = {0UL, 0UL, 9UL, 0UL, 0UL, 9UL, 0UL, 0UL, 9UL};
    int l_439 = 1L;
    int l_448 = (-5L);
    int i;
    for (i = 0; i < 1; i++)
        l_178[i] = (void*)0;
    for (i = 0; i < 1; i++)
        l_188[i] = &g_9;
    for (p_64 = 1; (p_64 <= 5); p_64 += 1)
    {
        int **l_168 = (void*)0;
        int *l_177 = &g_19;
        unsigned short *l_179 = &g_180;
        unsigned **l_189 = &l_188[0];
        unsigned l_240 = 2UL;
        unsigned short l_294 = 0x114BL;
        char l_306 = (-6L);
        int l_307 = 0xD9BC29E1L;
        (*l_177) = (safe_rshift_func_int8_t_s_s((safe_add_func_uint8_t_u_u(((-1L) && (p_66 < (*g_128))), (p_65 = (p_66 | (l_168 == &g_106))))), (safe_rshift_func_int16_t_s_u(((((((safe_mod_func_int32_t_s_s((l_173 == (safe_sub_func_uint32_t_u_u((1UL & ((safe_unary_minus_func_int32_t_s(l_173)) , l_173)), g_151[2][0][0]))), p_66)) >= g_101) > g_19) | l_173) < 1L) >= 0xCFL), l_173))));
        (*g_76) = ((+((p_66 ^ p_64) | (((*l_179) = (((g_101 , (void*)0) != l_178[0]) , ((void*)0 != l_177))) != p_65))) , &p_66);
        for (g_180 = 0; (g_180 <= 5); g_180 += 1)
        {
            int l_217 = 1L;
            short *l_222 = (void*)0;
            int i, j;
        }
    }


lbl_339:
    for (g_207 = (-30); (g_207 <= 4); g_207++)
    {
        (*g_76) = &g_19;
        if (p_64)
            continue;
    }
    for (g_92 = 0; (g_92 <= 33); g_92++)
    {
        unsigned l_324 = 0x3872AEA8L;
        unsigned short *l_325[8] = {&g_180, &l_186, &g_180, &l_186, &g_180, &l_186, &g_180, &l_186};
        int *l_336[5][2] = {{&g_13[3], &g_19}, {&g_13[3], &g_19}, {&g_13[3], &g_19}, {&g_13[3], &g_19}, {&g_13[3], &g_19}};
        unsigned l_381 = 0x54519BFFL;
        int *l_415[7] = {&g_13[3], &l_173, &g_13[3], &l_173, &g_13[3], &l_173, &g_13[3]};
        int i, j;
        if (((safe_sub_func_uint8_t_u_u((*g_128), g_151[2][1][3])) >= (((safe_add_func_uint8_t_u_u(((((safe_add_func_int16_t_s_s((safe_lshift_func_int8_t_s_s(p_66, g_13[3])), (l_324 , (((0x65FB0949L <= 0L) || ((p_64 = g_29[0][3][2]) != ((safe_rshift_func_int8_t_s_u(p_66, 4)) | p_65))) || l_324)))) , p_65) > p_66) <= l_324), g_33)) && p_66) & p_66)))
        {
            int l_328 = 0xEE4A3E96L;
            int *l_335 = &g_19;
            int l_348 = 2L;
            l_329 = l_328;
            if (p_65)
                continue;
            for (g_207 = 2; (g_207 <= 7); g_207 += 1)
            {
                unsigned char ***l_331 = (void*)0;
                unsigned char ***l_332[8] = {&l_330, &l_330, &l_330, &l_330, &l_330, &l_330, &l_330, &l_330};
                int *l_337 = &g_13[3];
                int l_357 = (-1L);
                int i;
                g_333 = l_330;
                if (p_66)
                {
                    int *l_338 = (void*)0;
                    for (l_173 = 7; (l_173 >= 0); l_173 -= 1)
                    {
                        int *l_334[8][8] = {{&l_173, &l_173, &l_173, &g_13[9], &g_13[3], (void*)0, (void*)0, &l_173}, {&l_173, &l_173, &l_173, &g_13[9], &g_13[3], (void*)0, (void*)0, &l_173}, {&l_173, &l_173, &l_173, &g_13[9], &g_13[3], (void*)0, (void*)0, &l_173}, {&l_173, &l_173, &l_173, &g_13[9], &g_13[3], (void*)0, (void*)0, &l_173}, {&l_173, &l_173, &l_173, &g_13[9], &g_13[3], (void*)0, (void*)0, &l_173}, {&l_173, &l_173, &l_173, &g_13[9], &g_13[3], (void*)0, (void*)0, &l_173}, {&l_173, &l_173, &l_173, &g_13[9], &g_13[3], (void*)0, (void*)0, &l_173}, {&l_173, &l_173, &l_173, &g_13[9], &g_13[3], (void*)0, (void*)0, &l_173}};
                        int i, j;
                        (*g_76) = l_334[2][5];
                        (*g_76) = (void*)0;
                        (*g_76) = (l_328 , &p_66);
                    }
                    l_335 = &p_66;

                    ;
                    for (p_64 = 0; (p_64 <= 5); p_64 += 1)
                    {
                        int i, j;
                        (*l_335) = l_324;
                        g_77[p_64][p_64] = l_336[1][0];
                    }
                    l_338 = l_337;

                    ;
                }
                else
                {
                    if (g_92)
                        goto lbl_339;
                    if (p_66)
                        break;
                    for (l_270 = 0; (l_270 <= 0); l_270 += 1)
                    {
                        int i, j;
                        g_77[(l_270 + 5)][(l_270 + 4)] = &p_66;
                        (*g_76) = (void*)0;
                        (*g_76) = &p_66;
                    }
                }
                if ((p_66 , p_65))
                {
                    int i;
                    if (((*l_335) > ((*l_335) & p_66)))
                    {
                        g_340 = g_340;
                    }
                    else
                    {
                        (*l_335) = p_66;
                        (*l_335) = (l_342 >= p_66);
                        (*g_76) = &p_66;
                    }
                    if ((*l_335))
                        continue;
                }
                else
                {
                    int *l_343 = &g_13[3];
                    (*g_76) = l_343;
                    for (g_33 = 1; (g_33 <= 7); g_33 += 1)
                    {
                        int l_356 = 0xF2B2C802L;
                        l_357 = ((p_66 , g_99) || ((safe_mod_func_int32_t_s_s((l_356 = ((((safe_mod_func_int32_t_s_s(l_348, (p_66 = ((safe_mod_func_int16_t_s_s(g_151[2][0][0], (p_64 = l_351))) & (safe_add_func_uint32_t_u_u(p_65, (-1L))))))) >= (l_348 | (safe_add_func_int8_t_s_s((l_356 || 9UL), 0xCBL)))) , (*l_343)) & p_65)), 0xF15121DDL)) || (-3L)));
                        l_343 = &p_66;

                        ;
                    }

                    ;
                }
            }

            ;
            for (p_65 = (-10); (p_65 != 17); ++p_65)
            {
                int *l_360 = &g_13[6];
                l_335 = l_360;

                ;
                (*g_76) = &p_66;
                if (((p_66 != 5UL) == ((p_65 == p_65) && 9UL)))
                {
                    for (l_329 = 23; (l_329 > 45); l_329 = safe_add_func_int16_t_s_s(l_329, 5))
                    {
                        (*g_76) = &g_13[3];
                    }
                    p_66 = (*l_360);
                }
                else
                {
                    unsigned l_365 = 0UL;
                    for (g_19 = 0; (g_19 > (-6)); g_19 = safe_sub_func_uint8_t_u_u(g_19, 9))
                    {
                        unsigned l_368 = 0x0CAE74D2L;
                        int l_369 = 1L;
                        l_369 = (p_66 = (l_365 ^ (safe_add_func_int8_t_s_s((**g_340), l_368))));
                        if (p_66)
                            continue;
                        l_360 = &g_13[3];
                    }
                }
            }

            ;
        }
        else
        {
            unsigned l_373[10];
            unsigned char *l_374 = &g_375;
            short *l_380 = &g_99;
            short **l_379 = &l_380;
            int l_400 = 0x4657323EL;
            int i;
            for (i = 0; i < 10; i++)
                l_373[i] = 0xA248BC0DL;
            p_66 = l_370;
            if (((safe_sub_func_uint32_t_u_u(((*g_128) >= ((*l_374) = (0xA0FCL | (g_92 < l_373[6])))), ((*g_341) >= p_66))) , 0xEDDA966EL))
            {
                int l_393 = 0xE4A1E357L;
                for (g_99 = (-29); (g_99 >= (-11)); g_99 = safe_add_func_int16_t_s_s(g_99, 8))
                {
                    unsigned l_392 = 18446744073709551610UL;
                    if (p_66)
                        break;
                    if ((g_99 > (0x28L | (p_65 == p_66))))
                    {
                        l_379 = l_378;

                        ;
                        if (l_381)
                            continue;
                    }
                    else
                    {
                        l_393 = ((safe_lshift_func_int8_t_s_s((((p_65 > (safe_sub_func_uint16_t_u_u((g_183 = ((safe_rshift_func_uint16_t_u_s((((safe_rshift_func_uint8_t_u_u((safe_lshift_func_uint16_t_u_s((((((**g_340) , (p_66 , (((**g_340) = (*g_341)) >= (&l_373[6] == ((*l_187) = ((l_392 && g_183) , (*l_187))))))) == ((0x87L & 0xF3L) > l_392)) | p_64) > 0x92L), 5)), 4)) && p_65) && 0x1CB64A0EL), 8)) || l_373[7])), p_64))) & p_64) , l_392), p_65)) && p_66);
                        p_66 = 0x081F2127L;
                        l_336[2][1] = &g_13[3];
                    }
                    l_393 = (p_66 = 0L);
                }

                ;
            }
            else
            {
                int l_406 = 0L;
                int l_411[2];
                int l_412 = 0x94A9BF09L;
                unsigned char *l_413 = &g_414[1];
                int i;
                for (i = 0; i < 2; i++)
                    l_411[i] = 0x9E84D747L;
                p_66 = (1UL <= (g_13[3] | ((safe_mod_func_uint8_t_u_u((safe_sub_func_uint8_t_u_u((g_375 = 251UL), ((g_29[0][3][1] , ((p_64 > ((~((*g_341) = (safe_lshift_func_uint8_t_u_u((g_239[1][1] > ((l_400 = ((void*)0 != l_336[1][0])) , p_66)), (*g_128))))) , g_31)) , p_65)) && l_373[6]))), (**g_333))) > g_31)));
                p_66 = (l_401[3] = 0x161A77D7L);
                (*g_76) = (((((*l_413) = (+((*l_374) = (((safe_add_func_int32_t_s_s((safe_mod_func_uint32_t_u_u(((p_65 < g_183) > (*g_128)), (l_406 , (l_411[1] = ((p_65 >= (l_406 = 0x77B2ADA2L)) | ((!(safe_lshift_func_uint8_t_u_s((safe_mod_func_uint8_t_u_u((~(**g_333)), (4294967295UL || p_65))), 1))) < (-1L))))))), l_412)) | (-10L)) >= 6UL)))) , (*g_341)) && l_411[1]) , (void*)0);
            }

            ;
        }
        l_415[1] = l_336[1][0];


        for (p_64 = 1; (p_64 <= 9); p_64 += 1)
        {
            short l_421[8][1] = {{0x8145L}, {0x8145L}, {0x8145L}, {0x8145L}, {0x8145L}, {0x8145L}, {0x8145L}, {0x8145L}};
            int *l_442 = &l_173;
            unsigned l_451 = 4294967294UL;
            int i, j;
            for (g_101 = 0; (g_101 <= 9); g_101 += 1)
            {
                short l_416 = 0L;
                int l_420 = 0x7526F2B3L;
                int l_422 = 0xDA62A067L;
                int *l_424[10] = {&g_19, &g_19, &g_19, &g_19, &g_19, &g_19, &g_19, &g_19, &g_19, &g_19};
                int i;
                for (g_375 = 0; (g_375 <= 9); g_375 += 1)
                {
                    int *l_423 = &l_173;
                    int i;
                    if (g_414[g_101])
                    {
                        int l_419 = 0x6F4A3E52L;
                        l_422 = (((l_416 , l_416) || (((0x8CL ^ (p_66 == ((p_66 > 0xDB157289L) , g_414[1]))) & (((l_420 = (((g_414[g_101] , (((((g_180 = (~g_414[4])) > l_416) != g_19) | 0xF819L) , g_414[9])) , (*g_341)) && l_419)) | l_421[0][0]) == 0L)) , l_421[7][0])) | g_29[0][3][2]);
                        if (p_65)
                            break;
                    }
                    else
                    {
                        (*g_76) = l_423;
                        (*g_76) = &g_13[2];
                        if (l_420)
                            continue;
                    }
                    (*g_76) = l_336[0][1];
                    l_424[6] = ((*g_76) = &p_66);
                }


                for (l_186 = 1; (l_186 <= 9); l_186 += 1)
                {
                    char l_425[7] = {0xA4L, 0xA4L, (-7L), 0xA4L, 0xA4L, (-7L), 0xA4L};
                    int ***l_430[10];
                    int ****l_429 = &l_430[6];
                    int i;
                    for (i = 0; i < 10; i++)
                        l_430[i] = &l_178[0];
                    for (l_351 = 0; (l_351 <= 9); l_351 += 1)
                    {
                        int l_440 = 0L;
                        int l_441[2];
                        int i;
                        for (i = 0; i < 2; i++)
                            l_441[i] = 0x741AE26AL;
                        p_66 = g_414[p_64];
                        l_425[0] = g_414[p_64];
                        l_442 = (((safe_sub_func_uint32_t_u_u((l_441[1] = (((((g_428 == l_429) >= ((g_180 = (((l_440 = (safe_sub_func_int16_t_s_s((safe_sub_func_int8_t_s_s(0x81L, (safe_lshift_func_uint16_t_u_u(((safe_sub_func_int16_t_s_s(p_65, p_66)) , (l_421[0][0] != (**g_333))), 8)))), (l_439 >= g_207)))) > p_65) , 65527UL)) >= g_101)) < 0xAA673F19L) ^ p_64) , l_440)), l_421[0][0])) && p_66) , &p_66);

                        ;
                    }
                }
                p_66 = 0xFF959A93L;
                (*l_442) = (-1L);
            }

            ;
            for (g_180 = 1; (g_180 <= 9); g_180 += 1)
            {
                unsigned char *l_447[1][8][8] = {{{&g_375, (void*)0, (void*)0, &g_375, &g_92, &g_414[3], &g_92, (void*)0}, {&g_375, (void*)0, (void*)0, &g_375, &g_92, &g_414[3], &g_92, (void*)0}, {&g_375, (void*)0, (void*)0, &g_375, &g_92, &g_414[3], &g_92, (void*)0}, {&g_375, (void*)0, (void*)0, &g_375, &g_92, &g_414[3], &g_92, (void*)0}, {&g_375, (void*)0, (void*)0, &g_375, &g_92, &g_414[3], &g_92, (void*)0}, {&g_375, (void*)0, (void*)0, &g_375, &g_92, &g_414[3], &g_92, (void*)0}, {&g_375, (void*)0, (void*)0, &g_375, &g_92, &g_414[3], &g_92, (void*)0}, {&g_375, (void*)0, (void*)0, &g_375, &g_92, &g_414[3], &g_92, (void*)0}}};
                short l_452 = 0x6B85L;
                int *l_453 = &g_19;
                int i, j, k;
                l_453 = ((((safe_sub_func_uint8_t_u_u((g_414[g_180] & (*g_341)), (((p_66 = ((g_183 = 9UL) == g_29[0][3][2])) , (l_448 = (safe_sub_func_uint16_t_u_u(0x61B4L, (*l_442))))) , p_64))) , ((((p_66 != (g_207 = (l_451 = (safe_rshift_func_uint8_t_u_u(p_66, 4))))) || 1UL) ^ l_452) >= (-1L))) <= g_414[g_180]) , (void*)0);

                ;
                (*g_76) = l_442;
            }
            for (l_439 = 9; (l_439 >= 0); l_439 -= 1)
            {
                unsigned l_454 = 0xF3777CEDL;
                l_454 = 0x0506A090L;
                (*g_76) = (void*)0;
                (*g_76) = g_455[1][4][5];
            }
        }
    }
    (*g_76) = &p_66;
    return (*g_341);


}







static unsigned * func_69(int ** p_70, int ** p_71, short p_72, int p_73, int p_74)
{
    int *l_84 = &g_13[4];
    unsigned *l_85 = (void*)0;
    unsigned *l_86[7] = {(void*)0, &g_29[0][3][2], (void*)0, &g_29[0][3][2], (void*)0, &g_29[0][3][2], (void*)0};
    unsigned char *l_91[6] = {&g_92, &g_92, &g_92, &g_92, &g_92, &g_92};
    int l_93 = 0L;
    short *l_98 = &g_99;
    short *l_100 = &g_101;
    unsigned short l_110 = 0x5DEAL;
    unsigned char l_130 = 0UL;
    unsigned char *l_133 = &l_130;
    int *l_160 = &g_13[3];
    int i;
    l_84 = l_84;
    if (((g_29[0][3][2] = 18446744073709551615UL) , ((*l_84) == (safe_mod_func_uint16_t_u_u((safe_lshift_func_int16_t_s_u(((*l_100) = (((&g_76 == (((l_93 = g_29[1][3][0]) , (safe_mod_func_uint16_t_u_u((safe_add_func_uint32_t_u_u(((*l_84) ^ (g_31 | ((*l_84) & (((*l_98) = ((+p_73) > (*l_84))) ^ p_72)))), p_72)), 0x8D86L))) , (void*)0)) | (*l_84)) , 1L)), p_74)), p_72)))))
    {
        (*p_71) = (*p_71);
        for (p_73 = 0; (p_73 > 5); p_73++)
        {
            int l_104 = 0x6B58F18CL;
            l_93 = l_104;
        }
    }
    else
    {
        unsigned l_109 = 0x95214660L;
        int l_112 = 0L;
        int l_121 = 0x78960E8AL;
        unsigned char *l_126 = &g_92;
        unsigned char **l_127[9] = {&l_91[1], (void*)0, &l_91[1], (void*)0, &l_91[1], (void*)0, &l_91[1], (void*)0, &l_91[1]};
        unsigned char *l_129[5] = {&g_92, (void*)0, &g_92, (void*)0, &g_92};
        int l_131 = 0x74A6A36EL;
        unsigned l_132[7];
        int *l_134 = (void*)0;
        int *l_135[7] = {&l_121, &l_121, &l_131, &l_121, &l_121, &l_131, &l_121};
        int i;
        for (i = 0; i < 7; i++)
            l_132[i] = 18446744073709551610UL;
        if ((*l_84))
        {
            return &g_9;


        }
        else
        {
            int **l_105[8] = {&l_84, &l_84, (void*)0, &l_84, &l_84, (void*)0, &l_84, &l_84};
            int i;
            g_106 = ((*g_76) = (*g_76));

            ;
            for (g_101 = (-15); (g_101 == (-2)); ++g_101)
            {
                int l_111 = 0x48E3606EL;
                l_110 = l_109;
                (*g_76) = (*p_71);
                l_112 = l_111;
            }
        }

        ;
        for (g_33 = 0; (g_33 <= 2); g_33 += 1)
        {
            int i;
            return l_86[g_33];


        }
        l_93 = (safe_sub_func_int32_t_s_s((((((g_92 , ((safe_lshift_func_int16_t_s_u((!(safe_sub_func_uint16_t_u_u((safe_sub_func_int32_t_s_s((l_112 = l_109), l_121)), (safe_sub_func_int8_t_s_s((g_13[5] > (((*l_126) = ((((safe_sub_func_int8_t_s_s(((p_72 != ((((g_128 = l_126) != (l_129[0] = &g_92)) <= l_130) > (+251UL))) , p_72), g_99)) >= p_73) != 250UL) , 0UL)) , (*l_84))), l_131))))), l_131)) <= l_132[3])) && 1L) , l_133) != &l_130) < (*l_84)), (*l_84)));
        for (l_131 = 6; (l_131 >= 1); l_131 -= 1)
        {
            int l_136 = 0xDBDE630CL;
            int l_140 = 0L;
            unsigned *l_141[6];
            short l_142[8] = {0xACFDL, 0x08C7L, 0xACFDL, 0x08C7L, 0xACFDL, 0x08C7L, 0xACFDL, 0x08C7L};
            short l_143 = (-7L);
            char *l_150 = &g_151[2][0][0];
            int i;
            for (i = 0; i < 6; i++)
                l_141[i] = &g_33;
            for (g_101 = 0; (g_101 <= 6); g_101 += 1)
            {
                int i;
                (*p_71) = l_135[g_101];
                l_136 = (((p_74 < g_99) & g_101) != (p_73 , ((*l_126) = 249UL)));
            }
            if (l_136)
                continue;
            if ((p_74 || p_72))
            {
                unsigned l_139[10] = {0x667A4CD6L, 4294967295UL, 0x667A4CD6L, 4294967295UL, 0x667A4CD6L, 4294967295UL, 0x667A4CD6L, 4294967295UL, 0x667A4CD6L, 4294967295UL};
                int i;
                if ((l_139[6] = ((safe_lshift_func_int16_t_s_s(g_92, 13)) , l_136)))
                {
                    l_136 = l_140;
                    return l_141[3];



                }
                else
                {
                    l_136 = l_142[0];
                }
                l_143 = (*l_84);
            }
            else
            {
                unsigned short l_155 = 1UL;
                int l_158 = 0x0DD38C2CL;
                char l_159 = 1L;
                for (l_93 = 0; (l_93 >= 23); l_93 = safe_add_func_int32_t_s_s(l_93, 8))
                {
                    char *l_148 = &g_31;
                    char **l_149[7] = {&l_148, &l_148, &l_148, &l_148, &l_148, &l_148, &l_148};
                    int l_156 = 0xE4C99D68L;
                    int l_157 = 0x46FE8B5CL;
                    int i;
                    l_159 = (g_9 , (l_136 = (safe_mod_func_uint32_t_u_u((p_74 && ((((((l_150 = l_148) != l_133) >= ((*l_84) == (l_158 = ((safe_add_func_int8_t_s_s(((safe_unary_minus_func_int16_t_s(((*l_98) = ((p_73 || (p_72 , ((l_155 , l_155) > l_156))) < 65535UL)))) , g_33), l_157)) && l_136)))) != p_74) , 0L) | (-6L))), 4294967286UL))));
                }

                ;
            }

            ;
        }


    }


    ;
    (*g_76) = &g_19;
    (*g_76) = l_160;
    return &g_33;


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
    for (i = 0; i < 10; i++)
    {
        transparent_crc(g_13[i], "g_13[i]", print_hash_value);
        if (print_hash_value) printf("index = [%d]\n", i);

    }
    transparent_crc(g_19, "g_19", print_hash_value);
    for (i = 0; i < 3; i++)
    {
        for (j = 0; j < 4; j++)
        {
            for (k = 0; k < 3; k++)
            {
                transparent_crc(g_29[i][j][k], "g_29[i][j][k]", print_hash_value);
                if (print_hash_value) printf("index = [%d][%d][%d]\n", i, j, k);

            }
        }
    }
    transparent_crc(g_31, "g_31", print_hash_value);
    transparent_crc(g_33, "g_33", print_hash_value);
    transparent_crc(g_92, "g_92", print_hash_value);
    transparent_crc(g_99, "g_99", print_hash_value);
    transparent_crc(g_101, "g_101", print_hash_value);
    for (i = 0; i < 6; i++)
    {
        for (j = 0; j < 6; j++)
        {
            for (k = 0; k < 5; k++)
            {
                transparent_crc(g_151[i][j][k], "g_151[i][j][k]", print_hash_value);
                if (print_hash_value) printf("index = [%d][%d][%d]\n", i, j, k);

            }
        }
    }
    transparent_crc(g_180, "g_180", print_hash_value);
    transparent_crc(g_183, "g_183", print_hash_value);
    transparent_crc(g_207, "g_207", print_hash_value);
    for (i = 0; i < 5; i++)
    {
        for (j = 0; j < 6; j++)
        {
            transparent_crc(g_239[i][j], "g_239[i][j]", print_hash_value);
            if (print_hash_value) printf("index = [%d][%d]\n", i, j);

        }
    }
    transparent_crc(g_375, "g_375", print_hash_value);
    for (i = 0; i < 10; i++)
    {
        transparent_crc(g_414[i], "g_414[i]", print_hash_value);
        if (print_hash_value) printf("index = [%d]\n", i);

    }
    transparent_crc(g_644, "g_644", print_hash_value);
    transparent_crc(g_680, "g_680", print_hash_value);
    for (i = 0; i < 2; i++)
    {
        transparent_crc(g_772[i], "g_772[i]", print_hash_value);
        if (print_hash_value) printf("index = [%d]\n", i);

    }
    transparent_crc(g_784, "g_784", print_hash_value);
    transparent_crc(g_796, "g_796", print_hash_value);
    transparent_crc(g_934, "g_934", print_hash_value);
    transparent_crc(g_1100, "g_1100", print_hash_value);
    transparent_crc(g_1218, "g_1218", print_hash_value);
    for (i = 0; i < 6; i++)
    {
        transparent_crc(g_1220[i], "g_1220[i]", print_hash_value);
        if (print_hash_value) printf("index = [%d]\n", i);

    }
    transparent_crc(g_1224, "g_1224", print_hash_value);
    for (i = 0; i < 2; i++)
    {
        for (j = 0; j < 1; j++)
        {
            transparent_crc(g_1254[i][j], "g_1254[i][j]", print_hash_value);
            if (print_hash_value) printf("index = [%d][%d]\n", i, j);

        }
    }
    transparent_crc(g_1259, "g_1259", print_hash_value);
    transparent_crc(g_1275, "g_1275", print_hash_value);
    transparent_crc(g_1312, "g_1312", print_hash_value);
    transparent_crc(g_1351, "g_1351", print_hash_value);
    platform_main_end(crc32_context ^ 0xFFFFFFFFUL, print_hash_value);
    return 0;
}
