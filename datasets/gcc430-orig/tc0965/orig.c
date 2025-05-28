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



static unsigned char g_10 = 0x16L;
static int g_21 = (-7L);
static int *g_20 = &g_21;
static unsigned g_51[3] = {0x23095C3CL, 0x23095C3CL, 0x23095C3CL};
static int ** volatile g_69 = &g_20;
static int g_73 = 0x97E2BD63L;
static int ** volatile g_80 = &g_20;
static int ** volatile g_81 = (void*)0;
static char g_87[6][2] = {{0xBBL, 0x56L}, {0xBBL, 0x56L}, {0xBBL, 0x56L}, {0xBBL, 0x56L}, {0xBBL, 0x56L}, {0xBBL, 0x56L}};
static unsigned *g_91[5] = {&g_51[2], &g_51[2], &g_51[2], &g_51[2], &g_51[2]};
static unsigned char g_112[1] = {0xA9L};
static short g_118 = 1L;
static unsigned **g_144 = &g_91[3];
static unsigned **g_145 = &g_91[3];
static short g_146 = (-1L);
static unsigned short g_170 = 0xF32AL;
static int g_184 = 0x4891D5C6L;
static int *g_183 = &g_184;
static int ** volatile g_194 = &g_20;
static char g_207 = 0xFDL;
static unsigned char *g_214 = &g_10;
static unsigned char **g_213[1][7][1] = {{{(void*)0}, {(void*)0}, {(void*)0}, {(void*)0}, {(void*)0}, {(void*)0}, {(void*)0}}};
static unsigned char **g_215 = &g_214;
static unsigned long long g_217[1] = {18446744073709551615UL};
static int g_228 = 0xC5E8F454L;
static unsigned long long g_242 = 0xDCCDAA94D8C579BCLL;
static int g_248 = 6L;
static char g_252 = (-3L);
static unsigned short g_261 = 0xFEBAL;
static unsigned short g_263 = 0xB514L;
static unsigned g_286 = 4294967295UL;
static int * volatile g_289 = &g_248;
static int * volatile g_291 = &g_228;
static int ** volatile g_292[2][9][5] = {{{&g_183, (void*)0, &g_183, &g_20, &g_183}, {&g_183, (void*)0, &g_183, &g_20, &g_183}, {&g_183, (void*)0, &g_183, &g_20, &g_183}, {&g_183, (void*)0, &g_183, &g_20, &g_183}, {&g_183, (void*)0, &g_183, &g_20, &g_183}, {&g_183, (void*)0, &g_183, &g_20, &g_183}, {&g_183, (void*)0, &g_183, &g_20, &g_183}, {&g_183, (void*)0, &g_183, &g_20, &g_183}, {&g_183, (void*)0, &g_183, &g_20, &g_183}}, {{&g_183, (void*)0, &g_183, &g_20, &g_183}, {&g_183, (void*)0, &g_183, &g_20, &g_183}, {&g_183, (void*)0, &g_183, &g_20, &g_183}, {&g_183, (void*)0, &g_183, &g_20, &g_183}, {&g_183, (void*)0, &g_183, &g_20, &g_183}, {&g_183, (void*)0, &g_183, &g_20, &g_183}, {&g_183, (void*)0, &g_183, &g_20, &g_183}, {&g_183, (void*)0, &g_183, &g_20, &g_183}, {&g_183, (void*)0, &g_183, &g_20, &g_183}}};
static int ** volatile g_293 = &g_183;
static int *g_389 = &g_248;
static int ** volatile g_391 = &g_183;
static int ** volatile g_407 = (void*)0;
static int ** volatile g_408 = &g_389;
static int ** volatile g_410 = &g_183;
static int ** volatile g_411 = &g_20;
static unsigned short **g_415 = (void*)0;
static volatile unsigned long long g_430 = 18446744073709551615UL;
static volatile unsigned long long *g_429 = &g_430;
static volatile unsigned long long **g_428 = &g_429;
static unsigned short g_443[8] = {65532UL, 65532UL, 65532UL, 65532UL, 65532UL, 65532UL, 65532UL, 65532UL};
static char *g_458 = &g_207;
static char ** volatile g_457 = &g_458;
static char ** volatile * volatile g_460 = &g_457;
static long long g_528 = 4L;
static int * volatile g_530 = &g_248;
static int g_532 = 0x1D8DA981L;
static int *g_531 = &g_532;



static unsigned long long func_1(void);
static int * func_2(unsigned p_3, int * p_4, unsigned short p_5, short p_6, int * p_7);
static unsigned short func_11(unsigned short p_12, int * p_13);
static int * func_15(int * p_16);
static int * func_17(int * p_18, int * p_19);
static int * func_24(unsigned long long p_25, int p_26);
static int ** func_31(int p_32);
static short func_36(int * p_37, int * p_38, unsigned short p_39, int p_40);
static int * func_41(int ** p_42);
static int ** func_43(unsigned p_44, unsigned p_45, unsigned p_46, int * p_47, unsigned long long p_48);
static unsigned long long func_1(void)
{
    int l_14[5];
    int *l_22[8][6] = {{&g_21, &g_21, &g_21, &g_21, &g_21, &g_21}, {&g_21, &g_21, &g_21, &g_21, &g_21, &g_21}, {&g_21, &g_21, &g_21, &g_21, &g_21, &g_21}, {&g_21, &g_21, &g_21, &g_21, &g_21, &g_21}, {&g_21, &g_21, &g_21, &g_21, &g_21, &g_21}, {&g_21, &g_21, &g_21, &g_21, &g_21, &g_21}, {&g_21, &g_21, &g_21, &g_21, &g_21, &g_21}, {&g_21, &g_21, &g_21, &g_21, &g_21, &g_21}};
    int **l_23 = &l_22[6][0];
    unsigned char l_551 = 255UL;
    int i, j;
    for (i = 0; i < 5; i++)
        l_14[i] = 1L;
    (*l_23) = func_2((0x485BL & (safe_sub_func_int8_t_s_s(g_10, (func_11((l_14[3] >= (-1L)), func_15(((*l_23) = func_17(g_20, l_22[6][0])))) <= g_443[2])))), g_531, g_207, g_217[0], &g_532);






    ;


    return l_551;
}







