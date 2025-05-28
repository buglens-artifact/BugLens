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



static short g_12 = 0x9AE7L;
static int g_15 = (-7L);
static int g_23[10][3][2] = {{{(-7L), 0L}, {(-7L), 0L}, {(-7L), 0L}}, {{(-7L), 0L}, {(-7L), 0L}, {(-7L), 0L}}, {{(-7L), 0L}, {(-7L), 0L}, {(-7L), 0L}}, {{(-7L), 0L}, {(-7L), 0L}, {(-7L), 0L}}, {{(-7L), 0L}, {(-7L), 0L}, {(-7L), 0L}}, {{(-7L), 0L}, {(-7L), 0L}, {(-7L), 0L}}, {{(-7L), 0L}, {(-7L), 0L}, {(-7L), 0L}}, {{(-7L), 0L}, {(-7L), 0L}, {(-7L), 0L}}, {{(-7L), 0L}, {(-7L), 0L}, {(-7L), 0L}}, {{(-7L), 0L}, {(-7L), 0L}, {(-7L), 0L}}};
static int *g_22[1] = {&g_23[7][2][0]};
static unsigned long long g_77[6][7] = {{0UL, 0x45D86B46617F50B2LL, 0x5334EEAE813F23DCLL, 0x2A555199DCED91EELL, 0x5F9727A2C14779B9LL, 0x331A2D7867E7C572LL, 0UL}, {0UL, 0x45D86B46617F50B2LL, 0x5334EEAE813F23DCLL, 0x2A555199DCED91EELL, 0x5F9727A2C14779B9LL, 0x331A2D7867E7C572LL, 0UL}, {0UL, 0x45D86B46617F50B2LL, 0x5334EEAE813F23DCLL, 0x2A555199DCED91EELL, 0x5F9727A2C14779B9LL, 0x331A2D7867E7C572LL, 0UL}, {0UL, 0x45D86B46617F50B2LL, 0x5334EEAE813F23DCLL, 0x2A555199DCED91EELL, 0x5F9727A2C14779B9LL, 0x331A2D7867E7C572LL, 0UL}, {0UL, 0x45D86B46617F50B2LL, 0x5334EEAE813F23DCLL, 0x2A555199DCED91EELL, 0x5F9727A2C14779B9LL, 0x331A2D7867E7C572LL, 0UL}, {0UL, 0x45D86B46617F50B2LL, 0x5334EEAE813F23DCLL, 0x2A555199DCED91EELL, 0x5F9727A2C14779B9LL, 0x331A2D7867E7C572LL, 0UL}};
static char g_83 = 8L;
static int g_90 = 0xD98EA379L;
static int g_93 = 0xD58AA24FL;
static int *g_112 = &g_93;
static int g_140 = 0L;
static unsigned char g_147 = 0x81L;
static unsigned char g_151 = 0x92L;
static int g_167 = 0x5F17F0F5L;
static unsigned g_188 = 1UL;
static long long g_232 = 0x5ED5C099B40CF0C4LL;
static long long *g_231[9] = {&g_232, (void*)0, &g_232, (void*)0, &g_232, (void*)0, &g_232, (void*)0, &g_232};
static long long g_234 = 0x97B53C18DBF7E247LL;
static long long **g_263[3][7][2] = {{{&g_231[5], &g_231[5]}, {&g_231[5], &g_231[5]}, {&g_231[5], &g_231[5]}, {&g_231[5], &g_231[5]}, {&g_231[5], &g_231[5]}, {&g_231[5], &g_231[5]}, {&g_231[5], &g_231[5]}}, {{&g_231[5], &g_231[5]}, {&g_231[5], &g_231[5]}, {&g_231[5], &g_231[5]}, {&g_231[5], &g_231[5]}, {&g_231[5], &g_231[5]}, {&g_231[5], &g_231[5]}, {&g_231[5], &g_231[5]}}, {{&g_231[5], &g_231[5]}, {&g_231[5], &g_231[5]}, {&g_231[5], &g_231[5]}, {&g_231[5], &g_231[5]}, {&g_231[5], &g_231[5]}, {&g_231[5], &g_231[5]}, {&g_231[5], &g_231[5]}}};
static short g_273 = 0xC410L;
static unsigned long long *g_280 = (void*)0;
static unsigned long long **g_279 = &g_280;
static int **g_286 = &g_112;
static unsigned g_354 = 1UL;
static unsigned short g_410[9][5][5] = {{{0x069DL, 0xE602L, 0xFD57L, 0xC1A5L, 8UL}, {0x069DL, 0xE602L, 0xFD57L, 0xC1A5L, 8UL}, {0x069DL, 0xE602L, 0xFD57L, 0xC1A5L, 8UL}, {0x069DL, 0xE602L, 0xFD57L, 0xC1A5L, 8UL}, {0x069DL, 0xE602L, 0xFD57L, 0xC1A5L, 8UL}}, {{0x069DL, 0xE602L, 0xFD57L, 0xC1A5L, 8UL}, {0x069DL, 0xE602L, 0xFD57L, 0xC1A5L, 8UL}, {0x069DL, 0xE602L, 0xFD57L, 0xC1A5L, 8UL}, {0x069DL, 0xE602L, 0xFD57L, 0xC1A5L, 8UL}, {0x069DL, 0xE602L, 0xFD57L, 0xC1A5L, 8UL}}, {{0x069DL, 0xE602L, 0xFD57L, 0xC1A5L, 8UL}, {0x069DL, 0xE602L, 0xFD57L, 0xC1A5L, 8UL}, {0x069DL, 0xE602L, 0xFD57L, 0xC1A5L, 8UL}, {0x069DL, 0xE602L, 0xFD57L, 0xC1A5L, 8UL}, {0x069DL, 0xE602L, 0xFD57L, 0xC1A5L, 8UL}}, {{0x069DL, 0xE602L, 0xFD57L, 0xC1A5L, 8UL}, {0x069DL, 0xE602L, 0xFD57L, 0xC1A5L, 8UL}, {0x069DL, 0xE602L, 0xFD57L, 0xC1A5L, 8UL}, {0x069DL, 0xE602L, 0xFD57L, 0xC1A5L, 8UL}, {0x069DL, 0xE602L, 0xFD57L, 0xC1A5L, 8UL}}, {{0x069DL, 0xE602L, 0xFD57L, 0xC1A5L, 8UL}, {0x069DL, 0xE602L, 0xFD57L, 0xC1A5L, 8UL}, {0x069DL, 0xE602L, 0xFD57L, 0xC1A5L, 8UL}, {0x069DL, 0xE602L, 0xFD57L, 0xC1A5L, 8UL}, {0x069DL, 0xE602L, 0xFD57L, 0xC1A5L, 8UL}}, {{0x069DL, 0xE602L, 0xFD57L, 0xC1A5L, 8UL}, {0x069DL, 0xE602L, 0xFD57L, 0xC1A5L, 8UL}, {0x069DL, 0xE602L, 0xFD57L, 0xC1A5L, 8UL}, {0x069DL, 0xE602L, 0xFD57L, 0xC1A5L, 8UL}, {0x069DL, 0xE602L, 0xFD57L, 0xC1A5L, 8UL}}, {{0x069DL, 0xE602L, 0xFD57L, 0xC1A5L, 8UL}, {0x069DL, 0xE602L, 0xFD57L, 0xC1A5L, 8UL}, {0x069DL, 0xE602L, 0xFD57L, 0xC1A5L, 8UL}, {0x069DL, 0xE602L, 0xFD57L, 0xC1A5L, 8UL}, {0x069DL, 0xE602L, 0xFD57L, 0xC1A5L, 8UL}}, {{0x069DL, 0xE602L, 0xFD57L, 0xC1A5L, 8UL}, {0x069DL, 0xE602L, 0xFD57L, 0xC1A5L, 8UL}, {0x069DL, 0xE602L, 0xFD57L, 0xC1A5L, 8UL}, {0x069DL, 0xE602L, 0xFD57L, 0xC1A5L, 8UL}, {0x069DL, 0xE602L, 0xFD57L, 0xC1A5L, 8UL}}, {{0x069DL, 0xE602L, 0xFD57L, 0xC1A5L, 8UL}, {0x069DL, 0xE602L, 0xFD57L, 0xC1A5L, 8UL}, {0x069DL, 0xE602L, 0xFD57L, 0xC1A5L, 8UL}, {0x069DL, 0xE602L, 0xFD57L, 0xC1A5L, 8UL}, {0x069DL, 0xE602L, 0xFD57L, 0xC1A5L, 8UL}}};
static unsigned short *g_409 = &g_410[8][0][2];
static int ***g_411 = &g_286;
static int *g_434 = &g_90;
static int **g_433 = &g_434;
static short g_447 = 1L;
static unsigned char g_454 = 0x64L;
static int *g_456 = &g_23[7][2][0];
static int g_481 = 0xE8E31C80L;
static unsigned g_495 = 0xDC25C0CCL;
static short **g_511 = (void*)0;
static short g_532[5][4][10] = {{{0xBD60L, (-1L), 1L, 0x4A8CL, (-1L), (-1L), 0L, 0xD732L, 0L, (-1L)}, {0xBD60L, (-1L), 1L, 0x4A8CL, (-1L), (-1L), 0L, 0xD732L, 0L, (-1L)}, {0xBD60L, (-1L), 1L, 0x4A8CL, (-1L), (-1L), 0L, 0xD732L, 0L, (-1L)}, {0xBD60L, (-1L), 1L, 0x4A8CL, (-1L), (-1L), 0L, 0xD732L, 0L, (-1L)}}, {{0xBD60L, (-1L), 1L, 0x4A8CL, (-1L), (-1L), 0L, 0xD732L, 0L, (-1L)}, {0xBD60L, (-1L), 1L, 0x4A8CL, (-1L), (-1L), 0L, 0xD732L, 0L, (-1L)}, {0xBD60L, (-1L), 1L, 0x4A8CL, (-1L), (-1L), 0L, 0xD732L, 0L, (-1L)}, {0xBD60L, (-1L), 1L, 0x4A8CL, (-1L), (-1L), 0L, 0xD732L, 0L, (-1L)}}, {{0xBD60L, (-1L), 1L, 0x4A8CL, (-1L), (-1L), 0L, 0xD732L, 0L, (-1L)}, {0xBD60L, (-1L), 1L, 0x4A8CL, (-1L), (-1L), 0L, 0xD732L, 0L, (-1L)}, {0xBD60L, (-1L), 1L, 0x4A8CL, (-1L), (-1L), 0L, 0xD732L, 0L, (-1L)}, {0xBD60L, (-1L), 1L, 0x4A8CL, (-1L), (-1L), 0L, 0xD732L, 0L, (-1L)}}, {{0xBD60L, (-1L), 1L, 0x4A8CL, (-1L), (-1L), 0L, 0xD732L, 0L, (-1L)}, {0xBD60L, (-1L), 1L, 0x4A8CL, (-1L), (-1L), 0L, 0xD732L, 0L, (-1L)}, {0xBD60L, (-1L), 1L, 0x4A8CL, (-1L), (-1L), 0L, 0xD732L, 0L, (-1L)}, {0xBD60L, (-1L), 1L, 0x4A8CL, (-1L), (-1L), 0L, 0xD732L, 0L, (-1L)}}, {{0xBD60L, (-1L), 1L, 0x4A8CL, (-1L), (-1L), 0L, 0xD732L, 0L, (-1L)}, {0xBD60L, (-1L), 1L, 0x4A8CL, (-1L), (-1L), 0L, 0xD732L, 0L, (-1L)}, {0xBD60L, (-1L), 1L, 0x4A8CL, (-1L), (-1L), 0L, 0xD732L, 0L, (-1L)}, {0xBD60L, (-1L), 1L, 0x4A8CL, (-1L), (-1L), 0L, 0xD732L, 0L, (-1L)}}};
static unsigned char *g_564 = &g_147;
static unsigned char g_573 = 0xB4L;
static unsigned long long g_621[4][2][3] = {{{18446744073709551612UL, 0x717C61D6EBAC7562LL, 18446744073709551612UL}, {18446744073709551612UL, 0x717C61D6EBAC7562LL, 18446744073709551612UL}}, {{18446744073709551612UL, 0x717C61D6EBAC7562LL, 18446744073709551612UL}, {18446744073709551612UL, 0x717C61D6EBAC7562LL, 18446744073709551612UL}}, {{18446744073709551612UL, 0x717C61D6EBAC7562LL, 18446744073709551612UL}, {18446744073709551612UL, 0x717C61D6EBAC7562LL, 18446744073709551612UL}}, {{18446744073709551612UL, 0x717C61D6EBAC7562LL, 18446744073709551612UL}, {18446744073709551612UL, 0x717C61D6EBAC7562LL, 18446744073709551612UL}}};
static unsigned short g_652 = 0xCF9FL;
static unsigned short g_664 = 0UL;
static unsigned long long g_680 = 0UL;



