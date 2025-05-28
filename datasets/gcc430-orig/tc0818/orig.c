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
   int f0;
   unsigned f1;
   char * f2;
   char * f3;
};

union U1 {
   unsigned char f0;
};

union U2 {
   short f0;
   char * f1;
   int f2;
};


static union U1 g_5 = {250UL};
static int g_28 = 1L;
static char *g_55[2] = {(void*)0, (void*)0};
static char g_59 = 7L;
static char g_61 = 1L;
static int g_63[8] = {0xA6603FA8L, 0xA6603FA8L, 0xA6603FA8L, 0xA6603FA8L, 0xA6603FA8L, 0xA6603FA8L, 0xA6603FA8L, 0xA6603FA8L};
static char g_72 = (-1L);
static int g_77 = 0x3D9D76C1L;
static int *g_81 = &g_77;
static char **g_82 = &g_55[0];
static union U2 g_85 = {0x287BL};
static unsigned short g_118[7][7] = {{0x7A87L, 0x2693L, 0x84F8L, 65527UL, 0x2693L, 0x7626L, 0x2693L}, {0x7A87L, 0x2693L, 0x84F8L, 65527UL, 0x2693L, 0x7626L, 0x2693L}, {0x7A87L, 0x2693L, 0x84F8L, 65527UL, 0x2693L, 0x7626L, 0x2693L}, {0x7A87L, 0x2693L, 0x84F8L, 65527UL, 0x2693L, 0x7626L, 0x2693L}, {0x7A87L, 0x2693L, 0x84F8L, 65527UL, 0x2693L, 0x7626L, 0x2693L}, {0x7A87L, 0x2693L, 0x84F8L, 65527UL, 0x2693L, 0x7626L, 0x2693L}, {0x7A87L, 0x2693L, 0x84F8L, 65527UL, 0x2693L, 0x7626L, 0x2693L}};
static unsigned short g_120 = 0x28FFL;
static int g_160 = 0xE3BC08C7L;
static unsigned g_233 = 3UL;
static unsigned g_241 = 18446744073709551610UL;
static char ***g_244 = (void*)0;
static char ****g_243 = &g_244;
static union U1 *g_251[4] = {&g_5, (void*)0, &g_5, (void*)0};
static union U1 **g_250[6] = {&g_251[3], &g_251[1], &g_251[3], &g_251[1], &g_251[3], &g_251[1]};
static unsigned short g_261[10] = {65533UL, 0x8683L, 65533UL, 0x8683L, 65533UL, 0x8683L, 65533UL, 0x8683L, 65533UL, 0x8683L};
static unsigned short g_274[4][8] = {{0xAC54L, 8UL, 6UL, 8UL, 0xAC54L, 8UL, 6UL, 8UL}, {0xAC54L, 8UL, 6UL, 8UL, 0xAC54L, 8UL, 6UL, 8UL}, {0xAC54L, 8UL, 6UL, 8UL, 0xAC54L, 8UL, 6UL, 8UL}, {0xAC54L, 8UL, 6UL, 8UL, 0xAC54L, 8UL, 6UL, 8UL}};
static union U0 g_278[2] = {{-1L}, {-1L}};
static int **g_280[5][2][7] = {{{&g_81, &g_81, &g_81, &g_81, &g_81, &g_81, &g_81}, {&g_81, &g_81, &g_81, &g_81, &g_81, &g_81, &g_81}}, {{&g_81, &g_81, &g_81, &g_81, &g_81, &g_81, &g_81}, {&g_81, &g_81, &g_81, &g_81, &g_81, &g_81, &g_81}}, {{&g_81, &g_81, &g_81, &g_81, &g_81, &g_81, &g_81}, {&g_81, &g_81, &g_81, &g_81, &g_81, &g_81, &g_81}}, {{&g_81, &g_81, &g_81, &g_81, &g_81, &g_81, &g_81}, {&g_81, &g_81, &g_81, &g_81, &g_81, &g_81, &g_81}}, {{&g_81, &g_81, &g_81, &g_81, &g_81, &g_81, &g_81}, {&g_81, &g_81, &g_81, &g_81, &g_81, &g_81, &g_81}}};
static int ***g_279 = &g_280[0][1][0];
static int *g_337 = &g_278[0].f0;
static short *g_346[1][10][3] = {{{&g_85.f0, &g_85.f0, &g_85.f0}, {&g_85.f0, &g_85.f0, &g_85.f0}, {&g_85.f0, &g_85.f0, &g_85.f0}, {&g_85.f0, &g_85.f0, &g_85.f0}, {&g_85.f0, &g_85.f0, &g_85.f0}, {&g_85.f0, &g_85.f0, &g_85.f0}, {&g_85.f0, &g_85.f0, &g_85.f0}, {&g_85.f0, &g_85.f0, &g_85.f0}, {&g_85.f0, &g_85.f0, &g_85.f0}, {&g_85.f0, &g_85.f0, &g_85.f0}}};
static unsigned g_351 = 0xB29225A2L;
static short g_354 = 0x7301L;
static union U1 g_368 = {255UL};
static union U1 *g_428 = &g_368;
static int g_467 = (-1L);
static int g_521 = 0xFEC0BA3FL;



static union U0 func_1(void);
static short func_10(short p_11);
static unsigned char func_16(union U1 * p_17, char * p_18, union U0 p_19, union U1 * p_20);
static char * func_22(union U0 p_23);
static union U1 func_29(union U1 p_30, short p_31, short p_32);
static unsigned short func_34(char * p_35, union U0 p_36, unsigned p_37, char * p_38, union U1 p_39);
static char * func_40(union U2 p_41, char * p_42, int p_43, union U1 * p_44);
static union U2 func_45(char * p_46, int * p_47, int p_48, unsigned p_49);
static int func_50(int p_51, unsigned p_52, unsigned p_53, char * p_54);
static unsigned short func_65(unsigned short p_66, char p_67);
static union U0 func_1(void)
{
    union U1 **l_2 = (void*)0;
    union U1 *l_4 = &g_5;
    union U1 **l_3 = &l_4;
    union U1 *l_21 = (void*)0;
    union U0 l_24 = {-8L};
    union U2 *l_675 = &g_85;
    union U2 **l_674 = &l_675;
    (*l_3) = (void*)0;
    g_82 = ((safe_mod_func_uint8_t_u_u(0x9AL, (safe_rshift_func_int16_t_s_s(func_10((safe_mod_func_uint8_t_u_u((0x4BL | ((safe_sub_func_uint8_t_u_u(func_16(((*l_3) = l_21), func_22(l_24), l_24, l_21), ((g_351 | 0UL) != 9UL))) || l_24.f1)), l_24.f1))), 0)))) , (void*)0);
    (*g_337) = (func_65((safe_sub_func_int32_t_s_s((safe_rshift_func_uint16_t_u_s(func_65((g_160 != (~func_10((func_65(g_63[2], (((void*)0 == l_674) | g_120)) ^ l_24.f0)))), l_24.f0), 3)), l_24.f0)), l_24.f1) != l_24.f0);
    return l_24;
}







static short func_10(short p_11)
{
    int *l_663 = &g_63[2];
    int l_664 = 0x0A4DB55DL;
    unsigned short *l_665 = (void*)0;
    unsigned short *l_666 = &g_120;
    short *l_669 = &g_85.f0;
    (**g_279) = l_663;
    (*g_81) = (-1L);
    (***g_279) = (((*l_666) = l_664) && ((*l_669) = ((safe_lshift_func_int8_t_s_u(p_11, 7)) , p_11)));
    return (*l_663);
}