static int * func_2(unsigned p_3, int * p_4, unsigned short p_5, short p_6, int * p_7)
{
    int *l_537 = &g_228;
    unsigned *l_540 = &g_286;
    int l_543 = 0xF8B43348L;
    unsigned short *l_544 = &g_261;
    for (p_6 = (-14); (p_6 != (-29)); p_6--)
    {
        int *l_535 = &g_73;
        int **l_536[9] = {&g_531, &g_531, &g_183, &g_531, &g_531, &g_183, &g_531, &g_531, &g_183};
        int i;
        l_537 = l_535;

        ;
    }

    ;
    (*l_537) = ((safe_add_func_uint32_t_u_u(g_51[0], (0x980F8B89L & (l_540 == &p_3)))) != (((*l_544) = ((safe_add_func_int8_t_s_s((**g_457), l_543)) >= 0xD2C7L)) || (safe_sub_func_int32_t_s_s((4294967294UL == (1UL == p_3)), g_51[2]))));
    for (g_207 = 0; (g_207 <= 0); g_207 += 1)
    {
        for (g_242 = 0; (g_242 <= 0); g_242 += 1)
        {
            int *l_547[7][5] = {{&g_228, (void*)0, &l_543, (void*)0, &g_228}, {&g_228, (void*)0, &l_543, (void*)0, &g_228}, {&g_228, (void*)0, &l_543, (void*)0, &g_228}, {&g_228, (void*)0, &l_543, (void*)0, &g_228}, {&g_228, (void*)0, &l_543, (void*)0, &g_228}, {&g_228, (void*)0, &l_543, (void*)0, &g_228}, {&g_228, (void*)0, &l_543, (void*)0, &g_228}};
            int **l_548 = &g_20;
            int i, j;
            (*l_548) = l_547[3][2];

            ;
            return p_7;



        }
    }
    for (g_248 = 0; (g_248 >= (-5)); --g_248)
    {
        for (g_532 = 0; g_532 < 1; g_532 += 1)
        {
            g_112[g_532] = 255UL;
        }
        if ((*g_531))
            break;
    }
    return p_7;


}







static unsigned short func_11(unsigned short p_12, int * p_13)
{
    long long *l_527 = &g_528;
    int l_529[9] = {8L, 0xF48BF851L, 8L, 0xF48BF851L, 8L, 0xF48BF851L, 8L, 0xF48BF851L, 8L};
    int i;
    (*g_530) = ((*g_183) = (((*l_527) = g_286) | l_529[7]));
    return l_529[7];
}







static int * func_15(int * p_16)
{
    unsigned char l_33[3][6][8] = {{{0x14L, 0x8DL, 0xDBL, 0x8DL, 0x14L, 0x60L, 0xE3L, 0x8DL}, {0x14L, 0x8DL, 0xDBL, 0x8DL, 0x14L, 0x60L, 0xE3L, 0x8DL}, {0x14L, 0x8DL, 0xDBL, 0x8DL, 0x14L, 0x60L, 0xE3L, 0x8DL}, {0x14L, 0x8DL, 0xDBL, 0x8DL, 0x14L, 0x60L, 0xE3L, 0x8DL}, {0x14L, 0x8DL, 0xDBL, 0x8DL, 0x14L, 0x60L, 0xE3L, 0x8DL}, {0x14L, 0x8DL, 0xDBL, 0x8DL, 0x14L, 0x60L, 0xE3L, 0x8DL}}, {{0x14L, 0x8DL, 0xDBL, 0x8DL, 0x14L, 0x60L, 0xE3L, 0x8DL}, {0x14L, 0x8DL, 0xDBL, 0x8DL, 0x14L, 0x60L, 0xE3L, 0x8DL}, {0x14L, 0x8DL, 0xDBL, 0x8DL, 0x14L, 0x60L, 0xE3L, 0x8DL}, {0x14L, 0x8DL, 0xDBL, 0x8DL, 0x14L, 0x60L, 0xE3L, 0x8DL}, {0x14L, 0x8DL, 0xDBL, 0x8DL, 0x14L, 0x60L, 0xE3L, 0x8DL}, {0x14L, 0x8DL, 0xDBL, 0x8DL, 0x14L, 0x60L, 0xE3L, 0x8DL}}, {{0x14L, 0x8DL, 0xDBL, 0x8DL, 0x14L, 0x60L, 0xE3L, 0x8DL}, {0x14L, 0x8DL, 0xDBL, 0x8DL, 0x14L, 0x60L, 0xE3L, 0x8DL}, {0x14L, 0x8DL, 0xDBL, 0x8DL, 0x14L, 0x60L, 0xE3L, 0x8DL}, {0x14L, 0x8DL, 0xDBL, 0x8DL, 0x14L, 0x60L, 0xE3L, 0x8DL}, {0x14L, 0x8DL, 0xDBL, 0x8DL, 0x14L, 0x60L, 0xE3L, 0x8DL}, {0x14L, 0x8DL, 0xDBL, 0x8DL, 0x14L, 0x60L, 0xE3L, 0x8DL}}};
    int ***l_249 = (void*)0;
    int **l_251[8][4][3] = {{{&g_183, &g_20, &g_20}, {&g_183, &g_20, &g_20}, {&g_183, &g_20, &g_20}, {&g_183, &g_20, &g_20}}, {{&g_183, &g_20, &g_20}, {&g_183, &g_20, &g_20}, {&g_183, &g_20, &g_20}, {&g_183, &g_20, &g_20}}, {{&g_183, &g_20, &g_20}, {&g_183, &g_20, &g_20}, {&g_183, &g_20, &g_20}, {&g_183, &g_20, &g_20}}, {{&g_183, &g_20, &g_20}, {&g_183, &g_20, &g_20}, {&g_183, &g_20, &g_20}, {&g_183, &g_20, &g_20}}, {{&g_183, &g_20, &g_20}, {&g_183, &g_20, &g_20}, {&g_183, &g_20, &g_20}, {&g_183, &g_20, &g_20}}, {{&g_183, &g_20, &g_20}, {&g_183, &g_20, &g_20}, {&g_183, &g_20, &g_20}, {&g_183, &g_20, &g_20}}, {{&g_183, &g_20, &g_20}, {&g_183, &g_20, &g_20}, {&g_183, &g_20, &g_20}, {&g_183, &g_20, &g_20}}, {{&g_183, &g_20, &g_20}, {&g_183, &g_20, &g_20}, {&g_183, &g_20, &g_20}, {&g_183, &g_20, &g_20}}};
    int ***l_250 = &l_251[3][3][2];
    unsigned short l_257 = 0xD96BL;
    int i, j, k;
    (*g_293) = func_17(func_24((safe_rshift_func_int8_t_s_u((safe_sub_func_uint64_t_u_u(((((*l_250) = func_31(l_33[1][2][7])) == (void*)0) == (g_252 |= g_217[0])), 0x0F592F24D30DA1FFLL)), (g_207 < (safe_add_func_uint8_t_u_u((g_217[0] > ((safe_div_func_uint64_t_u_u(g_217[0], l_257)) || 0xDCL)), 0xA7L))))), g_217[0]), p_16);





    ;


    return (*g_391);


}







