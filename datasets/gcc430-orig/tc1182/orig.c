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
   unsigned short f0;
   unsigned char f1;
   int f2;
   char f3;
   int f4;
   char f5;
   unsigned short f6;
   char f7;
};


static short g_2[8] = {9L,9L,9L,9L,9L,9L,9L,9L};
static struct S0 g_44 = {0UL,0x38L,0xC7A50190L,0L,0x349124C6L,1L,0xDFD7L,5L};
static unsigned short g_69 = 65532UL;
static int g_89 = (-1L);
static struct S0 g_94 = {65535UL,9UL,-3L,1L,0x68F5644FL,7L,7UL,0x42L};
static int g_96[9] = {0xE67F5904L,0x785ABE16L,0x785ABE16L,0xE67F5904L,0x785ABE16L,0x785ABE16L,0xE67F5904L,0x785ABE16L,0x785ABE16L};
static char *g_103[4] = {&g_44.f7,&g_44.f7,&g_44.f7,&g_44.f7};
static short g_107 = 0xCB2DL;
static unsigned g_128 = 18446744073709551615UL;
static struct S0 g_134 = {0x0870L,255UL,7L,0x97L,8L,9L,8UL,0L};
static int *g_146 = &g_96[2];
static unsigned char *g_155 = (void*)0;
static int **g_194 = &g_146;
static unsigned char **g_271 = &g_155;
static unsigned char ***g_270 = &g_271;
static unsigned short g_283[9][10] = {{0xD427L,0UL,0x7DBFL,65535UL,4UL,4UL,4UL,4UL,65535UL,0x7DBFL},{4UL,4UL,4UL,65535UL,0x7DBFL,0UL,0xD427L,65532UL,0xD427L,0UL},{0xA685L,4UL,0xC41AL,4UL,0xA685L,0xE18AL,0xA685L,0xC41AL,0x7DBFL,0x7DBFL},{0UL,0xC41AL,0UL,65530UL,65530UL,0UL,0xC41AL,0UL,4UL,0x7DBFL},{0xD427L,65530UL,0xC41AL,0xBCE8L,65535UL,0xA685L,65535UL,0xBCE8L,0xC41AL,65530UL},{0UL,0xE18AL,0xC41AL,65535UL,4UL,0xBCE8L,0UL,0UL,0xBCE8L,4UL},{0x7DBFL,0UL,0UL,0x7DBFL,65532UL,0xBCE8L,0xD427L,0xC41AL,4UL,0xC41AL},{0UL,0xA685L,4UL,0xC41AL,4UL,0xA685L,0UL,0xD427L,4UL,0xE18AL},{0xD427L,0xBCE8L,65532UL,0x7DBFL,0UL,0UL,0x7DBFL,65532UL,0xBCE8L,0xD427L}};
static short ***g_299[1] = {(void*)0};
static unsigned g_372[7][6][6] = {{{0UL,4294967295UL,0xCEF06F70L,0xB3AD1DF4L,0x76CA79F1L,0xC5C1250BL},{4294967287UL,5UL,0x51DF120BL,4294967295UL,5UL,0xC5C1250BL},{0xB3AD1DF4L,8UL,0xCEF06F70L,2UL,4294967287UL,8UL},{5UL,0UL,4294967295UL,4294967287UL,0xCCF0DE68L,0UL},{5UL,0UL,0xC5C1250BL,2UL,4294967291UL,1UL},{4294967295UL,0xCCF0DE68L,8UL,8UL,8UL,8UL}},{{0xCCF0DE68L,0xCCF0DE68L,4UL,4294967295UL,4294967287UL,1UL},{2UL,0xD78A4C39L,4294967295UL,0x242D3008L,0x76CA79F1L,4UL},{0xB3AD1DF4L,2UL,4294967295UL,5UL,0xCCF0DE68L,1UL},{0UL,5UL,4UL,4294967291UL,0UL,8UL},{4294967291UL,0UL,8UL,4294967291UL,0x242D3008L,1UL},{0UL,8UL,4294967295UL,5UL,0xB3AD1DF4L,0x2A5B0014L}},{{0xB3AD1DF4L,0x242D3008L,4294967295UL,0x242D3008L,0xB3AD1DF4L,0x4F64149DL},{2UL,8UL,0xC5C1250BL,4294967295UL,0x242D3008L,4294967295UL},{0xCCF0DE68L,0UL,1UL,8UL,0UL,4294967295UL},{4294967295UL,5UL,0xC5C1250BL,0xB3AD1DF4L,0xCCF0DE68L,0x4F64149DL},{0UL,2UL,4294967295UL,0xCCF0DE68L,0x76CA79F1L,0x2A5B0014L},{0UL,0xD78A4C39L,4294967295UL,0xB3AD1DF4L,4294967287UL,1UL}},{{4294967295UL,0xCCF0DE68L,8UL,8UL,8UL,8UL},{0xCCF0DE68L,0xCCF0DE68L,4UL,4294967295UL,4294967287UL,1UL},{2UL,0xD78A4C39L,4294967295UL,0x242D3008L,0x76CA79F1L,0UL},{0x967C15F9L,0x03BE6789L,4294967295UL,4294967290UL,0x8BB1D139L,5UL},{4294967295UL,4294967290UL,0UL,0xF22BB212L,4294967293UL,0xD78A4C39L},{0xF22BB212L,4294967293UL,0xD78A4C39L,0xF22BB212L,0UL,0UL}},{{4294967295UL,4294967295UL,0x76CA79F1L,4294967290UL,0x967C15F9L,0xB3AD1DF4L},{0x967C15F9L,0UL,0x242D3008L,0UL,0x967C15F9L,4294967291UL},{0x03BE6789L,4294967295UL,0xCCF0DE68L,0x73FC7AFDL,0UL,0x76CA79F1L},{0x8BB1D139L,4294967293UL,5UL,4294967295UL,4294967293UL,0x76CA79F1L},{0x73FC7AFDL,4294967290UL,0xCCF0DE68L,0x967C15F9L,0x8BB1D139L,4294967291UL},{4294967293UL,0x03BE6789L,0x242D3008L,0x8BB1D139L,0UL,0xB3AD1DF4L}},{{4294967293UL,4294967295UL,0x76CA79F1L,0x967C15F9L,0x648E4C6CL,0UL},{0x73FC7AFDL,0x8BB1D139L,0xD78A4C39L,4294967295UL,4294967295UL,0xD78A4C39L},{0x8BB1D139L,0x8BB1D139L,0UL,0x73FC7AFDL,0x648E4C6CL,5UL},{0x03BE6789L,4294967295UL,4294967295UL,0UL,0UL,0UL},{0x967C15F9L,0x03BE6789L,4294967295UL,4294967290UL,0x8BB1D139L,5UL},{4294967295UL,4294967290UL,0UL,0xF22BB212L,4294967293UL,0xD78A4C39L}},{{0xF22BB212L,4294967293UL,0xD78A4C39L,0xF22BB212L,4294967295UL,0xD78A4C39L},{0x03BE6789L,4294967290UL,0x242D3008L,4294967293UL,0x73FC7AFDL,4294967295UL},{0x73FC7AFDL,4294967295UL,0UL,4294967295UL,0x73FC7AFDL,4294967287UL},{0x967C15F9L,4294967290UL,0x76CA79F1L,4294967295UL,4294967295UL,0x242D3008L},{0UL,4294967295UL,0UL,4294967290UL,4294967295UL,0x242D3008L},{4294967295UL,4294967293UL,0x76CA79F1L,0x73FC7AFDL,0UL,4294967287UL}}};
static int g_391 = 0x66C2B61EL;
static unsigned g_541[8][9] = {{0x51120678L,7UL,7UL,0x51120678L,0x51120678L,7UL,7UL,0x51120678L,0x51120678L},{0xD5346367L,18446744073709551607UL,0xD5346367L,18446744073709551607UL,0xD5346367L,18446744073709551607UL,0xD5346367L,18446744073709551607UL,0xD5346367L},{0x51120678L,0x51120678L,7UL,7UL,0x51120678L,0x51120678L,7UL,7UL,0x51120678L},{0xC0416211L,18446744073709551607UL,0xC0416211L,18446744073709551607UL,0xC0416211L,18446744073709551607UL,0xC0416211L,18446744073709551607UL,0xC0416211L},{0x51120678L,7UL,7UL,0x51120678L,0x51120678L,7UL,7UL,0x51120678L,0x51120678L},{0xD5346367L,18446744073709551607UL,0xD5346367L,18446744073709551607UL,0xD5346367L,18446744073709551607UL,0xD5346367L,18446744073709551607UL,0xD5346367L},{0x51120678L,0x51120678L,7UL,7UL,0x51120678L,0x51120678L,7UL,7UL,0x51120678L},{0xC0416211L,18446744073709551607UL,0xC0416211L,18446744073709551607UL,0xC0416211L,18446744073709551607UL,0xC0416211L,18446744073709551607UL,0xC0416211L}};
static struct S0 *g_644 = &g_134;
static struct S0 **g_648 = (void*)0;
static struct S0 *g_650 = &g_94;
static struct S0 **g_649 = &g_650;
static unsigned g_680 = 18446744073709551615UL;
static unsigned char ***g_686 = &g_271;
static int g_703 = 4L;
static int *g_761 = &g_703;
static unsigned short g_881 = 65526UL;
static unsigned g_894 = 0x4505C9E8L;
static char g_976 = 0x9BL;
static unsigned short *g_1206 = (void*)0;
static unsigned short **g_1205 = &g_1206;
static unsigned g_1289 = 0xBC7B8794L;
static unsigned char g_1360 = 255UL;
static unsigned short g_1388 = 0x5AE8L;
static short g_1519 = 0xE050L;
static int g_1521 = 8L;
static struct S0 *g_1532 = (void*)0;
static int g_1608 = 6L;
static unsigned *g_1618 = &g_128;
static unsigned **g_1617 = &g_1618;
static int g_1663 = (-1L);
static unsigned *g_1685 = &g_372[4][2][3];
static unsigned **g_1684[6] = {&g_1685,&g_1685,&g_1685,&g_1685,&g_1685,&g_1685};
static char **g_1977 = &g_103[1];
static short g_2138 = (-1L);
static char g_2253 = 0xB2L;
static unsigned char g_2280 = 255UL;
static unsigned g_2303 = 0UL;
static short ****g_2330 = &g_299[0];
static short *****g_2329 = &g_2330;
static unsigned g_2386 = 6UL;
static int g_2525 = (-1L);
static unsigned char g_2728 = 254UL;
static unsigned short g_2791 = 0x5E38L;
static struct S0 *g_2821 = (void*)0;



static short func_1(void);
static unsigned func_9(unsigned p_10, short p_11, int p_12, int p_13);
static unsigned func_17(unsigned p_18);
static struct S0 * func_20(struct S0 p_21, unsigned p_22);
static struct S0 func_23(char p_24, short p_25, unsigned short p_26, unsigned p_27);
static unsigned short func_37(int p_38, int p_39);
static struct S0 func_40(struct S0 * p_41, unsigned short p_42);
static unsigned func_45(unsigned short p_46, struct S0 * p_47, unsigned short p_48, char p_49);
static short func_57(struct S0 * p_58, struct S0 p_59, short p_60);
static unsigned func_77(unsigned p_78, unsigned short p_79);
static short func_1(void)
{
    unsigned short l_14 = 1UL;
    int l_2060 = (-8L);
    int l_2973 = 0x62030B3EL;
    unsigned char *l_2974[2];
    int i;
    for (i = 0; i < 2; i++)
        l_2974[i] = &g_44.f1;
    (*g_761) = (g_2[6] <= (g_44.f1 = (safe_add_func_uint32_t_u_u((safe_add_func_int8_t_s_s((g_2[0] || ((l_2060 = (func_9((l_14 = 1UL), g_2[6], (safe_add_func_uint8_t_u_u(g_2[6], ((g_2[6] <= func_17(g_2[2])) || (((*g_146) = (*g_761)) ^ 0xEC3158E6L)))), l_2060) || (*g_1685))) < 0xD4L)), l_2973)), (*g_1685)))));
    for (g_1519 = 0; (g_1519 == (-11)); g_1519--)
    {
        unsigned l_2978 = 1UL;
        for (g_2386 = 0; (g_2386 <= 8); g_2386 += 1)
        {
            int *l_2977[6] = {&g_1608,&g_1608,&g_1608,&g_1608,&g_1608,&g_1608};
            int i;
            --l_2978;
        }
    }
    return l_2973;
}