static unsigned char func_16(union U1 * p_17, char * p_18, union U0 p_19, union U1 * p_20)
{
    union U1 **l_396 = &g_251[1];
    int l_399 = 0xC9C15103L;
    union U2 l_413 = {0x26D4L};
    unsigned char l_417 = 0x9FL;
    char *l_420 = &g_61;
    union U1 l_464 = {0xDCL};
    unsigned char l_487 = 0x5EL;
    char l_489[1][3];
    union U1 ***l_508 = (void*)0;
    char l_522 = 2L;
    char l_555 = 0x0FL;
    char *l_594 = &l_555;
    unsigned char l_602 = 246UL;
    unsigned short *l_634 = &g_261[5];
    unsigned l_638[9] = {0x53AF0CFEL, 0UL, 0x53AF0CFEL, 0UL, 0x53AF0CFEL, 0UL, 0x53AF0CFEL, 0UL, 0x53AF0CFEL};
    unsigned l_656[6][3][7] = {{{18446744073709551615UL, 18446744073709551610UL, 18446744073709551615UL, 1UL, 18446744073709551615UL, 18446744073709551610UL, 4UL}, {18446744073709551615UL, 18446744073709551610UL, 18446744073709551615UL, 1UL, 18446744073709551615UL, 18446744073709551610UL, 4UL}, {18446744073709551615UL, 18446744073709551610UL, 18446744073709551615UL, 1UL, 18446744073709551615UL, 18446744073709551610UL, 4UL}}, {{18446744073709551615UL, 18446744073709551610UL, 18446744073709551615UL, 1UL, 18446744073709551615UL, 18446744073709551610UL, 4UL}, {18446744073709551615UL, 18446744073709551610UL, 18446744073709551615UL, 1UL, 18446744073709551615UL, 18446744073709551610UL, 4UL}, {18446744073709551615UL, 18446744073709551610UL, 18446744073709551615UL, 1UL, 18446744073709551615UL, 18446744073709551610UL, 4UL}}, {{18446744073709551615UL, 18446744073709551610UL, 18446744073709551615UL, 1UL, 18446744073709551615UL, 18446744073709551610UL, 4UL}, {18446744073709551615UL, 18446744073709551610UL, 18446744073709551615UL, 1UL, 18446744073709551615UL, 18446744073709551610UL, 4UL}, {18446744073709551615UL, 18446744073709551610UL, 18446744073709551615UL, 1UL, 18446744073709551615UL, 18446744073709551610UL, 4UL}}, {{18446744073709551615UL, 18446744073709551610UL, 18446744073709551615UL, 1UL, 18446744073709551615UL, 18446744073709551610UL, 4UL}, {18446744073709551615UL, 18446744073709551610UL, 18446744073709551615UL, 1UL, 18446744073709551615UL, 18446744073709551610UL, 4UL}, {18446744073709551615UL, 18446744073709551610UL, 18446744073709551615UL, 1UL, 18446744073709551615UL, 18446744073709551610UL, 4UL}}, {{18446744073709551615UL, 18446744073709551610UL, 18446744073709551615UL, 1UL, 18446744073709551615UL, 18446744073709551610UL, 4UL}, {18446744073709551615UL, 18446744073709551610UL, 18446744073709551615UL, 1UL, 18446744073709551615UL, 18446744073709551610UL, 4UL}, {18446744073709551615UL, 18446744073709551610UL, 18446744073709551615UL, 1UL, 18446744073709551615UL, 18446744073709551610UL, 4UL}}, {{18446744073709551615UL, 18446744073709551610UL, 18446744073709551615UL, 1UL, 18446744073709551615UL, 18446744073709551610UL, 4UL}, {18446744073709551615UL, 18446744073709551610UL, 18446744073709551615UL, 1UL, 18446744073709551615UL, 18446744073709551610UL, 4UL}, {18446744073709551615UL, 18446744073709551610UL, 18446744073709551615UL, 1UL, 18446744073709551615UL, 18446744073709551610UL, 4UL}}};
    int i, j, k;
    for (i = 0; i < 1; i++)
    {
        for (j = 0; j < 3; j++)
            l_489[i][j] = 0xD7L;
    }
    if ((!(((*l_396) = p_17) == p_20)))
    {
        int *l_402 = &g_278[0].f0;
        for (g_241 = 0; (g_241 < 26); g_241++)
        {
            (*g_337) = l_399;
            for (g_72 = (-15); (g_72 > (-3)); ++g_72)
            {
                int *l_403[10] = {&g_63[2], &g_77, &g_63[2], &g_77, &g_63[2], &g_77, &g_63[2], &g_77, &g_63[2], &g_77};
                int i;
                (*g_81) = 1L;
                (**g_279) = l_402;
                (**g_279) = l_403[9];
            }
        }
    }
    else
    {
        unsigned char l_414 = 249UL;
        char *l_415 = &g_72;
        unsigned *l_416[8][6] = {{&g_233, &g_233, &g_233, &g_233, (void*)0, &g_351}, {&g_233, &g_233, &g_233, &g_233, (void*)0, &g_351}, {&g_233, &g_233, &g_233, &g_233, (void*)0, &g_351}, {&g_233, &g_233, &g_233, &g_233, (void*)0, &g_351}, {&g_233, &g_233, &g_233, &g_233, (void*)0, &g_351}, {&g_233, &g_233, &g_233, &g_233, (void*)0, &g_351}, {&g_233, &g_233, &g_233, &g_233, (void*)0, &g_351}, {&g_233, &g_233, &g_233, &g_233, (void*)0, &g_351}};
        union U2 l_419 = {0x26A3L};
        union U1 l_431[6][4][10] = {{{{0x88L}, {0xF2L}, {1UL}, {0x09L}, {251UL}, {0xF8L}, {0x87L}, {1UL}, {1UL}, {0xC0L}}, {{0x88L}, {0xF2L}, {1UL}, {0x09L}, {251UL}, {0xF8L}, {0x87L}, {1UL}, {1UL}, {0xC0L}}, {{0x88L}, {0xF2L}, {1UL}, {0x09L}, {251UL}, {0xF8L}, {0x87L}, {1UL}, {1UL}, {0xC0L}}, {{0x88L}, {0xF2L}, {1UL}, {0x09L}, {251UL}, {0xF8L}, {0x87L}, {1UL}, {1UL}, {0xC0L}}}, {{{0x88L}, {0xF2L}, {1UL}, {0x09L}, {251UL}, {0xF8L}, {0x87L}, {1UL}, {1UL}, {0xC0L}}, {{0x88L}, {0xF2L}, {1UL}, {0x09L}, {251UL}, {0xF8L}, {0x87L}, {1UL}, {1UL}, {0xC0L}}, {{0x88L}, {0xF2L}, {1UL}, {0x09L}, {251UL}, {0xF8L}, {0x87L}, {1UL}, {1UL}, {0xC0L}}, {{0x88L}, {0xF2L}, {1UL}, {0x09L}, {251UL}, {0xF8L}, {0x87L}, {1UL}, {1UL}, {0xC0L}}}, {{{0x88L}, {0xF2L}, {1UL}, {0x09L}, {251UL}, {0xF8L}, {0x87L}, {1UL}, {1UL}, {0xC0L}}, {{0x88L}, {0xF2L}, {1UL}, {0x09L}, {251UL}, {0xF8L}, {0x87L}, {1UL}, {1UL}, {0xC0L}}, {{0x88L}, {0xF2L}, {1UL}, {0x09L}, {251UL}, {0xF8L}, {0x87L}, {1UL}, {1UL}, {0xC0L}}, {{0x88L}, {0xF2L}, {1UL}, {0x09L}, {251UL}, {0xF8L}, {0x87L}, {1UL}, {1UL}, {0xC0L}}}, {{{0x88L}, {0xF2L}, {1UL}, {0x09L}, {251UL}, {0xF8L}, {0x87L}, {1UL}, {1UL}, {0xC0L}}, {{0x88L}, {0xF2L}, {1UL}, {0x09L}, {251UL}, {0xF8L}, {0x87L}, {1UL}, {1UL}, {0xC0L}}, {{0x88L}, {0xF2L}, {1UL}, {0x09L}, {251UL}, {0xF8L}, {0x87L}, {1UL}, {1UL}, {0xC0L}}, {{0x88L}, {0xF2L}, {1UL}, {0x09L}, {251UL}, {0xF8L}, {0x87L}, {1UL}, {1UL}, {0xC0L}}}, {{{0x88L}, {0xF2L}, {1UL}, {0x09L}, {251UL}, {0xF8L}, {0x87L}, {1UL}, {1UL}, {0xC0L}}, {{0x88L}, {0xF2L}, {1UL}, {0x09L}, {251UL}, {0xF8L}, {0x87L}, {1UL}, {1UL}, {0xC0L}}, {{0x88L}, {0xF2L}, {1UL}, {0x09L}, {251UL}, {0xF8L}, {0x87L}, {1UL}, {1UL}, {0xC0L}}, {{0x88L}, {0xF2L}, {1UL}, {0x09L}, {251UL}, {0xF8L}, {0x87L}, {1UL}, {1UL}, {0xC0L}}}, {{{0x88L}, {0xF2L}, {1UL}, {0x09L}, {251UL}, {0xF8L}, {0x87L}, {1UL}, {1UL}, {0xC0L}}, {{0x88L}, {0xF2L}, {1UL}, {0x09L}, {251UL}, {0xF8L}, {0x87L}, {1UL}, {1UL}, {0xC0L}}, {{0x88L}, {0xF2L}, {1UL}, {0x09L}, {251UL}, {0xF8L}, {0x87L}, {1UL}, {1UL}, {0xC0L}}, {{0x88L}, {0xF2L}, {1UL}, {0x09L}, {251UL}, {0xF8L}, {0x87L}, {1UL}, {1UL}, {0xC0L}}}};
        short l_447 = 0x93E4L;
        union U0 *l_472 = &g_278[0];
        union U1 *l_526[8] = {(void*)0, &l_464, (void*)0, &l_464, (void*)0, &l_464, (void*)0, &l_464};
        short l_582[4][3] = {{(-1L), 0L, (-1L)}, {(-1L), 0L, (-1L)}, {(-1L), 0L, (-1L)}, {(-1L), 0L, (-1L)}};
        union U2 l_589 = {0xF8D5L};
        int *l_613 = &g_63[2];
        int *l_657[7];
        unsigned char *l_658 = &l_414;
        unsigned short l_659 = 1UL;
        short l_660 = 0xD6ACL;
        int i, j, k;
        for (i = 0; i < 7; i++)
            l_657[i] = &g_77;
        if ((safe_div_func_uint32_t_u_u((g_233 = (func_50((safe_add_func_uint8_t_u_u(g_118[0][3], ((void*)0 == &g_251[1]))), (((safe_rshift_func_uint16_t_u_s((p_19.f0 > l_399), 8)) > (safe_add_func_int8_t_s_s(((safe_unary_minus_func_uint8_t_u(g_118[0][3])) >= g_233), ((l_413 , l_414) , l_414)))) ^ p_19.f1), p_19.f0, l_415) , l_413.f0)), l_413.f0)))
        {
            unsigned char l_418 = 255UL;
            union U1 l_423[9][5][2] = {{{{0x7EL}, {0x27L}}, {{0x7EL}, {0x27L}}, {{0x7EL}, {0x27L}}, {{0x7EL}, {0x27L}}, {{0x7EL}, {0x27L}}}, {{{0x7EL}, {0x27L}}, {{0x7EL}, {0x27L}}, {{0x7EL}, {0x27L}}, {{0x7EL}, {0x27L}}, {{0x7EL}, {0x27L}}}, {{{0x7EL}, {0x27L}}, {{0x7EL}, {0x27L}}, {{0x7EL}, {0x27L}}, {{0x7EL}, {0x27L}}, {{0x7EL}, {0x27L}}}, {{{0x7EL}, {0x27L}}, {{0x7EL}, {0x27L}}, {{0x7EL}, {0x27L}}, {{0x7EL}, {0x27L}}, {{0x7EL}, {0x27L}}}, {{{0x7EL}, {0x27L}}, {{0x7EL}, {0x27L}}, {{0x7EL}, {0x27L}}, {{0x7EL}, {0x27L}}, {{0x7EL}, {0x27L}}}, {{{0x7EL}, {0x27L}}, {{0x7EL}, {0x27L}}, {{0x7EL}, {0x27L}}, {{0x7EL}, {0x27L}}, {{0x7EL}, {0x27L}}}, {{{0x7EL}, {0x27L}}, {{0x7EL}, {0x27L}}, {{0x7EL}, {0x27L}}, {{0x7EL}, {0x27L}}, {{0x7EL}, {0x27L}}}, {{{0x7EL}, {0x27L}}, {{0x7EL}, {0x27L}}, {{0x7EL}, {0x27L}}, {{0x7EL}, {0x27L}}, {{0x7EL}, {0x27L}}}, {{{0x7EL}, {0x27L}}, {{0x7EL}, {0x27L}}, {{0x7EL}, {0x27L}}, {{0x7EL}, {0x27L}}, {{0x7EL}, {0x27L}}}};
            int *l_429 = (void*)0;
            char *l_430 = &g_72;
            union U0 l_473[3] = {{9L}, {9L}, {9L}};
            union U1 l_475 = {3UL};
            union U0 *l_544 = &l_473[1];
            unsigned char l_554 = 0xA4L;
            union U2 *l_557 = (void*)0;
            int i, j, k;
            (***g_279) = (l_417 | p_19.f1);
            if (func_34(p_18, g_278[0], l_418, l_415, l_431[2][1][1]))
            {
                unsigned l_432 = 0xB1737E82L;
                int *l_433 = &g_63[2];
                unsigned char *l_448 = &l_414;
                union U2 l_474[10][10] = {{{0x2A63L}, {0x63DDL}, {0x2A4BL}, {0xA0E1L}, {0L}, {-6L}, {0x63DDL}, {0x9AC4L}, {0x2A4BL}, {0xCDE9L}}, {{0x2A63L}, {0x63DDL}, {0x2A4BL}, {0xA0E1L}, {0L}, {-6L}, {0x63DDL}, {0x9AC4L}, {0x2A4BL}, {0xCDE9L}}, {{0x2A63L}, {0x63DDL}, {0x2A4BL}, {0xA0E1L}, {0L}, {-6L}, {0x63DDL}, {0x9AC4L}, {0x2A4BL}, {0xCDE9L}}, {{0x2A63L}, {0x63DDL}, {0x2A4BL}, {0xA0E1L}, {0L}, {-6L}, {0x63DDL}, {0x9AC4L}, {0x2A4BL}, {0xCDE9L}}, {{0x2A63L}, {0x63DDL}, {0x2A4BL}, {0xA0E1L}, {0L}, {-6L}, {0x63DDL}, {0x9AC4L}, {0x2A4BL}, {0xCDE9L}}, {{0x2A63L}, {0x63DDL}, {0x2A4BL}, {0xA0E1L}, {0L}, {-6L}, {0x63DDL}, {0x9AC4L}, {0x2A4BL}, {0xCDE9L}}, {{0x2A63L}, {0x63DDL}, {0x2A4BL}, {0xA0E1L}, {0L}, {-6L}, {0x63DDL}, {0x9AC4L}, {0x2A4BL}, {0xCDE9L}}, {{0x2A63L}, {0x63DDL}, {0x2A4BL}, {0xA0E1L}, {0L}, {-6L}, {0x63DDL}, {0x9AC4L}, {0x2A4BL}, {0xCDE9L}}, {{0x2A63L}, {0x63DDL}, {0x2A4BL}, {0xA0E1L}, {0L}, {-6L}, {0x63DDL}, {0x9AC4L}, {0x2A4BL}, {0xCDE9L}}, {{0x2A63L}, {0x63DDL}, {0x2A4BL}, {0xA0E1L}, {0L}, {-6L}, {0x63DDL}, {0x9AC4L}, {0x2A4BL}, {0xCDE9L}}};
                int l_480[10] = {0x80341F62L, 0xD81F35FDL, 0x5F4D9917L, 0x5F4D9917L, 0xD81F35FDL, 0x80341F62L, 0xD81F35FDL, 0x5F4D9917L, 0x5F4D9917L, 0xD81F35FDL};
                int i, j;
                if (l_432)
                {
                    l_429 = (**g_279);
                    (*l_429) = (***g_279);
                    l_429 = l_433;
                }
                else
                {
                    int *l_438 = &g_63[3];
                    for (g_241 = 1; (g_241 <= 7); g_241 += 1)
                    {
                        int i;
                        (**g_279) = (l_413 , &g_63[g_241]);
                        (***g_279) = (-7L);
                        (**g_279) = (void*)0;
                    }
                    for (g_354 = 0; (g_354 != 15); g_354++)
                    {
                        int *l_437 = (void*)0;
                        if (l_414)
                            break;
                        (**g_279) = ((0UL <= (safe_unary_minus_func_uint16_t_u(p_19.f0))) , l_437);
                        (**g_279) = l_438;
                        (***g_279) = (g_160 ^ (l_413.f0 || (l_413.f0 >= 0x8EL)));
                    }
                    (*l_433) = 0x800E8C5EL;
                }
                if ((safe_add_func_int32_t_s_s(((((~p_19.f0) >= ((65528UL != (0UL >= (safe_rshift_func_int16_t_s_u(((void*)0 != l_430), (safe_rshift_func_uint8_t_u_s(((*l_448) = (((((*l_433) = ((safe_mod_func_uint16_t_u_u(((void*)0 != &l_419), 65535UL)) > l_447)) , l_431[2][1][1].f0) >= p_19.f1) != p_19.f1)), p_19.f0)))))) & 2UL)) ^ p_19.f1) | p_19.f0), l_419.f0)))
                {
                    unsigned l_460 = 4294967295UL;
                    int l_463 = 7L;
                    (**g_279) = l_416[4][5];
                    for (g_72 = 0; (g_72 == 10); g_72++)
                    {
                        unsigned l_455 = 0UL;
                        short *l_461 = &l_419.f0;
                        short *l_462 = &l_447;
                        p_19.f0 = (safe_rshift_func_uint8_t_u_u(func_34((*g_82), g_278[0], (p_19.f1 = (safe_add_func_int16_t_s_s(((*l_462) = ((*l_461) = ((((*l_420) = l_455) >= ((0xC3D97539L <= (safe_rshift_func_uint16_t_u_s(func_65(((+(safe_add_func_uint16_t_u_u(0xFF42L, (l_460 = g_274[2][1])))) > l_419.f0), (*l_433)), p_19.f0))) == 0x8EFCF066L)) < p_19.f1))), l_463))), p_18, l_464), 5));
                    }
                }
                else
                {
                    (**g_279) = (**g_279);
                    for (l_447 = 8; (l_447 == (-19)); l_447 = safe_sub_func_uint16_t_u_u(l_447, 6))
                    {
                        (*l_433) = p_19.f1;
                        p_19.f0 = (((*l_433) >= 0x43L) && 0x9FL);
                        return p_19.f0;
                    }
                    l_433 = ((**g_279) = l_433);
                    (*l_433) = ((g_467 , ((l_417 >= (((*g_337) = func_34(p_18, g_278[0], (((((safe_lshift_func_int8_t_s_s((-1L), 6)) | ((l_399 = p_19.f1) , (((safe_add_func_int16_t_s_s(0xE2FEL, ((l_419.f2 = l_417) , g_261[1]))) , g_72) == p_19.f1))) , l_472) != &g_278[0]) < (*l_433)), (*g_82), (*g_428))) < 1L)) , l_414)) >= g_59);
                }
                if (func_34(l_448, l_473[0], (((*l_448) = (p_19.f1 || (((p_19.f0 = 0L) == (l_413.f0 < ((l_474[4][4] , l_413) , l_413.f0))) , l_419.f0))) < (*l_433)), (*g_82), l_475))
                {
                    unsigned short *l_488 = &g_118[5][6];
                    if ((p_19.f1 && (safe_mod_func_int8_t_s_s((safe_lshift_func_int16_t_s_s(l_480[0], (safe_div_func_uint32_t_u_u(p_19.f0, (((*l_488) = (safe_div_func_int16_t_s_s((g_274[2][1] , (((safe_div_func_int16_t_s_s(((***g_279) >= func_50(p_19.f0, (g_63[2] <= l_414), l_487, p_18)), g_241)) == p_19.f0) & 1UL)), g_278[0].f1))) ^ l_447))))), l_489[0][1]))))
                    {
                        int l_490[1][4][5] = {{{8L, 8L, (-1L), 0x02800F1CL, 0x63A5F474L}, {8L, 8L, (-1L), 0x02800F1CL, 0x63A5F474L}, {8L, 8L, (-1L), 0x02800F1CL, 0x63A5F474L}, {8L, 8L, (-1L), 0x02800F1CL, 0x63A5F474L}}};
                        int i, j, k;
                        (*g_337) = (***g_279);
                        (*g_337) = l_490[0][0][3];
                        return p_19.f0;
                    }
                    else
                    {
                        unsigned short l_491 = 0UL;
                        p_19.f0 = func_65(((*l_488) = g_118[0][3]), ((*l_420) = ((*l_430) = l_491)));
                        return p_19.f1;
                    }
                }
                else
                {
                    for (g_61 = 16; (g_61 != 23); g_61++)
                    {
                        char l_496[4];
                        int ***l_501 = &g_280[0][1][0];
                        int i;
                        for (i = 0; i < 4; i++)
                            l_496[i] = 0xB2L;
                        (*g_81) = (safe_add_func_uint16_t_u_u(((p_19.f0 = ((*g_243) != (*g_243))) , l_496[1]), ((l_399 = (((g_85 , (l_489[0][0] >= (safe_lshift_func_uint16_t_u_u(0xFC27L, 9)))) || (g_61 || (l_501 == &g_280[4][0][5]))) & g_77)) , l_487)));
                    }
                }
                return p_19.f0;
            }
            else
            {
                union U1 ***l_506 = &l_396;
                union U1 ****l_507[9][8] = {{&l_506, &l_506, &l_506, &l_506, &l_506, &l_506, &l_506, &l_506}, {&l_506, &l_506, &l_506, &l_506, &l_506, &l_506, &l_506, &l_506}, {&l_506, &l_506, &l_506, &l_506, &l_506, &l_506, &l_506, &l_506}, {&l_506, &l_506, &l_506, &l_506, &l_506, &l_506, &l_506, &l_506}, {&l_506, &l_506, &l_506, &l_506, &l_506, &l_506, &l_506, &l_506}, {&l_506, &l_506, &l_506, &l_506, &l_506, &l_506, &l_506, &l_506}, {&l_506, &l_506, &l_506, &l_506, &l_506, &l_506, &l_506, &l_506}, {&l_506, &l_506, &l_506, &l_506, &l_506, &l_506, &l_506, &l_506}, {&l_506, &l_506, &l_506, &l_506, &l_506, &l_506, &l_506, &l_506}};
                int l_509 = (-1L);
                unsigned short *l_514 = &g_261[3];
                unsigned short *l_515 = (void*)0;
                unsigned short *l_516 = &g_118[1][0];
                union U2 *l_563 = &l_413;
                union U2 **l_564 = &l_563;
                int i, j;
                if (((safe_add_func_int32_t_s_s(func_50((safe_rshift_func_uint8_t_u_s(g_118[0][3], 2)), ((p_19.f0 , l_423[0][2][1]) , ((l_475.f0 <= ((&g_250[2] == (l_508 = l_506)) , p_19.f1)) > 0x05L)), (l_419.f2 = (l_413.f2 = 0UL)), l_430), p_19.f1)) <= l_509))
                {
                    int l_510 = 0L;
                    int *l_511 = &l_509;
                    p_19.f0 = (0x1267E5E7L > l_510);
                    (**g_279) = l_511;
                    (**g_279) = l_511;
                }
                else
                {
                    (*g_337) = (g_233 || l_419.f0);
                    (**g_279) = (**g_279);
                }
                if (((((((p_19.f0 == (safe_lshift_func_int16_t_s_u(l_447, ((*l_516) = ((*l_514) = ((*g_428) , g_233)))))) >= (g_521 = (safe_sub_func_int16_t_s_s((l_419.f0 , (0x40L & (0xB5E9L ^ (safe_div_func_int32_t_s_s((0xF4A3E529L >= ((void*)0 != l_416[4][0])), (*g_337)))))), 9UL)))) > l_447) == g_274[3][5]) | g_241) <= p_19.f0))
                {
                    if (((***g_279) = (l_522 = (*g_81))))
                    {
                        (*g_81) = p_19.f1;
                    }
                    else
                    {
                        short l_523 = (-1L);
                        return l_523;
                    }
                }
                else
                {
                    for (g_368.f0 = 0; (g_368.f0 >= 16); g_368.f0 = safe_add_func_uint8_t_u_u(g_368.f0, 2))
                    {
                        union U1 ***l_541 = &l_396;
                        int l_542 = 0x08D50906L;
                        unsigned short l_543 = 0xD87DL;
                        l_526[5] = p_17;
                        (*g_81) = ((g_233 , (void*)0) == (((((*g_428) , ((l_413 , ((*l_514) = (safe_lshift_func_int8_t_s_s(((*l_420) = ((((safe_lshift_func_uint8_t_u_s((safe_div_func_uint32_t_u_u(((((safe_rshift_func_int16_t_s_s(((safe_sub_func_uint32_t_u_u((((*l_430) = (l_509 | ((g_85 = g_85) , ((((void*)0 != l_541) ^ (p_18 == (*g_82))) == l_542)))) || l_509), p_19.f1)) > l_419.f0), 0)) , l_542) , 0x619DL) <= g_278[0].f0), 0x0E4A5E2FL)), l_543)) != 0L) , l_419.f0) <= 8L)), 4)))) < 0L)) | g_233) , l_414) , l_544));
                        (*g_81) = l_509;
                        (*g_337) = 0L;
                    }
                }
                if (p_19.f1)
                {
                    union U2 *l_545 = &g_85;
                    union U2 **l_546 = (void*)0;
                    union U2 **l_547 = &l_545;
                    int *l_548 = &l_413.f2;
                    (*l_547) = l_545;
                    l_548 = l_416[7][3];
                    for (g_5.f0 = (-26); (g_5.f0 >= 57); ++g_5.f0)
                    {
                        union U0 l_556[5] = {{0x8876D1C4L}, {0x8876D1C4L}, {0x8876D1C4L}, {0x8876D1C4L}, {0x8876D1C4L}};
                        int i;
                        (*g_337) = (safe_div_func_uint8_t_u_u((((l_522 != p_19.f1) ^ (safe_unary_minus_func_int16_t_s((l_555 = func_65(g_120, l_554))))) , p_19.f1), (l_556[3] , ((g_521 < func_50(g_118[0][2], g_63[7], p_19.f0, l_430)) | 0L))));
                    }
                }
                else
                {
                    union U2 **l_558 = (void*)0;
                    union U2 **l_559 = &l_557;
                    (*l_559) = l_557;
                    for (g_59 = 1; (g_59 >= 0); g_59 -= 1)
                    {
                        return g_368.f0;
                    }
                    for (g_521 = 3; (g_521 >= 0); g_521 -= 1)
                    {
                        union U0 **l_560 = &l_544;
                        (*l_560) = (void*)0;
                        if (p_19.f1)
                            break;
                        (*g_337) = (safe_sub_func_uint8_t_u_u(l_489[0][1], l_487));
                    }
                }
                (*l_564) = l_563;
            }
            return p_19.f1;
        }
        else
        {
            int *l_565 = &g_28;
            int *l_566 = (void*)0;
            int *l_567 = &l_419.f2;
            union U0 l_578 = {-6L};
            unsigned *l_580[2][2][10] = {{{(void*)0, &g_241, &g_241, &g_278[0].f1, &g_278[0].f1, &g_241, &g_241, (void*)0, &g_241, (void*)0}, {(void*)0, &g_241, &g_241, &g_278[0].f1, &g_278[0].f1, &g_241, &g_241, (void*)0, &g_241, (void*)0}}, {{(void*)0, &g_241, &g_241, &g_278[0].f1, &g_278[0].f1, &g_241, &g_241, (void*)0, &g_241, (void*)0}, {(void*)0, &g_241, &g_241, &g_278[0].f1, &g_278[0].f1, &g_241, &g_241, (void*)0, &g_241, (void*)0}}};
            union U1 l_581 = {0xE1L};
            union U1 l_583 = {0xDEL};
            unsigned char *l_584[6];
            union U1 l_585 = {0xD6L};
            int i, j, k;
            for (i = 0; i < 6; i++)
                l_584[i] = &l_464.f0;
            (*l_567) = ((*l_565) = ((***g_279) = ((*g_337) = p_19.f0)));
            if (func_34(l_415, p_19, func_50(p_19.f0, ((safe_add_func_int32_t_s_s(p_19.f0, (9L < (((l_399 = (safe_mod_func_uint8_t_u_u((g_5.f0 = func_34((*g_82), ((safe_rshift_func_uint16_t_u_u((safe_lshift_func_int8_t_s_s((+(safe_lshift_func_int8_t_s_u(((func_34(p_18, l_578, (l_419.f2 = (safe_unary_minus_func_uint8_t_u(((0x9CA8FA26L == (*l_567)) ^ l_419.f0)))), p_18, l_581) | l_413.f0) || 0x94L), p_19.f0))), l_582[3][0])), 15)) , l_578), g_521, p_18, l_583)), l_431[2][1][1].f0))) > l_487) ^ 65535UL)))) | l_582[1][0]), l_414, &l_555), (*g_82), l_585))
            {
                unsigned l_588 = 1UL;
                unsigned short *l_599 = &g_120;
                (*g_337) = (p_19.f1 ^ ((*l_565) = ((***g_279) = func_50(l_431[2][1][1].f0, (l_419.f2 = (safe_mod_func_int8_t_s_s(1L, l_588))), l_414, l_594))));
                if ((~(((p_19.f1 > (-1L)) | (safe_add_func_int16_t_s_s(((+(*l_567)) , func_65(l_588, p_19.f0)), (((((safe_rshift_func_uint16_t_u_s(((*l_599) = g_233), 14)) <= p_19.f1) > (p_19.f0 , l_588)) , p_17) != p_17)))) , p_19.f1)))
                {
                    p_19.f0 = ((*l_567) = (func_65(l_588, (safe_sub_func_int8_t_s_s(l_602, p_19.f0))) > func_50(p_19.f0, (safe_sub_func_uint16_t_u_u(0x1BB5L, ((void*)0 != &g_85))), (&g_241 == (void*)0), (*g_82))));
                }
                else
                {
                    unsigned char l_607[10] = {0xE9L, 1UL, 255UL, 255UL, 1UL, 0xE9L, 1UL, 255UL, 255UL, 1UL};
                    int i;
                    (*l_567) = (safe_sub_func_uint16_t_u_u(g_241, ((func_50(l_607[5], ((safe_add_func_uint16_t_u_u(((g_28 < (safe_lshift_func_int8_t_s_s((l_607[2] , 5L), 3))) && (((0L || p_19.f0) <= g_368.f0) & ((p_19.f0 | l_399) < p_19.f1))), l_489[0][1])) || 0L), l_489[0][0], p_18) <= g_278[0].f1) <= (*l_565))));
                }
            }
            else
            {
                int *l_612 = &g_278[0].f0;
                char *l_633 = &g_72;
                l_613 = l_612;
                for (l_417 = 24; (l_417 > 35); l_417++)
                {
                    unsigned l_616 = 0UL;
                    int l_632 = 5L;
                }
            }
        }
        l_659 = (safe_add_func_uint32_t_u_u((safe_div_func_int32_t_s_s(((*g_81) = ((g_160 & (safe_lshift_func_int8_t_s_u(((*l_594) = ((((*g_81) >= ((((*l_613) , &l_613) == (void*)0) <= (~0xBAL))) == ((p_19.f0 = (safe_lshift_func_int8_t_s_u(l_656[0][2][4], 7))) > l_602)) <= ((*l_658) = (l_656[2][0][6] , l_489[0][0])))), 6))) , p_19.f0)), 0x8786671CL)), g_85.f0));
        (*g_81) = (+(~l_660));
    }
    return l_656[1][1][5];
}