static int * func_17(int * p_18, int * p_19)
{
    return &g_21;


}







static int * func_24(unsigned long long p_25, int p_26)
{
    unsigned char l_258 = 0x2CL;
    unsigned short *l_259 = &g_170;
    unsigned short *l_260 = &g_261;
    unsigned short *l_262 = &g_263;
    unsigned **l_266 = &g_91[4];
    unsigned ***l_267 = (void*)0;
    unsigned ***l_268 = &l_266;
    unsigned **l_269 = (void*)0;
    int *l_272 = (void*)0;
    int *l_340 = (void*)0;
    int *l_398 = &g_228;
    unsigned char ***l_400 = (void*)0;
    unsigned char ***l_401 = &g_213[0][3][0];
    int *l_437 = &g_228;
    char **l_509[1];
    int i;
    for (i = 0; i < 1; i++)
        l_509[i] = &g_458;
lbl_427:
    if ((((*l_262) = ((*l_260) = ((*l_259) = (p_25 > (l_258 = (**g_215)))))) <= (safe_sub_func_uint8_t_u_u(p_25, (((*l_268) = l_266) == l_269)))))
    {
        unsigned long long *l_275 = &g_242;
        unsigned *l_278[2][8][4] = {{{&g_51[1], &g_51[0], &g_51[0], &g_51[0]}, {&g_51[1], &g_51[0], &g_51[0], &g_51[0]}, {&g_51[1], &g_51[0], &g_51[0], &g_51[0]}, {&g_51[1], &g_51[0], &g_51[0], &g_51[0]}, {&g_51[1], &g_51[0], &g_51[0], &g_51[0]}, {&g_51[1], &g_51[0], &g_51[0], &g_51[0]}, {&g_51[1], &g_51[0], &g_51[0], &g_51[0]}, {&g_51[1], &g_51[0], &g_51[0], &g_51[0]}}, {{&g_51[1], &g_51[0], &g_51[0], &g_51[0]}, {&g_51[1], &g_51[0], &g_51[0], &g_51[0]}, {&g_51[1], &g_51[0], &g_51[0], &g_51[0]}, {&g_51[1], &g_51[0], &g_51[0], &g_51[0]}, {&g_51[1], &g_51[0], &g_51[0], &g_51[0]}, {&g_51[1], &g_51[0], &g_51[0], &g_51[0]}, {&g_51[1], &g_51[0], &g_51[0], &g_51[0]}, {&g_51[1], &g_51[0], &g_51[0], &g_51[0]}}};
        int l_280 = 0x67A072E5L;
        int *l_309 = &g_248;
        unsigned l_336 = 7UL;
        short l_358[5][8] = {{7L, (-9L), (-9L), (-7L), 9L, 0x1FE9L, 9L, (-7L)}, {7L, (-9L), (-9L), (-7L), 9L, 0x1FE9L, 9L, (-7L)}, {7L, (-9L), (-9L), (-7L), 9L, 0x1FE9L, 9L, (-7L)}, {7L, (-9L), (-9L), (-7L), 9L, 0x1FE9L, 9L, (-7L)}, {7L, (-9L), (-9L), (-7L), 9L, 0x1FE9L, 9L, (-7L)}};
        int **l_390 = (void*)0;
        int i, j, k;
        for (g_252 = 0; (g_252 <= 28); g_252 = safe_add_func_int8_t_s_s(g_252, 5))
        {
            short l_279 = 0xF2EAL;
            int *l_299 = &l_280;
            unsigned l_323 = 0UL;
            int **l_332 = (void*)0;
            int l_338 = 0L;
            short l_367 = 4L;
            unsigned char ***l_375 = (void*)0;
            int l_381 = 0x7DD93436L;
        }
        (*g_391) = l_272;

        ;
        return (*g_293);


    }
    else
    {
        unsigned short l_392[9] = {0UL, 0UL, 0x06EDL, 0UL, 0UL, 0x06EDL, 0UL, 0UL, 0x06EDL};
        int ***l_395 = (void*)0;
        int *l_396 = &g_184;
        int **l_397 = &l_396;
        int **l_399 = &l_340;
        int i;
        (*g_69) = func_41(func_43(l_392[3], (safe_div_func_uint16_t_u_u(((*l_262) ^= ((&g_69 == l_395) ^ (p_26 | ((*l_396) >= (*l_398))))), p_25)), g_217[0], (*g_80), g_87[5][1]));
    }
    if ((l_400 == (l_401 = &g_215)))
    {
        int *l_404 = &g_73;
        int **l_468 = &l_398;
        int ***l_467 = &l_468;
        short *l_477 = &g_118;
        unsigned *l_478[10] = {&g_286, &g_286, &g_286, &g_286, &g_286, &g_286, &g_286, &g_286, &g_286, &g_286};
        int i;
        (*g_389) &= p_25;
        if (p_25)
        {
            int *l_409 = (void*)0;
            for (g_228 = 0; (g_228 >= (-28)); g_228 = safe_sub_func_uint64_t_u_u(g_228, 7))
            {
                unsigned short **l_413[10] = {&l_259, &l_259, &l_259, &l_259, &l_259, &l_259, &l_259, &l_259, &l_259, &l_259};
                unsigned short ***l_414[5] = {(void*)0, (void*)0, (void*)0, (void*)0, (void*)0};
                unsigned *l_420 = &g_51[0];
                int l_425 = 0xBF83E59CL;
                int i;
                for (g_170 = 0; (g_170 <= 2); g_170 += 1)
                {
                    int l_412 = 0x83098027L;
                    int i;
                    for (g_184 = 2; (g_184 >= 0); g_184 -= 1)
                    {
                        int i;
                        l_398 = l_404;

                        ;
                        (*l_404) &= ((*g_20) ^= g_51[g_170]);
                    }
                    if ((safe_lshift_func_int16_t_s_s(g_51[g_170], 0)))
                    {
                        (*g_408) = &p_26;

                        ;
                        (*g_183) ^= (g_10 > g_51[0]);
                    }
                    else
                    {
                        (*g_410) = func_17(l_409, l_409);
                        (*g_411) = &p_26;

                        ;
                        l_412 = 1L;
                    }
                    for (l_412 = 0; (l_412 <= 2); l_412 += 1)
                    {
                        (*l_404) ^= p_26;
                    }
                }
                g_415 = (l_413[7] = l_413[7]);

                ;
                (**g_80) ^= (((safe_lshift_func_uint16_t_u_u(p_25, 13)) ^ (0xE5DEL || g_252)) | ((*l_404) = (0x490D768FL >= ((safe_add_func_int16_t_s_s((l_409 == l_420), (-1L))) > 65535UL))));
                (*l_404) = ((safe_lshift_func_uint8_t_u_u(((&g_213[0][5][0] == l_400) || 0UL), 2)) ^ (safe_rshift_func_int16_t_s_u(l_425, p_25)));
            }

            ;
            ;
            ;
            ;
            (*l_404) = (g_415 != (void*)0);
        }
        else
        {
            unsigned long long *l_433 = &g_217[0];
            unsigned long long **l_432 = &l_433;
            unsigned long long ***l_431 = &l_432;
            char l_442 = (-7L);
            unsigned *l_446 = &g_51[0];
            int **l_449 = &g_389;
            char l_450 = (-4L);
            if (p_25)
            {
                int *l_426 = &g_228;
                return l_426;


            }
            else
            {
                if (g_10)
                    goto lbl_427;
            }
            (*g_183) ^= p_25;
            if ((g_428 != ((*l_431) = (void*)0)))
            {
                int **l_434 = &g_389;
                (*l_434) = func_17(func_17((*g_411), l_404), &g_184);

                ;
                if (p_26)
                {
                    int *l_444 = &g_21;
                    return l_444;


                }
                else
                {
                    short *l_445 = &g_146;
                    int *l_447 = &g_73;
                    unsigned short **l_448[2][2][10] = {{{&l_259, (void*)0, &l_259, (void*)0, &l_259, &l_260, &l_259, (void*)0, &l_259, (void*)0}, {&l_259, (void*)0, &l_259, (void*)0, &l_259, &l_260, &l_259, (void*)0, &l_259, (void*)0}}, {{&l_259, (void*)0, &l_259, (void*)0, &l_259, &l_260, &l_259, (void*)0, &l_259, (void*)0}, {&l_259, (void*)0, &l_259, (void*)0, &l_259, &l_260, &l_259, (void*)0, &l_259, (void*)0}}};
                    int i, j, k;
                    (*l_437) = (func_36((*g_80), &g_184, g_242, p_25) || (((*l_445) &= g_118) && (((l_446 == (void*)0) != 0xF45DL) | p_26)));
                    for (g_73 = 0; (g_73 >= 0); g_73 -= 1)
                    {
                        (*l_437) |= p_26;
                        (*l_398) = (p_26 >= ((*l_445) = (*l_404)));
                    }
                    if (l_450)
                    {
                        unsigned short l_453 = 65527UL;
                        (*l_447) &= (safe_lshift_func_int16_t_s_u((**l_434), 13));
                        (*l_404) = l_453;
                    }
                    else
                    {
                        (*g_389) = (p_25 <= (*g_20));
                        l_404 = l_437;

                        ;
                        (*l_447) = 1L;
                        (*l_437) ^= (**g_293);
                    }

                    ;
                    for (g_170 = 20; (g_170 == 54); ++g_170)
                    {
                        unsigned char l_456 = 0UL;
                        char ** volatile *l_459 = (void*)0;
                        (*g_20) ^= l_456;
                        (*g_460) = g_457;
                        (**l_449) &= 0x1E457DDDL;
                        if ((**l_434))
                            break;
                    }
                }

                ;
                (*l_404) = func_36(func_17((*g_391), l_340), &g_184, ((g_112[0] != (*l_398)) <= (**l_434)), g_286);
            }
            else
            {
                (*l_449) = (*g_194);

                ;
                for (g_118 = 0; (g_118 == 8); ++g_118)
                {
                    return l_404;


                }
                return (*g_194);


            }

            ;
            ;
            ;
        }

        ;
        ;
        ;
        ;
        ;
        (*l_404) ^= (p_26 = (**g_293));
        if ((((**l_468) = ((safe_div_func_int32_t_s_s((-1L), (safe_mod_func_int16_t_s_s(p_26, ((*l_477) = (*l_404)))))) & (-1L))) == 0x0E0E2D47L))
        {
            int *l_483 = &g_184;
            long long l_505 = 0xC084BAEF54A9CB90LL;
lbl_481:
            (*l_468) = (*l_468);
            if (p_25)
            {
                for (g_248 = 0; (g_248 != (-22)); g_248 = safe_sub_func_uint8_t_u_u(g_248, 1))
                {
                    int *l_482 = &g_21;
                    if (g_263)
                        goto lbl_481;
                    for (g_286 = 0; (g_286 <= 1); g_286 += 1)
                    {
                        int i;
                        (*l_437) = g_51[g_286];
                        (**l_468) |= (0xD3L < 254UL);
                        if (p_26)
                            break;
                        (**l_467) = func_41(&g_389);

                        ;
                    }

                    ;
                    if ((**g_80))
                    {
                        (*l_404) |= p_26;
                        (*l_437) |= (-10L);
                        (*l_437) = (((*l_468) = (*g_410)) == (g_20 = &g_184));

                        ;
                        ;
                    }
                    else
                    {
                        return l_482;





                    }

                    ;
                    ;
                }
                return l_483;





            }
            else
            {
                short l_495 = 0x61D8L;
                int *l_496 = &g_73;
                for (g_184 = 0; (g_184 == 8); g_184 = safe_add_func_uint64_t_u_u(g_184, 1))
                {
                    short **l_490 = &l_477;
                    int l_493 = (-2L);
                    int l_494 = 0xF60A3F74L;
                    (**l_468) = (safe_add_func_uint32_t_u_u((~((safe_lshift_func_int16_t_s_s((((*l_490) = &g_118) != l_259), (safe_add_func_uint32_t_u_u((l_493 &= 0x08715651L), l_494)))) == ((18446744073709551614UL || (*g_429)) || ((((l_495 & (*l_483)) >= (((((l_260 != (void*)0) > l_495) || 0x93A24E9EL) > (*g_183)) || 18446744073709551606UL)) == g_207) < g_51[2])))), l_495));
                    if (p_26)
                        continue;
                    (*l_468) = l_496;

                    ;
                }
                (*l_496) = p_26;
                (*g_389) = (safe_sub_func_int8_t_s_s(((p_26 || (!((0x2DL && (**g_215)) && (safe_sub_func_int8_t_s_s((*l_496), ((safe_add_func_int16_t_s_s(((65535UL >= 0xDFF9L) < (*g_20)), ((*l_262) = p_25))) >= ((safe_rshift_func_uint8_t_u_u((((0xDEF0L & p_26) < (**g_69)) != 0x0903L), l_505)) < p_26))))))) > 0xA26C7FFFL), (*g_458)));
                return l_496;





            }
        }
        else
        {
            int *l_508 = &g_21;
            unsigned long long *l_523 = (void*)0;
            unsigned long long *l_524[10][10] = {{&g_217[0], (void*)0, &g_217[0], (void*)0, &g_217[0], (void*)0, &g_217[0], (void*)0, &g_217[0], (void*)0}, {&g_217[0], (void*)0, &g_217[0], (void*)0, &g_217[0], (void*)0, &g_217[0], (void*)0, &g_217[0], (void*)0}, {&g_217[0], (void*)0, &g_217[0], (void*)0, &g_217[0], (void*)0, &g_217[0], (void*)0, &g_217[0], (void*)0}, {&g_217[0], (void*)0, &g_217[0], (void*)0, &g_217[0], (void*)0, &g_217[0], (void*)0, &g_217[0], (void*)0}, {&g_217[0], (void*)0, &g_217[0], (void*)0, &g_217[0], (void*)0, &g_217[0], (void*)0, &g_217[0], (void*)0}, {&g_217[0], (void*)0, &g_217[0], (void*)0, &g_217[0], (void*)0, &g_217[0], (void*)0, &g_217[0], (void*)0}, {&g_217[0], (void*)0, &g_217[0], (void*)0, &g_217[0], (void*)0, &g_217[0], (void*)0, &g_217[0], (void*)0}, {&g_217[0], (void*)0, &g_217[0], (void*)0, &g_217[0], (void*)0, &g_217[0], (void*)0, &g_217[0], (void*)0}, {&g_217[0], (void*)0, &g_217[0], (void*)0, &g_217[0], (void*)0, &g_217[0], (void*)0, &g_217[0], (void*)0}, {&g_217[0], (void*)0, &g_217[0], (void*)0, &g_217[0], (void*)0, &g_217[0], (void*)0, &g_217[0], (void*)0}};
            int l_525 = 1L;
            int i, j;
            for (g_146 = 0; (g_146 <= (-20)); --g_146)
            {
                char ***l_510 = &l_509[0];
                (*l_468) = l_508;

                ;
                (*l_404) |= p_25;
                if ((*l_508))
                    continue;
                (*l_510) = l_509[0];
            }

            ;
            (**g_410) &= (safe_mod_func_uint32_t_u_u((safe_lshift_func_int8_t_s_s((*g_458), 1)), 3L));
        }

        ;
    }
    else
    {
        int **l_526 = &l_398;
        (*l_526) = func_41(&g_389);

        ;
    }

    ;
    ;
    ;
    ;
    ;
    return (*g_410);





}