static unsigned func_1(void);
static int func_2(char p_3, int p_4, unsigned long long p_5);
static short func_8(unsigned long long p_9, long long p_10, unsigned short p_11);
static long long func_16(int * p_17, unsigned char p_18, unsigned char p_19, int p_20, char p_21);
static int * func_27(unsigned long long p_28, int ** p_29, int * p_30, int p_31, unsigned p_32);
static char func_33(short p_34, unsigned p_35, unsigned char p_36);
static short func_39(int p_40, int ** p_41, unsigned char p_42, char p_43, unsigned long long p_44);
static int ** func_47(int * p_48, int * p_49, int * p_50, unsigned long long p_51, int * p_52);
static int * func_53(int ** p_54, char p_55, int p_56);
static int func_64(long long p_65, int p_66, int * p_67);
static unsigned func_1(void)
{
    unsigned l_13[9][4] = {{18446744073709551610UL, 0x33582F80L, 0x4FD9E2A8L, 0x3A18E418L}, {18446744073709551610UL, 0x33582F80L, 0x4FD9E2A8L, 0x3A18E418L}, {18446744073709551610UL, 0x33582F80L, 0x4FD9E2A8L, 0x3A18E418L}, {18446744073709551610UL, 0x33582F80L, 0x4FD9E2A8L, 0x3A18E418L}, {18446744073709551610UL, 0x33582F80L, 0x4FD9E2A8L, 0x3A18E418L}, {18446744073709551610UL, 0x33582F80L, 0x4FD9E2A8L, 0x3A18E418L}, {18446744073709551610UL, 0x33582F80L, 0x4FD9E2A8L, 0x3A18E418L}, {18446744073709551610UL, 0x33582F80L, 0x4FD9E2A8L, 0x3A18E418L}, {18446744073709551610UL, 0x33582F80L, 0x4FD9E2A8L, 0x3A18E418L}};
    int **l_24 = (void*)0;
    int *l_25 = (void*)0;
    int *l_26 = &g_23[7][2][0];
    short l_601 = (-1L);
    long long l_648[4];
    int *l_702 = &g_90;
    unsigned long long l_706 = 8UL;
    unsigned long long l_714 = 0x1483B5B881603056LL;
    int l_715 = 1L;
    long long **l_725 = &g_231[8];
    long long *l_726 = &l_648[0];
    short *l_727 = &g_447;
    unsigned char l_728 = 0x9AL;
    int i, j;
    for (i = 0; i < 4; i++)
        l_648[i] = 0xB1AC5392D069136DLL;
    if (func_2((safe_sub_func_int32_t_s_s((-6L), (func_8(g_12, l_13[0][0], l_13[0][0]) >= (func_16((l_25 = g_22[0]), l_13[6][2], (((((void*)0 == l_26) >= 4294967292UL) && (*l_26)) | (*l_26)), (*l_26), (*l_26)) >= l_13[0][0])))), l_601, l_13[0][0]))
    {
        unsigned long long l_613[10][9][2] = {{{0x0AD4809C7B163B8CLL, 0xACE0414D9A9711FBLL}, {0x0AD4809C7B163B8CLL, 0xACE0414D9A9711FBLL}, {0x0AD4809C7B163B8CLL, 0xACE0414D9A9711FBLL}, {0x0AD4809C7B163B8CLL, 0xACE0414D9A9711FBLL}, {0x0AD4809C7B163B8CLL, 0xACE0414D9A9711FBLL}, {0x0AD4809C7B163B8CLL, 0xACE0414D9A9711FBLL}, {0x0AD4809C7B163B8CLL, 0xACE0414D9A9711FBLL}, {0x0AD4809C7B163B8CLL, 0xACE0414D9A9711FBLL}, {0x0AD4809C7B163B8CLL, 0xACE0414D9A9711FBLL}}, {{0x0AD4809C7B163B8CLL, 0xACE0414D9A9711FBLL}, {0x0AD4809C7B163B8CLL, 0xACE0414D9A9711FBLL}, {0x0AD4809C7B163B8CLL, 0xACE0414D9A9711FBLL}, {0x0AD4809C7B163B8CLL, 0xACE0414D9A9711FBLL}, {0x0AD4809C7B163B8CLL, 0xACE0414D9A9711FBLL}, {0x0AD4809C7B163B8CLL, 0xACE0414D9A9711FBLL}, {0x0AD4809C7B163B8CLL, 0xACE0414D9A9711FBLL}, {0x0AD4809C7B163B8CLL, 0xACE0414D9A9711FBLL}, {0x0AD4809C7B163B8CLL, 0xACE0414D9A9711FBLL}}, {{0x0AD4809C7B163B8CLL, 0xACE0414D9A9711FBLL}, {0x0AD4809C7B163B8CLL, 0xACE0414D9A9711FBLL}, {0x0AD4809C7B163B8CLL, 0xACE0414D9A9711FBLL}, {0x0AD4809C7B163B8CLL, 0xACE0414D9A9711FBLL}, {0x0AD4809C7B163B8CLL, 0xACE0414D9A9711FBLL}, {0x0AD4809C7B163B8CLL, 0xACE0414D9A9711FBLL}, {0x0AD4809C7B163B8CLL, 0xACE0414D9A9711FBLL}, {0x0AD4809C7B163B8CLL, 0xACE0414D9A9711FBLL}, {0x0AD4809C7B163B8CLL, 0xACE0414D9A9711FBLL}}, {{0x0AD4809C7B163B8CLL, 0xACE0414D9A9711FBLL}, {0x0AD4809C7B163B8CLL, 0xACE0414D9A9711FBLL}, {0x0AD4809C7B163B8CLL, 0xACE0414D9A9711FBLL}, {0x0AD4809C7B163B8CLL, 0xACE0414D9A9711FBLL}, {0x0AD4809C7B163B8CLL, 0xACE0414D9A9711FBLL}, {0x0AD4809C7B163B8CLL, 0xACE0414D9A9711FBLL}, {0x0AD4809C7B163B8CLL, 0xACE0414D9A9711FBLL}, {0x0AD4809C7B163B8CLL, 0xACE0414D9A9711FBLL}, {0x0AD4809C7B163B8CLL, 0xACE0414D9A9711FBLL}}, {{0x0AD4809C7B163B8CLL, 0xACE0414D9A9711FBLL}, {0x0AD4809C7B163B8CLL, 0xACE0414D9A9711FBLL}, {0x0AD4809C7B163B8CLL, 0xACE0414D9A9711FBLL}, {0x0AD4809C7B163B8CLL, 0xACE0414D9A9711FBLL}, {0x0AD4809C7B163B8CLL, 0xACE0414D9A9711FBLL}, {0x0AD4809C7B163B8CLL, 0xACE0414D9A9711FBLL}, {0x0AD4809C7B163B8CLL, 0xACE0414D9A9711FBLL}, {0x0AD4809C7B163B8CLL, 0xACE0414D9A9711FBLL}, {0x0AD4809C7B163B8CLL, 0xACE0414D9A9711FBLL}}, {{0x0AD4809C7B163B8CLL, 0xACE0414D9A9711FBLL}, {0x0AD4809C7B163B8CLL, 0xACE0414D9A9711FBLL}, {0x0AD4809C7B163B8CLL, 0xACE0414D9A9711FBLL}, {0x0AD4809C7B163B8CLL, 0xACE0414D9A9711FBLL}, {0x0AD4809C7B163B8CLL, 0xACE0414D9A9711FBLL}, {0x0AD4809C7B163B8CLL, 0xACE0414D9A9711FBLL}, {0x0AD4809C7B163B8CLL, 0xACE0414D9A9711FBLL}, {0x0AD4809C7B163B8CLL, 0xACE0414D9A9711FBLL}, {0x0AD4809C7B163B8CLL, 0xACE0414D9A9711FBLL}}, {{0x0AD4809C7B163B8CLL, 0xACE0414D9A9711FBLL}, {0x0AD4809C7B163B8CLL, 0xACE0414D9A9711FBLL}, {0x0AD4809C7B163B8CLL, 0xACE0414D9A9711FBLL}, {0x0AD4809C7B163B8CLL, 0xACE0414D9A9711FBLL}, {0x0AD4809C7B163B8CLL, 0xACE0414D9A9711FBLL}, {0x0AD4809C7B163B8CLL, 0xACE0414D9A9711FBLL}, {0x0AD4809C7B163B8CLL, 0xACE0414D9A9711FBLL}, {0x0AD4809C7B163B8CLL, 0xACE0414D9A9711FBLL}, {0x0AD4809C7B163B8CLL, 0xACE0414D9A9711FBLL}}, {{0x0AD4809C7B163B8CLL, 0xACE0414D9A9711FBLL}, {0x0AD4809C7B163B8CLL, 0xACE0414D9A9711FBLL}, {0x0AD4809C7B163B8CLL, 0xACE0414D9A9711FBLL}, {0x0AD4809C7B163B8CLL, 0xACE0414D9A9711FBLL}, {0x0AD4809C7B163B8CLL, 0xACE0414D9A9711FBLL}, {0x0AD4809C7B163B8CLL, 0xACE0414D9A9711FBLL}, {0x0AD4809C7B163B8CLL, 0xACE0414D9A9711FBLL}, {0x0AD4809C7B163B8CLL, 0xACE0414D9A9711FBLL}, {0x0AD4809C7B163B8CLL, 0xACE0414D9A9711FBLL}}, {{0x0AD4809C7B163B8CLL, 0xACE0414D9A9711FBLL}, {0x0AD4809C7B163B8CLL, 0xACE0414D9A9711FBLL}, {0x0AD4809C7B163B8CLL, 0xACE0414D9A9711FBLL}, {0x0AD4809C7B163B8CLL, 0xACE0414D9A9711FBLL}, {0x0AD4809C7B163B8CLL, 0xACE0414D9A9711FBLL}, {0x0AD4809C7B163B8CLL, 0xACE0414D9A9711FBLL}, {0x0AD4809C7B163B8CLL, 0xACE0414D9A9711FBLL}, {0x0AD4809C7B163B8CLL, 0xACE0414D9A9711FBLL}, {0x0AD4809C7B163B8CLL, 0xACE0414D9A9711FBLL}}, {{0x0AD4809C7B163B8CLL, 0xACE0414D9A9711FBLL}, {0x0AD4809C7B163B8CLL, 0xACE0414D9A9711FBLL}, {0x0AD4809C7B163B8CLL, 0xACE0414D9A9711FBLL}, {0x0AD4809C7B163B8CLL, 0xACE0414D9A9711FBLL}, {0x0AD4809C7B163B8CLL, 0xACE0414D9A9711FBLL}, {0x0AD4809C7B163B8CLL, 0xACE0414D9A9711FBLL}, {0x0AD4809C7B163B8CLL, 0xACE0414D9A9711FBLL}, {0x0AD4809C7B163B8CLL, 0xACE0414D9A9711FBLL}, {0x0AD4809C7B163B8CLL, 0xACE0414D9A9711FBLL}}};
        int *l_625 = (void*)0;
        unsigned l_647[6][10] = {{1UL, 0x60F591D6L, 0x77019FCFL, 0x60F591D6L, 1UL, 0x60F591D6L, 0x77019FCFL, 0x60F591D6L, 1UL, 0x60F591D6L}, {1UL, 0x60F591D6L, 0x77019FCFL, 0x60F591D6L, 1UL, 0x60F591D6L, 0x77019FCFL, 0x60F591D6L, 1UL, 0x60F591D6L}, {1UL, 0x60F591D6L, 0x77019FCFL, 0x60F591D6L, 1UL, 0x60F591D6L, 0x77019FCFL, 0x60F591D6L, 1UL, 0x60F591D6L}, {1UL, 0x60F591D6L, 0x77019FCFL, 0x60F591D6L, 1UL, 0x60F591D6L, 0x77019FCFL, 0x60F591D6L, 1UL, 0x60F591D6L}, {1UL, 0x60F591D6L, 0x77019FCFL, 0x60F591D6L, 1UL, 0x60F591D6L, 0x77019FCFL, 0x60F591D6L, 1UL, 0x60F591D6L}, {1UL, 0x60F591D6L, 0x77019FCFL, 0x60F591D6L, 1UL, 0x60F591D6L, 0x77019FCFL, 0x60F591D6L, 1UL, 0x60F591D6L}};
        int l_658 = (-1L);
        short l_683[4];
        int i, j, k;
        for (i = 0; i < 4; i++)
            l_683[i] = 0x7B78L;
        for (g_447 = (-8); (g_447 < 25); g_447 = safe_add_func_int8_t_s_s(g_447, 1))
        {
            unsigned char l_616 = 0xE5L;
            int l_617 = 0x1AFC1C25L;
            unsigned long long *l_618 = &g_77[2][0];
            int l_619[5];
            unsigned long long *l_620 = &g_621[0][1][2];
            short *l_624[10][1];
            int *l_636 = (void*)0;
            unsigned *l_645[6] = {&g_188, &g_188, &g_188, &g_188, &g_188, &g_188};
            int i, j;
            for (i = 0; i < 5; i++)
                l_619[i] = (-1L);
            for (i = 0; i < 10; i++)
            {
                for (j = 0; j < 1; j++)
                    l_624[i][j] = &g_12;
            }
            if ((safe_lshift_func_int16_t_s_u((g_273 = (l_613[1][5][1] ^ (func_8(((*l_620) |= (safe_rshift_func_int16_t_s_u((-1L), ((l_617 ^= l_616) ^ (l_619[4] |= ((*l_618) = 0x4F395BC6344410A1LL)))))), l_613[6][8][0], (safe_rshift_func_uint16_t_u_s(((void*)0 != &g_409), 8))) & (g_93 ^ (*g_564))))), 11)))
            {
                int *l_626 = (void*)0;
                int **l_627 = &g_456;
                long long *l_630 = &g_234;
                (*l_627) = (*l_627);
                (*l_26) = ((((*l_630) = l_617) == 0x7EF306FE74999884LL) && l_619[0]);
                for (g_15 = 6; (g_15 >= 0); g_15 -= 1)
                {
                    int *l_635 = &l_619[1];
                    int i;
                    if (((safe_rshift_func_uint8_t_u_s(((void*)0 != &g_286), 1)) != ((g_532[0][1][0] = (func_39((**g_433), ((*g_411) = (void*)0), (*g_564), g_621[0][1][2], l_617) >= (safe_mod_func_int64_t_s_s(((*l_630) ^= ((**l_627) | g_167)), l_619[3])))) | g_23[9][1][0])))
                    {
                        (*g_456) = (*g_456);
                        l_636 = l_635;
                        if ((*g_112))
                            continue;
                    }
                    else
                    {
                        char *l_637[4][7][6] = {{{&g_83, &g_83, &g_83, &g_83, &g_83, &g_83}, {&g_83, &g_83, &g_83, &g_83, &g_83, &g_83}, {&g_83, &g_83, &g_83, &g_83, &g_83, &g_83}, {&g_83, &g_83, &g_83, &g_83, &g_83, &g_83}, {&g_83, &g_83, &g_83, &g_83, &g_83, &g_83}, {&g_83, &g_83, &g_83, &g_83, &g_83, &g_83}, {&g_83, &g_83, &g_83, &g_83, &g_83, &g_83}}, {{&g_83, &g_83, &g_83, &g_83, &g_83, &g_83}, {&g_83, &g_83, &g_83, &g_83, &g_83, &g_83}, {&g_83, &g_83, &g_83, &g_83, &g_83, &g_83}, {&g_83, &g_83, &g_83, &g_83, &g_83, &g_83}, {&g_83, &g_83, &g_83, &g_83, &g_83, &g_83}, {&g_83, &g_83, &g_83, &g_83, &g_83, &g_83}, {&g_83, &g_83, &g_83, &g_83, &g_83, &g_83}}, {{&g_83, &g_83, &g_83, &g_83, &g_83, &g_83}, {&g_83, &g_83, &g_83, &g_83, &g_83, &g_83}, {&g_83, &g_83, &g_83, &g_83, &g_83, &g_83}, {&g_83, &g_83, &g_83, &g_83, &g_83, &g_83}, {&g_83, &g_83, &g_83, &g_83, &g_83, &g_83}, {&g_83, &g_83, &g_83, &g_83, &g_83, &g_83}, {&g_83, &g_83, &g_83, &g_83, &g_83, &g_83}}, {{&g_83, &g_83, &g_83, &g_83, &g_83, &g_83}, {&g_83, &g_83, &g_83, &g_83, &g_83, &g_83}, {&g_83, &g_83, &g_83, &g_83, &g_83, &g_83}, {&g_83, &g_83, &g_83, &g_83, &g_83, &g_83}, {&g_83, &g_83, &g_83, &g_83, &g_83, &g_83}, {&g_83, &g_83, &g_83, &g_83, &g_83, &g_83}, {&g_83, &g_83, &g_83, &g_83, &g_83, &g_83}}};
                        int l_644 = 0x56CDB31CL;
                        int l_646 = (-1L);
                        long long l_649 = 0x2FF5E8C16462AA3BLL;
                        int i, j, k;
                        (*l_635) |= ((*g_112) = (func_2(((g_83 = (-7L)) <= ((safe_add_func_int8_t_s_s(g_23[6][1][1], ((safe_lshift_func_int16_t_s_s(((safe_mod_func_uint8_t_u_u(255UL, ((*g_564) = func_39(((g_532[0][0][1] <= ((*l_25) ^ func_64(l_644, (l_625 != l_645[5]), l_625))) == (-1L)), (*g_411), l_644, l_646, l_647[5][1])))) == (**l_627)), g_140)) != l_648[3]))) <= g_140)), (**l_627), l_649) == l_644));
                    }
                }
            }
            else
            {
                long long l_653 = 0x93B77C4E1C77CFA0LL;
                int ***l_667 = (void*)0;
                short l_673 = 0x4F68L;
                unsigned char l_685 = 0xE0L;
                int *l_687 = &l_619[1];
                int *l_692 = &l_619[4];
                int *l_703 = &g_481;
                if (((safe_lshift_func_int8_t_s_s((g_652 <= (func_8(l_653, l_653, (*g_409)) && ((*g_409) != 65526UL))), 5)) > (((~0UL) <= ((*g_112) & (*l_26))) <= (*l_25))))
                {
                    unsigned short l_663 = 0xB7F2L;
                    unsigned l_665[3][5] = {{0x68110FF9L, 0x26DA54FCL, 0x68110FF9L, 0x26DA54FCL, 0x68110FF9L}, {0x68110FF9L, 0x26DA54FCL, 0x68110FF9L, 0x26DA54FCL, 0x68110FF9L}, {0x68110FF9L, 0x26DA54FCL, 0x68110FF9L, 0x26DA54FCL, 0x68110FF9L}};
                    int ****l_666 = &g_411;
                    int i, j;
                    (*l_25) ^= ((g_77[0][4] || ((safe_lshift_func_int16_t_s_s((safe_add_func_int16_t_s_s(l_658, ((l_663 = (safe_sub_func_uint16_t_u_u((safe_rshift_func_int16_t_s_u((9UL <= g_15), 14)), (l_624[4][0] != &g_652)))) || g_664))), l_665[2][0])) || ((((*l_666) = &g_286) == l_667) >= 0xF9EEL))) && 4UL);
                }
                else
                {
                    int l_669 = 0xED7B2CEEL;
                    char *l_670 = &g_83;
                    int **l_684 = (void*)0;
                    l_669 &= (safe_unary_minus_func_int32_t_s((*g_456)));
                    if (((((*l_670) = g_12) & func_39(func_8((((safe_lshift_func_uint8_t_u_s(((l_673 && ((*g_409) = ((*l_25) >= (((*g_409) || (+(g_23[1][2][1] >= (safe_rshift_func_int16_t_s_s(l_653, 1))))) == (safe_rshift_func_int8_t_s_u(l_669, (safe_sub_func_uint32_t_u_u((g_354 = ((g_680 <= (safe_mod_func_uint64_t_u_u(0UL, l_669))) < g_652)), (*l_25))))))))) > g_93), 0)) & l_683[1]) == 0xE8CEC6318B083D4ELL), (*l_25), g_447), l_684, (*g_564), g_147, l_685)) >= g_680))
                    {
                        return g_664;
                    }
                    else
                    {
                        int **l_686 = &g_456;
                        char l_690 = 0x21L;
                        unsigned short l_691 = 0xD6C0L;
                        (*l_686) = l_692;
                        (*g_112) &= 0xDFEEF563L;
                    }
                    for (g_232 = 5; (g_232 >= 0); g_232 -= 1)
                    {
                        unsigned short l_693 = 9UL;
                        if (l_693)
                            break;
                        (*l_692) = (*g_456);
                    }
                }
                (*l_703) ^= ((safe_rshift_func_int8_t_s_u(g_621[3][0][1], 4)) & (g_83 != (safe_add_func_int8_t_s_s((safe_lshift_func_int16_t_s_s((*l_26), ((*l_25) < func_64((~(-1L)), func_8((*l_687), (safe_rshift_func_uint8_t_u_s((*g_564), 2)), func_64((*l_25), (g_12 > g_12), (*g_433))), l_702)))), 0x6FL))));
            }
            return g_532[0][0][1];
        }
    }
    else
    {
        int ***l_707 = &g_286;
        unsigned char *l_708 = &g_454;
        short l_709 = 0L;
        int **l_712 = &g_456;
        int *l_713 = &g_23[2][1][1];
        int l_716 = 0xEBFECFFFL;
        char *l_717 = &g_83;
        int *l_718 = &g_15;
        l_709 = ((safe_add_func_uint64_t_u_u(l_706, ((*l_25) == g_273))) | func_39(((*g_564) && 0x04L), &l_26, ((*l_708) = ((g_411 = &g_286) == l_707)), g_621[0][1][2], (*l_25)));
        (*l_718) &= (((*g_564) = (*l_26)) && func_2(((*l_717) = (((((((*l_712) = l_702) != l_713) != ((*l_713) != 0L)) || func_33(g_77[3][1], (l_714 <= (func_33(func_64((*l_26), (*l_713), l_702), (**l_712), (*l_26)) >= g_447)), l_715)) <= l_716) & g_621[0][1][2])), g_532[0][0][1], g_77[2][1]));
        (*l_718) |= (*g_456);
    }
    l_728 ^= (((safe_add_func_uint8_t_u_u((((((*l_727) ^= (((*l_26) || 0x4DL) == ((*l_726) = (safe_sub_func_int32_t_s_s((safe_add_func_int32_t_s_s((((void*)0 == l_725) <= func_64((*l_25), (*l_26), l_26)), g_495)), (*g_456)))))) >= 0xCA55L) == 0UL) <= (*l_25)), (*g_564))) >= g_77[2][1]) >= 0x1001L);
    return (*l_25);
}