static char * func_22(union U0 p_23)
{
    int *l_27 = &g_28;
    union U1 l_33 = {248UL};
    union U2 l_290 = {0xDBBAL};
    char *l_291 = (void*)0;
    unsigned short *l_353 = &g_120;
    union U1 **l_388 = &g_251[2];
    int *l_389 = (void*)0;
    int *l_390 = &g_77;
    unsigned short *l_395 = &g_274[2][1];
    (*l_390) = (safe_add_func_int32_t_s_s(((*g_337) = (((*l_27) = 0x4ADCA1A1L) <= ((func_29(l_33, (0x74A7L >= ((((g_5.f0 , ((g_5.f0 , g_5.f0) >= 1UL)) && (((*l_353) = func_34(func_40((l_290 = func_45((func_50(p_23.f1, g_5.f0, p_23.f1, g_55[1]) , (*g_82)), l_27, l_33.f0, p_23.f1)), l_291, p_23.f1, &l_33), p_23, p_23.f1, l_291, l_33)) != g_351)) , g_354) || p_23.f1)), p_23.f1) , l_388) == &g_251[2]))), p_23.f1));
    (*g_337) = ((*l_390) != p_23.f1);
    (***g_279) = (((g_278[0] , ((safe_sub_func_uint16_t_u_u(((*l_353) = p_23.f0), ((safe_add_func_int8_t_s_s((*l_390), (*l_390))) , ((*l_395) = g_63[2])))) < p_23.f1)) || (-10L)) != ((~(p_23.f1 < p_23.f0)) && g_278[0].f1));
    return l_291;
}