static int ** func_31(int p_32)
{
    unsigned l_49[2][7][9] = {{{0xA82B5DFEL, 0xA1F1C18AL, 0x968F25CEL, 0x968F25CEL, 0xA1F1C18AL, 0xA82B5DFEL, 1UL, 0xE35D5D90L, 0x4D3380D4L}, {0xA82B5DFEL, 0xA1F1C18AL, 0x968F25CEL, 0x968F25CEL, 0xA1F1C18AL, 0xA82B5DFEL, 1UL, 0xE35D5D90L, 0x4D3380D4L}, {0xA82B5DFEL, 0xA1F1C18AL, 0x968F25CEL, 0x968F25CEL, 0xA1F1C18AL, 0xA82B5DFEL, 1UL, 0xE35D5D90L, 0x4D3380D4L}, {0xA82B5DFEL, 0xA1F1C18AL, 0x968F25CEL, 0x968F25CEL, 0xA1F1C18AL, 0xA82B5DFEL, 1UL, 0xE35D5D90L, 0x4D3380D4L}, {0xA82B5DFEL, 0xA1F1C18AL, 0x968F25CEL, 0x968F25CEL, 0xA1F1C18AL, 0xA82B5DFEL, 1UL, 0xE35D5D90L, 0x4D3380D4L}, {0xA82B5DFEL, 0xA1F1C18AL, 0x968F25CEL, 0x968F25CEL, 0xA1F1C18AL, 0xA82B5DFEL, 1UL, 0xE35D5D90L, 0x4D3380D4L}, {0xA82B5DFEL, 0xA1F1C18AL, 0x968F25CEL, 0x968F25CEL, 0xA1F1C18AL, 0xA82B5DFEL, 1UL, 0xE35D5D90L, 0x4D3380D4L}}, {{0xA82B5DFEL, 0xA1F1C18AL, 0x968F25CEL, 0x968F25CEL, 0xA1F1C18AL, 0xA82B5DFEL, 1UL, 0xE35D5D90L, 0x4D3380D4L}, {0xA82B5DFEL, 0xA1F1C18AL, 0x968F25CEL, 0x968F25CEL, 0xA1F1C18AL, 0xA82B5DFEL, 1UL, 0xE35D5D90L, 0x4D3380D4L}, {0xA82B5DFEL, 0xA1F1C18AL, 0x968F25CEL, 0x968F25CEL, 0xA1F1C18AL, 0xA82B5DFEL, 1UL, 0xE35D5D90L, 0x4D3380D4L}, {0xA82B5DFEL, 0xA1F1C18AL, 0x968F25CEL, 0x968F25CEL, 0xA1F1C18AL, 0xA82B5DFEL, 1UL, 0xE35D5D90L, 0x4D3380D4L}, {0xA82B5DFEL, 0xA1F1C18AL, 0x968F25CEL, 0x968F25CEL, 0xA1F1C18AL, 0xA82B5DFEL, 1UL, 0xE35D5D90L, 0x4D3380D4L}, {0xA82B5DFEL, 0xA1F1C18AL, 0x968F25CEL, 0x968F25CEL, 0xA1F1C18AL, 0xA82B5DFEL, 1UL, 0xE35D5D90L, 0x4D3380D4L}, {0xA82B5DFEL, 0xA1F1C18AL, 0x968F25CEL, 0x968F25CEL, 0xA1F1C18AL, 0xA82B5DFEL, 1UL, 0xE35D5D90L, 0x4D3380D4L}}};
    unsigned *l_50 = &g_51[0];
    unsigned *l_52 = (void*)0;
    unsigned *l_53[4] = {&l_49[1][2][7], (void*)0, &l_49[1][2][7], (void*)0};
    int l_54 = 0xD7D9C74EL;
    int ***l_176 = (void*)0;
    int **l_178 = &g_20;
    int ***l_177 = &l_178;
    int *l_182 = &l_54;
    int *l_246 = (void*)0;
    int *l_247 = &g_248;
    int i, j, k;
    (*l_247) ^= (((((p_32 == (safe_rshift_func_int16_t_s_u(func_36((l_182 = func_41(((*l_177) = func_43(l_49[1][2][7], ((*l_50) &= ((p_32 || p_32) > g_21)), (l_54 ^= g_10), func_17(l_53[3], func_17(&p_32, func_17(l_52, &g_21))), g_10)))), g_183, l_49[1][2][7], p_32), g_217[0]))) <= 0xDCB8F541L) >= g_10) >= 1UL) != 5L);




    ;
    ;
    ;
    return &g_183;


}