static unsigned func_9(unsigned p_10, short p_11, int p_12, int p_13)
{
    int l_2068 = 0xA905F1C2L;
    int l_2086 = (-1L);
    int l_2087 = 0x6A2465E8L;
    int l_2088 = 0x06D82980L;
    int l_2091 = (-1L);
    int l_2093[8][9] = {{0x08B3A095L,0xB45EA374L,4L,0xB45EA374L,0x08B3A095L,4L,(-6L),(-6L),4L},{0xD9B4F41DL,0x88C93FADL,1L,0x88C93FADL,0xD9B4F41DL,1L,1L,1L,1L},{0x08B3A095L,0xB45EA374L,4L,0xB45EA374L,0x08B3A095L,4L,(-6L),(-6L),4L},{0xD9B4F41DL,0x88C93FADL,1L,0x88C93FADL,0xD9B4F41DL,1L,1L,1L,1L},{0x08B3A095L,0xB45EA374L,4L,0xB45EA374L,0x08B3A095L,4L,(-6L),(-6L),4L},{0xD9B4F41DL,0x88C93FADL,1L,0x88C93FADL,0xD9B4F41DL,1L,1L,1L,1L},{0x08B3A095L,0xB45EA374L,4L,0xB45EA374L,0x08B3A095L,4L,(-6L),(-6L),4L},{0xD9B4F41DL,0x88C93FADL,1L,0x88C93FADL,0xD9B4F41DL,1L,1L,1L,1L}};
    int l_2099[4];
    unsigned l_2101 = 1UL;
    unsigned l_2109 = 0x54E5B90EL;
    unsigned l_2143[6] = {0xD2028AD5L,0xD2028AD5L,0xD2028AD5L,0xD2028AD5L,0xD2028AD5L,0xD2028AD5L};
    int l_2198 = 0x5CAB9D4BL;
    int l_2233 = (-1L);
    short l_2257 = (-1L);
    short l_2259[10][8] = {{0xF4DBL,9L,0xE8D5L,0xE8D5L,9L,0xF4DBL,0x354DL,0x4404L},{0x4404L,0L,(-1L),0xE3C5L,0x575DL,0x8E8FL,0xF4DBL,0x6B8DL},{(-1L),0xD5CBL,0x6B8DL,0xE3C5L,0x6B8DL,0xD5CBL,(-1L),0x4404L},{9L,0x6B8DL,6L,0xE8D5L,0x8E8FL,0x4404L,1L,0x575DL},{0xE3C5L,(-1L),0xB55CL,0x8E8FL,0x8E8FL,0xB55CL,(-1L),0xE3C5L},{9L,0xE3C5L,0xD5CBL,0x575DL,0x6B8DL,(-1L),6L,0L},{(-1L),0xF4DBL,0xB4C4L,(-1L),0x575DL,(-1L),0xB4C4L,0xF4DBL},{0x4404L,0xE3C5L,0L,0x354DL,9L,0xB55CL,0x6B8DL,0xB4C4L},{0xF4DBL,(-1L),0x8E8FL,0x6B8DL,0x4404L,0x4404L,0x6B8DL,0x8E8FL},{0x6B8DL,0x6B8DL,0L,0xB55CL,0xE8D5L,0xD5CBL,0xB4C4L,(-1L)}};
    char l_2271 = 0xE3L;
    char l_2310 = 1L;
    struct S0 *l_2323 = (void*)0;
    short ****l_2328 = &g_299[0];
    short *****l_2327 = &l_2328;
    unsigned ***l_2361 = &g_1617;
    char l_2368 = 1L;
    unsigned **l_2375 = &g_1685;
    int l_2389 = (-9L);
    unsigned l_2422 = 18446744073709551612UL;
    int l_2430 = 0x656B2310L;
    unsigned l_2438 = 0x30C46F7EL;
    int ***l_2457[3];
    int ***l_2458 = &g_194;
    int l_2504 = (-1L);
    short l_2508 = (-2L);
    char ***l_2520 = &g_1977;
    struct S0 *l_2555[1][1];
    int l_2573[6];
    unsigned short *l_2578 = &g_134.f0;
    int l_2598 = 1L;
    int l_2677 = (-10L);
    char l_2679[2];
    int l_2681 = 0x08C7D7CDL;
    int l_2700 = 1L;
    char l_2719 = (-1L);
    unsigned l_2741[9][3];
    unsigned l_2759[4];
    unsigned short l_2774[6];
    short l_2804[5] = {0L,0L,0L,0L,0L};
    unsigned short *l_2805 = &l_2774[0];
    unsigned short *l_2806 = (void*)0;
    unsigned short *l_2807 = &g_881;
    short *l_2808 = &g_1519;
    unsigned short l_2809 = 0UL;
    unsigned short l_2889 = 0UL;
    int i, j;
    for (i = 0; i < 4; i++)
        l_2099[i] = 0x7D06C7D7L;
    for (i = 0; i < 3; i++)
        l_2457[i] = &g_194;
    for (i = 0; i < 1; i++)
    {
        for (j = 0; j < 1; j++)
            l_2555[i][j] = &g_94;
    }
    for (i = 0; i < 6; i++)
        l_2573[i] = (-7L);
    for (i = 0; i < 2; i++)
        l_2679[i] = (-9L);
    for (i = 0; i < 9; i++)
    {
        for (j = 0; j < 3; j++)
            l_2741[i][j] = 4294967295UL;
    }
    for (i = 0; i < 4; i++)
        l_2759[i] = 0UL;
    for (i = 0; i < 6; i++)
        l_2774[i] = 4UL;
    return (***l_2458);
}







static unsigned func_17(unsigned p_18)
{
    unsigned l_19[1][4][5] = {{{18446744073709551609UL,0x6D238E48L,0x6D238E48L,18446744073709551609UL,0x6D238E48L},{18446744073709551609UL,18446744073709551609UL,18446744073709551609UL,0x6D238E48L,0x6D238E48L},{0x326874BEL,0x6D238E48L,0x326874BEL,0x326874BEL,0x6D238E48L},{0x6D238E48L,0x326874BEL,0x326874BEL,0x6D238E48L,0x326874BEL}}};
    int l_32[9][4] = {{0x01AEDF47L,0xA8629342L,0x01AEDF47L,0xC6EA3D88L},{0x5DE2CAEAL,(-5L),(-6L),1L},{0x121589AFL,0xD8F9C328L,(-5L),(-5L)},{(-1L),(-1L),(-5L),0x01AEDF47L},{0x121589AFL,(-1L),(-6L),0xD8F9C328L},{0x5DE2CAEAL,(-6L),0x01AEDF47L,(-6L)},{0x01AEDF47L,(-6L),0x5DE2CAEAL,0xD8F9C328L},{(-6L),(-1L),0x121589AFL,0x01AEDF47L},{(-5L),(-1L),(-1L),(-5L)}};
    int l_517 = 0x03177594L;
    int l_518 = 0L;
    short *l_1718 = &g_2[3];
    struct S0 *l_1735 = &g_134;
    unsigned char ****l_1776[1][5][3] = {{{&g_686,&g_270,&g_686},{&g_686,&g_686,&g_686},{&g_686,&g_270,&g_686},{&g_686,&g_686,&g_686},{&g_686,&g_270,&g_686}}};
    short ****l_1783[2];
    unsigned l_1798 = 18446744073709551609UL;
    unsigned l_1809 = 18446744073709551613UL;
    int l_1842[6][8][5] = {{{0xE0D5DEA3L,0L,0x52FFF795L,9L,0x124D0950L},{0L,1L,0x15860905L,0xE0D5DEA3L,0x663287AFL},{0xB95B8FDAL,0xACC82D11L,4L,0xA6C031CAL,9L},{7L,0xACC82D11L,0x3156C361L,0xB7CBE333L,(-10L)},{2L,1L,0x663287AFL,1L,0x4C124A52L},{0x5A9D5DD3L,0L,(-1L),0L,7L},{1L,0x7768D1CAL,0L,1L,0x58821C0AL},{0L,0xF4E78816L,0xB95B8FDAL,7L,1L}},{{0x6EE45795L,0xACC82D11L,1L,1L,0xACC82D11L},{1L,0x7768D1CAL,0x7099D399L,0L,0x27EC8568L},{0x7099D399L,9L,0L,0x5A9D5DD3L,0xF454AEDBL},{0xA683201EL,0xACE371FAL,1L,1L,1L},{0x7099D399L,0x663287AFL,0xA6C031CAL,0xF4E78816L,1L},{1L,0x6EE45795L,0xACE371FAL,0x5DFAD9A4L,0xAB74D0F4L},{0x6EE45795L,7L,(-1L),(-2L),0xB6E965D0L},{0L,1L,0xB7CBE333L,1L,0x9E4A882EL}},{{0x124D0950L,0x0B0BD695L,7L,3L,0x300BC88DL},{4L,1L,0x5DFAD9A4L,(-1L),5L},{(-3L),0x5DFAD9A4L,0x684D056AL,0x7768D1CAL,0xE0D5DEA3L},{3L,0xB6E965D0L,0x9C4B1219L,0L,0xE0D5DEA3L},{0x0B0BD695L,0x285BD8C4L,0L,0x27EC8568L,5L},{0xA6C031CAL,0x27EC8568L,0L,(-1L),0x300BC88DL},{9L,0xAC8CE51CL,(-1L),0xB7CBE333L,0x9E4A882EL},{0xA7A8449DL,5L,4L,0L,0xB6E965D0L}},{{0L,(-2L),0xACC82D11L,0xB2A022FCL,0xAB74D0F4L},{0xAC8CE51CL,0L,0x9E4A882EL,0L,1L},{0x5A9D5DD3L,(-1L),0x39D5B4B6L,1L,0x9035C06EL},{1L,0x52FFF795L,0L,1L,3L},{0L,0x58821C0AL,1L,1L,0xC2CC3DE6L},{0xC2CC3DE6L,1L,0xACC82D11L,0L,0L},{4L,0x0B0BD695L,0xA683201EL,0L,1L},{0x27EC8568L,0xACE371FAL,0L,(-3L),1L}},{{1L,(-2L),1L,0x58821C0AL,0x52FFF795L},{8L,(-10L),0x4C124A52L,0x9C4B1219L,4L},{9L,0xE0D5DEA3L,1L,0xC2CC3DE6L,0x5A9D5DD3L},{0xF4E78816L,(-3L),0x3156C361L,1L,0xAB74D0F4L},{0xB7CBE333L,0L,0x3156C361L,7L,(-3L)},{0L,0xA6C031CAL,1L,0L,0xF4E78816L},{0x663287AFL,1L,0x4C124A52L,0x0EF4093CL,0xD31FF759L},{0xE7AF9F91L,8L,1L,7L,0x9E4A882EL}},{{0L,0x1C33414BL,0L,4L,0x285BD8C4L},{0x479FFEDCL,0x39D5B4B6L,0xA683201EL,0x76940D3DL,0xA683201EL},{1L,1L,0xACC82D11L,0x6EE45795L,(-8L)},{0xB2A022FCL,1L,1L,0xD31FF759L,7L},{0xA6C031CAL,0xB7CBE333L,0xACC82D11L,(-1L),7L},{0xACE371FAL,0xF1BBCB40L,0xAC8CE51CL,0x16985C78L,0xA683201EL},{0xD31FF759L,0x124D0950L,0L,0L,0xACE371FAL},{0xB95B8FDAL,0xAC8CE51CL,0x663287AFL,0x0EF4093CL,1L}}};
    unsigned *l_1930[3];
    int l_2036[7][5] = {{1L,(-1L),0xD5F4E69EL,0xCA8D19DEL,0xCA8D19DEL},{0x47B53132L,(-1L),0x47B53132L,(-10L),(-1L)},{0xCA8D19DEL,0x9FC870BCL,(-10L),0xCA8D19DEL,(-10L)},{0xCA8D19DEL,0xCA8D19DEL,0xD5F4E69EL,(-1L),1L},{0x47B53132L,1L,(-10L),(-10L),1L},{1L,0x9FC870BCL,0x47B53132L,1L,(-10L)},{(-1L),1L,0xD5F4E69EL,1L,(-1L)}};
    char l_2037 = 2L;
    char l_2048 = 0x7EL;
    int i, j, k;
    for (i = 0; i < 2; i++)
        l_1783[i] = &g_299[0];
    for (i = 0; i < 3; i++)
        l_1930[i] = &g_372[1][0][1];
    for (p_18 = 0; (p_18 <= 0); p_18 += 1)
    {
        unsigned short l_515 = 2UL;
        char *l_516[3][4][1] = {{{&g_134.f3},{&g_134.f3},{&g_134.f3},{(void*)0}},{{&g_134.f3},{&g_134.f3},{&g_134.f3},{&g_134.f3}},{{(void*)0},{&g_134.f3},{&g_134.f3},{&g_134.f3}}};
        int l_1697 = 0xA8911CB3L;
        int l_1711 = (-6L);
        short *l_1719[8][7] = {{&g_1519,&g_2[6],(void*)0,&g_2[0],&g_2[6],(void*)0,&g_2[3]},{&g_2[6],(void*)0,&g_107,&g_2[4],&g_1519,&g_107,&g_2[7]},{&g_2[3],&g_2[3],&g_1519,&g_2[6],&g_2[0],&g_2[0],&g_2[6]},{&g_1519,&g_2[6],&g_1519,&g_107,(void*)0,(void*)0,&g_2[5]},{(void*)0,&g_2[3],&g_107,&g_1519,(void*)0,&g_2[6],(void*)0},{&g_2[3],&g_1519,&g_2[6],&g_2[5],&g_1519,&g_2[6],&g_2[3]},{(void*)0,&g_2[5],&g_1519,&g_1519,(void*)0,&g_1519,&g_1519},{&g_2[5],&g_2[5],&g_2[6],&g_107,&g_2[3],&g_2[7],&g_1519}};
        int i, j, k;
    }
    (*g_761) |= ((**g_194) = (65535UL < ((safe_add_func_uint32_t_u_u((safe_add_func_uint8_t_u_u(l_32[5][2], func_77(l_517, (p_18 || l_518)))), p_18)) == (safe_rshift_func_int8_t_s_u(func_57(l_1735, (*l_1735), l_32[5][2]), 3)))));
    for (g_134.f5 = 0; (g_134.f5 <= (-21)); g_134.f5--)
    {
        struct S0 l_1741[1][5] = {{{65535UL,0x68L,0x528E5CF2L,0x35L,1L,0L,1UL,1L},{65535UL,0x68L,0x528E5CF2L,0x35L,1L,0L,1UL,1L},{65535UL,0x68L,0x528E5CF2L,0x35L,1L,0L,1UL,1L},{65535UL,0x68L,0x528E5CF2L,0x35L,1L,0L,1UL,1L},{65535UL,0x68L,0x528E5CF2L,0x35L,1L,0L,1UL,1L}}};
        int l_1743 = (-5L);
        unsigned char ***l_1759 = &g_271;
        int ***l_1784 = &g_194;
        int l_1796 = 0x8B70F5D9L;
        int l_1797 = 0x1C1786B7L;
        char l_1823 = 0xFEL;
        struct S0 *l_1857 = (void*)0;
        unsigned l_1907[10] = {4294967292UL,4294967292UL,4294967292UL,4294967292UL,4294967292UL,4294967292UL,4294967292UL,4294967292UL,4294967292UL,4294967292UL};
        unsigned *l_1931[9] = {&g_894,(void*)0,(void*)0,&g_894,(void*)0,(void*)0,&g_894,(void*)0,(void*)0};
        short **l_2027[1];
        short ***l_2026[9] = {&l_2027[0],&l_2027[0],&l_2027[0],&l_2027[0],&l_2027[0],&l_2027[0],&l_2027[0],&l_2027[0],&l_2027[0]};
        int i, j;
        for (i = 0; i < 1; i++)
            l_2027[i] = (void*)0;
    }
    return p_18;
}