static union U1 func_29(union U1 p_30, short p_31, short p_32)
{
    union U2 l_362 = {-7L};
    char *l_363 = &g_61;
    union U1 *l_366 = &g_5;
    union U1 *l_367 = &g_368;
    union U0 l_369 = {0xA3DFBA84L};
    unsigned char *l_370[6][8] = {{(void*)0, &g_368.f0, &g_5.f0, &g_368.f0, &g_5.f0, &g_368.f0, (void*)0, &g_5.f0}, {(void*)0, &g_368.f0, &g_5.f0, &g_368.f0, &g_5.f0, &g_368.f0, (void*)0, &g_5.f0}, {(void*)0, &g_368.f0, &g_5.f0, &g_368.f0, &g_5.f0, &g_368.f0, (void*)0, &g_5.f0}, {(void*)0, &g_368.f0, &g_5.f0, &g_368.f0, &g_5.f0, &g_368.f0, (void*)0, &g_5.f0}, {(void*)0, &g_368.f0, &g_5.f0, &g_368.f0, &g_5.f0, &g_368.f0, (void*)0, &g_5.f0}, {(void*)0, &g_368.f0, &g_5.f0, &g_368.f0, &g_5.f0, &g_368.f0, (void*)0, &g_5.f0}};
    int l_371[4];
    short *l_372 = (void*)0;
    short *l_373 = &l_362.f0;
    union U1 l_387 = {3UL};
    int i, j;
    for (i = 0; i < 4; i++)
        l_371[i] = 0x311BB9CFL;
    (*g_337) = ((safe_add_func_int8_t_s_s((((~(safe_div_func_int16_t_s_s(((*l_373) = ((safe_rshift_func_uint16_t_u_u(65535UL, 15)) , ((g_368.f0 = (0UL | ((safe_unary_minus_func_uint8_t_u(0UL)) > func_50(((((((func_34(l_363, l_369, g_278[0].f1, l_363, (*l_367)) , l_362.f0) < p_31) | 4UL) ^ g_72) != l_362.f0) , p_31), p_31, p_31, (*g_82))))) != l_371[1]))), g_261[5]))) && l_369.f1) , p_30.f0), 0x21L)) == p_31);
    for (g_233 = 0; (g_233 > 45); g_233 = safe_add_func_uint32_t_u_u(g_233, 9))
    {
        unsigned short l_383 = 65535UL;
        char *l_384 = &g_59;
        unsigned short *l_385 = &g_261[7];
        unsigned short *l_386 = &g_274[2][1];
        (*g_337) = func_50((func_65(((*l_386) = (((g_85.f0 | 2L) , ((*l_385) = ((p_31 != p_31) , (safe_mod_func_int8_t_s_s(((safe_mod_func_uint32_t_u_u(((func_50((safe_unary_minus_func_uint16_t_u((p_32 , (((*l_366) , (safe_div_func_uint16_t_u_u(65528UL, l_383))) , ((p_30.f0 & p_31) || p_32))))), l_383, g_118[1][4], l_384) , 0x9F3BL) != p_30.f0), g_118[4][3])) & l_383), (-1L)))))) <= 0x31EFL)), p_31) >= p_32), l_383, l_371[1], (*g_82));
    }
    return l_387;
}