static int func_2(char p_3, int p_4, unsigned long long p_5)
{
    int *l_607 = (void*)0;
    int **l_608 = &g_22[0];
    for (g_232 = 0; (g_232 == (-20)); g_232 = safe_sub_func_uint16_t_u_u(g_232, 9))
    {
        char l_604 = 0x28L;
        l_604 |= 0x08842260L;
    }
    (*g_112) &= (safe_rshift_func_uint8_t_u_s(p_5, g_83));
    (*l_608) = l_607;
    return p_5;
}







static short func_8(unsigned long long p_9, long long p_10, unsigned short p_11)
{
    int *l_14 = &g_15;
    (*l_14) = 0L;
    return (*l_14);
}







static long long func_16(int * p_17, unsigned char p_18, unsigned char p_19, int p_20, char p_21)
{
    int l_45 = (-1L);
    int *l_46 = &l_45;
    int **l_57 = &g_22[0];
    int l_283 = 0x61BB21BBL;
    unsigned l_600 = 0xCF79EFB9L;
    (*l_57) = func_27((func_33(g_23[7][2][0], g_12, (safe_rshift_func_int16_t_s_u(func_39(((*l_46) = l_45), func_47(&g_23[7][2][0], ((*l_57) = func_53(l_57, g_12, g_23[7][2][0])), &g_23[7][2][0], l_283, &g_23[7][2][0]), g_12, p_20, p_20), 0))) && g_454), l_57, &l_283, g_232, g_481);
    return l_600;
}