static struct S0 * func_20(struct S0 p_21, unsigned p_22)
{
    int l_1392[3];
    unsigned char ****l_1396 = &g_686;
    unsigned short l_1397[6];
    struct S0 l_1402[1] = {{0x1DACL,0x5DL,0x40831862L,0x97L,0L,-8L,2UL,1L}};
    int l_1523 = 1L;
    unsigned l_1529 = 0xC90D4E61L;
    int l_1554 = 1L;
    unsigned short **l_1581 = &g_1206;
    struct S0 l_1672 = {0xB668L,0UL,0x55A1D7E2L,-7L,0L,0xE2L,65535UL,0x51L};
    struct S0 *l_1687[1];
    int i;
    for (i = 0; i < 3; i++)
        l_1392[i] = 0x3B2B3C8BL;
    for (i = 0; i < 6; i++)
        l_1397[i] = 0UL;
    for (i = 0; i < 1; i++)
        l_1687[i] = &g_134;
    if ((l_1397[2] = (l_1392[2] && (safe_unary_minus_func_int32_t_s((l_1392[0] = (safe_lshift_func_uint16_t_u_s((l_1396 == l_1396), 15))))))))
    {
        unsigned short l_1417[10][7] = {{0xDABCL,0x36E1L,0xDABCL,0xDABCL,0x36E1L,0xDABCL,0xDABCL},{0x36E1L,0x36E1L,3UL,0x36E1L,0x36E1L,3UL,0x36E1L},{0x36E1L,0xDABCL,0xDABCL,0x36E1L,0xDABCL,0xDABCL,0x36E1L},{0xDABCL,0x36E1L,0xDABCL,0xDABCL,0x36E1L,0xDABCL,0xDABCL},{0x36E1L,0x36E1L,3UL,0x36E1L,0x36E1L,3UL,0x36E1L},{0x36E1L,0xDABCL,0xDABCL,0x36E1L,0xDABCL,0xDABCL,0x36E1L},{0xDABCL,0x36E1L,0xDABCL,0xDABCL,0x36E1L,0xDABCL,0xDABCL},{0x36E1L,0x36E1L,3UL,0x36E1L,0x36E1L,3UL,0x36E1L},{0x36E1L,0xDABCL,0xDABCL,0x36E1L,0xDABCL,0xDABCL,0x36E1L},{0xDABCL,0x36E1L,0xDABCL,0xDABCL,0x36E1L,0xDABCL,0xDABCL}};
        int l_1433 = 3L;
        int l_1434[5][2][6] = {{{1L,0x9AF9A825L,(-4L),1L,0x6B8DBDD2L,(-9L)},{1L,0x6B8DBDD2L,(-9L),0x36990097L,(-9L),0x6B8DBDD2L}},{{0xA156A914L,1L,0L,8L,0x98FC9A33L,4L},{0x98FC9A33L,0L,0x68FECDD2L,8L,(-4L),6L}},{{3L,0L,8L,0x152141CBL,0x98FC9A33L,(-8L)},{0x36990097L,1L,0L,0x98FC9A33L,(-9L),3L}},{{0x5724AE82L,0x6B8DBDD2L,6L,6L,0x6B8DBDD2L,0x5724AE82L},{0xD81C7C4CL,0x9AF9A825L,0x36990097L,7L,4L,1L}},{{(-4L),1L,0x98FC9A33L,(-2L),6L,0xA156A914L},{(-4L),(-9L),(-2L),7L,(-8L),1L}}};
        unsigned char l_1463 = 8UL;
        struct S0 *l_1479 = &l_1402[0];
        unsigned short l_1489[2][4] = {{65535UL,65531UL,65535UL,65531UL},{65535UL,65531UL,65535UL,65531UL}};
        int l_1522 = (-5L);
        short **l_1584 = (void*)0;
        char l_1605 = 0x95L;
        unsigned l_1644 = 2UL;
        int i, j, k;
        for (g_134.f6 = 0; (g_134.f6 == 5); g_134.f6 = safe_add_func_int32_t_s_s(g_134.f6, 2))
        {
            int *l_1400 = &l_1392[2];
            int *l_1401 = &g_96[2];
            unsigned short *l_1411 = &l_1397[2];
            char *l_1418 = (void*)0;
            char *l_1419 = (void*)0;
            char *l_1420 = &g_134.f5;
            int l_1432 = 1L;
            int l_1436[4][8] = {{0xD59EA557L,0xBC66D141L,0xBC66D141L,0xD59EA557L,(-1L),0x3207C7DBL,(-1L),0xD59EA557L},{0xBC66D141L,(-1L),0xBC66D141L,0x138E4F2CL,0xACFF6A06L,0xACFF6A06L,0x138E4F2CL,0xBC66D141L},{(-1L),(-1L),0xACFF6A06L,0x3207C7DBL,0xA96E7026L,0x3207C7DBL,0xACFF6A06L,(-1L)},{(-1L),0xBC66D141L,0x138E4F2CL,0xACFF6A06L,0xACFF6A06L,0x138E4F2CL,0xBC66D141L,(-1L)}};
            struct S0 l_1462 = {0x7F05L,1UL,0xB96EADECL,0xB3L,1L,0x48L,0x357EL,1L};
            int l_1488 = 0xC4C0246EL;
            int **l_1492 = &l_1401;
            int i, j;
            (*l_1401) = ((~(0x8C49ABBBL == p_21.f6)) >= ((*l_1400) = ((*g_761) ^= l_1397[3])));
            if (func_57((*g_649), l_1402[0], (*l_1401)))
            {
                struct S0 *l_1421 = &g_134;
                int l_1422 = 0x6A879BC9L;
                int l_1435 = (-1L);
                unsigned char **l_1442 = &g_155;
                unsigned *l_1461 = &g_1289;
                (**g_649) = func_40(l_1421, l_1422);
                for (p_21.f1 = 0; (p_21.f1 <= 7); ++p_21.f1)
                {
                    unsigned l_1437[1][6] = {{1UL,18446744073709551611UL,18446744073709551611UL,1UL,18446744073709551611UL,18446744073709551611UL}};
                    int i, j;
                    l_1421 = (void*)0;
                    for (p_21.f2 = 0; (p_21.f2 < 23); p_21.f2 = safe_add_func_int32_t_s_s(p_21.f2, 1))
                    {
                        int *l_1427 = &l_1422;
                        int *l_1428 = &g_703;
                        int *l_1429 = (void*)0;
                        int *l_1430 = &g_96[5];
                        int *l_1431[6][7][3] = {{{&g_703,&g_96[5],&l_1392[1]},{&g_703,&g_96[5],&l_1392[2]},{&g_96[5],(void*)0,&l_1422},{&g_96[5],&g_96[8],&g_96[5]},{&g_96[5],(void*)0,&g_96[5]},{&l_1392[0],&g_96[5],&l_1392[2]},{(void*)0,&g_96[5],(void*)0}},{{&g_703,(void*)0,&g_96[5]},{(void*)0,&l_1392[2],&l_1392[1]},{&g_703,&g_703,&l_1392[2]},{(void*)0,&g_96[5],&g_96[5]},{&l_1392[0],&l_1392[2],(void*)0},{&g_96[5],&l_1392[2],&g_703},{&g_96[5],&l_1392[0],(void*)0}},{{&g_96[5],&g_96[5],&g_96[5]},{&g_703,&g_703,&l_1392[2]},{&g_703,(void*)0,&l_1392[1]},{&l_1392[2],&l_1392[0],&g_96[8]},{(void*)0,&g_96[4],(void*)0},{&g_96[5],&l_1392[1],&l_1392[2]},{&l_1422,&l_1392[2],&g_96[8]}},{{&g_96[2],&g_96[5],&g_96[8]},{(void*)0,(void*)0,&g_96[5]},{&g_96[2],&l_1392[2],&g_96[5]},{&l_1422,&g_96[5],(void*)0},{&g_96[5],&g_96[2],&g_703},{(void*)0,(void*)0,&l_1422},{&l_1392[2],&g_703,&g_703}},{{&l_1392[1],&l_1392[2],(void*)0},{&l_1392[0],&l_1392[2],&g_96[5]},{&l_1422,&g_96[4],&g_96[5]},{&l_1392[2],(void*)0,&g_96[8]},{&g_96[8],&g_96[4],&g_96[8]},{&g_96[5],&l_1392[2],&l_1392[2]},{&l_1422,&l_1392[2],(void*)0}},{{&g_96[2],&g_703,&g_96[8]},{&g_96[5],(void*)0,&l_1392[1]},{&g_96[2],&g_96[2],&g_96[5]},{&l_1422,&g_96[5],&l_1392[0]},{&g_96[5],&l_1392[2],&g_703},{&g_96[8],(void*)0,&l_1392[1]},{&l_1392[2],&g_96[5],&g_703}}};
                        unsigned char *l_1451 = &g_44.f1;
                        unsigned *l_1454 = &g_372[4][2][3];
                        int i, j, k;
                        l_1437[0][2]++;
                        (*l_1400) ^= ((safe_lshift_func_uint16_t_u_s(l_1437[0][4], (l_1442 == (**l_1396)))) < ((*l_1454) = (safe_add_func_uint32_t_u_u((((safe_sub_func_uint32_t_u_u(l_1417[8][6], (safe_lshift_func_uint8_t_u_u(((*l_1451) = (safe_sub_func_uint32_t_u_u(l_1437[0][3], p_21.f7))), p_21.f6)))) < 0x144FL) == (safe_div_func_uint32_t_u_u(p_22, 0xEF088262L))), g_541[2][7]))));
                        (*l_1401) &= ((safe_sub_func_uint32_t_u_u(p_21.f4, 1UL)) <= 0x38F3L);
                    }
                    if (l_1437[0][2])
                        break;
                    if (p_22)
                        break;
                }
                (*g_761) = (((*l_1400) <= 0xBD7DL) <= (l_1434[2][1][1] == ((safe_sub_func_uint32_t_u_u(func_45((++(*l_1411)), &l_1402[0], p_21.f6, (+p_22)), ((*l_1461) |= (~0x57AB0056L)))) == func_57(&p_21, l_1462, p_21.f3))));
                if ((*l_1400))
                    break;
            }
            else
            {
                int l_1476 = 0L;
                (*g_761) = ((l_1392[2] = 0xBCL) & l_1463);
                (*g_761) |= (safe_sub_func_int32_t_s_s((safe_rshift_func_uint16_t_u_u(((*l_1411) = (safe_lshift_func_uint16_t_u_s((safe_add_func_uint32_t_u_u(func_77(g_44.f0, (safe_lshift_func_uint8_t_u_u(l_1463, 6))), (l_1476 &= (l_1392[0] = (safe_mod_func_uint32_t_u_u(0xB2687AFEL, p_21.f4)))))), 11))), 7)), (safe_mul_func_uint16_t_u_u(func_57(l_1479, l_1402[0], l_1463), p_22))));
            }
            for (g_1360 = (-13); (g_1360 == 35); g_1360++)
            {
                int l_1487[4][5][7] = {{{(-1L),1L,0xF554FCC7L,0xCC2DE3DEL,0x550AFA52L,1L,1L},{(-9L),0x2C6556A6L,0x99A9FD9DL,(-9L),0L,(-1L),0x167DAB00L},{(-1L),0xCC2DE3DEL,2L,(-1L),0x2C6556A6L,0x12BEBF7FL,0xBD864AB8L},{0xFA7CC339L,0x6619386FL,(-3L),0x99A9FD9DL,0xE136B226L,0x8C6A86CCL,1L},{0x6619386FL,(-9L),(-3L),0xA640086AL,(-1L),0xA640086AL,(-3L)}},{{1L,1L,(-1L),1L,0xF554FCC7L,0xCC2DE3DEL,0x550AFA52L},{1L,0xE136B226L,7L,(-1L),0x8C6A86CCL,7L,1L},{7L,(-9L),0xE136B226L,(-3L),0xF554FCC7L,0x12BEBF7FL,(-5L)},{0xB59B5996L,0x550AFA52L,0L,1L,(-1L),1L,0xB59B5996L},{1L,0x12BEBF7FL,(-1L),0xFA7CC339L,0xE136B226L,6L,0xB59B5996L}},{{0xE136B226L,0xB59B5996L,0x8C6A86CCL,0x8C6A86CCL,0xB59B5996L,0xE136B226L,(-5L)},{0x550AFA52L,(-1L),0x349E95C8L,1L,0x167DAB00L,0x2564AFA0L,1L},{0xFA7CC339L,0xA640086AL,2L,0x167DAB00L,(-3L),6L,0x550AFA52L},{0x0BB83BBAL,(-1L),0xE136B226L,0x12BEBF7FL,0xFA7CC339L,0x6619386FL,(-3L)},{0xBD864AB8L,0xB59B5996L,1L,0xBD864AB8L,0x167DAB00L,0x2C6556A6L,1L}},{{1L,0x12BEBF7FL,0xA640086AL,0xBD864AB8L,7L,7L,0xBD864AB8L},{(-3L),0x550AFA52L,(-3L),7L,(-1L),0x12BEBF7FL,0x6619386FL},{0xFA7CC339L,0xBD864AB8L,0xDBF6D580L,1L,0x167DAB00L,(-1L),1L},{(-1L),2L,0x0BB83BBAL,(-1L),0xE136B226L,0x12BEBF7FL,0xFA7CC339L},{0x8C6A86CCL,(-1L),6L,0x12BEBF7FL,0x99A9FD9DL,6L,2L}}};
                int i, j, k;
                (*g_194) = (void*)0;
                for (g_94.f2 = 0; (g_94.f2 >= 14); g_94.f2 = safe_add_func_uint32_t_u_u(g_94.f2, 1))
                {
                    int *l_1484 = &l_1392[0];
                    int *l_1485 = (void*)0;
                    int *l_1486[4] = {&g_96[5],&g_96[5],&g_96[5],&g_96[5]};
                    int i;
                    --l_1489[1][2];
                }
            }
            (*l_1492) = ((*g_194) = &l_1436[2][5]);
        }
        for (g_1388 = (-24); (g_1388 >= 10); g_1388 = safe_add_func_int32_t_s_s(g_1388, 1))
        {
            struct S0 *l_1515[1][9] = {{&l_1402[0],&l_1402[0],&l_1402[0],&l_1402[0],&l_1402[0],&l_1402[0],&l_1402[0],&l_1402[0],&l_1402[0]}};
            int l_1520 = 0x70C43D71L;
            unsigned l_1536 = 0x35459F75L;
            int l_1541[6] = {(-10L),1L,1L,(-10L),1L,1L};
            unsigned l_1555 = 18446744073709551614UL;
            short *l_1587 = &g_2[7];
            short **l_1586[2][6][7] = {{{&l_1587,&l_1587,&l_1587,&l_1587,&l_1587,&l_1587,&l_1587},{(void*)0,&l_1587,&l_1587,&l_1587,&l_1587,&l_1587,&l_1587},{&l_1587,&l_1587,&l_1587,&l_1587,&l_1587,&l_1587,(void*)0},{(void*)0,&l_1587,&l_1587,&l_1587,(void*)0,(void*)0,&l_1587},{&l_1587,&l_1587,&l_1587,(void*)0,&l_1587,&l_1587,&l_1587},{&l_1587,&l_1587,(void*)0,&l_1587,&l_1587,&l_1587,&l_1587}},{{&l_1587,&l_1587,(void*)0,&l_1587,&l_1587,&l_1587,&l_1587},{&l_1587,&l_1587,(void*)0,&l_1587,(void*)0,&l_1587,&l_1587},{&l_1587,&l_1587,&l_1587,&l_1587,&l_1587,&l_1587,&l_1587},{&l_1587,&l_1587,&l_1587,&l_1587,&l_1587,&l_1587,&l_1587},{&l_1587,&l_1587,&l_1587,(void*)0,&l_1587,&l_1587,(void*)0},{(void*)0,&l_1587,&l_1587,&l_1587,&l_1587,&l_1587,&l_1587}}};
            int i, j, k;
            if (p_21.f3)
            {
                int l_1508 = 0xA78D4009L;
                int l_1524 = 3L;
                struct S0 *l_1533 = (void*)0;
                int l_1549 = 0xA9E34967L;
                int l_1550 = 0xB20D7824L;
                for (g_134.f3 = 1; (g_134.f3 >= 0); g_134.f3 -= 1)
                {
                    int *l_1495[10][9][2] = {{{&l_1392[0],&l_1392[0]},{&l_1392[2],&l_1433},{&l_1392[1],(void*)0},{&l_1434[1][1][0],&g_703},{&l_1434[1][1][0],&l_1434[1][1][0]},{(void*)0,(void*)0},{(void*)0,&l_1434[1][1][0]},{&l_1434[1][1][0],&g_703},{&l_1434[1][1][0],(void*)0}},{{&l_1392[1],&l_1433},{&l_1392[2],&l_1392[0]},{&l_1392[0],&g_96[7]},{(void*)0,(void*)0},{&l_1434[0][0][1],&l_1433},{&l_1434[0][0][3],&l_1433},{&l_1434[2][1][1],&l_1433},{&l_1433,&g_703},{&l_1434[1][1][0],&g_96[1]}},{{&g_96[5],(void*)0},{&g_703,&l_1434[1][1][0]},{&g_96[1],&l_1434[1][1][0]},{&l_1433,&l_1392[2]},{&l_1392[1],&g_96[5]},{(void*)0,&l_1433},{&g_96[2],&g_96[7]},{&l_1434[2][0][1],&g_96[1]},{&l_1392[0],&l_1434[0][0][1]}},{{&l_1434[0][0][3],&g_96[5]},{&g_96[5],(void*)0},{(void*)0,&g_703},{&g_96[1],&l_1433},{(void*)0,&l_1392[2]},{&l_1434[1][1][0],&g_96[5]},{&g_703,(void*)0},{&g_703,&l_1433},{(void*)0,&l_1434[1][1][0]}},{{&g_703,&l_1434[1][1][0]},{&g_703,&g_703},{&l_1433,&g_703},{&g_703,&l_1434[1][1][0]},{&g_703,&l_1434[1][1][0]},{(void*)0,&l_1433},{&g_703,(void*)0},{&g_703,&g_96[5]},{&l_1434[1][1][0],&l_1392[2]}},{{&l_1434[0][0][3],&g_703},{&g_96[8],&l_1433},{&g_703,&l_1433},{&g_96[5],&g_96[7]},{(void*)0,&l_1434[1][1][0]},{&g_703,&g_96[8]},{&l_1392[2],&g_703},{&g_703,&g_703},{&l_1434[1][1][0],&g_96[7]}},{{&g_96[1],&l_1433},{&g_703,(void*)0},{&g_96[8],&g_703},{&l_1434[1][1][0],&g_96[5]},{&l_1433,&g_96[5]},{&g_703,&l_1433},{&g_703,&l_1434[1][1][0]},{(void*)0,&g_703},{(void*)0,&g_703}},{{&l_1434[1][1][0],&g_703},{&g_96[5],&g_703},{&g_703,&g_703},{&g_703,&g_703},{&g_96[1],&l_1433},{&g_703,(void*)0},{&g_703,&g_703},{&l_1434[0][0][3],&l_1392[1]},{&l_1434[0][0][3],&g_703}},{{&g_703,(void*)0},{&g_703,&l_1433},{&g_96[1],&g_703},{&g_703,&g_703},{&g_703,&g_703},{&g_96[5],&g_703},{&l_1434[1][1][0],&g_703},{&l_1433,&g_96[8]},{&g_96[5],&g_96[7]}},{{(void*)0,&l_1392[2]},{&l_1433,&l_1392[2]},{&g_703,&l_1433},{&l_1434[1][1][0],&l_1434[0][0][3]},{(void*)0,(void*)0},{(void*)0,&l_1434[1][1][0]},{&g_703,&l_1434[1][1][0]},{&l_1434[1][1][0],(void*)0},{(void*)0,(void*)0}}};
                    struct S0 *l_1509[8] = {(void*)0,&g_44,&g_44,(void*)0,&g_44,&g_44,(void*)0,&g_44};
                    short *l_1510 = &g_107;
                    struct S0 l_1516 = {2UL,5UL,-7L,1L,0x5E150411L,0x2DL,0x488DL,8L};
                    char *l_1517[8][9] = {{&l_1516.f7,(void*)0,&g_44.f5,&g_134.f5,&g_134.f5,&g_44.f5,(void*)0,&l_1516.f7,(void*)0},{(void*)0,&l_1516.f7,&g_134.f3,&g_134.f7,(void*)0,(void*)0,&g_134.f7,&g_134.f3,&l_1516.f7},{&g_134.f5,&l_1516.f7,&g_976,(void*)0,&l_1402[0].f5,(void*)0,(void*)0,&l_1402[0].f5,(void*)0},{(void*)0,(void*)0,(void*)0,(void*)0,&g_134.f7,(void*)0,&l_1402[0].f7,&l_1402[0].f7,(void*)0},{&g_976,&l_1516.f7,&g_134.f5,&l_1516.f7,&g_976,(void*)0,&l_1402[0].f5,(void*)0,(void*)0},{&g_134.f3,&l_1516.f7,(void*)0,(void*)0,(void*)0,&l_1516.f7,&g_134.f3,&g_134.f7,(void*)0},{&g_44.f5,(void*)0,&l_1516.f7,(void*)0,&g_134.f7,(void*)0,&l_1516.f7,(void*)0,&g_44.f5},{&l_1516.f7,(void*)0,&l_1402[0].f7,&l_1402[0].f7,(void*)0,(void*)0,(void*)0,&l_1402[0].f7,&l_1516.f7}};
                    short *l_1518 = &g_1519;
                    int i, j, k;
                    (*g_194) = l_1495[3][2][1];
                    l_1523 &= ((~((safe_add_func_int32_t_s_s((safe_add_func_uint32_t_u_u((g_894 = (safe_mul_func_int8_t_s_s((safe_rshift_func_int8_t_s_u((((*l_1510) |= func_77((safe_div_func_uint32_t_u_u(((-1L) & (l_1508 && (&p_21 == (l_1509[0] = (*g_649))))), 0x7EADBE8DL)), l_1508)) <= ((*l_1518) = (p_21.f2 & (l_1392[0] = (safe_mod_func_uint16_t_u_u((safe_rshift_func_int8_t_s_s(func_57(l_1515[0][8], l_1516, p_21.f3), p_21.f6)), 0x0C6CL)))))), p_21.f1)), l_1520))), (*g_761))), g_1521)) != p_21.f6)) & l_1522);
                    for (l_1516.f4 = 1; (l_1516.f4 >= 0); l_1516.f4 -= 1)
                    {
                        int i, j, k;
                        l_1524 |= l_1434[l_1516.f4][l_1516.f4][l_1516.f4];
                    }
                    (*g_194) = &l_1434[3][1][5];
                }
                if (((safe_sub_func_int8_t_s_s(func_57(l_1515[0][8], (*g_650), (safe_rshift_func_int8_t_s_u((((l_1529 = 0x8DL) > func_45((0xE931F0D3L || (((safe_mul_func_uint8_t_u_u(p_21.f7, (func_45(func_57(g_1532, func_40(l_1533, ((safe_mul_func_int8_t_s_s((p_21.f4 < (l_1524 ^ l_1524)), p_22)) & l_1392[2])), p_21.f0), (*g_649), l_1417[6][6], l_1520) ^ 0xE7L))) || p_21.f1) < l_1402[0].f5)), &l_1402[0], p_21.f4, l_1489[1][0])) ^ p_21.f5), p_22))), l_1536)) && p_21.f2))
                {
                    short *l_1537 = (void*)0;
                    short *l_1538 = (void*)0;
                    short *l_1539 = &g_107;
                    int l_1548 = 0xD7F62748L;
                    int l_1551 = (-8L);
                    int l_1552 = 0x9E449F5DL;
                    int l_1553[2][7][9] = {{{0xF531B86BL,0xF531B86BL,0x28B953F5L,(-2L),0x852D45B7L,1L,(-1L),0xF531B86BL,0L},{0L,0L,0L,(-2L),0xF531B86BL,1L,0L,0L,1L},{(-2L),0L,0x28B953F5L,0L,(-2L),5L,2L,(-2L),1L},{0L,0xF531B86BL,1L,2L,(-1L),0x28B953F5L,2L,0L,0L},{0xF531B86BL,0L,5L,(-1L),(-1L),5L,0L,0xF531B86BL,1L},{0L,(-2L),5L,2L,(-2L),1L,(-1L),0L,1L},{0L,0L,1L,0L,0xF531B86BL,1L,0xF531B86BL,0L,1L}},{{0xF531B86BL,0xF531B86BL,0x28B953F5L,(-2L),0x852D45B7L,1L,(-1L),0xF531B86BL,0L},{0L,0L,0L,(-2L),0xF531B86BL,1L,0L,0L,1L},{(-2L),0L,0x28B953F5L,0L,(-2L),5L,2L,(-2L),(-2L)},{0x8BF04593L,0x8833437BL,2L,1L,0x27D609C9L,0x852D45B7L,1L,0x8BF04593L,0L},{0x8833437BL,0x8BF04593L,0xF531B86BL,0x27D609C9L,0x27D609C9L,0xF531B86BL,0x8BF04593L,0x8833437BL,2L},{(-1L),0L,0xF531B86BL,1L,0L,(-2L),0x27D609C9L,(-1L),(-1L)},{(-1L),0x8BF04593L,2L,(-1L),0x8833437BL,(-1L),0x8833437BL,(-1L),2L}}};
                    unsigned char l_1558 = 0xF2L;
                    int i, j, k;
                    if ((((*l_1539) = l_1536) < (g_94.f2 <= (p_21.f5 | l_1536))))
                    {
                        int *l_1540 = (void*)0;
                        int *l_1542 = (void*)0;
                        int *l_1543 = &l_1541[2];
                        int *l_1544 = &l_1433;
                        int *l_1545 = &l_1520;
                        int *l_1546 = (void*)0;
                        int *l_1547[3][10][4] = {{{(void*)0,&g_96[8],&l_1524,&l_1524},{(void*)0,(void*)0,&l_1434[1][0][5],&l_1392[0]},{&l_1392[0],&l_1524,(void*)0,&l_1434[1][1][0]},{&g_96[8],&g_1521,(void*)0,(void*)0},{&l_1520,&g_1521,&l_1520,&l_1434[1][1][0]},{&g_1521,&l_1524,&l_1392[0],&l_1392[0]},{&l_1392[0],(void*)0,&g_96[8],&l_1524},{&g_96[5],&g_96[8],&g_96[8],&g_96[5]},{&l_1392[0],&l_1434[1][1][0],&l_1392[0],&l_1520},{&g_1521,&l_1433,&l_1520,&l_1434[1][0][5]}},{{&l_1520,&l_1434[1][0][5],(void*)0,&l_1434[1][0][5]},{&g_96[8],&l_1433,(void*)0,&l_1520},{&l_1392[0],&l_1434[1][1][0],&l_1434[1][0][5],&g_96[5]},{(void*)0,&g_96[8],&l_1524,&l_1524},{(void*)0,(void*)0,&l_1392[0],&l_1524},{&g_1521,&l_1434[1][1][0],(void*)0,&g_96[8]},{&l_1433,&l_1520,&l_1434[1][0][5],(void*)0},{&l_1392[0],&l_1520,&l_1392[0],&g_96[8]},{&l_1520,&l_1434[1][1][0],(void*)0,&l_1524},{&l_1524,(void*)0,&l_1433,&l_1434[1][1][0]}},{{&l_1392[0],&l_1433,&l_1433,&l_1392[0]},{&l_1524,&g_96[8],(void*)0,&l_1392[0]},{&l_1520,&g_96[5],&l_1392[0],&l_1392[0]},{&l_1392[0],&l_1392[0],&l_1434[1][0][5],&l_1392[0]},{&l_1433,&g_96[5],(void*)0,&l_1392[0]},{&g_1521,&g_96[8],&l_1392[0],&l_1392[0]},{(void*)0,&l_1433,&l_1434[1][1][0],&l_1434[1][1][0]},{(void*)0,(void*)0,&l_1392[0],&l_1524},{&g_1521,&l_1434[1][1][0],(void*)0,&g_96[8]},{&l_1433,&l_1520,&l_1434[1][0][5],(void*)0}}};
                        int i, j, k;
                        --l_1555;
                        --l_1558;
                        (*l_1544) &= p_21.f2;
                    }
                    else
                    {
                        struct S0 *l_1561[6][9] = {{&l_1402[0],&g_94,&l_1402[0],(void*)0,&g_44,&l_1402[0],&g_134,&l_1402[0],(void*)0},{(void*)0,&l_1402[0],&g_134,&g_44,(void*)0,&l_1402[0],(void*)0,&g_44,&g_134},{(void*)0,(void*)0,&g_94,(void*)0,(void*)0,&l_1402[0],&g_134,&g_44,(void*)0},{&l_1402[0],&g_134,&l_1402[0],(void*)0,&l_1402[0],&l_1402[0],(void*)0,&l_1402[0],(void*)0},{&l_1402[0],&l_1402[0],&l_1402[0],(void*)0,&g_134,(void*)0,&g_134,(void*)0,&g_134},{&g_134,(void*)0,(void*)0,(void*)0,&g_44,(void*)0,(void*)0,(void*)0,&g_134}};
                        int i, j;
                        (*g_644) = ((*l_1479) = func_40(l_1561[2][0], p_21.f4));
                    }
                }
                else
                {
                    struct S0 *l_1562 = (void*)0;
                    int l_1565 = 9L;
                    short *l_1566[7] = {(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0};
                    int i;
                    (*g_761) = (func_45(p_21.f0, &p_21, l_1541[1], l_1520) < 0x6AD6D914L);
                    if ((*g_761))
                        break;
                    if ((*g_761))
                        continue;
                }
                for (g_107 = (-10); (g_107 <= 23); g_107 = safe_add_func_int16_t_s_s(g_107, 1))
                {
                    struct S0 *l_1569 = &l_1402[0];
                    (*g_649) = l_1569;
                }
            }
            else
            {
                short l_1575 = 3L;
                int l_1597 = 0xD7B0314EL;
                int l_1603[2];
                unsigned l_1611 = 4294967293UL;
                int i;
                for (i = 0; i < 2; i++)
                    l_1603[i] = 0x4CB8DF10L;
                for (g_44.f1 = 25; (g_44.f1 != 1); --g_44.f1)
                {
                    unsigned short **l_1582 = &g_1206;
                    int l_1604 = 0xE5E469EBL;
                    int l_1606 = 0xB841B440L;
                    int l_1607[5][3][8] = {{{0x30220B72L,1L,(-3L),0x63CA8D9DL,(-3L),1L,0x30220B72L,1L},{0x30220B72L,0x63CA8D9DL,0xC657F0F0L,0x63CA8D9DL,0x30220B72L,0x935E22D8L,0x30220B72L,0x63CA8D9DL},{(-3L),0x63CA8D9DL,(-3L),1L,0x30220B72L,1L,(-3L),0x63CA8D9DL}},{{0x30220B72L,1L,(-3L),0x63CA8D9DL,(-3L),1L,0x30220B72L,1L},{0x30220B72L,0x63CA8D9DL,0xC657F0F0L,0x63CA8D9DL,0x30220B72L,0x935E22D8L,0x30220B72L,0x63CA8D9DL},{(-3L),0x63CA8D9DL,(-3L),1L,0x30220B72L,1L,(-3L),0x63CA8D9DL}},{{0x30220B72L,1L,(-3L),0x63CA8D9DL,(-3L),1L,0x30220B72L,1L},{0x30220B72L,0x63CA8D9DL,0xC657F0F0L,0x63CA8D9DL,0x30220B72L,0x935E22D8L,0x30220B72L,0x63CA8D9DL},{(-3L),0x63CA8D9DL,(-3L),1L,0x30220B72L,1L,(-3L),0x63CA8D9DL}},{{0x30220B72L,1L,(-3L),0x63CA8D9DL,(-3L),1L,0x30220B72L,1L},{0x30220B72L,0x63CA8D9DL,0xC657F0F0L,0x63CA8D9DL,0x30220B72L,0x935E22D8L,0x30220B72L,0x63CA8D9DL},{(-3L),0x63CA8D9DL,(-3L),1L,0x30220B72L,1L,(-3L),0x63CA8D9DL}},{{0x30220B72L,1L,(-3L),0x63CA8D9DL,(-3L),1L,0x30220B72L,1L},{0x30220B72L,0x63CA8D9DL,0xC657F0F0L,0x63CA8D9DL,0x30220B72L,0x935E22D8L,0x30220B72L,0x63CA8D9DL},{(-3L),0x63CA8D9DL,(-3L),1L,0x30220B72L,1L,(-3L),0x63CA8D9DL}}};
                    char l_1609 = 0xEBL;
                    int i, j, k;
                    if (p_21.f4)
                    {
                        (*g_761) = (*g_761);
                    }
                    else
                    {
                        unsigned short **l_1574[10][10][2] = {{{&g_1206,&g_1206},{&g_1206,&g_1206},{&g_1206,&g_1206},{&g_1206,&g_1206},{&g_1206,&g_1206},{&g_1206,&g_1206},{&g_1206,(void*)0},{&g_1206,&g_1206},{&g_1206,&g_1206},{&g_1206,&g_1206}},{{&g_1206,&g_1206},{&g_1206,&g_1206},{&g_1206,&g_1206},{&g_1206,&g_1206},{(void*)0,&g_1206},{&g_1206,&g_1206},{&g_1206,&g_1206},{&g_1206,&g_1206},{&g_1206,&g_1206},{&g_1206,&g_1206}},{{&g_1206,&g_1206},{&g_1206,&g_1206},{&g_1206,&g_1206},{&g_1206,&g_1206},{&g_1206,&g_1206},{&g_1206,(void*)0},{&g_1206,(void*)0},{&g_1206,&g_1206},{&g_1206,&g_1206},{&g_1206,&g_1206}},{{&g_1206,&g_1206},{(void*)0,&g_1206},{&g_1206,&g_1206},{&g_1206,(void*)0},{(void*)0,&g_1206},{(void*)0,&g_1206},{&g_1206,(void*)0},{&g_1206,&g_1206},{&g_1206,(void*)0},{&g_1206,&g_1206}},{{&g_1206,&g_1206},{&g_1206,&g_1206},{&g_1206,(void*)0},{&g_1206,&g_1206},{&g_1206,&g_1206},{&g_1206,&g_1206},{&g_1206,&g_1206},{&g_1206,&g_1206},{&g_1206,(void*)0},{&g_1206,&g_1206}},{{&g_1206,&g_1206},{&g_1206,&g_1206},{&g_1206,(void*)0},{&g_1206,&g_1206},{&g_1206,(void*)0},{&g_1206,&g_1206},{(void*)0,&g_1206},{(void*)0,(void*)0},{&g_1206,&g_1206},{&g_1206,&g_1206}},{{(void*)0,&g_1206},{&g_1206,&g_1206},{&g_1206,&g_1206},{&g_1206,&g_1206},{&g_1206,(void*)0},{&g_1206,(void*)0},{&g_1206,&g_1206},{&g_1206,&g_1206},{&g_1206,&g_1206},{&g_1206,&g_1206}},{{&g_1206,&g_1206},{&g_1206,&g_1206},{&g_1206,&g_1206},{&g_1206,&g_1206},{&g_1206,&g_1206},{&g_1206,&g_1206},{&g_1206,(void*)0},{&g_1206,&g_1206},{(void*)0,&g_1206},{(void*)0,(void*)0}},{{(void*)0,(void*)0},{&g_1206,(void*)0},{&g_1206,&g_1206},{&g_1206,&g_1206},{&g_1206,&g_1206},{&g_1206,&g_1206},{&g_1206,&g_1206},{&g_1206,(void*)0},{&g_1206,(void*)0},{(void*)0,(void*)0}},{{(void*)0,&g_1206},{(void*)0,&g_1206},{&g_1206,(void*)0},{&g_1206,&g_1206},{&g_1206,&g_1206},{&g_1206,&g_1206},{&g_1206,&g_1206},{&g_1206,&g_1206},{&g_1206,&g_1206},{&g_1206,&g_1206}}};
                        int l_1576 = (-7L);
                        unsigned *l_1583[2][8][2] = {{{&g_372[4][2][3],&g_894},{&g_372[4][4][2],&g_894},{&g_372[4][2][3],&g_372[2][5][3]},{&g_372[4][2][3],&g_894},{&g_372[4][4][2],&g_894},{&g_372[4][2][3],&g_372[2][5][3]},{&g_372[4][2][3],&g_894},{&g_372[4][4][2],&g_894}},{{&g_372[4][2][3],&g_372[2][5][3]},{&g_372[4][2][3],&g_894},{&g_372[4][4][2],&g_894},{&g_372[4][2][3],&g_372[2][5][3]},{&g_372[4][2][3],&g_894},{&g_372[4][4][2],&g_894},{&g_372[4][2][3],&g_372[2][5][3]},{&g_372[4][2][3],&g_894}}};
                        short ***l_1585 = &l_1584;
                        short ***l_1588 = (void*)0;
                        short ***l_1589 = &l_1586[1][0][1];
                        int l_1594 = 0xDC782B81L;
                        int i, j, k;
                        l_1575 = (safe_sub_func_uint8_t_u_u((l_1554 || ((*g_761) & (l_1574[3][4][0] == &g_1206))), ((l_1520 = 0x05L) == l_1541[4])));
                        if (l_1576)
                            break;
                        (*g_761) = (*g_761);
                        l_1594 = ((safe_sub_func_int32_t_s_s(((safe_add_func_int16_t_s_s((l_1402[0].f2 & ((g_894 = (l_1581 == l_1582)) || (l_1576 = ((void*)0 == &g_1289)))), p_22)) >= (((((*l_1585) = l_1584) != ((*l_1589) = l_1586[1][0][1])) ^ (safe_sub_func_int8_t_s_s((safe_sub_func_int16_t_s_s((-8L), p_21.f3)), 0x9AL))) <= p_21.f6)), l_1392[1])) > p_21.f7);
                    }
                    (*g_761) |= (-2L);
                    for (g_134.f2 = 5; (g_134.f2 >= 0); g_134.f2 -= 1)
                    {
                        unsigned *l_1598 = &g_372[5][4][0];
                        int *l_1599 = &l_1541[5];
                        (*l_1599) &= (safe_mul_func_uint8_t_u_u((((*g_761) = 0x53DA1EA0L) <= (g_894 = ((*l_1598) = l_1597))), 0UL));
                        if (p_21.f1)
                            break;
                    }
                    for (l_1575 = 0; (l_1575 <= (-26)); l_1575--)
                    {
                        int *l_1602[9] = {&l_1523,&l_1523,&l_1523,&l_1523,&l_1523,&l_1523,&l_1523,&l_1523,&l_1523};
                        short l_1610 = 0x172BL;
                        int i;
                        l_1611++;
                        (*g_194) = (void*)0;
                    }
                }
            }
            for (p_21.f2 = 0; (p_21.f2 != 12); p_21.f2 = safe_add_func_int32_t_s_s(p_21.f2, 9))
            {
                short l_1616 = 0x614EL;
                unsigned char **l_1623[2];
                int *l_1638[6] = {&l_1541[4],&l_1392[2],&l_1541[4],&l_1541[4],&l_1392[2],&l_1541[4]};
                struct S0 *l_1647 = &g_94;
                int i;
                for (i = 0; i < 2; i++)
                    l_1623[i] = &g_155;
                if ((&g_146 == (void*)0))
                {
                    char l_1632 = 0x26L;
                    int l_1635[7] = {0xBE74CE9EL,0xBE74CE9EL,0xBE74CE9EL,0xBE74CE9EL,0xBE74CE9EL,0xBE74CE9EL,0xBE74CE9EL};
                    int i;
                    if (l_1402[0].f3)
                    {
                        unsigned ***l_1619 = &g_1617;
                        l_1616 = 0xE83FDEF0L;
                        (*l_1619) = g_1617;
                    }
                    else
                    {
                        int *l_1622 = &l_1392[2];
                        (*l_1622) |= (*g_761);
                        (**l_1396) = l_1623[0];
                        (*g_761) = l_1555;
                        l_1635[1] ^= (safe_sub_func_uint32_t_u_u(l_1616, ((safe_div_func_uint8_t_u_u(((g_1289 >= 0L) <= (*g_761)), p_21.f6)) > l_1541[4])));
                    }
                }
                else
                {
                    unsigned char l_1643[10];
                    int i;
                    for (i = 0; i < 10; i++)
                        l_1643[i] = 0UL;
                    for (g_44.f6 = (-6); (g_44.f6 > 39); g_44.f6 = safe_add_func_int16_t_s_s(g_44.f6, 9))
                    {
                        int **l_1639 = (void*)0;
                        int **l_1640[3][8][10] = {{{&l_1638[1],&l_1638[3],&g_761,&l_1638[1],&g_761,&l_1638[3],&l_1638[1],&l_1638[1],&l_1638[1],&l_1638[3]},{(void*)0,&l_1638[1],&l_1638[1],&l_1638[1],(void*)0,&l_1638[4],&l_1638[1],&l_1638[4],(void*)0,&l_1638[1]},{&g_761,&l_1638[1],&g_761,&l_1638[3],&l_1638[1],&l_1638[1],&l_1638[1],&l_1638[3],&g_761,&l_1638[1]},{(void*)0,&l_1638[3],&g_761,&l_1638[4],(void*)0,&l_1638[4],&g_761,&l_1638[3],(void*)0,&l_1638[3]},{&l_1638[1],&l_1638[4],&g_761,&l_1638[4],&g_761,&l_1638[4],&l_1638[1],&l_1638[4],&l_1638[1],&l_1638[4]},{(void*)0,&l_1638[4],&l_1638[1],&l_1638[4],(void*)0,&l_1638[1],&l_1638[1],&l_1638[1],(void*)0,&l_1638[4]},{&g_761,&l_1638[4],&g_761,&l_1638[4],&l_1638[1],&l_1638[4],&l_1638[1],&l_1638[4],&g_761,&l_1638[4]},{(void*)0,&l_1638[4],&g_761,&l_1638[3],(void*)0,&l_1638[3],&g_761,&l_1638[4],(void*)0,&l_1638[4]}},{{&l_1638[1],&l_1638[3],&g_761,&l_1638[1],&g_761,&l_1638[3],&l_1638[1],&l_1638[1],&l_1638[1],&l_1638[3]},{(void*)0,&l_1638[1],&l_1638[1],&l_1638[1],(void*)0,&l_1638[4],&l_1638[1],&l_1638[4],(void*)0,&l_1638[1]},{&g_761,&l_1638[1],&g_761,&l_1638[3],&l_1638[1],&l_1638[1],&l_1638[1],&l_1638[3],&g_761,&l_1638[1]},{(void*)0,&l_1638[3],&g_761,&l_1638[4],(void*)0,&l_1638[4],&g_761,&l_1638[3],(void*)0,&l_1638[3]},{&l_1638[1],&l_1638[4],&g_761,&l_1638[4],&g_761,&l_1638[4],&l_1638[1],&l_1638[4],&l_1638[1],&l_1638[4]},{(void*)0,&l_1638[4],&l_1638[1],&l_1638[4],(void*)0,&l_1638[1],&l_1638[1],&l_1638[1],(void*)0,&l_1638[4]},{&g_761,&l_1638[4],&g_761,&l_1638[4],&l_1638[1],&l_1638[4],&l_1638[1],&l_1638[4],&g_761,&l_1638[4]},{(void*)0,&l_1638[4],&g_761,&l_1638[3],(void*)0,&l_1638[3],&g_761,&l_1638[4],(void*)0,&l_1638[4]}},{{&l_1638[1],&l_1638[3],&g_761,&l_1638[1],&g_761,&l_1638[3],&l_1638[1],&l_1638[1],&l_1638[1],&l_1638[3]},{(void*)0,&l_1638[1],&l_1638[1],&l_1638[1],(void*)0,&l_1638[4],&l_1638[1],&l_1638[4],(void*)0,&l_1638[1]},{&g_761,&l_1638[1],&g_761,&l_1638[3],&l_1638[1],&l_1638[1],&l_1638[1],&l_1638[3],&g_761,&l_1638[1]},{(void*)0,&l_1638[3],&g_761,&l_1638[4],(void*)0,&l_1638[4],&g_761,&l_1638[3],(void*)0,&l_1638[3]},{&l_1638[1],&l_1638[4],&g_761,&l_1638[4],&g_761,&l_1638[4],&l_1638[1],&l_1638[4],&l_1638[1],&l_1638[4]},{(void*)0,&l_1638[4],&l_1638[1],&l_1638[4],(void*)0,&l_1638[1],&l_1638[1],&l_1638[1],(void*)0,&l_1638[4]},{&g_761,&l_1638[4],&g_761,&l_1638[4],&l_1638[1],&l_1638[4],&l_1638[1],&l_1638[4],&g_761,&l_1638[4]},{(void*)0,&l_1638[4],&g_761,&l_1638[3],(void*)0,&l_1638[3],&g_761,&l_1638[4],(void*)0,&l_1638[4]}}};
                        int i, j, k;
                        g_761 = ((*g_194) = l_1638[1]);
                    }
                    for (g_69 = 0; (g_69 <= 7); g_69 = safe_add_func_uint16_t_u_u(g_69, 3))
                    {
                        (*g_761) &= l_1643[5];
                        if ((*g_761))
                            continue;
                    }
                }
                --l_1644;
                return l_1647;
            }
        }
        (*g_194) = &g_96[5];
    }
    else
    {
        struct S0 *l_1648 = (void*)0;
        char *l_1649[6] = {(void*)0,(void*)0,&g_44.f7,(void*)0,(void*)0,&g_44.f7};
        int l_1654 = 0xD87E0C0BL;
        int l_1666[8][7][4] = {{{0x205271C5L,0x205271C5L,0x85661EEAL,0x205271C5L},{0x205271C5L,0x8D5390A7L,0x8D5390A7L,0x205271C5L},{0x8D5390A7L,0x205271C5L,0x8D5390A7L,0x8D5390A7L},{0x205271C5L,0x205271C5L,0x85661EEAL,0x205271C5L},{0x205271C5L,0x8D5390A7L,0x8D5390A7L,0x205271C5L},{0x8D5390A7L,0x205271C5L,0x8D5390A7L,0x8D5390A7L},{0x205271C5L,0x205271C5L,0x85661EEAL,0x205271C5L}},{{0x205271C5L,0x8D5390A7L,0x8D5390A7L,0x205271C5L},{0x8D5390A7L,0x205271C5L,0x8D5390A7L,0x8D5390A7L},{0x205271C5L,0x205271C5L,0x85661EEAL,0x205271C5L},{0x205271C5L,0x8D5390A7L,0x8D5390A7L,0x205271C5L},{0x8D5390A7L,0x205271C5L,0x8D5390A7L,0x8D5390A7L},{0x205271C5L,0x205271C5L,0x85661EEAL,0x205271C5L},{0x205271C5L,0x8D5390A7L,0x8D5390A7L,0x205271C5L}},{{0x8D5390A7L,0x205271C5L,0x8D5390A7L,0x8D5390A7L},{0x205271C5L,0x205271C5L,0x85661EEAL,0x205271C5L},{0x205271C5L,0x8D5390A7L,0x8D5390A7L,0x205271C5L},{0x8D5390A7L,0x205271C5L,0x8D5390A7L,0x8D5390A7L},{0x205271C5L,0x205271C5L,0x85661EEAL,0x205271C5L},{0x205271C5L,0x8D5390A7L,0x8D5390A7L,0x205271C5L},{0x8D5390A7L,0x205271C5L,0x8D5390A7L,0x8D5390A7L}},{{0x205271C5L,0x205271C5L,0x85661EEAL,0x205271C5L},{0x205271C5L,0x8D5390A7L,0x8D5390A7L,0x205271C5L},{0x8D5390A7L,0x205271C5L,0x8D5390A7L,0x8D5390A7L},{0x205271C5L,0x205271C5L,0x85661EEAL,0x205271C5L},{0x205271C5L,0x8D5390A7L,0x8D5390A7L,0x205271C5L},{0x8D5390A7L,0x205271C5L,0x8D5390A7L,0x8D5390A7L},{0x205271C5L,0x205271C5L,0x85661EEAL,0x205271C5L}},{{0x205271C5L,0x8D5390A7L,0x8D5390A7L,0x205271C5L},{0x85661EEAL,0x8D5390A7L,0x85661EEAL,0x85661EEAL},{0x8D5390A7L,0x8D5390A7L,0x205271C5L,0x8D5390A7L},{0x8D5390A7L,0x85661EEAL,0x85661EEAL,0x8D5390A7L},{0x85661EEAL,0x8D5390A7L,0x85661EEAL,0x85661EEAL},{0x8D5390A7L,0x8D5390A7L,0x205271C5L,0x8D5390A7L},{0x8D5390A7L,0x85661EEAL,0x85661EEAL,0x8D5390A7L}},{{0x85661EEAL,0x8D5390A7L,0x85661EEAL,0x85661EEAL},{0x8D5390A7L,0x8D5390A7L,0x205271C5L,0x8D5390A7L},{0x8D5390A7L,0x85661EEAL,0x85661EEAL,0x8D5390A7L},{0x85661EEAL,0x8D5390A7L,0x85661EEAL,0x85661EEAL},{0x8D5390A7L,0x8D5390A7L,0x205271C5L,0x8D5390A7L},{0x8D5390A7L,0x85661EEAL,0x85661EEAL,0x8D5390A7L},{0x85661EEAL,0x8D5390A7L,0x85661EEAL,0x85661EEAL}},{{0x8D5390A7L,0x8D5390A7L,0x205271C5L,0x8D5390A7L},{0x8D5390A7L,0x85661EEAL,0x85661EEAL,0x8D5390A7L},{0x85661EEAL,0x8D5390A7L,0x85661EEAL,0x85661EEAL},{0x8D5390A7L,0x8D5390A7L,0x205271C5L,0x8D5390A7L},{0x8D5390A7L,0x85661EEAL,0x85661EEAL,0x8D5390A7L},{0x85661EEAL,0x8D5390A7L,0x85661EEAL,0x85661EEAL},{0x8D5390A7L,0x8D5390A7L,0x205271C5L,0x8D5390A7L}},{{0x8D5390A7L,0x85661EEAL,0x85661EEAL,0x8D5390A7L},{0x85661EEAL,0x8D5390A7L,0x85661EEAL,0x85661EEAL},{0x8D5390A7L,0x8D5390A7L,0x205271C5L,0x8D5390A7L},{0x8D5390A7L,0x85661EEAL,0x85661EEAL,0x8D5390A7L},{0x85661EEAL,0x8D5390A7L,0x85661EEAL,0x85661EEAL},{0x8D5390A7L,0x8D5390A7L,0x205271C5L,0x8D5390A7L},{0x8D5390A7L,0x85661EEAL,0x85661EEAL,0x8D5390A7L}}};
        short l_1668 = (-1L);
        int i, j, k;
        (**g_649) = func_40(l_1648, (((*g_761) = p_21.f7) < ((p_21.f4 <= (g_283[6][7] | l_1402[0].f5)) & (l_1392[2] |= p_21.f1))));
        for (p_21.f4 = 9; (p_21.f4 != (-26)); p_21.f4 = safe_sub_func_int32_t_s_s(p_21.f4, 4))
        {
            (*g_649) = &p_21;
        }
        (*g_761) = p_21.f2;
        for (g_94.f7 = 0; (g_94.f7 < 26); ++g_94.f7)
        {
            short l_1664 = (-6L);
            int l_1665 = 0x2B4F4CA0L;
            int l_1667[4];
            unsigned l_1669 = 0xA8486D49L;
            int ***l_1678 = (void*)0;
            struct S0 *l_1679 = &l_1672;
            int i;
            for (i = 0; i < 4; i++)
                l_1667[i] = 0xC2E6FFB4L;
            if ((l_1654 < (!(g_703 | (*g_761)))))
            {
                int *l_1655 = &l_1523;
                int *l_1656 = &g_703;
                int *l_1657 = &g_1608;
                int *l_1658 = &g_96[5];
                int *l_1659 = &g_703;
                int *l_1660 = &l_1392[2];
                int *l_1661 = &l_1523;
                int *l_1662[6];
                unsigned *l_1673 = &g_894;
                int ***l_1677 = (void*)0;
                int ****l_1676 = &l_1677;
                int i;
                for (i = 0; i < 6; i++)
                    l_1662[i] = &g_1521;
                ++l_1669;
                (*g_194) = &l_1523;
                (*g_644) = l_1672;
                (*l_1659) &= (+func_45((((*l_1673)++) ^ p_21.f6), &p_21, l_1667[0], (((*l_1676) = &g_194) != l_1678)));
            }
            else
            {
                struct S0 *l_1680 = &l_1402[0];
                return l_1648;
            }
        }
    }
    for (p_21.f2 = 29; (p_21.f2 < 10); p_21.f2--)
    {
        short l_1683 = (-8L);
        unsigned ***l_1686 = &g_1684[3];
        (*g_761) = p_21.f0;
        if (l_1683)
            continue;
        (*l_1686) = g_1684[2];
    }
    return l_1687[0];
}







static struct S0 func_23(char p_24, short p_25, unsigned short p_26, unsigned p_27)
{
    unsigned char l_528 = 252UL;
    int *l_560 = (void*)0;
    int l_570 = 0xCB8B792EL;
    unsigned l_573 = 0xEF7822B4L;
    int l_581 = (-10L);
    unsigned short *l_585[5] = {(void*)0,(void*)0,(void*)0,(void*)0,(void*)0};
    struct S0 *l_586 = &g_134;
    int l_728[8] = {0x1E1200B8L,0L,0L,0x1E1200B8L,0L,0L,0x1E1200B8L,0L};
    unsigned char ****l_915 = &g_686;
    char l_1003 = 0x6EL;
    char l_1068[7] = {0xEEL,0xEEL,0xEEL,0xEEL,0xEEL,0xEEL,0xEEL};
    int *l_1088 = &l_728[6];
    char l_1140 = 7L;
    unsigned short l_1141[4][10] = {{0x2503L,6UL,65535UL,0x8940L,65535UL,6UL,0x2503L,0x2503L,6UL,65535UL},{6UL,0x2503L,0x2503L,6UL,65535UL,0x8940L,65535UL,6UL,0x2503L,0x2503L},{65535UL,0x2503L,0x3072L,0xFE73L,0xFE73L,0x3072L,0x2503L,65535UL,0x2503L,0x3072L},{0x8940L,6UL,0xFE73L,6UL,0x8940L,0x3072L,0x3072L,0x8940L,6UL,0xFE73L}};
    char l_1154 = 1L;
    char *l_1161[4] = {&g_94.f5,&g_94.f5,&g_94.f5,&g_94.f5};
    char l_1184 = 0x9AL;
    unsigned l_1194 = 1UL;
    int l_1223[10][6];
    struct S0 l_1275 = {0x3B02L,255UL,0x30BB307FL,0xF9L,0L,0x98L,0x58C7L,0x35L};
    struct S0 l_1300 = {0xF7FFL,0x49L,0xD0194F20L,-7L,0x068D01BCL,0xF4L,65535UL,1L};
    unsigned *l_1301 = &g_372[0][3][5];
    short ****l_1341 = &g_299[0];
    int i, j;
    for (i = 0; i < 10; i++)
    {
        for (j = 0; j < 6; j++)
            l_1223[i][j] = (-7L);
    }
    if (p_27)
    {
        struct S0 l_530 = {0UL,9UL,1L,0x6AL,0x56527CBBL,0xFBL,0x1FF7L,1L};
        for (g_44.f0 = (-23); (g_44.f0 > 22); g_44.f0 = safe_add_func_int32_t_s_s(g_44.f0, 3))
        {
            struct S0 *l_529[4] = {&g_44,&g_44,&g_44,&g_44};
            int i;
            for (g_94.f7 = 0; (g_94.f7 != (-10)); --g_94.f7)
            {
                for (g_89 = (-2); (g_89 <= (-9)); g_89 = safe_sub_func_int16_t_s_s(g_89, 2))
                {
                    int *l_527[2][1];
                    int i, j;
                    for (i = 0; i < 2; i++)
                    {
                        for (j = 0; j < 1; j++)
                            l_527[i][j] = (void*)0;
                    }
                    l_528 = (safe_rshift_func_int8_t_s_u(p_24, 6));
                }
            }
            if (p_24)
                break;
            l_530 = g_94;
        }
        (*g_194) = &g_96[5];
    }
    else
    {
        char l_544 = 0xCDL;
        struct S0 *l_548 = &g_134;
        int ***l_557[5][4][9] = {{{&g_194,&g_194,&g_194,&g_194,&g_194,&g_194,&g_194,&g_194,&g_194},{&g_194,&g_194,&g_194,&g_194,&g_194,&g_194,&g_194,&g_194,&g_194},{&g_194,(void*)0,(void*)0,&g_194,&g_194,&g_194,&g_194,(void*)0,(void*)0},{&g_194,(void*)0,&g_194,&g_194,(void*)0,&g_194,(void*)0,&g_194,&g_194}},{{&g_194,&g_194,(void*)0,&g_194,(void*)0,&g_194,&g_194,(void*)0,(void*)0},{&g_194,(void*)0,&g_194,&g_194,&g_194,&g_194,(void*)0,&g_194,&g_194},{&g_194,(void*)0,(void*)0,&g_194,&g_194,&g_194,&g_194,(void*)0,&g_194},{&g_194,&g_194,&g_194,&g_194,&g_194,&g_194,&g_194,&g_194,&g_194}},{{&g_194,&g_194,(void*)0,&g_194,&g_194,(void*)0,&g_194,(void*)0,(void*)0},{&g_194,&g_194,&g_194,&g_194,&g_194,&g_194,&g_194,&g_194,&g_194},{&g_194,&g_194,&g_194,&g_194,(void*)0,&g_194,&g_194,&g_194,(void*)0},{&g_194,&g_194,&g_194,&g_194,(void*)0,&g_194,&g_194,&g_194,&g_194}},{{&g_194,(void*)0,&g_194,&g_194,&g_194,&g_194,&g_194,&g_194,(void*)0},{&g_194,&g_194,&g_194,&g_194,&g_194,&g_194,&g_194,&g_194,&g_194},{&g_194,&g_194,(void*)0,&g_194,(void*)0,&g_194,&g_194,(void*)0,&g_194},{(void*)0,&g_194,(void*)0,&g_194,&g_194,(void*)0,&g_194,(void*)0,&g_194}},{{&g_194,(void*)0,(void*)0,&g_194,(void*)0,&g_194,&g_194,(void*)0,&g_194},{&g_194,&g_194,&g_194,&g_194,&g_194,&g_194,&g_194,&g_194,&g_194},{&g_194,(void*)0,&g_194,&g_194,(void*)0,(void*)0,&g_194,&g_194,&g_194},{&g_194,&g_194,&g_194,&g_194,&g_194,&g_194,&g_194,&g_194,&g_194}}};
        unsigned short l_574 = 0x7672L;
        short l_575 = 0x51D2L;
        struct S0 *l_577 = &g_94;
        struct S0 **l_576 = &l_577;
        unsigned char l_578 = 5UL;
        int i, j, k;
        for (g_44.f2 = 16; (g_44.f2 > 11); --g_44.f2)
        {
            unsigned l_536 = 0xF6D857EEL;
            int *l_537 = &g_96[5];
            struct S0 l_561 = {0UL,255UL,0L,0x0AL,0xBC04C2CAL,-1L,0UL,-1L};
            for (g_134.f4 = 0; (g_134.f4 < (-19)); --g_134.f4)
            {
                int *l_535 = &g_96[0];
                (*l_535) &= (-1L);
            }
            if (((*l_537) = l_536))
            {
                char *l_540 = &g_94.f3;
                g_541[1][6] ^= ((*l_537) = (p_26 && ((*l_540) |= (safe_div_func_int16_t_s_s((p_26 >= l_528), p_25)))));
            }
            else
            {
                short *l_549 = &g_107;
                int l_550 = 0L;
                if (((0x01F3L != l_528) || (safe_div_func_uint32_t_u_u((func_57(&g_94, g_94, l_544) == (safe_mul_func_uint16_t_u_u((((safe_unary_minus_func_uint16_t_u((((*l_549) ^= func_45(p_27, l_548, p_27, p_27)) != 0x5B78L))) <= g_94.f1) || l_550), p_27))), p_27))))
                {
                    char l_559 = 0x09L;
                    for (g_391 = 2; (g_391 <= 7); g_391 += 1)
                    {
                        unsigned char ***l_553 = &g_271;
                        int l_554 = 0L;
                        unsigned l_558 = 18446744073709551611UL;
                        int i, j;
                        (*l_537) &= (safe_mul_func_uint16_t_u_u((g_283[g_391][(g_391 + 2)] &= g_541[g_391][g_391]), (!((void*)0 != l_553))));
                        l_554 &= g_283[(g_391 + 1)][(g_391 + 1)];
                        (*l_537) = (p_24 | ((l_557[1][2][8] != (void*)0) | (65528UL <= func_57(&g_134, func_40(l_548, p_24), l_558))));
                        (*l_537) ^= l_559;
                    }
                }
                else
                {
                    l_560 = l_560;
                    return l_561;
                }
                return l_561;
            }
        }
        g_96[5] = (((p_26 == g_69) <= func_45(g_94.f0, l_548, (safe_lshift_func_uint16_t_u_u((safe_lshift_func_uint8_t_u_s(((g_44.f1 = p_27) ^ (((safe_add_func_uint16_t_u_u(g_94.f6, func_45(((safe_add_func_int32_t_s_s(((l_570 = p_26) != (g_96[3] = (safe_mul_func_int16_t_s_s((g_44.f6 == g_94.f0), p_27)))), g_372[4][2][3])) <= l_573), &g_94, g_134.f4, p_24))) || p_25) >= 8L)), p_24)), g_94.f0)), p_25)) > 0L);
        g_96[5] = ((l_574 >= func_45(((-1L) <= func_57(l_548, (g_44 = ((*l_548) = g_94)), l_575)), ((*l_576) = l_548), ((-1L) == p_26), l_578)) && g_134.f2);
        for (p_27 = 14; (p_27 <= 51); p_27++)
        {
            unsigned l_582 = 0xB9DB82E0L;
            l_582--;
        }
    }
    return (*l_586);
}







static unsigned short func_37(int p_38, int p_39)
{
    struct S0 *l_43[9] = {&g_44,&g_44,&g_44,&g_44,&g_44,&g_44,&g_44,&g_44,&g_44};
    int l_50 = 1L;
    unsigned *l_479 = &g_372[4][2][3];
    unsigned short *l_483 = (void*)0;
    unsigned short *l_484 = (void*)0;
    unsigned short *l_485 = &g_44.f6;
    int *l_504[10][10][2] = {{{&l_50,&g_96[0]},{&l_50,(void*)0},{(void*)0,&g_96[0]},{(void*)0,(void*)0},{&l_50,&g_96[0]},{&l_50,(void*)0},{(void*)0,&g_96[0]},{(void*)0,(void*)0},{&l_50,&g_96[0]},{&l_50,(void*)0}},{{(void*)0,&g_96[0]},{(void*)0,(void*)0},{&l_50,&g_96[0]},{&l_50,(void*)0},{(void*)0,&g_96[0]},{(void*)0,(void*)0},{&l_50,&g_96[0]},{&l_50,(void*)0},{(void*)0,&g_96[0]},{(void*)0,(void*)0}},{{&l_50,&g_96[0]},{&l_50,(void*)0},{(void*)0,&g_96[0]},{(void*)0,(void*)0},{&l_50,&g_96[0]},{&l_50,(void*)0},{(void*)0,&g_96[0]},{(void*)0,(void*)0},{&l_50,&g_96[0]},{&l_50,(void*)0}},{{(void*)0,&g_96[0]},{(void*)0,(void*)0},{&l_50,&g_96[0]},{&l_50,(void*)0},{(void*)0,&g_96[0]},{(void*)0,(void*)0},{&l_50,&g_96[0]},{&l_50,(void*)0},{(void*)0,&g_96[0]},{(void*)0,(void*)0}},{{&l_50,&g_96[0]},{&l_50,(void*)0},{(void*)0,&g_96[0]},{(void*)0,(void*)0},{&l_50,&g_96[0]},{&l_50,(void*)0},{(void*)0,&g_96[0]},{(void*)0,(void*)0},{&l_50,&g_96[0]},{&l_50,(void*)0}},{{(void*)0,&g_96[0]},{(void*)0,(void*)0},{&l_50,&g_96[0]},{&l_50,(void*)0},{(void*)0,&g_96[0]},{(void*)0,(void*)0},{&l_50,&g_96[0]},{&l_50,(void*)0},{(void*)0,&g_96[0]},{(void*)0,(void*)0}},{{&l_50,&g_96[0]},{&l_50,(void*)0},{(void*)0,&g_96[0]},{(void*)0,(void*)0},{&l_50,&g_96[0]},{&l_50,(void*)0},{(void*)0,&g_96[0]},{(void*)0,(void*)0},{&l_50,&g_96[0]},{&l_50,(void*)0}},{{(void*)0,&g_96[0]},{(void*)0,(void*)0},{&l_50,&g_96[0]},{&l_50,(void*)0},{(void*)0,&g_96[0]},{(void*)0,(void*)0},{&l_50,&g_96[0]},{&l_50,(void*)0},{(void*)0,&g_96[0]},{(void*)0,(void*)0}},{{&l_50,&g_96[0]},{&l_50,(void*)0},{(void*)0,&g_96[0]},{(void*)0,(void*)0},{&l_50,&g_96[0]},{&l_50,(void*)0},{(void*)0,&g_96[0]},{(void*)0,(void*)0},{&l_50,&g_96[0]},{&l_50,(void*)0}},{{(void*)0,&g_96[0]},{(void*)0,(void*)0},{&l_50,&g_96[0]},{&l_50,(void*)0},{(void*)0,&g_96[0]},{(void*)0,(void*)0},{&l_50,&g_96[0]},{&l_50,(void*)0},{(void*)0,&g_96[0]},{(void*)0,(void*)0}}};
    unsigned l_514 = 0UL;
    int i, j, k;
    g_44 = func_40(l_43[8], (p_39 & ((*l_479) = func_45(l_50, &g_44, (safe_sub_func_uint32_t_u_u(l_50, (safe_div_func_uint16_t_u_u((safe_sub_func_int32_t_s_s(0L, (((g_2[0] | 0x14C7L) > (((func_57(&g_44, g_44, p_38) && p_39) || l_50) < l_50)) & 1L))), (-7L))))), p_38))));
    if (p_39)
        goto lbl_488;
lbl_488:
    (*g_146) ^= (safe_sub_func_uint16_t_u_u(g_94.f5, ((*l_485)++)));
    for (g_134.f7 = 0; (g_134.f7 == (-6)); --g_134.f7)
    {
        struct S0 *l_506 = &g_134;
        char *l_511 = &g_44.f7;
        char *l_512 = &g_44.f5;
        (*g_194) = (*g_194);
        for (g_94.f7 = 0; (g_94.f7 > (-16)); g_94.f7 = safe_sub_func_uint32_t_u_u(g_94.f7, 2))
        {
            int *l_497 = &l_50;
            char *l_509 = &g_94.f5;
            (*g_194) = &p_39;
            if ((safe_add_func_int8_t_s_s(((safe_mod_func_int8_t_s_s((l_497 != (void*)0), l_50)) <= (safe_mul_func_uint16_t_u_u(((0x99L > p_38) & (g_44.f4 || ((**g_194) = (safe_div_func_int32_t_s_s((g_391 <= p_39), (safe_add_func_uint16_t_u_u(((*l_485) = (l_479 != (void*)0)), (-10L)))))))), p_38))), l_50)))
            {
                int *l_505 = &g_96[5];
                struct S0 **l_507 = &l_506;
                struct S0 **l_508 = &l_43[5];
                char **l_510[4];
                struct S0 l_513[9] = {{0x7627L,0xDDL,-7L,0x75L,0xD3FE7018L,0xACL,0UL,0x3EL},{0x7627L,0xDDL,-7L,0x75L,0xD3FE7018L,0xACL,0UL,0x3EL},{0x7627L,0xDDL,-7L,0x75L,0xD3FE7018L,0xACL,0UL,0x3EL},{0x7627L,0xDDL,-7L,0x75L,0xD3FE7018L,0xACL,0UL,0x3EL},{0x7627L,0xDDL,-7L,0x75L,0xD3FE7018L,0xACL,0UL,0x3EL},{0x7627L,0xDDL,-7L,0x75L,0xD3FE7018L,0xACL,0UL,0x3EL},{0x7627L,0xDDL,-7L,0x75L,0xD3FE7018L,0xACL,0UL,0x3EL},{0x7627L,0xDDL,-7L,0x75L,0xD3FE7018L,0xACL,0UL,0x3EL},{0x7627L,0xDDL,-7L,0x75L,0xD3FE7018L,0xACL,0UL,0x3EL}};
                int i;
                for (i = 0; i < 4; i++)
                    l_510[i] = &g_103[0];
                (*g_194) = l_504[8][4][1];
                (*g_194) = l_505;
                l_513[5] = func_40(((*l_508) = ((*l_507) = l_506)), ((l_511 = (l_509 = l_509)) == l_512));
            }
            else
            {
                return g_44.f3;
            }
        }
        if (p_38)
            break;
        (*g_194) = &l_50;
    }
    return l_514;
}







static struct S0 func_40(struct S0 * p_41, unsigned short p_42)
{
    struct S0 l_480 = {1UL,0UL,0L,0L,0xDEA7FF38L,0x87L,0x07A3L,0x78L};
    return l_480;
}







static unsigned func_45(unsigned short p_46, struct S0 * p_47, unsigned short p_48, char p_49)
{
    for (g_44.f4 = 0; (g_44.f4 >= 0); g_44.f4 -= 1)
    {
        return g_372[4][2][3];
    }
    return p_46;
}







static short func_57(struct S0 * p_58, struct S0 p_59, short p_60)
{
    int *l_61 = (void*)0;
    int l_62 = 0xCD23E821L;
    int *l_63 = &l_62;
    int *l_64 = &l_62;
    int *l_65 = &l_62;
    int l_66 = 0L;
    int *l_67 = &l_66;
    int *l_68[2][2][4] = {{{(void*)0,(void*)0,(void*)0,(void*)0},{(void*)0,(void*)0,(void*)0,(void*)0}},{{(void*)0,(void*)0,(void*)0,(void*)0},{(void*)0,(void*)0,(void*)0,(void*)0}}};
    char *l_84 = &g_44.f3;
    unsigned short l_90 = 0xD7C7L;
    int l_384[1][1];
    short l_392 = 0xAD12L;
    int l_396 = (-1L);
    int l_397 = 8L;
    int l_413[1];
    unsigned char l_457 = 0UL;
    int l_475 = 0x189AF48AL;
    unsigned *l_476 = (void*)0;
    unsigned *l_477 = &g_372[6][1][4];
    char l_478[1];
    int i, j, k;
    for (i = 0; i < 1; i++)
    {
        for (j = 0; j < 1; j++)
            l_384[i][j] = 0xE45DD3DAL;
    }
    for (i = 0; i < 1; i++)
        l_413[i] = 6L;
    for (i = 0; i < 1; i++)
        l_478[i] = (-8L);
    ++g_69;
    for (p_59.f5 = 0; (p_59.f5 <= 28); p_59.f5 = safe_add_func_uint32_t_u_u(p_59.f5, 5))
    {
        int l_74 = 0xF28F6817L;
        (*l_64) = l_74;
        return g_44.f7;
    }
    return p_59.f3;
}







static unsigned func_77(unsigned p_78, unsigned short p_79)
{
    struct S0 l_98 = {0UL,0x52L,0L,0x99L,0x91FD4078L,0x37L,0x34FCL,-1L};
    int *l_100 = (void*)0;
    int l_114 = (-4L);
    int l_156 = 0xAE63E790L;
    unsigned char l_185 = 255UL;
    unsigned char l_225[3][10] = {{2UL,0x13L,2UL,0x13L,2UL,0x13L,2UL,0x13L,2UL,0x13L},{255UL,0x13L,255UL,0x13L,255UL,0x13L,255UL,0x13L,255UL,0x13L},{2UL,0x13L,2UL,0x13L,2UL,0x13L,2UL,0x13L,2UL,0x13L}};
    int l_324[1];
    int i, j;
    for (i = 0; i < 1; i++)
        l_324[i] = 0x042B0432L;
    for (g_44.f0 = 0; (g_44.f0 >= 6); g_44.f0++)
    {
        int *l_95 = &g_96[5];
        if (p_78)
        {
            struct S0 l_93 = {65535UL,0xECL,0xB4E22DD2L,0x1BL,-3L,0x8CL,0x355BL,0x61L};
            int **l_97[1][9] = {{&l_95,&l_95,&l_95,&l_95,&l_95,&l_95,&l_95,&l_95,&l_95}};
            int i, j;
            g_94 = l_93;
            l_95 = l_95;
            (*l_95) ^= p_78;
            if (g_44.f7)
                continue;
        }
        else
        {
            struct S0 *l_99 = &g_94;
            (*l_99) = l_98;
        }
    }
    g_96[3] |= 0L;
    return g_44.f4;
}





int main (void)
{
    int i, j, k;
    int print_hash_value = 0;
    platform_main_begin();
    crc32_gentab();
    func_1();
    for (i = 0; i < 8; i++)
    {
        transparent_crc(g_2[i], "g_2[i]", print_hash_value);
        if (print_hash_value) printf("index = [%d]\n", i);

    }
    transparent_crc(g_44.f0, "g_44.f0", print_hash_value);
    transparent_crc(g_44.f1, "g_44.f1", print_hash_value);
    transparent_crc(g_44.f2, "g_44.f2", print_hash_value);
    transparent_crc(g_44.f3, "g_44.f3", print_hash_value);
    transparent_crc(g_44.f4, "g_44.f4", print_hash_value);
    transparent_crc(g_44.f5, "g_44.f5", print_hash_value);
    transparent_crc(g_44.f6, "g_44.f6", print_hash_value);
    transparent_crc(g_44.f7, "g_44.f7", print_hash_value);
    transparent_crc(g_69, "g_69", print_hash_value);
    transparent_crc(g_89, "g_89", print_hash_value);
    transparent_crc(g_94.f0, "g_94.f0", print_hash_value);
    transparent_crc(g_94.f1, "g_94.f1", print_hash_value);
    transparent_crc(g_94.f2, "g_94.f2", print_hash_value);
    transparent_crc(g_94.f3, "g_94.f3", print_hash_value);
    transparent_crc(g_94.f4, "g_94.f4", print_hash_value);
    transparent_crc(g_94.f5, "g_94.f5", print_hash_value);
    transparent_crc(g_94.f6, "g_94.f6", print_hash_value);
    transparent_crc(g_94.f7, "g_94.f7", print_hash_value);
    for (i = 0; i < 9; i++)
    {
        transparent_crc(g_96[i], "g_96[i]", print_hash_value);
        if (print_hash_value) printf("index = [%d]\n", i);

    }
    transparent_crc(g_107, "g_107", print_hash_value);
    transparent_crc(g_128, "g_128", print_hash_value);
    transparent_crc(g_134.f0, "g_134.f0", print_hash_value);
    transparent_crc(g_134.f1, "g_134.f1", print_hash_value);
    transparent_crc(g_134.f2, "g_134.f2", print_hash_value);
    transparent_crc(g_134.f3, "g_134.f3", print_hash_value);
    transparent_crc(g_134.f4, "g_134.f4", print_hash_value);
    transparent_crc(g_134.f5, "g_134.f5", print_hash_value);
    transparent_crc(g_134.f6, "g_134.f6", print_hash_value);
    transparent_crc(g_134.f7, "g_134.f7", print_hash_value);
    for (i = 0; i < 9; i++)
    {
        for (j = 0; j < 10; j++)
        {
            transparent_crc(g_283[i][j], "g_283[i][j]", print_hash_value);
            if (print_hash_value) printf("index = [%d][%d]\n", i, j);

        }
    }
    for (i = 0; i < 7; i++)
    {
        for (j = 0; j < 6; j++)
        {
            for (k = 0; k < 6; k++)
            {
                transparent_crc(g_372[i][j][k], "g_372[i][j][k]", print_hash_value);
                if (print_hash_value) printf("index = [%d][%d][%d]\n", i, j, k);

            }
        }
    }
    transparent_crc(g_391, "g_391", print_hash_value);
    for (i = 0; i < 8; i++)
    {
        for (j = 0; j < 9; j++)
        {
            transparent_crc(g_541[i][j], "g_541[i][j]", print_hash_value);
            if (print_hash_value) printf("index = [%d][%d]\n", i, j);

        }
    }
    transparent_crc(g_680, "g_680", print_hash_value);
    transparent_crc(g_703, "g_703", print_hash_value);
    transparent_crc(g_881, "g_881", print_hash_value);
    transparent_crc(g_894, "g_894", print_hash_value);
    transparent_crc(g_976, "g_976", print_hash_value);
    transparent_crc(g_1289, "g_1289", print_hash_value);
    transparent_crc(g_1360, "g_1360", print_hash_value);
    transparent_crc(g_1388, "g_1388", print_hash_value);
    transparent_crc(g_1519, "g_1519", print_hash_value);
    transparent_crc(g_1521, "g_1521", print_hash_value);
    transparent_crc(g_1608, "g_1608", print_hash_value);
    transparent_crc(g_1663, "g_1663", print_hash_value);
    transparent_crc(g_2138, "g_2138", print_hash_value);
    transparent_crc(g_2253, "g_2253", print_hash_value);
    transparent_crc(g_2280, "g_2280", print_hash_value);
    transparent_crc(g_2303, "g_2303", print_hash_value);
    transparent_crc(g_2386, "g_2386", print_hash_value);
    transparent_crc(g_2525, "g_2525", print_hash_value);
    transparent_crc(g_2728, "g_2728", print_hash_value);
    transparent_crc(g_2791, "g_2791", print_hash_value);
    platform_main_end(crc32_context ^ 0xFFFFFFFFUL, print_hash_value);
    return 0;
}