static unsigned short func_34(char * p_35, union U0 p_36, unsigned p_37, char * p_38, union U1 p_39)
{
    int *l_336 = &g_63[0];
    short *l_347 = &g_85.f0;
    char l_348 = (-6L);
    unsigned *l_349 = &g_233;
    unsigned *l_350[1][4][4] = {{{&g_351, (void*)0, &g_351, (void*)0}, {&g_351, (void*)0, &g_351, (void*)0}, {&g_351, (void*)0, &g_351, (void*)0}, {&g_351, (void*)0, &g_351, (void*)0}}};
    int l_352 = 1L;
    int i, j, k;
    (*l_336) = 0x4735E3E4L;
    (**g_279) = (l_336 = l_336);
    l_336 = g_337;
    (*l_336) = ((((***g_279) = (*l_336)) == ((l_352 = ((*l_349) = (safe_div_func_int16_t_s_s((l_348 = ((safe_sub_func_uint32_t_u_u((safe_div_func_uint16_t_u_u((safe_rshift_func_int8_t_s_u(((g_346[0][6][0] == l_347) < g_261[5]), 3)), p_37)), (*l_336))) , (&p_37 != &g_241))), (*l_336))))) == g_351)) , 0x132C40E7L);
    return p_36.f1;
}







static char * func_40(union U2 p_41, char * p_42, int p_43, union U1 * p_44)
{
    unsigned short l_292 = 0UL;
    union U1 **l_293[6] = {(void*)0, (void*)0, (void*)0, (void*)0, (void*)0, (void*)0};
    int l_300 = 0xB5C45808L;
    union U2 *l_327[6] = {&g_85, &g_85, &g_85, &g_85, &g_85, &g_85};
    char *l_335 = &g_61;
    int i;
    if (l_292)
    {
        union U1 ***l_294 = &l_293[4];
        int l_295 = 5L;
        char *l_296 = &g_61;
        unsigned char *l_297 = &g_5.f0;
        if (((((*l_294) = l_293[4]) == &g_251[3]) != ((*l_297) = (((*l_296) = l_295) || l_295))))
        {
            unsigned short *l_298 = &g_261[6];
            int l_299 = 0xD27568DBL;
            char *l_305[2][6] = {{&g_59, &g_72, &g_59, &g_72, &g_59, &g_72}, {&g_59, &g_72, &g_59, &g_72, &g_59, &g_72}};
            int i, j;
            (***g_279) = ((((*l_298) = g_63[7]) < (((-2L) & p_43) || (((l_300 = l_299) , (((g_85 , l_292) < ((l_299 = ((safe_mod_func_uint16_t_u_u(((l_300 = (safe_add_func_uint8_t_u_u(g_278[0].f0, ((*l_296) = l_300)))) >= g_63[4]), l_292)) || 1L)) <= p_41.f0)) == g_118[0][3])) ^ l_295))) < (-10L));
            (**g_279) = &l_295;
            (**g_279) = &l_295;
        }
        else
        {
            unsigned l_314 = 18446744073709551612UL;
            char *l_320[5][9] = {{&g_59, &g_59, (void*)0, (void*)0, &g_59, &g_59, &g_72, &g_59, (void*)0}, {&g_59, &g_59, (void*)0, (void*)0, &g_59, &g_59, &g_72, &g_59, (void*)0}, {&g_59, &g_59, (void*)0, (void*)0, &g_59, &g_59, &g_72, &g_59, (void*)0}, {&g_59, &g_59, (void*)0, (void*)0, &g_59, &g_59, &g_72, &g_59, (void*)0}, {&g_59, &g_59, (void*)0, (void*)0, &g_59, &g_59, &g_72, &g_59, (void*)0}};
            int *l_321 = (void*)0;
            int i, j;
            (***g_279) = (8L & (p_41.f0 & (safe_sub_func_int8_t_s_s((~((*p_44) , ((*l_296) = (+(l_295 = ((safe_rshift_func_uint16_t_u_s((safe_div_func_int8_t_s_s(((safe_div_func_uint32_t_u_u(func_50(p_43, l_314, func_65((((safe_lshift_func_int8_t_s_u((safe_unary_minus_func_uint32_t_u(0xCA6C46E6L)), p_43)) < (safe_div_func_int8_t_s_s((-5L), l_314))) ^ 0UL), l_292), l_320[1][8]), 0x1481E0D7L)) , 0xFAL), l_300)), p_41.f0)) > l_295)))))), 0x41L))));
            (**g_279) = l_321;
        }
    }
    else
    {
        unsigned l_322[2];
        int i;
        for (i = 0; i < 2; i++)
            l_322[i] = 0x78C172E0L;
        if (((*g_82) == ((l_322[1] <= l_292) , p_42)))
        {
            union U0 *l_324 = &g_278[0];
            union U0 **l_323 = &l_324;
            short *l_325 = &g_85.f0;
            unsigned short *l_326 = &g_118[0][3];
            unsigned char *l_332[2];
            int l_333 = 0xDC7D8247L;
            int l_334[9][1][10] = {{{0x7A1DF521L, 0x844F2EB8L, 0x7A1DF521L, 0x84E9489AL, 0xEA3051C1L, 0xD0A03F03L, 0L, 0xD602D299L, 0x7064428EL, 1L}}, {{0x7A1DF521L, 0x844F2EB8L, 0x7A1DF521L, 0x84E9489AL, 0xEA3051C1L, 0xD0A03F03L, 0L, 0xD602D299L, 0x7064428EL, 1L}}, {{0x7A1DF521L, 0x844F2EB8L, 0x7A1DF521L, 0x84E9489AL, 0xEA3051C1L, 0xD0A03F03L, 0L, 0xD602D299L, 0x7064428EL, 1L}}, {{0x7A1DF521L, 0x844F2EB8L, 0x7A1DF521L, 0x84E9489AL, 0xEA3051C1L, 0xD0A03F03L, 0L, 0xD602D299L, 0x7064428EL, 1L}}, {{0x7A1DF521L, 0x844F2EB8L, 0x7A1DF521L, 0x84E9489AL, 0xEA3051C1L, 0xD0A03F03L, 0L, 0xD602D299L, 0x7064428EL, 1L}}, {{0x7A1DF521L, 0x844F2EB8L, 0x7A1DF521L, 0x84E9489AL, 0xEA3051C1L, 0xD0A03F03L, 0L, 0xD602D299L, 0x7064428EL, 1L}}, {{0x7A1DF521L, 0x844F2EB8L, 0x7A1DF521L, 0x84E9489AL, 0xEA3051C1L, 0xD0A03F03L, 0L, 0xD602D299L, 0x7064428EL, 1L}}, {{0x7A1DF521L, 0x844F2EB8L, 0x7A1DF521L, 0x84E9489AL, 0xEA3051C1L, 0xD0A03F03L, 0L, 0xD602D299L, 0x7064428EL, 1L}}, {{0x7A1DF521L, 0x844F2EB8L, 0x7A1DF521L, 0x84E9489AL, 0xEA3051C1L, 0xD0A03F03L, 0L, 0xD602D299L, 0x7064428EL, 1L}}};
            int i, j, k;
            for (i = 0; i < 2; i++)
                l_332[i] = &g_5.f0;
            (*l_323) = &g_278[0];
            (***g_279) = (((0x66L | l_322[1]) || (p_41 , (((*l_326) = (g_261[5] & ((*l_325) = l_292))) , (((l_300 = func_50(l_300, (((l_327[0] == &g_85) != (((l_333 = (safe_mod_func_uint16_t_u_u((safe_sub_func_int32_t_s_s((~(g_278[0].f0 != g_160)), p_43)), g_261[5]))) != g_59) , p_41.f0)) , g_278[0].f1), l_334[2][0][7], p_42)) , l_333) < p_41.f0)))) | p_43);
            (*l_323) = &g_278[0];
        }
        else
        {
            (***g_279) = (-1L);
        }
    }
    return l_335;
}