static int * func_27(unsigned long long p_28, int ** p_29, int * p_30, int p_31, unsigned p_32)
{
    int *l_484 = &g_23[3][0][1];
    char l_493 = 1L;
    int l_568 = 0xA05E043CL;
    char l_590 = 5L;
    unsigned l_598 = 0UL;
    int *l_599 = &g_481;
    for (g_83 = 4; (g_83 >= 0); g_83 -= 1)
    {
        int **l_485[7][4][9] = {{{&g_22[0], &g_22[0], (void*)0, &g_22[0], &g_22[0], &g_22[0], &g_22[0], &g_22[0], (void*)0}, {&g_22[0], &g_22[0], (void*)0, &g_22[0], &g_22[0], &g_22[0], &g_22[0], &g_22[0], (void*)0}, {&g_22[0], &g_22[0], (void*)0, &g_22[0], &g_22[0], &g_22[0], &g_22[0], &g_22[0], (void*)0}, {&g_22[0], &g_22[0], (void*)0, &g_22[0], &g_22[0], &g_22[0], &g_22[0], &g_22[0], (void*)0}}, {{&g_22[0], &g_22[0], (void*)0, &g_22[0], &g_22[0], &g_22[0], &g_22[0], &g_22[0], (void*)0}, {&g_22[0], &g_22[0], (void*)0, &g_22[0], &g_22[0], &g_22[0], &g_22[0], &g_22[0], (void*)0}, {&g_22[0], &g_22[0], (void*)0, &g_22[0], &g_22[0], &g_22[0], &g_22[0], &g_22[0], (void*)0}, {&g_22[0], &g_22[0], (void*)0, &g_22[0], &g_22[0], &g_22[0], &g_22[0], &g_22[0], (void*)0}}, {{&g_22[0], &g_22[0], (void*)0, &g_22[0], &g_22[0], &g_22[0], &g_22[0], &g_22[0], (void*)0}, {&g_22[0], &g_22[0], (void*)0, &g_22[0], &g_22[0], &g_22[0], &g_22[0], &g_22[0], (void*)0}, {&g_22[0], &g_22[0], (void*)0, &g_22[0], &g_22[0], &g_22[0], &g_22[0], &g_22[0], (void*)0}, {&g_22[0], &g_22[0], (void*)0, &g_22[0], &g_22[0], &g_22[0], &g_22[0], &g_22[0], (void*)0}}, {{&g_22[0], &g_22[0], (void*)0, &g_22[0], &g_22[0], &g_22[0], &g_22[0], &g_22[0], (void*)0}, {&g_22[0], &g_22[0], (void*)0, &g_22[0], &g_22[0], &g_22[0], &g_22[0], &g_22[0], (void*)0}, {&g_22[0], &g_22[0], (void*)0, &g_22[0], &g_22[0], &g_22[0], &g_22[0], &g_22[0], (void*)0}, {&g_22[0], &g_22[0], (void*)0, &g_22[0], &g_22[0], &g_22[0], &g_22[0], &g_22[0], (void*)0}}, {{&g_22[0], &g_22[0], (void*)0, &g_22[0], &g_22[0], &g_22[0], &g_22[0], &g_22[0], (void*)0}, {&g_22[0], &g_22[0], (void*)0, &g_22[0], &g_22[0], &g_22[0], &g_22[0], &g_22[0], (void*)0}, {&g_22[0], &g_22[0], (void*)0, &g_22[0], &g_22[0], &g_22[0], &g_22[0], &g_22[0], (void*)0}, {&g_22[0], &g_22[0], (void*)0, &g_22[0], &g_22[0], &g_22[0], &g_22[0], &g_22[0], (void*)0}}, {{&g_22[0], &g_22[0], (void*)0, &g_22[0], &g_22[0], &g_22[0], &g_22[0], &g_22[0], (void*)0}, {&g_22[0], &g_22[0], (void*)0, &g_22[0], &g_22[0], &g_22[0], &g_22[0], &g_22[0], (void*)0}, {&g_22[0], &g_22[0], (void*)0, &g_22[0], &g_22[0], &g_22[0], &g_22[0], &g_22[0], (void*)0}, {&g_22[0], &g_22[0], (void*)0, &g_22[0], &g_22[0], &g_22[0], &g_22[0], &g_22[0], (void*)0}}, {{&g_22[0], &g_22[0], (void*)0, &g_22[0], &g_22[0], &g_22[0], &g_22[0], &g_22[0], (void*)0}, {&g_22[0], &g_22[0], (void*)0, &g_22[0], &g_22[0], &g_22[0], &g_22[0], &g_22[0], (void*)0}, {&g_22[0], &g_22[0], (void*)0, &g_22[0], &g_22[0], &g_22[0], &g_22[0], &g_22[0], (void*)0}, {&g_22[0], &g_22[0], (void*)0, &g_22[0], &g_22[0], &g_22[0], &g_22[0], &g_22[0], (void*)0}}};
        unsigned short l_494 = 0UL;
        int *l_501 = &g_90;
        int *l_523 = (void*)0;
        unsigned short l_539 = 0x9841L;
        int l_550 = 1L;
        unsigned short **l_582 = (void*)0;
        int i, j, k;
        for (g_354 = 0; (g_354 <= 4); g_354 += 1)
        {
            unsigned long long **l_491 = (void*)0;
            int l_496 = 0x5F819645L;
            long long l_510[5][7] = {{0xF229DFF944EB7B80LL, 0x1CD03C4DA013A05FLL, 0xF229DFF944EB7B80LL, 0x49131DF7B1679EA7LL, 1L, 0x92375F7998D77E2FLL, 0x648FF632590158AELL}, {0xF229DFF944EB7B80LL, 0x1CD03C4DA013A05FLL, 0xF229DFF944EB7B80LL, 0x49131DF7B1679EA7LL, 1L, 0x92375F7998D77E2FLL, 0x648FF632590158AELL}, {0xF229DFF944EB7B80LL, 0x1CD03C4DA013A05FLL, 0xF229DFF944EB7B80LL, 0x49131DF7B1679EA7LL, 1L, 0x92375F7998D77E2FLL, 0x648FF632590158AELL}, {0xF229DFF944EB7B80LL, 0x1CD03C4DA013A05FLL, 0xF229DFF944EB7B80LL, 0x49131DF7B1679EA7LL, 1L, 0x92375F7998D77E2FLL, 0x648FF632590158AELL}, {0xF229DFF944EB7B80LL, 0x1CD03C4DA013A05FLL, 0xF229DFF944EB7B80LL, 0x49131DF7B1679EA7LL, 1L, 0x92375F7998D77E2FLL, 0x648FF632590158AELL}};
            int i, j;
            (*p_29) = l_484;
            for (p_31 = 4; (p_31 >= 0); p_31 -= 1)
            {
                int *l_492 = &g_90;
                unsigned l_509 = 0x8E0CD291L;
                int i, j, k;
                if (g_410[g_354][p_31][g_83])
                {
                    unsigned long long l_490 = 0UL;
                    (*l_484) |= (+(*p_30));
                    (*g_456) = func_39(((void*)0 != &p_29), l_485[0][2][4], g_147, g_93, p_32);
                    if (((-1L) == (((&l_485[0][2][4] != &p_29) < 0x8C67BD1BL) || (65530UL >= ((safe_add_func_int16_t_s_s(l_490, (func_64(func_64(p_32, ((*l_484) = (((p_31 <= func_64(func_64((l_491 == l_491), g_410[g_354][p_31][g_83], (*g_433)), (*p_30), l_492)) | l_493) > l_494)), (*g_433)), g_495, l_492) || l_490))) & l_496)))))
                    {
                        (*g_456) ^= ((g_234 & (safe_mod_func_int32_t_s_s(g_410[g_354][p_31][g_83], 1L))) < p_32);
                    }
                    else
                    {
                        (*p_29) = l_484;
                    }
                    for (g_188 = 0; (g_188 <= 0); g_188 += 1)
                    {
                        return l_484;
                    }
                }
                else
                {
                    unsigned short l_508 = 3UL;
                    short *l_513 = &g_447;
                    int *l_514 = &g_23[4][1][0];
                    int *l_515 = &l_496;
                    if (((*p_30) = (((((safe_rshift_func_int8_t_s_s(g_140, (((func_64(p_32, l_496, l_501) != (safe_lshift_func_uint16_t_u_u((safe_lshift_func_uint8_t_u_u((&p_30 != l_485[5][2][6]), 0)), g_410[g_354][p_31][g_83]))) && (safe_mod_func_uint64_t_u_u(l_508, l_509))) > 0xFEA67ABEL))) < l_508) | p_32) == l_510[3][5]) || 0x8A21464A109D7277LL)))
                    {
                        (*p_29) = (void*)0;
                        (*p_29) = &p_31;
                    }
                    else
                    {
                        short ***l_512 = &g_511;
                        (*p_29) = (void*)0;
                        if ((*p_30))
                            break;
                        (*l_512) = g_511;
                        (*p_29) = &g_93;
                    }
                    if (((*g_409) <= ((*l_513) = p_28)))
                    {
                        (*l_484) = (*p_30);
                    }
                    else
                    {
                        (*p_29) = l_514;
                        (*g_456) |= 0L;
                        (*p_29) = l_515;
                    }
                    (*p_30) = l_510[3][6];
                    if ((*g_112))
                        continue;
                }
                if ((*l_484))
                    break;
            }
            if ((*l_484))
            {
                return &g_481;
            }
            else
            {
                int **l_521 = &g_112;
                for (g_234 = 0; (g_234 <= 5); g_234 += 1)
                {
                    unsigned char l_520 = 4UL;
                    short *l_522 = &g_273;
                    int **l_538 = &g_112;
                }
                return (*l_521);
            }
        }
        for (g_151 = 0; (g_151 <= 4); g_151 += 1)
        {
            int *l_543 = &g_140;
            int **l_542 = &l_543;
            int l_544[5][10] = {{0x0F53E7AAL, 0x7A79DDECL, 0x0F53E7AAL, (-3L), (-1L), (-6L), 0xFE007C88L, 0xFE007C88L, (-6L), (-1L)}, {0x0F53E7AAL, 0x7A79DDECL, 0x0F53E7AAL, (-3L), (-1L), (-6L), 0xFE007C88L, 0xFE007C88L, (-6L), (-1L)}, {0x0F53E7AAL, 0x7A79DDECL, 0x0F53E7AAL, (-3L), (-1L), (-6L), 0xFE007C88L, 0xFE007C88L, (-6L), (-1L)}, {0x0F53E7AAL, 0x7A79DDECL, 0x0F53E7AAL, (-3L), (-1L), (-6L), 0xFE007C88L, 0xFE007C88L, (-6L), (-1L)}, {0x0F53E7AAL, 0x7A79DDECL, 0x0F53E7AAL, (-3L), (-1L), (-6L), 0xFE007C88L, 0xFE007C88L, (-6L), (-1L)}};
            int i, j;
            l_544[2][5] = (safe_rshift_func_uint8_t_u_s((p_31 < ((l_501 = (*g_433)) != ((*l_542) = l_523))), 0));
            for (g_93 = 4; (g_93 >= 0); g_93 -= 1)
            {
                int l_549 = (-1L);
                int l_579[3];
                unsigned short **l_581 = (void*)0;
                unsigned short ***l_580[8][9][3] = {{{(void*)0, &l_581, &l_581}, {(void*)0, &l_581, &l_581}, {(void*)0, &l_581, &l_581}, {(void*)0, &l_581, &l_581}, {(void*)0, &l_581, &l_581}, {(void*)0, &l_581, &l_581}, {(void*)0, &l_581, &l_581}, {(void*)0, &l_581, &l_581}, {(void*)0, &l_581, &l_581}}, {{(void*)0, &l_581, &l_581}, {(void*)0, &l_581, &l_581}, {(void*)0, &l_581, &l_581}, {(void*)0, &l_581, &l_581}, {(void*)0, &l_581, &l_581}, {(void*)0, &l_581, &l_581}, {(void*)0, &l_581, &l_581}, {(void*)0, &l_581, &l_581}, {(void*)0, &l_581, &l_581}}, {{(void*)0, &l_581, &l_581}, {(void*)0, &l_581, &l_581}, {(void*)0, &l_581, &l_581}, {(void*)0, &l_581, &l_581}, {(void*)0, &l_581, &l_581}, {(void*)0, &l_581, &l_581}, {(void*)0, &l_581, &l_581}, {(void*)0, &l_581, &l_581}, {(void*)0, &l_581, &l_581}}, {{(void*)0, &l_581, &l_581}, {(void*)0, &l_581, &l_581}, {(void*)0, &l_581, &l_581}, {(void*)0, &l_581, &l_581}, {(void*)0, &l_581, &l_581}, {(void*)0, &l_581, &l_581}, {(void*)0, &l_581, &l_581}, {(void*)0, &l_581, &l_581}, {(void*)0, &l_581, &l_581}}, {{(void*)0, &l_581, &l_581}, {(void*)0, &l_581, &l_581}, {(void*)0, &l_581, &l_581}, {(void*)0, &l_581, &l_581}, {(void*)0, &l_581, &l_581}, {(void*)0, &l_581, &l_581}, {(void*)0, &l_581, &l_581}, {(void*)0, &l_581, &l_581}, {(void*)0, &l_581, &l_581}}, {{(void*)0, &l_581, &l_581}, {(void*)0, &l_581, &l_581}, {(void*)0, &l_581, &l_581}, {(void*)0, &l_581, &l_581}, {(void*)0, &l_581, &l_581}, {(void*)0, &l_581, &l_581}, {(void*)0, &l_581, &l_581}, {(void*)0, &l_581, &l_581}, {(void*)0, &l_581, &l_581}}, {{(void*)0, &l_581, &l_581}, {(void*)0, &l_581, &l_581}, {(void*)0, &l_581, &l_581}, {(void*)0, &l_581, &l_581}, {(void*)0, &l_581, &l_581}, {(void*)0, &l_581, &l_581}, {(void*)0, &l_581, &l_581}, {(void*)0, &l_581, &l_581}, {(void*)0, &l_581, &l_581}}, {{(void*)0, &l_581, &l_581}, {(void*)0, &l_581, &l_581}, {(void*)0, &l_581, &l_581}, {(void*)0, &l_581, &l_581}, {(void*)0, &l_581, &l_581}, {(void*)0, &l_581, &l_581}, {(void*)0, &l_581, &l_581}, {(void*)0, &l_581, &l_581}, {(void*)0, &l_581, &l_581}}};
                int i, j, k;
                for (i = 0; i < 3; i++)
                    l_579[i] = 0x8F3AE75AL;
                if (g_410[(g_83 + 4)][g_83][g_151])
                {
                    for (l_493 = 13; (l_493 != 24); l_493++)
                    {
                        if (g_410[(g_83 + 4)][g_83][g_151])
                            break;
                        if ((*p_30))
                            break;
                    }
                    for (g_481 = 0; (g_481 < 16); g_481 = safe_add_func_int16_t_s_s(g_481, 7))
                    {
                        l_549 = ((*l_484) = g_410[(g_83 + 4)][g_83][g_151]);
                        if ((*p_30))
                            continue;
                        l_550 = (p_32 != (0x18F0L || (*g_409)));
                        if ((*p_30))
                            break;
                    }
                }
                else
                {
                    int *l_551 = &g_23[6][0][1];
                    for (p_32 = 0; (p_32 <= 4); p_32 += 1)
                    {
                        int i, j, k;
                        (*p_29) = &p_31;
                        (*p_29) = l_551;
                        (*p_30) ^= (g_410[g_83][g_93][p_32] & p_32);
                    }
                }
                for (g_90 = 16; (g_90 != 13); g_90 = safe_sub_func_int16_t_s_s(g_90, 1))
                {
                    unsigned char *l_563 = &g_454;
                    unsigned char **l_562[6] = {&l_563, &l_563, &l_563, &l_563, &l_563, &l_563};
                    int l_567 = 0x97326A47L;
                    int i;
                }
                l_582 = &g_409;
                for (g_147 = 0; (g_147 == 5); ++g_147)
                {
                    int l_596[10][5] = {{(-5L), (-9L), 0xD5E04CCDL, (-9L), (-5L)}, {(-5L), (-9L), 0xD5E04CCDL, (-9L), (-5L)}, {(-5L), (-9L), 0xD5E04CCDL, (-9L), (-5L)}, {(-5L), (-9L), 0xD5E04CCDL, (-9L), (-5L)}, {(-5L), (-9L), 0xD5E04CCDL, (-9L), (-5L)}, {(-5L), (-9L), 0xD5E04CCDL, (-9L), (-5L)}, {(-5L), (-9L), 0xD5E04CCDL, (-9L), (-5L)}, {(-5L), (-9L), 0xD5E04CCDL, (-9L), (-5L)}, {(-5L), (-9L), 0xD5E04CCDL, (-9L), (-5L)}, {(-5L), (-9L), 0xD5E04CCDL, (-9L), (-5L)}};
                    int l_597 = 0xDEA2AB2EL;
                    int i, j;
                }
            }
        }
    }
    return l_599;
}