static short func_36(int * p_37, int * p_38, unsigned short p_39, int p_40)
{
    unsigned l_185 = 0UL;
    int l_186 = 1L;
    unsigned long long *l_241 = &g_242;
    int **l_244 = &g_183;
    int **l_245 = &g_20;
    l_186 ^= ((*p_38) != (0xDB42BE2FL > l_185));
    for (g_73 = 1; (g_73 != 24); ++g_73)
    {
        unsigned l_201 = 18446744073709551608UL;
        unsigned char *l_210 = &g_112[0];
        unsigned char **l_209 = &l_210;
        unsigned char *l_223 = &g_112[0];
        unsigned long long *l_235 = (void*)0;
        unsigned long long *l_236 = &g_217[0];
        short l_240[3][9][9] = {{{1L, (-8L), 1L, (-8L), 1L, (-8L), 1L, (-8L), 1L}, {1L, (-8L), 1L, (-8L), 1L, (-8L), 1L, (-8L), 1L}, {1L, (-8L), 1L, (-8L), 1L, (-8L), 1L, (-8L), 1L}, {1L, (-8L), 1L, (-8L), 1L, (-8L), 1L, (-8L), 1L}, {1L, (-8L), 1L, (-8L), 1L, (-8L), 1L, (-8L), 1L}, {1L, (-8L), 1L, (-8L), 1L, (-8L), 1L, (-8L), 1L}, {1L, (-8L), 1L, (-8L), 1L, (-8L), 1L, (-8L), 1L}, {1L, (-8L), 1L, (-8L), 1L, (-8L), 1L, (-8L), 1L}, {1L, (-8L), 1L, (-8L), 1L, (-8L), 1L, (-8L), 1L}}, {{1L, (-8L), 1L, (-8L), 1L, (-8L), 1L, (-8L), 1L}, {1L, (-8L), 1L, (-8L), 1L, (-8L), 1L, (-8L), 1L}, {1L, (-8L), 1L, (-8L), 1L, (-8L), 1L, (-8L), 1L}, {1L, (-8L), 1L, (-8L), 1L, (-8L), 1L, (-8L), 1L}, {1L, (-8L), 1L, (-8L), 1L, (-8L), 1L, (-8L), 1L}, {1L, (-8L), 1L, (-8L), 1L, (-8L), 1L, (-8L), 1L}, {1L, (-8L), 1L, (-8L), 1L, (-8L), 1L, (-8L), 1L}, {1L, (-8L), 1L, (-8L), 1L, (-8L), 1L, (-8L), 1L}, {1L, (-8L), 1L, (-8L), 1L, (-8L), 1L, (-8L), 1L}}, {{1L, (-8L), 1L, (-8L), 1L, (-8L), 1L, (-8L), 1L}, {1L, (-8L), 1L, (-8L), 1L, (-8L), 1L, (-8L), 1L}, {1L, (-8L), 1L, (-8L), 1L, (-8L), 1L, (-8L), 1L}, {1L, (-8L), 1L, (-8L), 1L, (-8L), 1L, (-8L), 1L}, {1L, (-8L), 1L, (-8L), 1L, (-8L), 1L, (-8L), 1L}, {1L, (-8L), 1L, (-8L), 1L, (-8L), 1L, (-8L), 1L}, {1L, (-8L), 1L, (-8L), 1L, (-8L), 1L, (-8L), 1L}, {1L, (-8L), 1L, (-8L), 1L, (-8L), 1L, (-8L), 1L}, {1L, (-8L), 1L, (-8L), 1L, (-8L), 1L, (-8L), 1L}}};
        int **l_243 = &g_183;
        int i, j, k;
        for (g_170 = 0; (g_170 < 38); g_170 = safe_add_func_int16_t_s_s(g_170, 8))
        {
            int *l_193 = &g_184;
            unsigned char **l_212 = &l_210;
            unsigned char *l_218 = &g_112[0];
            l_186 = 0xDB9AC583L;
            for (l_185 = 0; (l_185 <= 16); l_185 = safe_add_func_uint32_t_u_u(l_185, 5))
            {
                unsigned l_197 = 0UL;
                int l_200 = 1L;
                unsigned l_219 = 2UL;
                unsigned char *l_222 = &g_112[0];
                (*g_194) = l_193;

                ;
                for (p_39 = 1; (p_39 <= 4); p_39 += 1)
                {
                    unsigned short l_205[5];
                    int i;
                    for (i = 0; i < 5; i++)
                        l_205[i] = 0x9A83L;
                }
                (*p_37) |= ((*p_38) = ((((+l_200) == (g_10 <= (((*l_209) = l_222) == l_223))) != (safe_sub_func_uint16_t_u_u(((**g_80) != g_87[5][1]), ((((p_40 >= (((g_51[0] >= (((((g_228 &= (safe_rshift_func_int8_t_s_u(l_185, (*l_193)))) == 1UL) > 0x9718L) < l_185) > l_200)) & p_40) & g_51[0])) ^ 7L) != l_186) < p_40)))) ^ 4294967287UL));
            }
        }
        if ((**g_80))
            break;
    }

    ;
    (*l_245) = ((*l_244) = func_17((*g_69), p_37));

    ;
    ;
    return (**l_245);
}