static union U2 func_45(char * p_46, int * p_47, int p_48, unsigned p_49)
{
    int l_197 = 1L;
    char l_209 = (-1L);
    int l_211[8];
    unsigned short *l_212 = &g_118[0][3];
    int **l_238 = (void*)0;
    int ***l_237[3][8][10] = {{{&l_238, &l_238, &l_238, &l_238, &l_238, &l_238, &l_238, &l_238, &l_238, &l_238}, {&l_238, &l_238, &l_238, &l_238, &l_238, &l_238, &l_238, &l_238, &l_238, &l_238}, {&l_238, &l_238, &l_238, &l_238, &l_238, &l_238, &l_238, &l_238, &l_238, &l_238}, {&l_238, &l_238, &l_238, &l_238, &l_238, &l_238, &l_238, &l_238, &l_238, &l_238}, {&l_238, &l_238, &l_238, &l_238, &l_238, &l_238, &l_238, &l_238, &l_238, &l_238}, {&l_238, &l_238, &l_238, &l_238, &l_238, &l_238, &l_238, &l_238, &l_238, &l_238}, {&l_238, &l_238, &l_238, &l_238, &l_238, &l_238, &l_238, &l_238, &l_238, &l_238}, {&l_238, &l_238, &l_238, &l_238, &l_238, &l_238, &l_238, &l_238, &l_238, &l_238}}, {{&l_238, &l_238, &l_238, &l_238, &l_238, &l_238, &l_238, &l_238, &l_238, &l_238}, {&l_238, &l_238, &l_238, &l_238, &l_238, &l_238, &l_238, &l_238, &l_238, &l_238}, {&l_238, &l_238, &l_238, &l_238, &l_238, &l_238, &l_238, &l_238, &l_238, &l_238}, {&l_238, &l_238, &l_238, &l_238, &l_238, &l_238, &l_238, &l_238, &l_238, &l_238}, {&l_238, &l_238, &l_238, &l_238, &l_238, &l_238, &l_238, &l_238, &l_238, &l_238}, {&l_238, &l_238, &l_238, &l_238, &l_238, &l_238, &l_238, &l_238, &l_238, &l_238}, {&l_238, &l_238, &l_238, &l_238, &l_238, &l_238, &l_238, &l_238, &l_238, &l_238}, {&l_238, &l_238, &l_238, &l_238, &l_238, &l_238, &l_238, &l_238, &l_238, &l_238}}, {{&l_238, &l_238, &l_238, &l_238, &l_238, &l_238, &l_238, &l_238, &l_238, &l_238}, {&l_238, &l_238, &l_238, &l_238, &l_238, &l_238, &l_238, &l_238, &l_238, &l_238}, {&l_238, &l_238, &l_238, &l_238, &l_238, &l_238, &l_238, &l_238, &l_238, &l_238}, {&l_238, &l_238, &l_238, &l_238, &l_238, &l_238, &l_238, &l_238, &l_238, &l_238}, {&l_238, &l_238, &l_238, &l_238, &l_238, &l_238, &l_238, &l_238, &l_238, &l_238}, {&l_238, &l_238, &l_238, &l_238, &l_238, &l_238, &l_238, &l_238, &l_238, &l_238}, {&l_238, &l_238, &l_238, &l_238, &l_238, &l_238, &l_238, &l_238, &l_238, &l_238}, {&l_238, &l_238, &l_238, &l_238, &l_238, &l_238, &l_238, &l_238, &l_238, &l_238}}};
    int ****l_239 = &l_237[2][6][8];
    char ***l_240 = &g_82;
    union U2 l_242 = {0xD321L};
    short l_284 = 8L;
    int i, j, k;
    for (i = 0; i < 8; i++)
        l_211[i] = 0x37D32D89L;
    for (p_48 = (-26); (p_48 < (-16)); p_48 = safe_add_func_int8_t_s_s(p_48, 3))
    {
        int l_210 = 0L;
        for (g_61 = 20; (g_61 > (-26)); g_61 = safe_sub_func_int8_t_s_s(g_61, 2))
        {
            union U2 l_202 = {0xF85CL};
            char ***l_203 = &g_82;
            char ****l_204 = &l_203;
            short *l_207 = &g_85.f0;
            unsigned short *l_208 = &g_118[0][3];
            g_81 = &g_77;
            (*g_81) = (safe_rshift_func_uint8_t_u_u((((*l_207) = (func_50((safe_rshift_func_uint16_t_u_u((safe_div_func_int16_t_s_s(l_197, (+((*l_208) = ((safe_sub_func_int16_t_s_s((safe_sub_func_int32_t_s_s(((l_202 , &g_82) != ((*l_204) = l_203)), 0xB6F187A6L)), ((safe_lshift_func_int16_t_s_s(l_197, ((*l_207) = (func_50(g_77, ((void*)0 != &l_202), g_160, p_46) < g_59)))) >= 0xAA4016F2L))) > (*g_81)))))), 14)), g_63[2], p_48, (*g_82)) <= l_209)) ^ p_49), l_210));
        }
    }
    if ((func_65(func_50((g_160 = (p_48 = l_209)), l_211[6], p_49, &l_209), ((((*l_212) = 0UL) , ((g_120 ^ g_118[4][1]) | 0x0B26L)) ^ l_209)) | p_49))
    {
        int l_224 = 6L;
        for (g_59 = (-22); (g_59 > 23); ++g_59)
        {
            unsigned short l_215 = 0UL;
            unsigned short *l_226 = &g_118[4][3];
            short *l_227 = &g_85.f0;
            int l_230 = (-3L);
            unsigned *l_231 = (void*)0;
            unsigned *l_232[4][3] = {{(void*)0, (void*)0, &g_233}, {(void*)0, (void*)0, &g_233}, {(void*)0, (void*)0, &g_233}, {(void*)0, (void*)0, &g_233}};
            int i, j;
            (*g_81) = func_65(l_215, (safe_mod_func_int16_t_s_s(g_63[2], 1UL)));
            (*g_81) = (p_48 ^ (safe_sub_func_int32_t_s_s((safe_add_func_uint32_t_u_u((p_49 = (safe_rshift_func_uint16_t_u_s(l_224, (safe_unary_minus_func_uint8_t_u((((((*l_227) = (((((-1L) || l_224) , l_212) != (l_226 = &g_120)) || l_215)) , (safe_rshift_func_int16_t_s_s(3L, func_50(p_48, p_48, l_230, (*g_82))))) > g_63[2]) & l_211[2])))))), 1L)), g_118[6][6])));
        }
    }
    else
    {
        int **l_234[3];
        int i;
        for (i = 0; i < 3; i++)
            l_234[i] = &g_81;
        p_47 = &l_211[1];
    }
    g_63[0] = ((*g_81) = (safe_rshift_func_int16_t_s_u((~func_65(((((p_48 , ((*l_239) = (p_49 , l_237[2][6][8]))) == (void*)0) , (g_241 = ((void*)0 != l_240))) , ((((((l_242 , g_243) != ((*g_81) , &g_244)) , p_49) != g_77) == 65535UL) , 0UL)), l_211[2])), 2)));
    for (l_209 = (-21); (l_209 >= (-15)); l_209 = safe_add_func_int16_t_s_s(l_209, 6))
    {
        int l_249[1];
        unsigned char l_254 = 8UL;
        union U2 *l_258 = &g_85;
        unsigned short l_272 = 65527UL;
        char *l_273[7][1][7] = {{{&g_59, (void*)0, &g_59, (void*)0, &g_59, (void*)0, &g_59}}, {{&g_59, (void*)0, &g_59, (void*)0, &g_59, (void*)0, &g_59}}, {{&g_59, (void*)0, &g_59, (void*)0, &g_59, (void*)0, &g_59}}, {{&g_59, (void*)0, &g_59, (void*)0, &g_59, (void*)0, &g_59}}, {{&g_59, (void*)0, &g_59, (void*)0, &g_59, (void*)0, &g_59}}, {{&g_59, (void*)0, &g_59, (void*)0, &g_59, (void*)0, &g_59}}, {{&g_59, (void*)0, &g_59, (void*)0, &g_59, (void*)0, &g_59}}};
        union U0 l_276 = {6L};
        int i, j, k;
        for (i = 0; i < 1; i++)
            l_249[i] = 0xC51319C1L;
    }
    return l_242;
}