static char func_33(short p_34, unsigned p_35, unsigned char p_36)
{
    unsigned l_347 = 1UL;
    int *l_349 = &g_140;
    unsigned short l_371 = 1UL;
    int l_388 = 0L;
    int **l_414 = &g_112;
    unsigned l_419 = 4294967295UL;
    short *l_478[1];
    int i;
    for (i = 0; i < 1; i++)
        l_478[i] = &g_12;
    for (g_90 = 0; (g_90 > 21); ++g_90)
    {
        unsigned l_323[9] = {0x970F5AB0L, 0xED74E0BBL, 0x970F5AB0L, 0xED74E0BBL, 0x970F5AB0L, 0xED74E0BBL, 0x970F5AB0L, 0xED74E0BBL, 0x970F5AB0L};
        unsigned *l_334 = (void*)0;
        unsigned long long l_351 = 0x6A3AFFCAD72166DELL;
        int l_356[4];
        int *l_357 = &g_93;
        unsigned short *l_405 = &l_371;
        int ***l_412 = (void*)0;
        unsigned char *l_413 = &g_147;
        char l_429[2][1];
        int l_432 = 0x18DEDDCCL;
        unsigned *l_480 = (void*)0;
        int i, j;
        for (i = 0; i < 4; i++)
            l_356[i] = 0x1BF8B169L;
        for (i = 0; i < 2; i++)
        {
            for (j = 0; j < 1; j++)
                l_429[i][j] = 0xDAL;
        }
        l_323[2] &= 0x4651075FL;
        for (g_140 = 23; (g_140 >= (-8)); --g_140)
        {
            int l_328 = 0x850E9C84L;
            int *l_352 = &g_140;
            unsigned long long ***l_367 = (void*)0;
            unsigned long long ***l_368 = &g_279;
            unsigned long long *l_379 = &l_351;
            for (p_34 = 0; (p_34 < (-10)); --p_34)
            {
                unsigned long long l_331 = 18446744073709551615UL;
                int *l_365 = &g_23[8][0][0];
                int **l_366[8];
                int i;
                for (i = 0; i < 8; i++)
                    l_366[i] = &l_365;
                if (l_328)
                {
                    (*g_112) = p_35;
                }
                else
                {
                    long long *l_341 = &g_234;
                    int l_346 = 0x688C6C9BL;
                    short l_348 = 0xC08CL;
                    int **l_350 = &g_112;
                    unsigned *l_353[8][4][7] = {{{(void*)0, &g_188, &g_188, &g_188, &g_188, &g_188, &g_188}, {(void*)0, &g_188, &g_188, &g_188, &g_188, &g_188, &g_188}, {(void*)0, &g_188, &g_188, &g_188, &g_188, &g_188, &g_188}, {(void*)0, &g_188, &g_188, &g_188, &g_188, &g_188, &g_188}}, {{(void*)0, &g_188, &g_188, &g_188, &g_188, &g_188, &g_188}, {(void*)0, &g_188, &g_188, &g_188, &g_188, &g_188, &g_188}, {(void*)0, &g_188, &g_188, &g_188, &g_188, &g_188, &g_188}, {(void*)0, &g_188, &g_188, &g_188, &g_188, &g_188, &g_188}}, {{(void*)0, &g_188, &g_188, &g_188, &g_188, &g_188, &g_188}, {(void*)0, &g_188, &g_188, &g_188, &g_188, &g_188, &g_188}, {(void*)0, &g_188, &g_188, &g_188, &g_188, &g_188, &g_188}, {(void*)0, &g_188, &g_188, &g_188, &g_188, &g_188, &g_188}}, {{(void*)0, &g_188, &g_188, &g_188, &g_188, &g_188, &g_188}, {(void*)0, &g_188, &g_188, &g_188, &g_188, &g_188, &g_188}, {(void*)0, &g_188, &g_188, &g_188, &g_188, &g_188, &g_188}, {(void*)0, &g_188, &g_188, &g_188, &g_188, &g_188, &g_188}}, {{(void*)0, &g_188, &g_188, &g_188, &g_188, &g_188, &g_188}, {(void*)0, &g_188, &g_188, &g_188, &g_188, &g_188, &g_188}, {(void*)0, &g_188, &g_188, &g_188, &g_188, &g_188, &g_188}, {(void*)0, &g_188, &g_188, &g_188, &g_188, &g_188, &g_188}}, {{(void*)0, &g_188, &g_188, &g_188, &g_188, &g_188, &g_188}, {(void*)0, &g_188, &g_188, &g_188, &g_188, &g_188, &g_188}, {(void*)0, &g_188, &g_188, &g_188, &g_188, &g_188, &g_188}, {(void*)0, &g_188, &g_188, &g_188, &g_188, &g_188, &g_188}}, {{(void*)0, &g_188, &g_188, &g_188, &g_188, &g_188, &g_188}, {(void*)0, &g_188, &g_188, &g_188, &g_188, &g_188, &g_188}, {(void*)0, &g_188, &g_188, &g_188, &g_188, &g_188, &g_188}, {(void*)0, &g_188, &g_188, &g_188, &g_188, &g_188, &g_188}}, {{(void*)0, &g_188, &g_188, &g_188, &g_188, &g_188, &g_188}, {(void*)0, &g_188, &g_188, &g_188, &g_188, &g_188, &g_188}, {(void*)0, &g_188, &g_188, &g_188, &g_188, &g_188, &g_188}, {(void*)0, &g_188, &g_188, &g_188, &g_188, &g_188, &g_188}}};
                    int *l_355[8][2][5] = {{{&l_328, &g_23[7][2][0], (void*)0, &g_23[7][2][0], &g_23[7][2][0]}, {&l_328, &g_23[7][2][0], (void*)0, &g_23[7][2][0], &g_23[7][2][0]}}, {{&l_328, &g_23[7][2][0], (void*)0, &g_23[7][2][0], &g_23[7][2][0]}, {&l_328, &g_23[7][2][0], (void*)0, &g_23[7][2][0], &g_23[7][2][0]}}, {{&l_328, &g_23[7][2][0], (void*)0, &g_23[7][2][0], &g_23[7][2][0]}, {&l_328, &g_23[7][2][0], (void*)0, &g_23[7][2][0], &g_23[7][2][0]}}, {{&l_328, &g_23[7][2][0], (void*)0, &g_23[7][2][0], &g_23[7][2][0]}, {&l_328, &g_23[7][2][0], (void*)0, &g_23[7][2][0], &g_23[7][2][0]}}, {{&l_328, &g_23[7][2][0], (void*)0, &g_23[7][2][0], &g_23[7][2][0]}, {&l_328, &g_23[7][2][0], (void*)0, &g_23[7][2][0], &g_23[7][2][0]}}, {{&l_328, &g_23[7][2][0], (void*)0, &g_23[7][2][0], &g_23[7][2][0]}, {&l_328, &g_23[7][2][0], (void*)0, &g_23[7][2][0], &g_23[7][2][0]}}, {{&l_328, &g_23[7][2][0], (void*)0, &g_23[7][2][0], &g_23[7][2][0]}, {&l_328, &g_23[7][2][0], (void*)0, &g_23[7][2][0], &g_23[7][2][0]}}, {{&l_328, &g_23[7][2][0], (void*)0, &g_23[7][2][0], &g_23[7][2][0]}, {&l_328, &g_23[7][2][0], (void*)0, &g_23[7][2][0], &g_23[7][2][0]}}};
                    int i, j, k;
                    l_356[1] |= ((safe_lshift_func_uint16_t_u_u(p_36, 7)) <= (l_331 && ((~(!(((safe_sub_func_uint8_t_u_u((((&g_188 == l_334) | (g_188 = (func_64(((*l_341) = ((safe_add_func_uint32_t_u_u(l_323[2], ((safe_rshift_func_uint8_t_u_u(0xEBL, func_39(((safe_lshift_func_int8_t_s_u((func_64(((*l_341) ^= (-9L)), func_39((func_64(((safe_lshift_func_uint8_t_u_s((safe_add_func_uint8_t_u_u(p_36, l_346)), l_347)) >= g_188), l_348, l_349) >= 255UL), l_350, p_36, g_273, p_36), l_334) <= l_351), l_347)) && l_328), &g_112, l_323[8], l_331, p_34))) & g_23[7][2][0]))) & g_12)), p_34, l_352) && 0xE8A2A857L))) ^ l_351), l_331)) ^ l_347) != p_36))) == g_354)));
                    (*l_350) = (l_357 = &g_23[7][2][0]);
                    for (l_331 = 0; (l_331 <= 3); l_331 += 1)
                    {
                        unsigned l_364 = 0x9918F8D0L;
                    }
                }
                if (p_34)
                    continue;
                g_112 = l_365;
            }
            (*l_368) = &g_280;
            for (g_147 = 0; (g_147 != 53); g_147 = safe_add_func_uint16_t_u_u(g_147, 6))
            {
                unsigned char *l_372 = &g_151;
                unsigned short *l_380 = (void*)0;
                unsigned short *l_381 = &l_371;
                int l_382 = (-7L);
                int **l_383 = &l_357;
                (*g_112) = (1UL ^ ((*l_372) ^= l_371));
                l_328 |= (l_382 = ((+(safe_mod_func_int16_t_s_s((p_36 < func_64((safe_rshift_func_uint16_t_u_u(p_35, p_34)), (safe_sub_func_uint16_t_u_u((*l_357), ((*l_381) = (((void*)0 != l_379) <= func_39(p_34, &g_112, (&p_34 == (void*)0), p_34, l_371))))), l_334)), p_35))) & l_382));
                (*l_383) = &l_356[1];
            }
            for (l_347 = 0; (l_347 <= 0); l_347 += 1)
            {
                int **l_395 = &l_357;
                if (p_34)
                    break;
                for (g_151 = 0; (g_151 <= 0); g_151 += 1)
                {
                    return p_34;
                }
                for (g_147 = 0; (g_147 <= 0); g_147 += 1)
                {
                    int *l_384 = &g_167;
                    int l_385 = 0xF2BE5E47L;
                    short *l_396[8];
                    int i;
                    for (i = 0; i < 8; i++)
                        l_396[i] = &g_273;
                    (**l_395) = func_39(((*l_384) = g_147), &g_22[0], l_385, (g_140 ^ (safe_add_func_int16_t_s_s((p_34 = (g_23[7][2][0] ^ ((((l_388 = l_328) <= p_34) | 0x50A4L) != (safe_rshift_func_int16_t_s_s((safe_add_func_uint32_t_u_u((safe_lshift_func_int16_t_s_u(func_39(g_23[7][2][0], l_395, l_328, p_35, p_35), p_36)), (*g_112))), 10))))), g_354))), p_36);
                }
                for (g_93 = 0; (g_93 >= 0); g_93 -= 1)
                {
                    for (l_328 = 0; (l_328 >= 0); l_328 -= 1)
                    {
                        int i;
                        g_22[g_93] = (*l_395);
                    }
                    l_328 = (safe_rshift_func_int8_t_s_s((*l_357), p_36));
                    if (l_328)
                        break;
                    if (l_388)
                        continue;
                }
            }
        }
        (**l_414) = func_39(func_64(((safe_sub_func_uint8_t_u_u((safe_add_func_uint8_t_u_u(g_23[0][2][0], g_151)), ((*l_413) = func_64((safe_lshift_func_uint8_t_u_s((((*l_405) &= g_23[1][2][1]) || (safe_rshift_func_uint8_t_u_s(((safe_unary_minus_func_int8_t_s(l_371)) && (g_409 != &l_371)), (p_36 > ((g_411 = &g_286) == l_412))))), 4)), (*g_112), l_349)))) ^ p_35), p_34, l_357), l_414, g_410[8][0][2], g_354, p_35);
        for (g_140 = 0; (g_140 >= (-24)); --g_140)
        {
            unsigned char l_424 = 249UL;
            int l_425 = 0x0AB75D08L;
            unsigned l_430 = 1UL;
            int **l_435[9] = {(void*)0, &l_349, (void*)0, &l_349, (void*)0, &l_349, (void*)0, &l_349, (void*)0};
            long long ***l_448 = (void*)0;
            int l_455 = 0xEAE044D6L;
            int **l_471 = (void*)0;
            int **l_472 = &g_22[0];
            int *l_473 = &l_425;
            unsigned **l_479 = &l_334;
            int i;
        }
    }
    for (g_83 = (-11); (g_83 != 15); g_83 = safe_add_func_uint16_t_u_u(g_83, 8))
    {
        if (p_36)
            break;
        if ((*g_112))
            break;
    }
    return p_34;
}