static int * func_41(int ** p_42)
{
    int *l_179[7][2];
    int **l_180 = &l_179[0][1];
    int *l_181 = &g_21;
    int i, j;
    for (i = 0; i < 7; i++)
    {
        for (j = 0; j < 2; j++)
            l_179[i][j] = &g_73;
    }
    (*l_180) = func_17(((*l_180) = l_179[0][1]), func_17(l_181, (*g_80)));


    g_73 &= (*l_181);
    return (*g_80);


}







static int ** func_43(unsigned p_44, unsigned p_45, unsigned p_46, int * p_47, unsigned long long p_48)
{
    char l_59 = 0xC0L;
    char *l_68 = &l_59;
    unsigned *l_94[6][1][9] = {{{(void*)0, &g_51[0], &g_51[0], (void*)0, &g_51[0], &g_51[0], &g_51[1], &g_51[0], &g_51[1]}}, {{(void*)0, &g_51[0], &g_51[0], (void*)0, &g_51[0], &g_51[0], &g_51[1], &g_51[0], &g_51[1]}}, {{(void*)0, &g_51[0], &g_51[0], (void*)0, &g_51[0], &g_51[0], &g_51[1], &g_51[0], &g_51[1]}}, {{(void*)0, &g_51[0], &g_51[0], (void*)0, &g_51[0], &g_51[0], &g_51[1], &g_51[0], &g_51[1]}}, {{(void*)0, &g_51[0], &g_51[0], (void*)0, &g_51[0], &g_51[0], &g_51[1], &g_51[0], &g_51[1]}}, {{(void*)0, &g_51[0], &g_51[0], (void*)0, &g_51[0], &g_51[0], &g_51[1], &g_51[0], &g_51[1]}}};
    unsigned char l_100 = 0UL;
    int l_120[8] = {0xFBFF5949L, 0xFBFF5949L, 0x88A645C9L, 0xFBFF5949L, 0xFBFF5949L, 0x88A645C9L, 0xFBFF5949L, 0xFBFF5949L};
    int **l_175 = &g_20;
    int i, j, k;
    for (p_46 = (-11); (p_46 <= 31); p_46 = safe_add_func_uint32_t_u_u(p_46, 6))
    {
        int *l_57 = (void*)0;
        int **l_58 = &l_57;
        (*l_58) = func_17(&g_21, func_17(l_57, &g_21));

        ;
        if (l_59)
            continue;
    }
    if ((safe_div_func_int8_t_s_s(((*l_68) = (4294967295UL && ((0L & ((l_59 >= p_44) <= (safe_sub_func_uint64_t_u_u((safe_rshift_func_int16_t_s_u((l_59 < l_59), (((*g_20) >= (safe_lshift_func_uint8_t_u_s(l_59, (&g_51[2] == &g_51[0])))) & 0x3B8CD6C332E49D2ALL))), g_21)))) && p_46))), g_51[2])))
    {
lbl_74:
        (*g_69) = &g_21;
        return &g_20;


    }
    else
    {
        unsigned *l_92[4] = {&g_51[1], (void*)0, &g_51[1], (void*)0};
        int l_109 = 0xF4AE4FB5L;
        int *l_133 = &l_120[2];
        int i;
        for (p_46 = 0; (p_46 > 23); p_46++)
        {
            int *l_86 = &g_73;
            for (g_21 = 0; (g_21 <= 2); g_21 += 1)
            {
                int *l_72 = &g_73;
                int i;
                (*l_72) |= g_51[g_21];
                if ((*l_72))
                    break;
                for (p_45 = 0; (p_45 <= 2); p_45 += 1)
                {
                    if ((*p_47))
                        break;
                    (*l_72) = (*l_72);
                    for (g_73 = 2; (g_73 >= 0); g_73 -= 1)
                    {
                        if ((*p_47))
                            break;
                    }
                }
                if (p_46)
                    goto lbl_74;
            }
            for (l_59 = 23; (l_59 >= (-25)); l_59 = safe_sub_func_uint16_t_u_u(l_59, 1))
            {
                int l_77 = 0L;
                int l_88 = 0x6F707683L;
                unsigned *l_93 = &g_51[0];
                int **l_110 = &l_86;
                int **l_130[2];
                int i;
                for (i = 0; i < 2; i++)
                    l_130[i] = &g_20;
                (*p_47) = (l_77 &= (g_51[0] && g_21));
                if ((**g_69))
                    break;
                if ((safe_rshift_func_int16_t_s_s(g_51[0], 12)))
                {
                    int **l_82 = &g_20;
                    (*g_80) = p_47;
                    (*l_82) = (*g_69);
                }
                else
                {
                    unsigned *l_90 = &g_51[0];
                    unsigned **l_89[4] = {&l_90, &l_90, &l_90, &l_90};
                    int l_119 = (-1L);
                    int i;
                    for (g_21 = 0; (g_21 == 29); g_21 = safe_add_func_uint32_t_u_u(g_21, 7))
                    {
                        int **l_85[9] = {&g_20, (void*)0, &g_20, (void*)0, &g_20, (void*)0, &g_20, (void*)0, &g_20};
                        int i;
                        l_86 = (void*)0;

                        ;
                        l_88 = (g_87[0][0] = (**g_80));
                    }
                    (*g_20) &= ((g_91[4] = (void*)0) != (l_92[1] = &g_51[0]));
                    (*g_20) = ((l_93 = l_86) == (void*)0);

                    ;
                    if ((((void*)0 != p_47) <= (&g_51[1] != l_94[2][0][7])))
                    {
                        unsigned char *l_111 = &g_112[0];
                        short *l_117 = &g_118;
                        l_120[2] ^= (safe_add_func_int8_t_s_s(p_48, ((safe_unary_minus_func_uint32_t_u((safe_add_func_uint16_t_u_u(l_100, (safe_add_func_int8_t_s_s(g_51[0], (safe_add_func_int16_t_s_s((((*g_20) = (safe_lshift_func_uint8_t_u_u((safe_lshift_func_uint16_t_u_s(g_51[0], 12)), ((*l_111) = (l_109 < (l_110 != &g_20)))))) >= (safe_div_func_int32_t_s_s((safe_div_func_int64_t_s_s((g_73 > ((*l_117) = (g_51[1] <= g_51[0]))), g_87[0][0])), l_119))), p_46)))))))) <= 0xC648ED34L)));
                    }
                    else
                    {
                        int **l_121 = (void*)0;
                        (*l_110) = (*g_80);

                        ;
                        return l_121;


                    }
                }

                ;
                for (g_118 = 0; (g_118 <= (-9)); g_118 = safe_sub_func_uint16_t_u_u(g_118, 4))
                {
                    int *l_124 = &l_88;
                    (*g_80) = func_17(l_124, func_17(func_17((*g_69), &g_21), &g_73));
                    for (g_73 = 0; (g_73 >= (-7)); g_73--)
                    {
                        unsigned char *l_129 = &g_112[0];
                        unsigned char **l_128 = &l_129;
                        unsigned char ***l_127 = &l_128;
                        (*l_127) = (void*)0;

                        ;
                        return l_130[0];


                    }
                    for (l_109 = 0; (l_109 != 6); ++l_109)
                    {
                        p_47 = p_47;
                        if (l_100)
                            goto lbl_74;
                        l_133 = p_47;

                        ;
                        l_86 = func_17((*g_69), p_47);

                        ;
                    }
                    for (g_73 = 0; g_73 < 6; g_73 += 1)
                    {
                        for (p_44 = 0; p_44 < 2; p_44 += 1)
                        {
                            g_87[g_73][p_44] = 1L;
                        }
                    }
                }
            }

            ;
            if ((*g_20))
                continue;
            for (l_109 = 17; (l_109 >= 15); l_109--)
            {
                if (p_45)
                    goto lbl_74;
                if ((*l_133))
                    continue;
            }
        }

        ;
    }
    for (p_48 = 1; (p_48 > 39); ++p_48)
    {
        unsigned **l_139 = &g_91[4];
        unsigned ***l_138 = &l_139;
        unsigned **l_141 = &l_94[2][0][7];
        unsigned ***l_140 = &l_141;
        unsigned **l_142[10] = {&l_94[2][0][7], &l_94[2][0][7], &g_91[4], &l_94[2][0][7], &l_94[2][0][7], &g_91[4], &l_94[2][0][7], &l_94[2][0][7], &g_91[4], &l_94[2][0][7]};
        unsigned ***l_143[10] = {&l_142[2], &l_142[6], &l_142[2], &l_142[6], &l_142[2], &l_142[6], &l_142[2], &l_142[6], &l_142[2], &l_142[6]};
        int l_167 = (-1L);
        unsigned char *l_168 = &g_112[0];
        unsigned short *l_169 = &g_170;
        int i;
        (*g_20) &= (((*l_140) = ((*l_138) = &g_91[4])) == (g_145 = (g_144 = l_142[2])));

        ;
        ;
        ;
        (*p_47) = (g_146 || (safe_mod_func_int16_t_s_s((safe_div_func_int64_t_s_s(l_59, ((safe_div_func_uint8_t_u_u((safe_sub_func_int16_t_s_s((!p_44), p_44)), p_45)) && (safe_add_func_int16_t_s_s(1L, g_21))))), ((safe_div_func_int64_t_s_s((safe_sub_func_int16_t_s_s((p_44 || ((*l_169) = (l_120[2] = (((*l_168) = ((safe_add_func_uint16_t_u_u((safe_mod_func_uint8_t_u_u(((safe_add_func_int64_t_s_s(1L, g_51[2])) & l_167), l_167)), 0x5479L)) && 4294967290UL)) ^ (-4L))))), g_87[0][0])), l_167)) & 1L))));
    }



    (*g_20) = ((safe_lshift_func_int16_t_s_s((l_100 && l_120[2]), 8)) & ((void*)0 == g_91[2]));
    return l_175;




}