static int func_50(int p_51, unsigned p_52, unsigned p_53, char * p_54)
{
    int *l_78 = &g_63[2];
    int l_96 = 5L;
    int *l_98 = &g_77;
    char **l_100 = &g_55[0];
    union U2 *l_138 = (void*)0;
    union U2 **l_137 = &l_138;
    unsigned l_157 = 4294967290UL;
    for (p_52 = (-30); (p_52 < 17); ++p_52)
    {
        int *l_62 = &g_63[2];
        union U1 *l_94 = &g_5;
        union U1 **l_95 = &l_94;
        unsigned l_128 = 4294967286UL;
        union U2 **l_139 = &l_138;
        unsigned short l_185 = 7UL;
        for (p_51 = 0; (p_51 <= 1); p_51 += 1)
        {
            char *l_58 = &g_59;
            char *l_60 = &g_61;
            union U1 **l_93 = (void*)0;
            int i;
        }
        (*l_95) = l_94;
    }
    return (*l_78);
}







static unsigned short func_65(unsigned short p_66, char p_67)
{
    int *l_73 = &g_63[3];
    int *l_75 = &g_63[0];
    int **l_74 = &l_75;
    int *l_76 = &g_77;
    (*l_74) = (l_73 = l_73);
    (*l_74) = (*l_74);
    (*l_76) = p_66;
    (*l_74) = &g_63[1];
    return g_63[2];
}