static short func_39(int p_40, int ** p_41, unsigned char p_42, char p_43, unsigned long long p_44)
{
    long long ***l_316 = (void*)0;
    char *l_317 = &g_83;
    int **l_320 = &g_22[0];
    for (g_151 = 28; (g_151 >= 45); g_151 = safe_add_func_int64_t_s_s(g_151, 4))
    {
        long long ***l_314 = &g_263[2][6][0];
        int l_315[6] = {(-1L), (-1L), 0xFA70DFFAL, (-1L), (-1L), 0xFA70DFFAL};
        int i;
        for (p_42 = (-13); (p_42 == 6); p_42 = safe_add_func_int32_t_s_s(p_42, 6))
        {
            return p_40;
        }
        (*l_314) = &g_231[6];
        if (l_315[2])
            continue;
        if ((*g_112))
            break;
    }
    (*l_320) = &g_93;
    return g_147;
}







static int ** func_47(int * p_48, int * p_49, int * p_50, unsigned long long p_51, int * p_52)
{
    long long l_293[5] = {1L, 1L, 1L, 1L, 1L};
    unsigned long long **l_301 = &g_280;
    int **l_307[2][8][3] = {{{&g_22[0], &g_22[0], &g_22[0]}, {&g_22[0], &g_22[0], &g_22[0]}, {&g_22[0], &g_22[0], &g_22[0]}, {&g_22[0], &g_22[0], &g_22[0]}, {&g_22[0], &g_22[0], &g_22[0]}, {&g_22[0], &g_22[0], &g_22[0]}, {&g_22[0], &g_22[0], &g_22[0]}, {&g_22[0], &g_22[0], &g_22[0]}}, {{&g_22[0], &g_22[0], &g_22[0]}, {&g_22[0], &g_22[0], &g_22[0]}, {&g_22[0], &g_22[0], &g_22[0]}, {&g_22[0], &g_22[0], &g_22[0]}, {&g_22[0], &g_22[0], &g_22[0]}, {&g_22[0], &g_22[0], &g_22[0]}, {&g_22[0], &g_22[0], &g_22[0]}, {&g_22[0], &g_22[0], &g_22[0]}}};
    int i, j, k;
    if ((*g_112))
    {
        for (g_234 = 0; (g_234 < (-5)); g_234--)
        {
            g_286 = &p_49;
        }
    }
    else
    {
        int l_294 = 0L;
        short *l_297 = &g_273;
        unsigned char *l_298 = &g_151;
        (*g_286) = func_53(&p_50, (((p_51 == func_64(p_51, func_64((safe_add_func_int64_t_s_s((-4L), (safe_rshift_func_uint8_t_u_u(((safe_sub_func_uint64_t_u_u(l_293[2], (l_294 && ((*l_298) = (safe_rshift_func_int16_t_s_s(g_147, ((*l_297) = p_51))))))) <= (safe_add_func_int64_t_s_s(((((func_64((((&g_280 != l_301) || (**g_286)) > 0x4AFCE3093133CE66LL), l_294, p_48) || 0xE2L) >= g_232) ^ g_90) <= 0L), 0xB15D7C5358BBA7D4LL))), p_51)))), (*p_50), p_49), p_48)) <= g_90) | 0x6587L), p_51);
    }
    for (g_83 = 18; (g_83 > 15); --g_83)
    {
        int **l_304 = (void*)0;
        int **l_305 = &g_22[0];
        int **l_306 = &g_22[0];
        int ***l_308 = &l_305;
        unsigned long long l_309 = 0x0A1D04AF1C7367FBLL;
        (*l_305) = ((*g_286) = p_49);
        l_309 = (l_306 == ((*l_308) = l_307[0][3][2]));
    }
    return l_307[1][1][1];
}