int main (void)
{
    int i, j, k;
    int print_hash_value = 0;
    platform_main_begin();
    crc32_gentab();
    func_1();
    transparent_crc(g_10, "g_10", print_hash_value);
    transparent_crc(g_21, "g_21", print_hash_value);
    for (i = 0; i < 3; i++)
    {
        transparent_crc(g_51[i], "g_51[i]", print_hash_value);
        if (print_hash_value) printf("index = [%d]\n", i);

    }
    transparent_crc(g_73, "g_73", print_hash_value);
    for (i = 0; i < 6; i++)
    {
        for (j = 0; j < 2; j++)
        {
            transparent_crc(g_87[i][j], "g_87[i][j]", print_hash_value);
            if (print_hash_value) printf("index = [%d][%d]\n", i, j);

        }
    }
    for (i = 0; i < 1; i++)
    {
        transparent_crc(g_112[i], "g_112[i]", print_hash_value);
        if (print_hash_value) printf("index = [%d]\n", i);

    }
    transparent_crc(g_118, "g_118", print_hash_value);
    transparent_crc(g_146, "g_146", print_hash_value);
    transparent_crc(g_170, "g_170", print_hash_value);
    transparent_crc(g_184, "g_184", print_hash_value);
    transparent_crc(g_207, "g_207", print_hash_value);
    for (i = 0; i < 1; i++)
    {
        transparent_crc(g_217[i], "g_217[i]", print_hash_value);
        if (print_hash_value) printf("index = [%d]\n", i);

    }
    transparent_crc(g_228, "g_228", print_hash_value);
    transparent_crc(g_242, "g_242", print_hash_value);
    transparent_crc(g_248, "g_248", print_hash_value);
    transparent_crc(g_252, "g_252", print_hash_value);
    transparent_crc(g_261, "g_261", print_hash_value);
    transparent_crc(g_263, "g_263", print_hash_value);
    transparent_crc(g_286, "g_286", print_hash_value);
    transparent_crc(g_430, "g_430", print_hash_value);
    for (i = 0; i < 8; i++)
    {
        transparent_crc(g_443[i], "g_443[i]", print_hash_value);
        if (print_hash_value) printf("index = [%d]\n", i);

    }
    transparent_crc(g_528, "g_528", print_hash_value);
    transparent_crc(g_532, "g_532", print_hash_value);
    platform_main_end(crc32_context ^ 0xFFFFFFFFUL, print_hash_value);
    return 0;
}