int main (int argc, char* argv[])
{
    int i, j, k;
    int print_hash_value = 0;
    if (argc == 2 && strcmp(argv[1], "1") == 0) print_hash_value = 1;
    platform_main_begin();
    crc32_gentab();
    func_1();
    transparent_crc(g_5.f0, "g_5.f0", print_hash_value);
    transparent_crc(g_28, "g_28", print_hash_value);
    transparent_crc(g_59, "g_59", print_hash_value);
    transparent_crc(g_61, "g_61", print_hash_value);
    for (i = 0; i < 8; i++)
    {
        transparent_crc(g_63[i], "g_63[i]", print_hash_value);
        if (print_hash_value) printf("index = [%d]\n", i);

    }
    transparent_crc(g_72, "g_72", print_hash_value);
    transparent_crc(g_77, "g_77", print_hash_value);
    transparent_crc(g_85.f0, "g_85.f0", print_hash_value);
    for (i = 0; i < 7; i++)
    {
        for (j = 0; j < 7; j++)
        {
            transparent_crc(g_118[i][j], "g_118[i][j]", print_hash_value);
            if (print_hash_value) printf("index = [%d][%d]\n", i, j);

        }
    }
    transparent_crc(g_120, "g_120", print_hash_value);
    transparent_crc(g_160, "g_160", print_hash_value);
    transparent_crc(g_233, "g_233", print_hash_value);
    transparent_crc(g_241, "g_241", print_hash_value);
    for (i = 0; i < 10; i++)
    {
        transparent_crc(g_261[i], "g_261[i]", print_hash_value);
        if (print_hash_value) printf("index = [%d]\n", i);

    }
    for (i = 0; i < 4; i++)
    {
        for (j = 0; j < 8; j++)
        {
            transparent_crc(g_274[i][j], "g_274[i][j]", print_hash_value);
            if (print_hash_value) printf("index = [%d][%d]\n", i, j);

        }
    }
    for (i = 0; i < 2; i++)
    {
        transparent_crc(g_278[i].f0, "g_278[i].f0", print_hash_value);
        transparent_crc(g_278[i].f1, "g_278[i].f1", print_hash_value);
        if (print_hash_value) printf("index = [%d]\n", i);

    }
    transparent_crc(g_351, "g_351", print_hash_value);
    transparent_crc(g_354, "g_354", print_hash_value);
    transparent_crc(g_368.f0, "g_368.f0", print_hash_value);
    transparent_crc(g_467, "g_467", print_hash_value);
    transparent_crc(g_521, "g_521", print_hash_value);
    platform_main_end(crc32_context ^ 0xFFFFFFFFUL, print_hash_value);
    return 0;
}