static int * func_53(int ** p_54, char p_55, int p_56)
{
    int **l_60[4][2][9] = {{{&g_22[0], &g_22[0], &g_22[0], &g_22[0], &g_22[0], (void*)0, &g_22[0], (void*)0, &g_22[0]}, {&g_22[0], &g_22[0], &g_22[0], &g_22[0], &g_22[0], (void*)0, &g_22[0], (void*)0, &g_22[0]}}, {{&g_22[0], &g_22[0], &g_22[0], &g_22[0], &g_22[0], (void*)0, &g_22[0], (void*)0, &g_22[0]}, {&g_22[0], &g_22[0], &g_22[0], &g_22[0], &g_22[0], (void*)0, &g_22[0], (void*)0, &g_22[0]}}, {{&g_22[0], &g_22[0], &g_22[0], &g_22[0], &g_22[0], (void*)0, &g_22[0], (void*)0, &g_22[0]}, {&g_22[0], &g_22[0], &g_22[0], &g_22[0], &g_22[0], (void*)0, &g_22[0], (void*)0, &g_22[0]}}, {{&g_22[0], &g_22[0], &g_22[0], &g_22[0], &g_22[0], (void*)0, &g_22[0], (void*)0, &g_22[0]}, {&g_22[0], &g_22[0], &g_22[0], &g_22[0], &g_22[0], (void*)0, &g_22[0], (void*)0, &g_22[0]}}};
    short l_61 = (-3L);
    int *l_138[6] = {&g_90, &g_90, &g_90, &g_90, &g_90, &g_90};
    int l_153 = 0L;
    char *l_192 = &g_83;
    long long l_215 = 0x0A70D411CF694FA6LL;
    int i, j, k;
    l_61 |= (safe_sub_func_uint32_t_u_u(g_23[7][2][0], (l_60[0][1][0] == &g_22[0])));
    for (p_55 = 0; (p_55 >= 0); p_55 -= 1)
    {
        short l_70 = 0xA1FAL;
        short l_88 = 0x28E2L;
        int l_101 = (-3L);
        int *l_152 = &g_140;
        unsigned short l_209[6][10] = {{1UL, 65535UL, 65535UL, 0x3BFDL, 0xEDF7L, 0x517DL, 0xEDF7L, 0x3BFDL, 65535UL, 65535UL}, {1UL, 65535UL, 65535UL, 0x3BFDL, 0xEDF7L, 0x517DL, 0xEDF7L, 0x3BFDL, 65535UL, 65535UL}, {1UL, 65535UL, 65535UL, 0x3BFDL, 0xEDF7L, 0x517DL, 0xEDF7L, 0x3BFDL, 65535UL, 65535UL}, {1UL, 65535UL, 65535UL, 0x3BFDL, 0xEDF7L, 0x517DL, 0xEDF7L, 0x3BFDL, 65535UL, 65535UL}, {1UL, 65535UL, 65535UL, 0x3BFDL, 0xEDF7L, 0x517DL, 0xEDF7L, 0x3BFDL, 65535UL, 65535UL}, {1UL, 65535UL, 65535UL, 0x3BFDL, 0xEDF7L, 0x517DL, 0xEDF7L, 0x3BFDL, 65535UL, 65535UL}};
        unsigned long long *l_278 = &g_77[2][1];
        unsigned long long **l_277 = &l_278;
        int i, j;
        for (l_61 = 0; (l_61 <= 0); l_61 += 1)
        {
            unsigned char l_62 = 9UL;
            int *l_89[4];
            int l_96 = 0L;
            short l_105[5][9][5] = {{{3L, 0L, 0xED31L, 0x6B5FL, 1L}, {3L, 0L, 0xED31L, 0x6B5FL, 1L}, {3L, 0L, 0xED31L, 0x6B5FL, 1L}, {3L, 0L, 0xED31L, 0x6B5FL, 1L}, {3L, 0L, 0xED31L, 0x6B5FL, 1L}, {3L, 0L, 0xED31L, 0x6B5FL, 1L}, {3L, 0L, 0xED31L, 0x6B5FL, 1L}, {3L, 0L, 0xED31L, 0x6B5FL, 1L}, {3L, 0L, 0xED31L, 0x6B5FL, 1L}}, {{3L, 0L, 0xED31L, 0x6B5FL, 1L}, {3L, 0L, 0xED31L, 0x6B5FL, 1L}, {3L, 0L, 0xED31L, 0x6B5FL, 1L}, {3L, 0L, 0xED31L, 0x6B5FL, 1L}, {3L, 0L, 0xED31L, 0x6B5FL, 1L}, {3L, 0L, 0xED31L, 0x6B5FL, 1L}, {3L, 0L, 0xED31L, 0x6B5FL, 1L}, {3L, 0L, 0xED31L, 0x6B5FL, 1L}, {3L, 0L, 0xED31L, 0x6B5FL, 1L}}, {{3L, 0L, 0xED31L, 0x6B5FL, 1L}, {3L, 0L, 0xED31L, 0x6B5FL, 1L}, {3L, 0L, 0xED31L, 0x6B5FL, 1L}, {3L, 0L, 0xED31L, 0x6B5FL, 1L}, {3L, 0L, 0xED31L, 0x6B5FL, 1L}, {3L, 0L, 0xED31L, 0x6B5FL, 1L}, {3L, 0L, 0xED31L, 0x6B5FL, 1L}, {3L, 0L, 0xED31L, 0x6B5FL, 1L}, {3L, 0L, 0xED31L, 0x6B5FL, 1L}}, {{3L, 0L, 0xED31L, 0x6B5FL, 1L}, {3L, 0L, 0xED31L, 0x6B5FL, 1L}, {3L, 0L, 0xED31L, 0x6B5FL, 1L}, {3L, 0L, 0xED31L, 0x6B5FL, 1L}, {3L, 0L, 0xED31L, 0x6B5FL, 1L}, {3L, 0L, 0xED31L, 0x6B5FL, 1L}, {3L, 0L, 0xED31L, 0x6B5FL, 1L}, {3L, 0L, 0xED31L, 0x6B5FL, 1L}, {3L, 0L, 0xED31L, 0x6B5FL, 1L}}, {{3L, 0L, 0xED31L, 0x6B5FL, 1L}, {3L, 0L, 0xED31L, 0x6B5FL, 1L}, {3L, 0L, 0xED31L, 0x6B5FL, 1L}, {3L, 0L, 0xED31L, 0x6B5FL, 1L}, {3L, 0L, 0xED31L, 0x6B5FL, 1L}, {3L, 0L, 0xED31L, 0x6B5FL, 1L}, {3L, 0L, 0xED31L, 0x6B5FL, 1L}, {3L, 0L, 0xED31L, 0x6B5FL, 1L}, {3L, 0L, 0xED31L, 0x6B5FL, 1L}}};
            int i, j, k;
            for (i = 0; i < 4; i++)
                l_89[i] = &g_90;
            for (p_56 = 0; (p_56 <= 0); p_56 += 1)
            {
                unsigned short l_63 = 0UL;
                unsigned char l_75 = 0x3BL;
                unsigned long long *l_76 = &g_77[2][1];
                char *l_80 = (void*)0;
                char *l_81 = (void*)0;
                char *l_82 = &g_83;
                int l_102 = (-6L);
                int i;
                l_63 &= l_62;
                l_96 |= func_64((((0xABD61F34F691D68CLL < l_63) ^ ((safe_add_func_int32_t_s_s(l_70, (((*l_82) = (safe_mod_func_uint32_t_u_u((safe_lshift_func_int16_t_s_s((65528UL | (p_55 != ((*l_76) = l_75))), 10)), (safe_unary_minus_func_int32_t_s((safe_unary_minus_func_int8_t_s(p_55))))))) != ((safe_rshift_func_uint8_t_u_s((safe_mod_func_uint32_t_u_u((g_23[7][2][0] <= ((0xDAB5352CA7B4D5CELL <= p_56) >= g_23[6][1][1])), 1UL)), p_55)) | l_88)))) >= 0L)) && g_23[7][2][1]), l_63, l_89[2]);
                l_102 ^= (((safe_add_func_uint64_t_u_u((6L >= 2L), g_83)) <= (l_101 = (safe_mod_func_int16_t_s_s(g_12, g_83)))) <= (g_77[2][1] != l_75));
                g_22[l_61] = &g_93;
            }
            if ((p_55 ^ ((0xA7L | ((safe_rshift_func_uint16_t_u_s(l_105[1][1][0], ((0xDC420A7EECA001A1LL <= func_64(l_105[1][6][2], ((safe_rshift_func_uint8_t_u_s((g_12 > p_55), ((safe_sub_func_int16_t_s_s((safe_lshift_func_int16_t_s_u((g_77[2][1] > p_55), 13)), 0UL)) | p_55))) < 0xE865313BC2572027LL), l_89[3])) >= g_23[7][2][0]))) < 0x41A0L)) > g_23[7][2][0])))
            {
                if (l_70)
                    break;
            }
            else
            {
                g_112 = (g_22[0] = &g_93);
            }
            if (l_96)
                continue;
            (*p_54) = &g_93;
        }
        if ((*g_112))
        {
            int l_120 = (-10L);
            int i;
            (*g_112) &= 0x6573C08DL;
            for (g_90 = 0; (g_90 <= (-25)); --g_90)
            {
                int l_119[9];
                short l_139 = (-1L);
                int i;
                for (i = 0; i < 9; i++)
                    l_119[i] = 0xBA6E04B3L;
                (*p_54) = &g_23[5][2][1];
                l_120 ^= ((safe_add_func_uint32_t_u_u((safe_mod_func_uint16_t_u_u((g_23[7][2][0] != (g_12 ^ g_23[6][1][0])), p_55)), ((l_119[2] < (g_93 <= l_119[2])) & 0xB09EDA30AC000487LL))) || (~(~(p_55 >= 4UL))));
                for (l_120 = (-7); (l_120 > 22); l_120 = safe_add_func_int8_t_s_s(l_120, 7))
                {
                    int *l_123 = &l_120;
                    long long l_131 = 0x1CFC68CC6768EAD1LL;
                }
                if ((*g_112))
                    continue;
            }
            (*g_112) = (*g_112);
            for (l_101 = (-29); (l_101 > (-24)); l_101 = safe_add_func_int16_t_s_s(l_101, 4))
            {
                unsigned l_165 = 4294967295UL;
                int l_166 = 0xEAED0E2EL;
                short l_168 = 0x6A5DL;
                for (g_140 = (-15); (g_140 != 8); g_140 = safe_add_func_int64_t_s_s(g_140, 1))
                {
                    int *l_160 = &g_23[7][2][0];
                    return l_160;
                }
                if ((*g_112))
                    continue;
                for (l_70 = 0; (l_70 != 4); l_70 = safe_add_func_int16_t_s_s(l_70, 5))
                {
                    (*p_54) = (void*)0;
                    (*p_54) = &g_93;
                }
                if (((safe_lshift_func_uint8_t_u_u(l_165, 6)) >= (l_166 || g_147)))
                {
                    int *l_169 = &g_23[7][2][0];
                    for (l_120 = 0; (l_120 <= 5); l_120 += 1)
                    {
                        if (g_167)
                            break;
                        l_168 = l_88;
                        return l_169;
                    }
                    for (g_151 = 0; (g_151 != 47); g_151 = safe_add_func_uint8_t_u_u(g_151, 7))
                    {
                        return &g_93;
                    }
                }
                else
                {
                    short *l_189 = &l_88;
                    int l_190 = (-1L);
                    (*g_112) = l_168;
                    if ((safe_sub_func_int8_t_s_s((safe_mod_func_int32_t_s_s(((*g_112) = (l_166 = (*g_112))), (safe_add_func_uint64_t_u_u((p_56 == ((safe_lshift_func_int8_t_s_u(0x1FL, (safe_mod_func_uint64_t_u_u((safe_mod_func_int64_t_s_s((safe_add_func_uint64_t_u_u(((((safe_add_func_int16_t_s_s(p_56, 0x25DDL)) ^ g_83) ^ (g_90 > (((g_188 | (((*l_189) = g_23[7][2][0]) ^ 0xB006L)) | (-1L)) == 0x5CL))) == 0x71AD17905CFCB859LL), 0x65A28AB481776112LL)), g_23[3][1][1])), l_190)))) > 0x2805L)), p_56)))), p_55)))
                    {
                        unsigned long long l_191 = 18446744073709551606UL;
                        (*g_112) &= l_191;
                        (*g_112) |= l_70;
                    }
                    else
                    {
                        int l_193 = 0xA90DBD7CL;
                        l_193 = (l_192 != &g_83);
                        if (p_56)
                            continue;
                        (*p_54) = &g_23[0][0][1];
                    }
                }
            }
        }
        else
        {
            unsigned l_194 = 0x17A10311L;
            int *l_213[9][2] = {{&l_153, &l_153}, {&l_153, &l_153}, {&l_153, &l_153}, {&l_153, &l_153}, {&l_153, &l_153}, {&l_153, &l_153}, {&l_153, &l_153}, {&l_153, &l_153}, {&l_153, &l_153}};
            int i, j;
            (*g_112) |= l_194;
            for (l_88 = 0; (l_88 < (-26)); l_88 = safe_sub_func_int8_t_s_s(l_88, 1))
            {
                int l_212 = 0x2136C564L;
                short *l_217 = &l_61;
                short *l_218 = &l_70;
                unsigned *l_221 = &g_188;
                unsigned char *l_270 = &g_147;
            }
            return &g_93;
        }
    }
    g_22[0] = &g_93;
    for (g_90 = 1; (g_90 == 11); g_90 = safe_add_func_uint8_t_u_u(g_90, 4))
    {
        (*g_112) ^= (g_234 ^ p_56);
    }
    return &g_93;
}







static int func_64(long long p_65, int p_66, int * p_67)
{
    char l_91 = 0xB8L;
    int *l_92 = &g_93;
    int **l_94 = &g_22[0];
    int **l_95 = &l_92;
    (*l_92) |= l_91;
    (*l_95) = ((*l_94) = &g_23[3][2][1]);
    (*l_94) = &p_66;
    return p_65;
}





int main (void)
{
    int i, j, k;
    int print_hash_value = 0;
    platform_main_begin();
    crc32_gentab();
    func_1();
    transparent_crc(g_12, "g_12", print_hash_value);
    transparent_crc(g_15, "g_15", print_hash_value);
    for (i = 0; i < 10; i++)
    {
        for (j = 0; j < 3; j++)
        {
            for (k = 0; k < 2; k++)
            {
                transparent_crc(g_23[i][j][k], "g_23[i][j][k]", print_hash_value);
                if (print_hash_value) printf("index = [%d][%d][%d]\n", i, j, k);

            }
        }
    }
    for (i = 0; i < 6; i++)
    {
        for (j = 0; j < 7; j++)
        {
            transparent_crc(g_77[i][j], "g_77[i][j]", print_hash_value);
            if (print_hash_value) printf("index = [%d][%d]\n", i, j);

        }
    }
    transparent_crc(g_83, "g_83", print_hash_value);
    transparent_crc(g_90, "g_90", print_hash_value);
    transparent_crc(g_93, "g_93", print_hash_value);
    transparent_crc(g_140, "g_140", print_hash_value);
    transparent_crc(g_147, "g_147", print_hash_value);
    transparent_crc(g_151, "g_151", print_hash_value);
    transparent_crc(g_167, "g_167", print_hash_value);
    transparent_crc(g_188, "g_188", print_hash_value);
    transparent_crc(g_232, "g_232", print_hash_value);
    transparent_crc(g_234, "g_234", print_hash_value);
    transparent_crc(g_273, "g_273", print_hash_value);
    transparent_crc(g_354, "g_354", print_hash_value);
    for (i = 0; i < 9; i++)
    {
        for (j = 0; j < 5; j++)
        {
            for (k = 0; k < 5; k++)
            {
                transparent_crc(g_410[i][j][k], "g_410[i][j][k]", print_hash_value);
                if (print_hash_value) printf("index = [%d][%d][%d]\n", i, j, k);

            }
        }
    }
    transparent_crc(g_447, "g_447", print_hash_value);
    transparent_crc(g_454, "g_454", print_hash_value);
    transparent_crc(g_481, "g_481", print_hash_value);
    transparent_crc(g_495, "g_495", print_hash_value);
    for (i = 0; i < 5; i++)
    {
        for (j = 0; j < 4; j++)
        {
            for (k = 0; k < 10; k++)
            {
                transparent_crc(g_532[i][j][k], "g_532[i][j][k]", print_hash_value);
                if (print_hash_value) printf("index = [%d][%d][%d]\n", i, j, k);

            }
        }
    }
    transparent_crc(g_573, "g_573", print_hash_value);
    for (i = 0; i < 4; i++)
    {
        for (j = 0; j < 2; j++)
        {
            for (k = 0; k < 3; k++)
            {
                transparent_crc(g_621[i][j][k], "g_621[i][j][k]", print_hash_value);
                if (print_hash_value) printf("index = [%d][%d][%d]\n", i, j, k);

            }
        }
    }
    transparent_crc(g_652, "g_652", print_hash_value);
    transparent_crc(g_664, "g_664", print_hash_value);
    transparent_crc(g_680, "g_680", print_hash_value);
    platform_main_end(crc32_context ^ 0xFFFFFFFFUL, print_hash_value);
    return 0;
}
