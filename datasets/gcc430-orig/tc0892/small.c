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



static short g_7 = 0x82EAL;
static int g_11[3] = {0x7516A205L,0x7516A205L,0x7516A205L};
static unsigned short g_68 = 0x0A86L;
static int g_70 = (-2L);
static short g_72[9][8] = {{0x94A2L,(-1L),0x94A2L,7L,7L,0x94A2L,(-1L),0x94A2L},{0x38CFL,7L,1L,7L,0x38CFL,0x38CFL,7L,1L},{0x38CFL,0x38CFL,7L,1L,7L,0x38CFL,0x38CFL,7L},{0x94A2L,7L,7L,0x94A2L,(-1L),0x94A2L,7L,7L},{7L,(-1L),1L,1L,(-1L),7L,(-1L),1L},{0x94A2L,(-1L),0x94A2L,0x38CFL,0x38CFL,7L,1L,7L},{(-1L),0x38CFL,0x94A2L,0x38CFL,(-1L),(-1L),0x38CFL,0x94A2L},{(-1L),(-1L),0x38CFL,0x94A2L,0x38CFL,(-1L),(-1L),0x38CFL},{7L,0x38CFL,0x38CFL,7L,1L,7L,0x38CFL,0x38CFL}};
static int *g_84[8] = {&g_70,&g_70,&g_70,&g_70,&g_70,&g_70,&g_70,&g_70};
static unsigned long long g_89 = 18446744073709551614UL;
static char g_90 = 0xEEL;
static int * volatile g_91 = (void*)0;
static unsigned short g_114 = 65535UL;
static int g_120 = 0xBB92A5F0L;
static int * volatile g_119 = &g_120;
static unsigned short * volatile g_129 = &g_68;
static unsigned short * volatile * volatile g_128[4] = {&g_129,&g_129,&g_129,&g_129};
static unsigned short * volatile * volatile * volatile g_127 = &g_128[3];
static unsigned g_131 = 0x063A1CE4L;
static int *g_141 = &g_120;
static int ** volatile g_140 = &g_141;
static int ** volatile g_143 = &g_141;
static int ** volatile g_148 = &g_141;
static int ** volatile g_150 = &g_141;
static int g_155 = 0xA1EBD87EL;
static int ** volatile g_171[4][4] = {{&g_141,&g_141,&g_141,&g_141},{&g_141,&g_141,&g_141,&g_141},{&g_141,&g_141,&g_141,&g_141},{&g_141,&g_141,&g_141,&g_141}};
static const unsigned short g_180 = 0xAD84L;
static int ** volatile g_181[5][8][6] = {{{&g_141,&g_141,&g_141,&g_141,&g_141,&g_141},{&g_141,&g_141,&g_141,&g_141,(void*)0,&g_141},{&g_141,&g_141,&g_141,&g_141,(void*)0,&g_141},{&g_141,&g_141,&g_141,&g_141,(void*)0,&g_141},{&g_141,&g_141,&g_141,(void*)0,&g_141,&g_141},{(void*)0,&g_141,&g_141,&g_141,&g_141,(void*)0},{&g_141,&g_141,&g_141,&g_141,(void*)0,(void*)0},{&g_141,&g_141,&g_141,&g_141,&g_141,&g_141}},{{(void*)0,&g_141,&g_141,&g_141,&g_141,&g_141},{&g_141,(void*)0,(void*)0,&g_141,&g_141,&g_141},{(void*)0,(void*)0,(void*)0,&g_141,&g_141,&g_141},{&g_141,&g_141,&g_141,&g_141,&g_141,(void*)0},{&g_141,(void*)0,&g_141,&g_141,&g_141,&g_141},{&g_141,(void*)0,&g_141,&g_141,&g_141,&g_141},{(void*)0,&g_141,&g_141,&g_141,&g_141,&g_141},{&g_141,&g_141,&g_141,&g_141,(void*)0,&g_141}},{{&g_141,&g_141,&g_141,&g_141,&g_141,&g_141},{&g_141,&g_141,&g_141,&g_141,&g_141,&g_141},{(void*)0,&g_141,&g_141,&g_141,(void*)0,&g_141},{&g_141,&g_141,&g_141,&g_141,(void*)0,&g_141},{&g_141,&g_141,&g_141,&g_141,&g_141,&g_141},{&g_141,&g_141,&g_141,&g_141,&g_141,&g_141},{&g_141,&g_141,&g_141,&g_141,&g_141,(void*)0},{&g_141,&g_141,&g_141,(void*)0,&g_141,(void*)0}},{{&g_141,&g_141,&g_141,&g_141,(void*)0,&g_141},{(void*)0,&g_141,&g_141,&g_141,(void*)0,&g_141},{&g_141,&g_141,(void*)0,(void*)0,&g_141,&g_141},{&g_141,&g_141,&g_141,&g_141,&g_141,&g_141},{&g_141,&g_141,&g_141,(void*)0,&g_141,&g_141},{&g_141,&g_141,(void*)0,(void*)0,&g_141,&g_141},{&g_141,&g_141,(void*)0,(void*)0,&g_141,&g_141},{&g_141,&g_141,&g_141,&g_141,(void*)0,&g_141}},{{&g_141,(void*)0,&g_141,(void*)0,&g_141,&g_141},{&g_141,&g_141,&g_141,&g_141,&g_141,&g_141},{(void*)0,&g_141,&g_141,&g_141,&g_141,&g_141},{&g_141,&g_141,&g_141,(void*)0,&g_141,&g_141},{&g_141,&g_141,(void*)0,&g_141,(void*)0,&g_141},{(void*)0,&g_141,&g_141,(void*)0,&g_141,&g_141},{(void*)0,&g_141,&g_141,&g_141,&g_141,&g_141},{&g_141,&g_141,&g_141,&g_141,&g_141,&g_141}}};
static unsigned char g_224[7][8][4] = {{{0x78L,0UL,250UL,0x8CL},{255UL,0x8BL,250UL,1UL},{0xF2L,247UL,1UL,0xAEL},{0UL,0x5DL,0xB0L,7UL},{1UL,0xFEL,1UL,5UL},{0UL,0UL,1UL,255UL},{7UL,254UL,7UL,0x8BL},{0x30L,0x9BL,255UL,0xDBL}},{{0UL,253UL,5UL,0x9BL},{246UL,0x67L,5UL,0x31L},{0UL,9UL,255UL,0xCEL},{0x30L,1UL,7UL,253UL},{7UL,253UL,1UL,0x39L},{0UL,0x56L,1UL,248UL},{1UL,0UL,0xB0L,1UL},{0UL,253UL,1UL,8UL}},{{0xF2L,0xB4L,250UL,246UL},{255UL,255UL,250UL,255UL},{0x78L,1UL,9UL,0x1EL},{0x8BL,7UL,0UL,0x30L},{0x74L,0x09L,0UL,1UL},{0xDBL,0UL,0x8CL,5UL},{0x74L,0x23L,247UL,0x78L},{1UL,253UL,255UL,0x56L}},{{1UL,250UL,253UL,8UL},{255UL,0x24L,0x92L,0x74L},{0x1EL,0UL,0x92L,0UL},{250UL,0UL,0x6AL,0UL},{0x30L,255UL,255UL,1UL},{0x9BL,9UL,0xC0L,0UL},{0xCAL,0x65L,255UL,4UL},{0xC6L,250UL,0xF2L,0xF2L}},{{4UL,4UL,0x31L,1UL},{0x23L,0UL,0x67L,0xB4L},{255UL,0xABL,0xF0L,0x67L},{0UL,0xABL,0UL,0xB4L},{0xABL,0UL,9UL,1UL},{1UL,4UL,0xCEL,0xF2L},{1UL,250UL,0UL,4UL},{0x5FL,0x65L,5UL,0UL}},{{0UL,9UL,255UL,1UL},{0xF2L,255UL,0xCAL,0UL},{0xFEL,0UL,0x96L,0UL},{1UL,0UL,0x09L,0x74L},{1UL,0x24L,0xAEL,8UL},{0xFEL,4UL,0x24L,0x39L},{0xCAL,0x6AL,0x92L,0x12L},{4UL,0x09L,0xFDL,255UL}},{{0x38L,255UL,1UL,255UL},{0x60L,0xC0L,0xF2L,0x56L},{0x23L,0xDBL,0x5FL,0UL},{0UL,1UL,7UL,7UL},{0xF2L,250UL,0x31L,0UL},{0xB0L,0x31L,0x12L,0x6AL},{7UL,0x38L,0UL,1UL},{0xC0L,250UL,4UL,255UL}}};
static int ** volatile g_228 = (void*)0;
static int **g_266 = &g_84[2];
static int *** volatile g_265 = &g_266;
static int ** volatile g_270 = (void*)0;
static int ** volatile g_271[10][2] = {{(void*)0,(void*)0},{(void*)0,(void*)0},{(void*)0,(void*)0},{(void*)0,(void*)0},{(void*)0,(void*)0},{(void*)0,(void*)0},{(void*)0,(void*)0},{(void*)0,(void*)0},{(void*)0,(void*)0},{(void*)0,(void*)0}};
static int ** volatile g_286 = &g_141;
static int ** volatile g_302[3][9][1] = {{{(void*)0},{&g_141},{&g_141},{(void*)0},{(void*)0},{&g_141},{&g_141},{(void*)0},{&g_141}},{{&g_141},{(void*)0},{(void*)0},{&g_141},{&g_141},{(void*)0},{&g_141},{&g_141},{(void*)0}},{{(void*)0},{&g_141},{&g_141},{(void*)0},{&g_141},{&g_141},{(void*)0},{(void*)0},{&g_141}}};
static int ** volatile g_305 = &g_141;
static char g_313 = 0xEEL;
static char g_315[8] = {0xA1L,0xA1L,0xA1L,0xA1L,0xA1L,0xA1L,0xA1L,0xA1L};
static int ** volatile g_328 = &g_141;
static int * volatile g_342 = (void*)0;
static int **g_348 = (void*)0;
static unsigned short *g_357 = &g_114;
static unsigned short **g_356 = &g_357;
static int g_413 = (-1L);
static int * volatile g_412[1][5][5] = {{{&g_413,&g_413,&g_413,&g_413,&g_413},{&g_120,&g_120,&g_120,&g_120,&g_120},{&g_413,&g_413,&g_413,&g_413,&g_413},{&g_120,&g_120,&g_120,&g_120,&g_120},{&g_413,&g_413,&g_413,&g_413,&g_413}}};
static int * volatile g_414 = &g_413;
static long long g_429[8][6] = {{(-6L),0L,0x3110DD68ACB0BAA9LL,0xD9733126D1AA99E7LL,0L,0x3110DD68ACB0BAA9LL},{(-6L),(-8L),0L,1L,0L,0L},{(-1L),(-8L),0L,1L,0L,0L},{0xDDED29C47D63294ELL,0L,0L,0xDDED29C47D63294ELL,(-8L),0L},{1L,0x092481F595A229D3LL,0L,0xDDED29C47D63294ELL,0L,0x3110DD68ACB0BAA9LL},{0xDDED29C47D63294ELL,0L,0x3110DD68ACB0BAA9LL,1L,0L,0x092481F595A229D3LL},{(-1L),0x092481F595A229D3LL,(-8L),1L,(-8L),0x092481F595A229D3LL},{(-6L),0L,0x3110DD68ACB0BAA9LL,0xD9733126D1AA99E7LL,0L,0x3110DD68ACB0BAA9LL}};
static unsigned g_434 = 4294967286UL;
static int ** volatile g_436 = &g_141;
static int * volatile g_440 = &g_413;
static int ** volatile g_469 = &g_141;
static int * volatile g_485 = &g_413;
static int ** volatile g_486 = (void*)0;
static int ** volatile g_487 = &g_141;
static short * const ** volatile g_491 = (void*)0;
static short * const g_494 = (void*)0;
static short * const *g_493 = &g_494;
static short * const ** volatile g_492 = &g_493;
static unsigned *g_505 = &g_131;
static unsigned ** volatile g_504 = &g_505;
static unsigned ** volatile * volatile g_506 = &g_504;
static int * volatile g_517 = (void*)0;
static int ** volatile g_534 = &g_141;
static int * volatile g_537 = &g_413;
static int ** volatile g_564 = &g_141;
static unsigned short * volatile * volatile * volatile g_567 = &g_128[3];
static int * volatile g_569 = &g_120;
static short ***g_584 = (void*)0;
static int ** volatile g_606 = (void*)0;
static volatile unsigned g_639[1][4][2] = {{{18446744073709551615UL,2UL},{18446744073709551615UL,2UL},{18446744073709551615UL,2UL},{18446744073709551615UL,2UL}}};
static volatile unsigned *g_638 = &g_639[0][0][0];
static volatile unsigned **g_637 = &g_638;
static volatile unsigned ** volatile *g_636 = &g_637;
static unsigned *g_747[10] = {&g_434,&g_434,&g_434,&g_434,&g_434,&g_434,&g_434,&g_434,&g_434,&g_434};
static unsigned **g_746[8] = {&g_747[7],&g_747[7],&g_747[7],&g_747[7],&g_747[7],&g_747[7],&g_747[7],&g_747[7]};
static unsigned *** volatile g_745 = &g_746[0];
static volatile long long g_785 = 0x3EBC610E70617BF0LL;
static volatile long long * const g_784 = &g_785;
static volatile long long * const *g_783 = &g_784;
static volatile long long * const ** volatile g_782 = &g_783;
static const int g_791 = 4L;
static volatile unsigned short ** volatile **g_802 = (void*)0;
static unsigned short ** const **g_805 = (void*)0;
static int ** volatile g_807 = &g_141;
static int ** volatile g_809 = &g_141;
static int ** volatile g_839[1][7][9] = {{{&g_141,(void*)0,&g_141,(void*)0,&g_141,(void*)0,(void*)0,(void*)0,&g_141},{&g_141,&g_141,&g_141,&g_141,&g_141,&g_141,&g_141,&g_141,&g_141},{&g_141,&g_141,&g_141,(void*)0,(void*)0,(void*)0,&g_141,(void*)0,&g_141},{(void*)0,&g_141,&g_141,&g_141,&g_141,&g_141,&g_141,(void*)0,&g_141},{&g_141,(void*)0,&g_141,&g_141,&g_141,(void*)0,(void*)0,(void*)0,(void*)0},{&g_141,&g_141,&g_141,&g_141,&g_141,&g_141,&g_141,&g_141,&g_141},{(void*)0,&g_141,&g_141,(void*)0,&g_141,&g_141,&g_141,(void*)0,&g_141}}};
static unsigned **g_850 = (void*)0;
static unsigned ***g_849 = &g_850;
static long long ** const *g_873 = (void*)0;
static unsigned g_875 = 5UL;
static int ** volatile g_887 = &g_141;
static long long *g_904 = (void*)0;
static long long **g_903 = &g_904;
static unsigned long long ***g_919 = (void*)0;
static const unsigned long long ***g_921[5] = {(void*)0,(void*)0,(void*)0,(void*)0,(void*)0};
static int ** volatile g_931 = &g_141;
static int ** volatile g_936 = &g_141;
static int ** volatile g_953 = &g_141;
static volatile unsigned char g_969 = 9UL;
static volatile unsigned char * volatile g_968[7][10][3] = {{{(void*)0,&g_969,&g_969},{(void*)0,&g_969,(void*)0},{(void*)0,&g_969,&g_969},{(void*)0,&g_969,&g_969},{(void*)0,&g_969,(void*)0},{(void*)0,&g_969,&g_969},{(void*)0,&g_969,(void*)0},{&g_969,&g_969,&g_969},{&g_969,&g_969,&g_969},{&g_969,(void*)0,(void*)0}},{{&g_969,&g_969,&g_969},{&g_969,&g_969,&g_969},{&g_969,(void*)0,(void*)0},{&g_969,&g_969,&g_969},{&g_969,&g_969,&g_969},{&g_969,(void*)0,(void*)0},{&g_969,&g_969,&g_969},{&g_969,&g_969,&g_969},{&g_969,(void*)0,(void*)0},{&g_969,&g_969,&g_969}},{{&g_969,&g_969,&g_969},{&g_969,(void*)0,(void*)0},{&g_969,&g_969,&g_969},{&g_969,&g_969,&g_969},{&g_969,(void*)0,(void*)0},{&g_969,&g_969,&g_969},{&g_969,&g_969,&g_969},{&g_969,(void*)0,(void*)0},{&g_969,&g_969,&g_969},{&g_969,&g_969,&g_969}},{{&g_969,(void*)0,(void*)0},{&g_969,&g_969,&g_969},{&g_969,&g_969,&g_969},{&g_969,(void*)0,(void*)0},{&g_969,&g_969,&g_969},{&g_969,&g_969,&g_969},{&g_969,(void*)0,(void*)0},{&g_969,&g_969,&g_969},{&g_969,(void*)0,&g_969},{(void*)0,&g_969,&g_969}},{{(void*)0,&g_969,(void*)0},{(void*)0,(void*)0,&g_969},{(void*)0,&g_969,&g_969},{(void*)0,&g_969,(void*)0},{(void*)0,(void*)0,&g_969},{(void*)0,&g_969,&g_969},{(void*)0,&g_969,(void*)0},{(void*)0,(void*)0,&g_969},{(void*)0,&g_969,&g_969},{(void*)0,&g_969,(void*)0}},{{(void*)0,(void*)0,&g_969},{(void*)0,&g_969,&g_969},{(void*)0,&g_969,(void*)0},{(void*)0,(void*)0,&g_969},{(void*)0,&g_969,&g_969},{(void*)0,&g_969,(void*)0},{(void*)0,(void*)0,&g_969},{(void*)0,&g_969,&g_969},{(void*)0,&g_969,(void*)0},{(void*)0,(void*)0,&g_969}},{{(void*)0,&g_969,&g_969},{(void*)0,&g_969,(void*)0},{(void*)0,(void*)0,&g_969},{(void*)0,&g_969,&g_969},{(void*)0,&g_969,(void*)0},{(void*)0,(void*)0,&g_969},{(void*)0,&g_969,&g_969},{(void*)0,&g_969,(void*)0},{(void*)0,(void*)0,&g_969},{(void*)0,&g_969,&g_969}}};
static volatile unsigned char * volatile * volatile g_967 = &g_968[1][2][2];
static int ** volatile g_970 = &g_141;
static int ** volatile g_985 = &g_141;
static int ** volatile g_988[5][9][5] = {{{&g_141,&g_141,&g_141,&g_141,&g_141},{(void*)0,&g_141,&g_141,(void*)0,&g_141},{&g_141,&g_141,(void*)0,&g_141,&g_141},{&g_141,&g_141,&g_141,&g_141,&g_141},{&g_141,&g_141,(void*)0,&g_141,&g_141},{&g_141,&g_141,&g_141,(void*)0,(void*)0},{(void*)0,&g_141,&g_141,&g_141,&g_141},{&g_141,(void*)0,&g_141,&g_141,&g_141},{&g_141,&g_141,&g_141,(void*)0,&g_141}},{{&g_141,&g_141,&g_141,&g_141,&g_141},{(void*)0,&g_141,(void*)0,&g_141,&g_141},{&g_141,(void*)0,&g_141,&g_141,&g_141},{&g_141,&g_141,&g_141,&g_141,&g_141},{&g_141,&g_141,&g_141,&g_141,(void*)0},{&g_141,&g_141,(void*)0,&g_141,&g_141},{(void*)0,(void*)0,&g_141,&g_141,&g_141},{(void*)0,&g_141,&g_141,&g_141,&g_141},{&g_141,&g_141,&g_141,(void*)0,&g_141}},{{(void*)0,&g_141,&g_141,&g_141,&g_141},{&g_141,&g_141,&g_141,&g_141,&g_141},{&g_141,(void*)0,&g_141,&g_141,&g_141},{&g_141,&g_141,&g_141,&g_141,&g_141},{&g_141,(void*)0,&g_141,&g_141,&g_141},{&g_141,&g_141,&g_141,&g_141,&g_141},{&g_141,&g_141,&g_141,&g_141,&g_141},{(void*)0,&g_141,&g_141,(void*)0,(void*)0},{(void*)0,&g_141,&g_141,&g_141,(void*)0}},{{(void*)0,(void*)0,&g_141,&g_141,(void*)0},{&g_141,&g_141,&g_141,&g_141,&g_141},{(void*)0,&g_141,&g_141,&g_141,(void*)0},{(void*)0,&g_141,(void*)0,&g_141,(void*)0},{(void*)0,&g_141,&g_141,&g_141,&g_141},{&g_141,&g_141,&g_141,&g_141,(void*)0},{(void*)0,&g_141,&g_141,(void*)0,&g_141},{(void*)0,&g_141,(void*)0,&g_141,&g_141},{(void*)0,&g_141,&g_141,&g_141,&g_141}},{{&g_141,&g_141,&g_141,&g_141,&g_141},{&g_141,&g_141,&g_141,&g_141,&g_141},{&g_141,&g_141,&g_141,&g_141,&g_141},{(void*)0,&g_141,&g_141,&g_141,(void*)0},{&g_141,&g_141,(void*)0,&g_141,(void*)0},{(void*)0,&g_141,&g_141,(void*)0,&g_141},{(void*)0,&g_141,(void*)0,&g_141,&g_141},{(void*)0,&g_141,&g_141,&g_141,(void*)0},{&g_141,&g_141,&g_141,&g_141,&g_141}}};
static int ** volatile g_1021 = &g_141;
static unsigned long long g_1033 = 18446744073709551615UL;
static const int *g_1051 = &g_791;
static const int ** volatile g_1050 = &g_1051;
static const int g_1073 = (-10L);
static int * volatile g_1076 = &g_413;
static int *g_1136 = &g_11[2];
static int ** volatile g_1135[2] = {&g_1136,&g_1136};
static int *g_1148 = &g_120;
static int ** volatile g_1155 = &g_141;
static int * const *g_1161[8][6][5] = {{{&g_1136,&g_1148,&g_1136,&g_141,&g_1136},{&g_1136,&g_1136,&g_1136,&g_1136,&g_1136},{&g_1136,&g_141,&g_1148,&g_141,&g_141},{&g_1136,&g_1136,&g_1148,(void*)0,&g_1136},{&g_141,&g_1136,&g_1148,&g_141,&g_141},{&g_1148,(void*)0,&g_1148,&g_1136,&g_1136}},{{&g_141,&g_1136,&g_141,&g_1148,&g_1136},{&g_141,&g_1136,&g_141,(void*)0,(void*)0},{&g_141,&g_141,&g_1136,&g_141,&g_1136},{&g_141,(void*)0,&g_141,(void*)0,&g_141},{&g_141,&g_141,(void*)0,&g_1136,&g_141},{&g_1148,&g_1148,(void*)0,(void*)0,&g_1136}},{{&g_141,&g_1136,&g_141,&g_1136,&g_1136},{(void*)0,&g_1136,&g_141,(void*)0,(void*)0},{&g_141,&g_1148,&g_141,&g_141,&g_141},{&g_141,&g_1136,&g_1148,&g_1136,(void*)0},{&g_141,&g_141,(void*)0,&g_1136,&g_1148},{&g_1148,&g_1148,&g_1148,&g_1148,&g_1136}},{{&g_141,&g_141,&g_141,&g_141,&g_1136},{&g_141,&g_1148,&g_141,(void*)0,&g_141},{&g_1136,&g_141,&g_141,&g_141,&g_141},{(void*)0,&g_1136,&g_1148,(void*)0,&g_1148},{&g_1136,&g_141,&g_1148,&g_141,&g_1136},{&g_1148,&g_1136,&g_1148,&g_1148,(void*)0}},{{&g_1148,&g_1136,&g_141,&g_1136,&g_1148},{&g_141,&g_1136,&g_141,&g_1136,(void*)0},{&g_1136,&g_1136,&g_141,&g_141,&g_1136},{(void*)0,(void*)0,(void*)0,(void*)0,&g_1148},{&g_141,&g_1148,&g_141,&g_1136,&g_141},{(void*)0,&g_1136,&g_1148,&g_1136,&g_141}},{{&g_141,&g_1136,&g_1136,&g_1136,&g_1136},{&g_1136,&g_1136,&g_1136,&g_1136,&g_1148},{&g_1148,&g_141,(void*)0,&g_1148,&g_1136},{(void*)0,&g_1148,&g_1136,&g_1136,&g_1136},{&g_1136,&g_141,&g_1148,&g_1148,&g_1148},{&g_141,&g_1136,&g_141,&g_141,&g_141}},{{&g_141,&g_1148,&g_141,&g_1136,&g_1148},{(void*)0,&g_1148,&g_141,&g_1136,&g_1136},{(void*)0,&g_1136,&g_141,&g_1148,&g_141},{(void*)0,(void*)0,&g_141,&g_1148,(void*)0},{&g_1136,&g_141,&g_1148,&g_1136,&g_141},{(void*)0,&g_1136,&g_1136,(void*)0,&g_141}},{{&g_141,(void*)0,(void*)0,&g_1136,&g_141},{&g_1148,&g_1148,&g_1136,&g_1148,&g_1148},{(void*)0,&g_1136,(void*)0,&g_1148,&g_1136},{&g_1136,&g_1136,&g_1148,&g_1136,&g_141},{&g_1136,&g_141,&g_1136,&g_1136,&g_1136},{&g_141,&g_1136,&g_1136,&g_141,&g_1148}}};
static int ** volatile g_1172 = &g_141;
static int ** volatile g_1176 = &g_1148;
static const int ** volatile g_1179 = &g_1051;



static short func_1(void);
static int * func_2(int * p_3, short p_4, unsigned short p_5);
static int ** func_12(long long p_13, unsigned p_14, short p_15);
static char func_24(int p_25, int * p_26, char p_27, unsigned char p_28, int * p_29);
static int * func_30(unsigned p_31, unsigned p_32);
static char func_38(int * p_39, int * p_40, unsigned short p_41, int p_42, int * p_43);
static unsigned short func_45(unsigned char p_46, int * p_47);
static char func_52(int p_53, long long p_54);
static long long func_55(unsigned p_56, unsigned short p_57);
static short func_58(unsigned char p_59, unsigned char p_60, int p_61, unsigned short p_62);
static short func_1(void)
{
    int *l_6 = (void*)0;
    int *l_10 = &g_11[2];
    (*g_140) = func_2(l_6, (g_7 != (0x3126FF23L != ((*l_10) = (0xDDL != (safe_sub_func_int16_t_s_s(0xC516L, g_7)))))), (0xD0A7084BC9C3D069LL != 18446744073709551610UL));


    ;




    ;
    ;
    return (*l_10);
}







static int * func_2(int * p_3, short p_4, unsigned short p_5)
{
    short l_21[5][6] = {{(-3L),1L,0x1C77L,0x2FF1L,0x2FF1L,0x1C77L},{(-3L),(-3L),0x2FF1L,(-9L),(-3L),1L},{0x9C39L,0x2FF1L,0x9C39L,(-9L),0x1C77L,0x1C77L},{1L,0x9C39L,0x9C39L,1L,0x2FF1L,1L},{1L,1L,0x1C77L,1L,1L,(-9L)}};
    int l_35[3];
    int * const *l_1160 = (void*)0;
    short l_1162 = 0xE2EAL;
    const unsigned long long ****l_1171 = &g_921[2];
    short *l_1185 = (void*)0;
    short *l_1186 = &l_1162;
    int i, j;
    for (i = 0; i < 3; i++)
        l_35[i] = 0x4353EA3AL;
    if (g_11[1])
    {
        char l_16 = (-1L);
        int *l_17 = &g_11[2];
        int **l_18 = &l_17;
        int *l_34 = &g_11[1];
        int **l_1149 = &g_1136;
        unsigned *l_1157 = &g_131;
        int * const *l_1159 = (void*)0;
        int * const **l_1158[2];
        int i;
        for (i = 0; i < 2; i++)
            l_1158[i] = &l_1159;
        g_1161[6][5][1] = (l_1160 = func_12(l_16, ((*l_1157) = ((&g_11[0] == ((*l_18) = l_17)) >= ((safe_sub_func_uint32_t_u_u((l_21[0][5] | (g_11[2] < ((safe_add_func_int64_t_s_s((g_11[2] < func_24(l_21[4][5], ((*l_1149) = func_30((l_35[2] = (safe_unary_minus_func_int64_t_s((l_34 != &g_11[2])))), g_11[0])), p_4, g_180, &g_11[1])), p_5)) >= p_5))), (*l_34))) > 65535UL))), l_21[0][5]));


        ;




        ;
        ;
    }
    else
    {
        int l_1163[7] = {0L,(-1L),(-1L),0L,(-1L),(-1L),0L};
        const unsigned short *l_1181 = &g_180;
        const unsigned short * const *l_1180 = &l_1181;
        int i;
        l_1163[4] = (((+l_1162) != func_24(l_1163[0], p_3, g_11[0], p_5, &l_35[1])) & 8UL);

        ;
        for (g_70 = (-8); (g_70 <= 13); g_70 = safe_add_func_uint64_t_u_u(g_70, 9))
        {
            unsigned l_1166 = 6UL;
            int **l_1173[10][2] = {{&g_1136,&g_1136},{&g_1136,&g_1136},{&g_1136,&g_1136},{&g_1148,&g_1148},{&g_1148,&g_1136},{&g_1136,&g_1136},{&g_1136,&g_1136},{&g_1136,&g_1136},{&g_1148,&g_1148},{&g_1148,&g_1136}};
            int i, j;
            (*g_1148) = func_58(l_1166, p_5, (safe_rshift_func_uint8_t_u_s((safe_lshift_func_uint8_t_u_s((l_1171 != l_1171), (~p_4))), 6)), p_5);
            (*g_1172) = p_3;
            (*g_286) = p_3;
        }
        for (g_90 = 0; (g_90 >= 19); g_90 = safe_add_func_int64_t_s_s(g_90, 4))
        {
            const int *l_1178 = (void*)0;
            const unsigned short * const **l_1182 = &l_1180;
            for (g_70 = 0; (g_70 <= 0); g_70 += 1)
            {
                int *l_1177 = &g_11[2];
                for (g_413 = 0; (g_413 >= 0); g_413 -= 1)
                {
                    for (g_313 = 0; (g_313 >= 0); g_313 -= 1)
                    {
                        int i, j, k;
                        (*g_143) = p_3;
                        (*g_1176) = p_3;

                        ;
                        (*g_1136) = g_315[(g_413 + 7)];
                    }

                    ;
                    return (*g_953);


                }
                l_1177 = p_3;

                ;
                (*g_1179) = l_1178;

                ;
                if (p_5)
                    continue;
                for (p_4 = 0; (p_4 <= 0); p_4 += 1)
                {
                    int i, j, k;
                    (*g_1136) = p_4;
                    if (p_4)
                        continue;
                    if (l_1163[0])
                        continue;
                }
            }
            (*l_1182) = l_1180;
        }

        ;
    }


    ;




    ;
    ;
    (*g_1148) = ((~(safe_rshift_func_uint16_t_u_s(l_21[0][5], ((*l_1186) = 0xA4C3L)))) >= (p_4 != p_5));
    return p_3;


}







static int ** func_12(long long p_13, unsigned p_14, short p_15)
{
    return &g_1136;


}







static char func_24(int p_25, int * p_26, char p_27, unsigned char p_28, int * p_29)
{
    int *l_1154 = (void*)0;
    int **l_1156[5][8][6] = {{{&g_1148,&g_1136,&g_1136,&l_1154,&g_141,&g_141},{&g_1148,&g_141,&g_1148,(void*)0,&g_1148,&g_141},{&g_141,&g_141,(void*)0,&g_1136,&g_1148,&l_1154},{&g_141,&g_141,&l_1154,&g_1148,&g_1148,&g_1148},{&g_141,&g_141,&g_141,&g_141,&g_141,&g_1136},{&g_1136,&g_1136,&g_1148,&g_1136,&l_1154,&g_1136},{&g_141,&g_1136,&g_1148,&g_1148,&l_1154,&g_141},{&g_141,&g_1136,(void*)0,&g_1136,&g_141,&g_1136}},{{&g_1148,&g_141,&g_1136,&l_1154,&g_1148,&g_141},{&g_1136,&g_141,&l_1154,&g_1148,&l_1154,&g_1148},{&g_1148,(void*)0,&g_1148,&g_1148,&l_1154,&g_1136},{&g_1148,&g_1136,&g_141,&g_1136,&g_141,&g_1136},{&g_1148,&g_1136,&l_1154,&g_1136,(void*)0,&g_1148},{&g_1148,&g_1148,&g_1136,&g_1148,&g_1136,&g_1148},{&g_1148,&g_1136,&g_141,&g_1148,(void*)0,&l_1154},{&g_1136,&g_1148,&g_141,&l_1154,&l_1154,&g_141}},{{&g_1136,&g_1136,&l_1154,&g_1148,&g_141,&g_1136},{&g_141,(void*)0,&g_1136,&g_1136,&g_1148,&l_1154},{&g_1148,&g_141,&g_1136,&g_1136,&g_1136,&g_1136},{&g_1148,&g_1136,&l_1154,&l_1154,(void*)0,&g_141},{&l_1154,(void*)0,&g_141,&g_1148,&g_1148,&l_1154},{&g_1136,&g_1148,&g_141,&g_1148,&g_141,&g_1148},{&g_141,&g_1148,&g_1136,&l_1154,&g_1148,&g_1148},{&g_1136,&g_141,&l_1154,&g_1148,(void*)0,&g_1136}},{{&g_1136,&l_1154,&g_1136,(void*)0,&g_1148,(void*)0},{&l_1154,&g_1136,&g_1136,&g_1148,&l_1154,&g_1148},{&g_1148,&g_141,&g_1136,(void*)0,&g_1136,&g_1148},{&g_1148,&g_141,&g_1136,&g_1136,&g_141,&g_1148},{&l_1154,&g_1148,&g_1148,&g_1136,&g_1136,&g_141},{&g_1148,&g_1136,&g_1148,(void*)0,&g_1148,(void*)0},{&g_1148,&l_1154,(void*)0,&g_1136,&g_141,&g_1148},{&l_1154,&g_1136,&g_1136,&g_1136,&g_1136,&g_141}},{{&g_1148,&g_1136,&g_1148,(void*)0,&l_1154,&g_1136},{&g_1148,&g_1148,&g_141,&g_1148,&g_1148,&g_1148},{&l_1154,&g_1136,&g_1148,(void*)0,&g_141,&l_1154},{&g_1136,&g_141,&g_1148,&g_1136,&l_1154,&l_1154},{&g_1136,&l_1154,&g_1148,&g_141,&g_1136,&g_1148},{&l_1154,&l_1154,&g_141,&g_1136,&g_141,&g_1136},{&l_1154,&l_1154,&g_1148,&g_1148,&g_141,&g_141},{&l_1154,&g_1136,&g_1136,&l_1154,&l_1154,&g_1136}}};
    int i, j, k;
    for (g_114 = (-4); (g_114 < 41); g_114 = safe_add_func_uint8_t_u_u(g_114, 8))
    {
        int *l_1152[1];
        int **l_1153 = &g_141;
        int i;
        for (i = 0; i < 1; i++)
            l_1152[i] = &g_120;
        (*l_1153) = l_1152[0];

        ;
    }
    (*g_1155) = l_1154;

    ;
    (*g_809) = (void*)0;
    return p_25;
}







static int * func_30(unsigned p_31, unsigned p_32)
{
    unsigned short *l_36 = (void*)0;
    int l_37 = 0x0997736EL;
    int *l_44 = &g_11[2];
    unsigned char l_495 = 255UL;
    int *l_496 = &g_11[2];
    unsigned l_568 = 5UL;
    long long l_597 = (-1L);
    short *l_674[3];
    short **l_673 = &l_674[2];
    unsigned long long *l_693 = &g_89;
    unsigned long long **l_692 = &l_693;
    unsigned long long ***l_691 = &l_692;
    long long ** const *l_706 = (void*)0;
    const int *l_790[8][6] = {{&g_791,&g_791,&g_791,&g_791,&g_791,&g_791},{&g_791,&g_791,&g_791,&g_791,&g_791,&g_791},{&g_791,&g_791,&g_791,&g_791,&g_791,&g_791},{&g_791,&g_791,&g_791,&g_791,&g_791,&g_791},{&g_791,&g_791,&g_791,&g_791,&g_791,&g_791},{&g_791,&g_791,&g_791,&g_791,&g_791,&g_791},{&g_791,&g_791,&g_791,&g_791,&g_791,&g_791},{&g_791,&g_791,&g_791,&g_791,&g_791,&g_791}};
    const unsigned long long *l_925 = (void*)0;
    const unsigned long long **l_924 = &l_925;
    const unsigned long long ***l_923[4];
    int l_1075 = 0x2E040F26L;
    char l_1097 = 0L;
    int *l_1131 = &g_11[2];
    int i, j;
    for (i = 0; i < 3; i++)
        l_674[i] = &g_72[2][0];
    for (i = 0; i < 4; i++)
        l_923[i] = &l_924;
    if (((((l_37 = g_11[1]) <= 0x1177L) == (func_38(l_44, &g_11[2], ((*g_357) = func_45(p_32, &g_11[2])), l_495, l_496) | g_429[3][2])) | l_568))
    {
        int l_589 = 0x16C8F4A8L;
        int l_592 = 0L;
        int l_598 = 1L;
        int *l_608 = &g_120;
        int *l_620[9] = {&g_413,(void*)0,(void*)0,&g_413,(void*)0,(void*)0,&g_413,(void*)0,(void*)0};
        unsigned long long *l_632 = (void*)0;
        unsigned short ***l_648 = (void*)0;
        long long *l_705[6] = {(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0};
        long long ** const l_704[9] = {&l_705[5],(void*)0,(void*)0,&l_705[5],(void*)0,(void*)0,&l_705[5],(void*)0,(void*)0};
        long long ** const *l_703 = &l_704[0];
        unsigned char **l_766 = (void*)0;
        unsigned ***l_774 = &g_746[1];
        unsigned ***l_832 = &g_746[7];
        int i;
        for (g_434 = 0; (g_434 <= 0); g_434 += 1)
        {
            long long l_570 = 0xC93EB5C9A086A66CLL;
            int *l_571 = &g_413;
            for (g_155 = 3; (g_155 >= 0); g_155 -= 1)
            {
                for (g_131 = 0; (g_131 <= 0); g_131 += 1)
                {
                    int i, j, k;
                    g_412[g_434][(g_131 + 4)][(g_434 + 2)] = g_412[g_434][(g_155 + 1)][(g_131 + 4)];
                }
                for (g_68 = 0; (g_68 <= 3); g_68 += 1)
                {
                    int i, j, k;
                    (*g_569) = func_55(((*g_505) = 0x858FF40FL), (0xA5DAL < ((*g_357) = g_224[g_68][(g_434 + 4)][g_68])));
                }
                if (l_570)
                    continue;
            }
            for (g_70 = 0; (g_70 >= 0); g_70 -= 1)
            {
                unsigned *l_581 = &g_434;
                int l_588 = 0x1BE7D6B0L;
                for (g_155 = 0; (g_155 >= 0); g_155 -= 1)
                {
                    int **l_572 = &l_496;
                    int **l_573 = &g_141;
                    int l_574 = (-1L);
                    int i, j, k;
                    g_412[g_155][(g_70 + 3)][(g_155 + 2)] = g_412[g_155][(g_434 + 4)][(g_70 + 4)];
                    (*l_573) = (l_571 = ((*l_572) = l_571));

                    ;
                    ;
                    l_574 = ((*l_496) = p_32);
                    if ((safe_rshift_func_int8_t_s_u(g_413, 5)))
                    {
                        (*l_572) = &l_37;

                        ;
                        (*l_573) = (*l_573);
                        if ((*g_569))
                            continue;
                    }
                    else
                    {
                        char *l_585 = &g_90;
                        (*g_141) = ((func_55((safe_mod_func_uint16_t_u_u(((safe_mod_func_uint32_t_u_u((&g_434 != l_581), 1L)) < ((((*l_585) = (safe_rshift_func_int16_t_s_u(((g_584 = (void*)0) != &g_493), 14))) != ((safe_add_func_int8_t_s_s((*l_496), (0xA29BF895L >= p_32))) > ((l_588 < p_31) <= p_31))) != l_589)), 0xCF37L)), (*g_129)) > p_31) ^ l_588);
                        (*l_496) = 0x435FC29AL;
                    }

                    ;
                }
                for (g_155 = (-23); (g_155 == 9); g_155 = safe_add_func_uint8_t_u_u(g_155, 2))
                {
                    l_592 = p_32;
                }
            }
        }


        ;
        for (g_413 = (-11); (g_413 < (-12)); g_413 = safe_sub_func_int32_t_s_s(g_413, 8))
        {
            int *l_603 = &l_37;
            unsigned long long *l_629 = &g_89;
            int l_633 = 0x6733D8E0L;
            unsigned ***l_643 = (void*)0;
            if ((safe_mod_func_uint32_t_u_u(l_597, g_429[1][5])))
            {
                const int *l_599 = (void*)0;
                const int **l_600 = &l_599;
                int *l_601 = &g_11[2];
                (*l_600) = l_599;
                return l_601;


            }
            else
            {
                int *l_602 = (void*)0;
                int l_617 = (-1L);
                unsigned short *** const l_649 = &g_356;
                int *l_658[1];
                unsigned char l_675 = 0xFEL;
                unsigned long long **l_690 = &l_632;
                unsigned long long ***l_689 = &l_690;
                int **l_694 = &l_602;
                int i;
                for (i = 0; i < 1; i++)
                    l_658[i] = &l_589;
                l_603 = l_602;

                ;
                for (l_598 = 0; (l_598 <= (-16)); l_598 = safe_sub_func_int16_t_s_s(l_598, 4))
                {
                    int **l_607[2][9][7] = {{{&g_141,(void*)0,&g_141,(void*)0,&g_141,&l_496,&l_602},{&l_602,(void*)0,&l_602,&l_44,&l_496,&l_602,&l_44},{(void*)0,(void*)0,&l_496,&g_141,&g_141,&g_141,&g_141},{&l_602,&l_44,&l_496,(void*)0,&l_44,&l_496,(void*)0},{&l_602,&l_602,&l_603,&g_141,(void*)0,&l_496,&l_496},{&l_44,&l_496,&l_496,&l_602,&l_602,&l_496,&l_496},{&l_496,&l_602,&g_141,&l_44,&l_602,(void*)0,&g_141},{(void*)0,&l_602,&l_602,&g_141,(void*)0,&l_603,&g_141},{&g_141,&l_44,&l_44,&l_44,&l_44,&g_141,(void*)0}},{{&l_602,&g_141,&l_44,&l_602,(void*)0,&g_141,&l_44},{&g_141,(void*)0,&l_602,&g_141,&l_602,&l_44,&l_602},{(void*)0,&g_141,&g_141,(void*)0,&l_602,&l_602,&l_603},{(void*)0,&l_44,&l_496,(void*)0,&l_496,&g_141,&l_44},{&g_141,&l_602,&l_603,(void*)0,&l_602,(void*)0,&l_603},{&l_602,&l_602,&l_496,&l_44,&g_141,(void*)0,&l_602},{&g_141,&l_496,&l_602,&g_141,&g_141,&g_141,&l_44},{(void*)0,&l_602,&g_141,&l_602,&g_141,&l_602,(void*)0},{&g_141,(void*)0,&l_602,&l_602,&l_603,&g_141,(void*)0}}};
                    int i, j, k;
                    l_608 = l_603;

                    ;
                    l_617 = (safe_add_func_int8_t_s_s(g_413, (safe_add_func_int64_t_s_s((safe_add_func_int64_t_s_s((p_31 == ((p_31 || (p_31 < (safe_sub_func_int16_t_s_s(p_32, (((void*)0 == (*g_265)) != p_31))))) == 0x03L)), (*l_44))), p_31))));
                    for (g_313 = 23; (g_313 > 5); g_313 = safe_sub_func_uint16_t_u_u(g_313, 7))
                    {
                        (*g_143) = &l_617;

                        ;
                        (*g_328) = l_620[7];

                        ;
                    }
                }
                for (g_120 = 0; (g_120 >= 18); g_120++)
                {
                    int *l_623 = (void*)0;
                    char *l_628 = &g_315[3];
                    unsigned long long *l_630 = (void*)0;
                    unsigned long long **l_631[3];
                    unsigned **l_635 = &g_505;
                    unsigned ***l_634[5];
                    int l_640 = 0x88A430C2L;
                    unsigned long long l_659 = 18446744073709551615UL;
                    int *l_670[6][6][7] = {{{&l_640,&g_413,&l_37,(void*)0,&l_37,&g_11[0],(void*)0},{&l_640,&l_640,&l_633,&l_640,&l_640,&l_633,&l_640},{&l_640,&l_617,(void*)0,&l_640,(void*)0,(void*)0,&l_592},{&g_11[2],&g_120,&l_640,&l_640,&l_37,(void*)0,&g_413},{&l_640,&g_11[0],&g_120,&l_640,&g_413,&l_640,&g_413},{&l_617,&g_413,&g_11[1],&l_640,&g_413,&l_640,&l_640}},{{&g_11[2],(void*)0,&g_120,(void*)0,&l_617,&g_11[2],&g_413},{&g_413,(void*)0,&g_120,&g_11[0],&l_640,&l_617,&l_617},{&g_11[2],&l_640,&l_640,&l_633,&g_413,&l_617,&l_640},{&g_413,&l_37,&g_413,(void*)0,&g_413,&l_37,&g_413},{&l_640,&l_617,&l_592,&g_413,&l_640,&g_413,&g_413},{&l_592,&l_640,&g_120,&l_617,&l_640,&l_640,&l_37}},{{&g_120,&l_37,&l_592,&l_640,&g_413,&g_120,&l_640},{&l_640,(void*)0,(void*)0,&l_37,&g_120,&l_617,&g_11[0]},{(void*)0,&g_11[1],&l_37,&g_11[0],&l_640,&l_633,&g_120},{&l_592,&g_413,&g_413,(void*)0,&l_633,(void*)0,(void*)0},{&l_592,&l_640,&l_617,&l_37,&l_37,&g_413,(void*)0},{&g_11[1],&l_592,&g_413,&g_413,&l_592,&g_11[1],&l_640}},{{(void*)0,&l_633,&g_413,&l_37,&l_640,&l_640,&l_592},{&g_120,&g_11[2],&l_37,&l_592,&g_413,(void*)0,&l_592},{&g_11[1],&l_633,&l_640,&l_37,(void*)0,&l_592,&g_413},{&g_413,&l_592,(void*)0,&g_413,&l_37,&g_11[2],&g_120},{&l_633,&l_640,&g_11[2],&g_413,&g_413,&l_37,&g_413},{&l_640,&g_413,&g_11[1],&l_640,&g_413,(void*)0,&g_413}},{{&l_592,&g_11[1],&l_640,&l_592,&l_633,&l_640,&l_640},{(void*)0,(void*)0,&l_617,(void*)0,(void*)0,(void*)0,&l_37},{&g_11[0],&g_413,&l_633,&g_120,&g_11[1],&g_120,&g_11[2]},{(void*)0,&l_640,&l_640,&g_11[2],&l_617,&l_640,&l_37},{&l_37,&g_120,&l_592,&l_37,&l_640,&l_37,&g_11[1]},{&l_640,&g_413,&l_633,&l_640,&g_11[2],&g_413,&l_617}},{{&l_617,&l_640,(void*)0,&l_592,(void*)0,&l_640,&g_11[2]},{&l_37,&l_617,&g_413,&l_640,&l_633,&l_37,&l_617},{&l_592,&l_640,&l_640,&l_37,&l_592,&g_11[2],&l_592},{&l_37,(void*)0,(void*)0,&l_37,&g_11[0],&g_11[2],&l_640},{&l_640,&l_640,&g_11[2],(void*)0,(void*)0,&l_640,&l_640},{(void*)0,&l_633,&l_37,&l_592,&l_592,&g_120,&l_640}}};
                    short *l_672 = &g_7;
                    short **l_671[5][4] = {{&l_672,&l_672,&l_672,&l_672},{&l_672,&l_672,&l_672,&l_672},{&l_672,&l_672,&l_672,&l_672},{&l_672,&l_672,&l_672,&l_672},{&l_672,&l_672,&l_672,&l_672}};
                    short l_682 = (-1L);
                    int i, j, k;
                    for (i = 0; i < 3; i++)
                        l_631[i] = &l_630;
                    for (i = 0; i < 5; i++)
                        l_634[i] = &l_635;
                    l_640 = ((((*g_266) = l_623) == l_44) & ((safe_add_func_uint64_t_u_u((+p_31), (1L <= (safe_rshift_func_int8_t_s_u(((*l_628) = g_131), ((l_629 != (l_632 = l_630)) ^ ((l_633 = (*g_485)) > ((l_634[2] != g_636) <= p_31)))))))) == 0x22FD68A2L));
                    for (l_597 = 25; (l_597 != (-27)); --l_597)
                    {
                        unsigned ****l_644 = &l_634[2];
                        int l_645 = 0xBC0F0AB0L;
                        unsigned short *l_653 = (void*)0;
                        unsigned short ** const l_652[2] = {&l_653,&l_653};
                        unsigned short ** const *l_651 = &l_652[1];
                        unsigned short ** const **l_650 = &l_651;
                        int l_660 = 0xFEBBCEC7L;
                        int i;
                        l_645 = (((*l_644) = l_643) == &g_637);
                        l_645 = ((0xAAL != (safe_lshift_func_int8_t_s_s((l_648 == &g_356), 0))) ^ (l_649 != ((*l_650) = &g_356)));

                        ;
                        l_660 = (l_633 = (l_645 = (safe_rshift_func_uint16_t_u_u((safe_add_func_uint32_t_u_u((&l_589 != l_658[0]), l_659)), (*g_357)))));
                        l_640 = (((*g_569) >= (safe_mul_func_uint16_t_u_u(((!p_32) & ((safe_lshift_func_int8_t_s_u(((safe_rshift_func_int8_t_s_u((-1L), 0)) | func_58((p_31 && ((***l_651) = (*l_44))), g_89, p_32, (p_32 != (*l_496)))), 2)) > p_31)), l_640))) >= (*l_496));
                    }


                    for (g_90 = 0; (g_90 <= 8); ++g_90)
                    {
                        int **l_669[3][2];
                        int i, j;
                        for (i = 0; i < 3; i++)
                        {
                            for (j = 0; j < 2; j++)
                                l_669[i][j] = (void*)0;
                        }
                        l_602 = &l_640;

                        ;
                        l_670[4][1][6] = (l_602 = &l_37);

                        ;
                        l_675 = (l_671[0][2] == l_673);
                        if ((*l_602))
                            continue;
                    }
                    l_37 = (safe_sub_func_uint32_t_u_u((((+(g_180 | g_90)) && func_55((safe_rshift_func_int8_t_s_s((safe_rshift_func_uint8_t_u_s(func_55((***g_636), ((**g_356) = ((l_682 <= (safe_lshift_func_int8_t_s_s(((safe_add_func_uint16_t_u_u((safe_mod_func_uint64_t_u_u((*l_44), p_32)), ((*l_672) = p_31))) > (*l_496)), (l_689 != l_691)))) <= 249UL))), 3)), 2)), p_31)) && 0x0DL), p_31));
                }

                ;
                (*l_694) = (void*)0;

                ;
            }

            ;
            if (p_31)
                break;
        }


        ;
        if ((((safe_mul_func_uint16_t_u_u(((**g_356) = ((6UL < p_31) >= g_72[3][5])), (safe_add_func_uint8_t_u_u((safe_rshift_func_uint8_t_u_u((safe_mul_func_int16_t_s_s(p_31, p_31)), 1)), func_55(((l_706 = l_703) == (void*)0), (*l_44)))))) == p_31) != p_32))
        {
            unsigned l_715 = 0xD42C570CL;
            unsigned **l_719 = &g_505;
            unsigned ***l_718[3][1][2] = {{{&l_719,&l_719}},{{&l_719,&l_719}},{{&l_719,&l_719}}};
            const unsigned short * const l_720 = (void*)0;
            int *l_729 = &l_37;
            short l_734[6][8][5] = {{{0x4E20L,0x8CE6L,0xD912L,0x584CL,0L},{0x7AD8L,0x3FFAL,1L,0xDBA3L,0xDAECL},{7L,0x1B1BL,0xF3A4L,0x1B1BL,7L},{0x5BB8L,1L,0xE3C2L,1L,0xCE96L},{0xDC74L,0x4E20L,1L,0xC8C8L,0x43A3L},{0x3894L,0xFFBDL,0x8043L,1L,0xCE96L},{0xAE09L,0xC8C8L,0x4E20L,(-8L),7L},{0xCE96L,0xDAECL,0x43A8L,0x8771L,0xDAECL}},{{0x6FA3L,2L,0xDB06L,7L,0L},{8L,0x1646L,1L,1L,0L},{0xE279L,1L,1L,0xE279L,0xD912L},{0xFFBDL,0x8771L,(-1L),0xE2DAL,0x7E0BL},{1L,1L,4L,0x4E20L,0x652DL},{0xCE96L,0xDACFL,1L,0xE2DAL,0xE3C2L},{2L,(-1L),0x7122L,0xE279L,0x6FA3L},{1L,0x7E0BL,0x52AFL,1L,0x3894L}},{{0xDC74L,(-8L),0xBEAFL,7L,0x4E20L},{0xE2DAL,0xCE96L,3L,0x8771L,0x8771L},{0x3F7AL,1L,0x3F7AL,0x30CBL,4L},{8L,0xB12FL,0x5AE3L,0xDAECL,0x07F6L},{4L,(-2L),(-1L),(-8L),(-2L)},{(-1L),5L,0x5AE3L,0x07F6L,0xDACFL},{0x3F7AL,0x8AC3L,0xBF8CL,0xAE09L,0x7122L},{0xE3C2L,0x1709L,0x1646L,0xE3C2L,0x0761L}},{{0x1661L,(-8L),0xDB06L,0x097EL,0xAE09L},{0x1709L,0x8043L,0x5B3FL,0x52AFL,0x5B3FL},{4L,4L,2L,0x43A3L,0x4E20L},{0xFF4AL,0xDAECL,1L,(-1L),0x1709L},{0x584CL,0x8E7BL,0x7122L,0xAE09L,0xBF8CL},{0x43A8L,0xDAECL,0xCE96L,0x5BB8L,0x52AFL},{0x097EL,4L,0L,0x15ECL,(-8L)},{0x5BB8L,0x8043L,0x07F6L,0xDAECL,0x5AE3L}},{{2L,(-8L),0x652DL,1L,0x584CL},{0x5AE3L,0x1709L,0xB12FL,0xB12FL,0x1709L},{(-2L),0x8AC3L,0xF3A4L,0x584CL,0xDB06L},{1L,5L,0xE2DAL,0x0761L,1L},{(-7L),(-2L),0L,(-7L),0xAE09L},{1L,0xB12FL,0x13D5L,0x43A8L,0xFF4AL},{0x6B22L,0x584CL,2L,0xD912L,0xAE09L},{0x5B3FL,1L,0xFF4AL,0xB12FL,0x52AFL}},{{0x3F7AL,0L,1L,0x4E20L,0x8AC3L},{0x43A8L,8L,0x7AD8L,8L,0x43A8L},{0x15ECL,(-2L),0xF3A4L,0x097EL,0xD912L},{0x3FFAL,0x5B3FL,(-1L),0xDAECL,3L},{0x43A3L,0x584CL,0xC8C8L,(-2L),0xD912L},{0x8043L,0xDAECL,0x5B3FL,(-1L),0x43A8L},{0xD912L,0x8AC3L,0x30CBL,1L,0x8AC3L},{5L,0xE3C2L,0x7E0BL,0x43A8L,0x52AFL}}};
            int * const l_742 = &g_120;
            unsigned *l_744 = &g_434;
            unsigned **l_743 = &l_744;
            unsigned ***l_773 = &g_746[3];
            short ***l_779[9][9][2] = {{{(void*)0,&l_673},{&l_673,&l_673},{(void*)0,(void*)0},{&l_673,&l_673},{&l_673,&l_673},{&l_673,&l_673},{&l_673,&l_673},{&l_673,(void*)0},{&l_673,&l_673}},{{&l_673,&l_673},{&l_673,&l_673},{&l_673,(void*)0},{&l_673,&l_673},{&l_673,&l_673},{&l_673,&l_673},{&l_673,&l_673},{&l_673,(void*)0},{(void*)0,&l_673}},{{&l_673,&l_673},{(void*)0,&l_673},{&l_673,&l_673},{&l_673,(void*)0},{&l_673,&l_673},{&l_673,(void*)0},{(void*)0,&l_673},{&l_673,&l_673},{&l_673,(void*)0}},{{&l_673,(void*)0},{&l_673,(void*)0},{&l_673,(void*)0},{&l_673,&l_673},{&l_673,&l_673},{(void*)0,(void*)0},{&l_673,&l_673},{&l_673,&l_673},{&l_673,(void*)0}},{{&l_673,(void*)0},{(void*)0,&l_673},{(void*)0,&l_673},{&l_673,&l_673},{(void*)0,(void*)0},{&l_673,&l_673},{&l_673,&l_673},{&l_673,&l_673},{(void*)0,&l_673}},{{&l_673,(void*)0},{&l_673,(void*)0},{&l_673,(void*)0},{&l_673,&l_673},{(void*)0,&l_673},{&l_673,&l_673},{&l_673,&l_673},{&l_673,(void*)0},{(void*)0,&l_673}},{{&l_673,&l_673},{(void*)0,&l_673},{(void*)0,(void*)0},{&l_673,(void*)0},{&l_673,&l_673},{&l_673,&l_673},{&l_673,(void*)0},{(void*)0,&l_673},{&l_673,&l_673}},{{&l_673,(void*)0},{&l_673,(void*)0},{&l_673,(void*)0},{&l_673,(void*)0},{&l_673,&l_673},{&l_673,&l_673},{(void*)0,(void*)0},{&l_673,&l_673},{&l_673,&l_673}},{{&l_673,&l_673},{&l_673,&l_673},{&l_673,(void*)0},{(void*)0,&l_673},{&l_673,&l_673},{&l_673,&l_673},{(void*)0,(void*)0},{(void*)0,&l_673},{(void*)0,&l_673}}};
            char *l_822 = &g_315[2];
            char *l_823 = &g_313;
            int i, j, k;
            if ((((0x5AL > (safe_add_func_uint16_t_u_u(((g_429[0][2] = 0x8BFF56822AA8D0A6LL) == (g_413 == (~g_131))), (*l_44)))) ^ p_31) != (!(safe_unary_minus_func_int8_t_s(p_31)))))
            {
                unsigned short l_714 = 0xCB69L;
                char *l_725 = (void*)0;
                char *l_726 = &g_90;
                int *l_732 = &g_120;
                int l_741 = 0xE800303EL;
                int *l_793 = &l_37;
                int **l_808 = &l_44;
                l_715 = ((safe_rshift_func_int8_t_s_s((safe_lshift_func_uint8_t_u_s((0L == p_32), 1)), 1)) != l_714);
                if ((((***l_691) = (((*l_726) = (p_31 || (((safe_lshift_func_int16_t_s_s(((l_718[2][0][1] == (void*)0) & ((((((void*)0 == l_720) > p_31) > (safe_mod_func_int16_t_s_s(((g_7 > ((l_715 == (safe_add_func_uint16_t_u_u((((*l_719) = (**g_506)) != (void*)0), p_32))) != (**g_356))) == l_715), p_31))) != l_714) && (***g_567))), p_31)) && 0x6A77D6049ECEA22BLL) >= (**g_356)))) & 0x4EL)) != g_11[2]))
                {
                    int **l_727 = (void*)0;
                    int **l_728 = &l_44;
                    unsigned short *l_733[4][6][8] = {{{(void*)0,(void*)0,&l_714,(void*)0,&g_68,&g_68,&g_68,&l_714},{&l_714,&g_68,&l_714,&g_68,&g_68,(void*)0,&g_68,&g_68},{(void*)0,(void*)0,&l_714,&g_68,&l_714,&g_68,&l_714,&l_714},{&l_714,&l_714,(void*)0,(void*)0,&g_68,(void*)0,(void*)0,&l_714},{&l_714,&g_68,(void*)0,&g_68,&l_714,&g_68,&g_68,&g_68},{&g_68,&g_68,&l_714,&l_714,&l_714,&l_714,&g_68,&l_714}},{{&g_68,&l_714,(void*)0,&g_68,&l_714,&l_714,(void*)0,&l_714},{&l_714,&l_714,(void*)0,&l_714,&l_714,&l_714,&l_714,&l_714},{&g_68,&l_714,&l_714,&l_714,&g_68,&l_714,&g_68,&g_68},{&g_68,&l_714,&l_714,&l_714,&g_68,(void*)0,(void*)0,&g_68},{&g_68,&l_714,&l_714,&l_714,&l_714,&l_714,&l_714,&l_714},{(void*)0,(void*)0,(void*)0,&g_68,&l_714,&l_714,&l_714,&l_714}},{{&g_68,(void*)0,&g_68,&l_714,&l_714,&l_714,&g_68,&l_714},{(void*)0,&g_68,&l_714,&g_68,(void*)0,&l_714,&g_68,&l_714},{&g_68,(void*)0,(void*)0,&l_714,(void*)0,&g_68,&g_68,&g_68},{&l_714,&g_68,&l_714,&l_714,&g_68,&l_714,&g_68,&g_68},{(void*)0,&g_68,&l_714,&l_714,&g_68,(void*)0,&l_714,&l_714},{(void*)0,&l_714,&g_68,&g_68,&l_714,&l_714,&l_714,&g_68}},{{&g_68,&g_68,&g_68,&l_714,(void*)0,&l_714,&g_68,(void*)0},{&g_68,&g_68,&l_714,&l_714,(void*)0,&l_714,(void*)0,(void*)0},{&g_68,(void*)0,&g_68,&g_68,(void*)0,&l_714,&g_68,(void*)0},{&l_714,(void*)0,&l_714,(void*)0,&l_714,(void*)0,&l_714,&g_68},{(void*)0,&g_68,(void*)0,&l_714,&l_714,(void*)0,(void*)0,&g_68},{&l_714,&l_714,&g_68,&g_68,&g_68,(void*)0,(void*)0,&l_714}}};
                    int *l_739 = &l_598;
                    int *l_740[6][8] = {{&g_70,(void*)0,&g_70,&g_70,(void*)0,&g_70,&g_70,(void*)0},{(void*)0,&g_70,&g_70,(void*)0,&g_70,&g_70,(void*)0,&g_70},{(void*)0,(void*)0,&g_155,(void*)0,(void*)0,&g_155,(void*)0,(void*)0},{&g_70,(void*)0,&g_70,&g_70,(void*)0,&g_70,&g_70,(void*)0},{(void*)0,&g_70,&g_70,(void*)0,&g_70,&g_70,(void*)0,&g_70},{(void*)0,(void*)0,&g_155,(void*)0,(void*)0,&g_155,(void*)0,(void*)0}};
                    int i, j, k;
                    l_729 = ((*l_728) = &l_592);

                    ;
                    ;
                    (*l_729) = (*l_729);
                    if (((((g_180 ^ 1UL) < (-1L)) | 0x7810L) > g_11[2]))
                    {
                        (*l_44) = p_31;
                        l_620[0] = l_742;


                        (*l_729) = (*l_496);
                        (*g_745) = l_743;


                    }
                    else
                    {
                        unsigned long long l_748 = 0UL;
                        int *l_751 = &g_11[2];
                        (*l_732) = l_748;
                        (*l_728) = (*l_728);
                        (*l_728) = (*l_728);
                        (*l_729) = (safe_lshift_func_uint8_t_u_u(((void*)0 != &l_741), (((*l_732) = (p_32 > (*l_742))) || 0x030BF29092C9B994LL)));
                    }



                    for (l_589 = 9; (l_589 < (-15)); --l_589)
                    {
                        unsigned char ***l_767 = &l_766;
                        (*l_728) = (*l_728);
                        (*l_732) = (((**l_673) = p_32) <= (+((((*l_729) & (safe_sub_func_int8_t_s_s(p_32, (safe_lshift_func_int16_t_s_s(p_31, 14))))) != ((g_7 > g_68) == (*g_357))) <= ((&g_89 != ((*l_692) = &g_89)) && p_32))));
                        (*l_767) = l_766;
                        (*l_742) = (!0L);
                    }
                }
                else
                {
                    unsigned short l_768 = 0x0ACAL;
                    const int *l_792 = &l_37;
                    unsigned short ** const *l_804 = &g_356;
                    unsigned short ** const **l_803 = &l_804;
                    (*l_742) = (((*l_496) > (l_768 > g_224[2][1][0])) > (-6L));
                    for (l_495 = 0; (l_495 <= 3); l_495 += 1)
                    {
                        long long ***l_786 = (void*)0;
                        const int **l_789 = (void*)0;
                        int i;
                        (*g_440) = ((*l_729) = (safe_sub_func_uint64_t_u_u((((*l_732) = ((safe_rshift_func_uint16_t_u_u((p_31 && (l_773 != l_774)), 8)) != ((safe_lshift_func_uint8_t_u_s((safe_lshift_func_uint8_t_u_s((func_55(((((((void*)0 == l_779[5][8][0]) && (safe_rshift_func_int8_t_s_s(((g_782 == l_786) != ((safe_mul_func_uint8_t_u_u(((*l_732) = p_31), func_58(l_768, g_429[1][4], (*l_496), (*l_496)))) != (*l_729))), 4))) | (*g_357)) >= p_31) ^ 0L), (*g_357)) > p_31), g_429[5][2])), 7)) < p_31))) & (**g_356)), 0x8A0C523E49F8A418LL)));
                        l_792 = (l_790[6][1] = l_744);

                        ;
                        l_793 = &l_37;
                    }


                    ;
                    for (g_313 = 0; (g_313 >= 23); g_313++)
                    {
                        int *l_796 = (void*)0;
                        l_793 = l_796;

                        ;
                    }

                    ;
                    for (l_495 = 0; (l_495 <= 19); l_495 = safe_add_func_uint64_t_u_u(l_495, 7))
                    {
                        long long l_801 = 0x49C6B2016FA53380LL;
                        int *l_806 = &g_11[2];
                        (*l_742) = ((*l_729) = (safe_mod_func_int64_t_s_s((p_31 >= g_224[2][1][0]), ((((p_31 < ((***g_567) > 65530UL)) == l_801) >= (g_802 != (g_805 = l_803))) && p_32))));

                        ;
                        (*g_807) = l_806;

                        ;
                        (*l_729) = (*g_569);
                    }

                    ;
                }

                ;

                ;


                ;

                (*l_808) = l_742;

                ;
            }
            else
            {
                int *l_810[9][8][3] = {{{&l_592,&l_37,&l_592},{&g_11[2],&g_11[0],&g_11[1]},{&g_11[2],&g_11[2],&g_11[0]},{&l_592,&g_11[0],&g_11[0]},{&g_11[0],&l_37,&g_11[1]},{&l_592,&l_37,&l_592},{&g_11[2],&g_11[0],&g_11[1]},{&g_11[2],&g_11[2],&g_11[0]}},{{&g_11[0],&g_11[2],&g_11[2]},{&g_11[2],&g_11[1],&l_592},{&g_11[0],&g_11[1],&g_11[0]},{&l_37,&g_11[2],&l_592},{&l_37,&l_37,&g_11[2]},{&g_11[0],&g_11[2],&g_11[2]},{&g_11[2],&g_11[1],&l_592},{&g_11[0],&g_11[1],&g_11[0]}},{{&l_37,&g_11[2],&l_592},{&l_37,&l_37,&g_11[2]},{&g_11[0],&g_11[2],&g_11[2]},{&g_11[2],&g_11[1],&l_592},{&g_11[0],&g_11[1],&g_11[0]},{&l_37,&g_11[2],&l_592},{&l_37,&l_37,&g_11[2]},{&g_11[0],&g_11[2],&g_11[2]}},{{&g_11[2],&g_11[1],&l_592},{&g_11[0],&g_11[1],&g_11[0]},{&l_37,&g_11[2],&l_592},{&l_37,&l_37,&g_11[2]},{&g_11[0],&g_11[2],&g_11[2]},{&g_11[2],&g_11[1],&l_592},{&g_11[0],&g_11[1],&g_11[0]},{&l_37,&g_11[2],&l_592}},{{&l_37,&l_37,&g_11[2]},{&g_11[0],&g_11[2],&g_11[2]},{&g_11[2],&g_11[1],&l_592},{&g_11[0],&g_11[1],&g_11[0]},{&l_37,&g_11[2],&l_592},{&l_37,&l_37,&g_11[2]},{&g_11[0],&g_11[2],&g_11[2]},{&g_11[2],&g_11[1],&l_37}},{{&g_11[1],&g_11[2],&g_11[1]},{&g_11[0],&l_592,&l_37},{&g_11[0],&g_11[0],&l_592},{&g_11[1],&l_592,&l_592},{&l_592,&g_11[2],&l_37},{&g_11[1],&g_11[2],&g_11[1]},{&g_11[0],&l_592,&l_37},{&g_11[0],&g_11[0],&l_592}},{{&g_11[1],&l_592,&l_592},{&l_592,&g_11[2],&l_37},{&g_11[1],&g_11[2],&g_11[1]},{&g_11[0],&l_592,&l_37},{&g_11[0],&g_11[0],&l_592},{&g_11[1],&l_592,&l_592},{&l_592,&g_11[2],&l_37},{&g_11[1],&g_11[2],&g_11[1]}},{{&g_11[0],&l_592,&l_37},{&g_11[0],&g_11[0],&l_592},{&g_11[1],&l_592,&l_592},{&l_592,&g_11[2],&l_37},{&g_11[1],&g_11[2],&g_11[1]},{&g_11[0],&l_592,&l_37},{&g_11[0],&g_11[0],&l_592},{&g_11[1],&l_592,&l_592}},{{&l_592,&g_11[2],&l_37},{&g_11[1],&g_11[2],&g_11[1]},{&g_11[0],&l_592,&l_37},{&g_11[0],&g_11[0],&l_592},{&g_11[1],&l_592,&l_592},{&l_592,&g_11[2],&l_37},{&g_11[1],&g_11[2],&g_11[1]},{&g_11[0],&g_11[0],&g_11[1]}}};
                int i, j, k;
                (*g_809) = l_742;

                ;
                return l_744;


            }

            ;

            ;



            for (g_70 = 0; (g_70 < (-2)); g_70--)
            {
                int **l_813 = &l_608;
                (*l_729) = p_32;
                (*l_813) = (l_44 = l_744);

                ;
                ;
                (*l_813) = (*l_813);
            }

            ;
            ;
            if (((*l_742) = ((((safe_rshift_func_uint16_t_u_s((safe_lshift_func_int8_t_s_u(func_55((func_55((**g_637), (*g_357)) & (safe_mod_func_uint8_t_u_u(p_31, (-2L)))), (*l_729)), ((*l_742) >= (safe_lshift_func_int8_t_s_s(((*l_823) = ((*l_822) = 0L)), 4))))), p_32)) != p_31) != g_70) ^ p_32)))
            {
                unsigned l_824[3][7] = {{0x8C8923C6L,18446744073709551606UL,0x8C8923C6L,0x8C8923C6L,18446744073709551606UL,0x8C8923C6L,0x8C8923C6L},{1UL,1UL,18446744073709551610UL,1UL,1UL,18446744073709551610UL,1UL},{18446744073709551606UL,0x8C8923C6L,0x8C8923C6L,18446744073709551606UL,0x8C8923C6L,0x8C8923C6L,18446744073709551606UL}};
                int i, j;
                l_824[2][5] = 0x5B7F91AEL;
            }
            else
            {
                long long l_827 = 0xCE8934E79A54B87BLL;
                int *l_831 = &g_413;
                for (l_715 = 0; (l_715 < 57); ++l_715)
                {
                    int *l_830 = &g_413;
                    (*l_742) = (*l_742);
                    if (p_32)
                    {
                        return l_830;



                    }
                    else
                    {
                        return l_831;



                    }
                }
            }
        }
        else
        {
            int *l_837 = &g_11[2];
            int **l_838 = &l_44;
            int *l_840 = &l_37;
            int l_871 = (-10L);
            if ((l_774 != (l_832 = &g_746[0])))
            {
                unsigned long long l_833 = 1UL;
                l_37 = l_833;
            }
            else
            {
                int *l_836[4];
                int i;
                for (i = 0; i < 4; i++)
                    l_836[i] = &g_413;
                for (l_589 = 0; (l_589 != (-13)); l_589 = safe_sub_func_uint64_t_u_u(l_589, 3))
                {
                    return l_836[3];


                }
            }
            l_840 = ((*l_838) = l_837);

            ;
            if (p_32)
            {
                int *l_857 = &g_11[2];
                int l_858 = 0x7BDB88B6L;
                const int *l_860 = &g_413;
                if ((&g_265 != (void*)0))
                {
                    int l_841[9] = {0x68F9A026L,0x68F9A026L,0x68F9A026L,0x68F9A026L,0x68F9A026L,0x68F9A026L,0x68F9A026L,0x68F9A026L,0x68F9A026L};
                    const unsigned *l_854 = &g_131;
                    const unsigned **l_853[4];
                    const unsigned ***l_852[7][1][1] = {{{(void*)0}},{{&l_853[1]}},{{&l_853[1]}},{{(void*)0}},{{&l_853[1]}},{{&l_853[1]}},{{(void*)0}}};
                    int i, j, k;
                    for (i = 0; i < 4; i++)
                        l_853[i] = &l_854;
                    (*g_807) = (*l_838);

                    ;
                    if (l_841[1])
                    {
                        int *l_842 = (void*)0;
                        unsigned ****l_851 = &g_849;
                        l_858 = p_31;
                    }
                    else
                    {
                        const int **l_859 = &l_790[6][1];
                        int *l_867 = &l_841[4];
                        unsigned char *l_868 = (void*)0;
                        unsigned char *l_869 = (void*)0;
                        int **l_870 = &l_837;
                        l_860 = ((*l_859) = (void*)0);


                        ;
                        (*l_838) = (void*)0;

                        ;
                        l_871 = ((*l_867) = (p_32 != ((safe_add_func_uint64_t_u_u((safe_add_func_uint16_t_u_u(((**g_356) = (safe_rshift_func_uint16_t_u_s(1UL, p_31))), (*l_857))), (*l_857))) <= l_841[1])));
                        (*l_867) = (*g_119);
                    }

                    ;

                    ;
                }
                else
                {
                    int *l_872 = (void*)0;
                    int *l_877 = (void*)0;
                    if ((*l_860))
                    {
                        long long ** const **l_874 = &l_706;
                        (*l_838) = l_872;

                        ;
                        (*l_838) = l_872;
                        l_871 = (&l_704[0] != ((*l_874) = g_873));

                        ;
                        return l_872;


                    }
                    else
                    {
                        long long l_876[1];
                        int i;
                        for (i = 0; i < 1; i++)
                            l_876[i] = 0xFCCD1BA6204F9980LL;
                        l_876[0] = ((g_875 = ((*l_693) = (*l_857))) || 9UL);
                        return l_877;


                    }
                }

                ;
                ;

                ;
                (*l_838) = &l_592;

                ;
            }
            else
            {
                int *l_878 = (void*)0;
                return l_878;


            }

            ;
            ;

            for (l_592 = 16; (l_592 < (-2)); l_592--)
            {
                int *l_881 = (void*)0;
                int l_884[9][4] = {{0xB072923BL,0xCB3D4680L,0xCB3D4680L,0xB072923BL},{0xCB3D4680L,0xB072923BL,0x84382ACDL,0x9F102B19L},{0xCB3D4680L,0x84382ACDL,0xCB3D4680L,0x1222B4C9L},{0xB072923BL,0x9F102B19L,0x1222B4C9L,0x1222B4C9L},{0x84382ACDL,0x84382ACDL,7L,0x9F102B19L},{0x9F102B19L,0xB072923BL,7L,0xB072923BL},{0x84382ACDL,0xCB3D4680L,0x1222B4C9L,7L},{0xB072923BL,0xCB3D4680L,0xCB3D4680L,0xB072923BL},{0xCB3D4680L,0xB072923BL,0x84382ACDL,0x9F102B19L}};
                int i, j;
                l_37 = 1L;
                (*l_838) = l_881;

                ;
                l_884[1][1] = (safe_sub_func_uint32_t_u_u(0x9AA28F3CL, 0x6EC97A6BL));
            }

            ;
        }

        ;
        ;

        ;



        for (g_434 = 0; (g_434 == 33); g_434++)
        {
            int *l_892 = &g_413;
            (*g_887) = &l_592;

            ;
            if ((0x0A4AL || ((**g_356) = 0x18C5L)))
            {
                int *l_893[2][7][1];
                int **l_902 = &l_620[7];
                int i, j, k;
                for (i = 0; i < 2; i++)
                {
                    for (j = 0; j < 7; j++)
                    {
                        for (k = 0; k < 1; k++)
                            l_893[i][j][k] = (void*)0;
                    }
                }
                for (l_597 = (-3); (l_597 == (-2)); ++l_597)
                {
                    int l_898 = (-1L);
                    int *l_899[7];
                    char *l_900 = &g_313;
                    int i;
                    for (i = 0; i < 7; i++)
                        l_899[i] = &g_70;
                    for (g_120 = 7; (g_120 < (-6)); g_120 = safe_sub_func_int16_t_s_s(g_120, 9))
                    {
                        if ((*g_119))
                            break;
                        return l_892;



                    }
                    l_893[1][6][0] = (*g_887);
                    (*g_141) = (0x38L || ((0L ^ (p_32 < (g_120 & p_32))) || (safe_mul_func_int8_t_s_s(((*l_900) = func_58(g_224[3][7][3], g_114, ((*l_892) = (p_32 < (safe_sub_func_int16_t_s_s(l_898, p_31)))), (***g_127))), p_32))));
                }


                for (g_7 = 3; (g_7 >= 0); g_7 -= 1)
                {
                    int **l_901[1][6];
                    int i, j;
                    for (i = 0; i < 1; i++)
                    {
                        for (j = 0; j < 6; j++)
                            l_901[i][j] = &l_620[7];
                    }
                    (*l_892) = p_31;
                    (*g_148) = &l_37;

                    ;
                    if ((**g_534))
                        continue;
                    return l_892;



                }

                ;
                (*l_902) = &l_592;
                if (p_31)
                    break;
            }
            else
            {
                long long ***l_905 = &g_903;
                int *l_906[1];
                int i;
                for (i = 0; i < 1; i++)
                    l_906[i] = &g_413;
                (*g_141) = (((*l_703) == ((*l_905) = g_903)) | 0UL);
                l_906[0] = (l_608 = &l_592);

                ;

            }

            ;
        }


        ;

    }
    else
    {
        int *l_914 = &l_37;
        unsigned short l_926[9][7] = {{1UL,65535UL,1UL,0xF409L,0x29F5L,0x29F5L,0xF409L},{65535UL,65535UL,65535UL,7UL,0xFEC4L,0xFEC4L,7UL},{1UL,65535UL,1UL,0xF409L,0x29F5L,0x29F5L,0xF409L},{1UL,0xFEC4L,1UL,0x9A53L,7UL,7UL,0x9A53L},{1UL,0x29F5L,1UL,0x55ECL,0xF409L,0xF409L,0x55ECL},{1UL,0xFEC4L,1UL,0x9A53L,7UL,7UL,0x9A53L},{1UL,0x29F5L,1UL,0x55ECL,0xF409L,0xF409L,0x55ECL},{1UL,0xFEC4L,1UL,0x9A53L,7UL,7UL,0x9A53L},{1UL,0x29F5L,1UL,0x55ECL,0xF409L,0xF409L,0x55ECL}};
        int l_928 = (-8L);
        unsigned **l_944[4] = {&g_505,&g_505,&g_505,&g_505};
        short l_947 = 0xE100L;
        long long ***l_1029 = &g_903;
        int **l_1044 = &g_84[0];
        unsigned long long l_1057[1][6];
        int l_1077 = 5L;
        int *l_1129[4] = {&g_11[1],&g_11[1],&g_11[1],&g_11[1]};
        unsigned short *l_1144[7][4] = {{&l_926[0][3],&l_926[0][3],&l_926[0][3],&l_926[0][3]},{&l_926[0][3],&l_926[0][3],&l_926[0][3],&l_926[0][3]},{&l_926[0][3],&l_926[0][3],&l_926[0][3],&l_926[0][3]},{&l_926[0][3],&l_926[0][3],&l_926[0][3],&l_926[0][3]},{&l_926[0][3],&l_926[0][3],&l_926[0][3],&l_926[0][3]},{&l_926[0][3],&l_926[0][3],&l_926[0][3],&l_926[0][3]},{&l_926[0][3],&l_926[0][3],&l_926[0][3],&l_926[0][3]}};
        int i, j;
        for (i = 0; i < 1; i++)
        {
            for (j = 0; j < 6; j++)
                l_1057[i][j] = 1UL;
        }
        if (((*g_119) & (safe_rshift_func_uint8_t_u_s(255UL, 7))))
        {
            unsigned short l_911[9][6];
            int *l_912 = (void*)0;
            int l_929[7] = {1L,1L,0x8F256A55L,1L,1L,0x8F256A55L,1L};
            int **l_932 = &l_914;
            int i, j;
            for (i = 0; i < 9; i++)
            {
                for (j = 0; j < 6; j++)
                    l_911[i][j] = 0x4B75L;
            }
            if ((safe_add_func_uint32_t_u_u(l_911[4][3], p_31)))
            {
                return l_912;


            }
            else
            {
                int *l_913 = (void*)0;
                unsigned long long ****l_920 = &g_919;
                const unsigned long long ****l_922 = &g_921[2];
                unsigned char *l_927 = &g_224[2][4][3];
                int **l_930 = &l_44;
                l_914 = l_913;

                ;
                l_929[2] = ((((*l_927) = ((safe_sub_func_int16_t_s_s(((p_31 != ((**l_673) = l_928)) > p_32), p_32)) | p_31)) && p_31) & p_32);
                (*g_931) = ((*l_930) = l_913);

                ;
                ;
            }

            ;
            ;
            ;
            (*l_932) = l_914;
        }
        else
        {
            int ***l_938[7];
            int ****l_937[6][3] = {{&l_938[6],(void*)0,&l_938[6]},{&l_938[2],(void*)0,&l_938[6]},{&l_938[6],(void*)0,(void*)0},{&l_938[6],&l_938[2],&l_938[6]},{(void*)0,&l_938[2],&l_938[6]},{&l_938[6],&l_938[2],&l_938[2]}};
            int l_939[7][4] = {{0x326AA5D2L,0x5ACBE074L,0xF05BEA7DL,0x5ACBE074L},{0x5ACBE074L,0x8E7A30EBL,0xF05BEA7DL,0xF05BEA7DL},{0x326AA5D2L,0x326AA5D2L,0x5ACBE074L,0xF05BEA7DL},{0L,0x8E7A30EBL,0L,0x5ACBE074L},{0L,0x5ACBE074L,0x5ACBE074L,0L},{0x326AA5D2L,0x5ACBE074L,0xF05BEA7DL,0x5ACBE074L},{0x5ACBE074L,0x8E7A30EBL,0xF05BEA7DL,0xF05BEA7DL}};
            unsigned long long *l_950 = &g_89;
            unsigned long long *l_952 = &g_89;
            unsigned ****l_961 = (void*)0;
            unsigned short l_1019 = 0UL;
            short l_1112 = 0x864CL;
            unsigned long long l_1133 = 0xF5CB0E46EECE10E5LL;
            int *l_1138 = &g_120;
            int i, j;
            for (i = 0; i < 7; i++)
                l_938[i] = &g_266;
            if (((-3L) < (p_31 == (safe_lshift_func_uint16_t_u_s((*g_357), (*l_914))))))
            {
                int *l_935 = (void*)0;
                unsigned **l_945 = &g_505;
                unsigned char *l_946 = &l_495;
                unsigned long long *l_980[9][4][5] = {{{(void*)0,&g_89,&g_89,(void*)0,&g_89},{&g_89,(void*)0,(void*)0,(void*)0,(void*)0},{(void*)0,&g_89,(void*)0,(void*)0,(void*)0},{(void*)0,&g_89,&g_89,&g_89,&g_89}},{{(void*)0,(void*)0,(void*)0,&g_89,(void*)0},{(void*)0,&g_89,&g_89,&g_89,(void*)0},{&g_89,&g_89,(void*)0,&g_89,&g_89},{&g_89,&g_89,(void*)0,&g_89,(void*)0}},{{&g_89,(void*)0,&g_89,&g_89,&g_89},{&g_89,&g_89,&g_89,(void*)0,(void*)0},{&g_89,&g_89,(void*)0,(void*)0,(void*)0},{&g_89,(void*)0,(void*)0,(void*)0,(void*)0}},{{&g_89,&g_89,&g_89,&g_89,(void*)0},{(void*)0,&g_89,&g_89,(void*)0,(void*)0},{(void*)0,(void*)0,&g_89,&g_89,&g_89},{(void*)0,(void*)0,(void*)0,(void*)0,(void*)0}},{{&g_89,&g_89,(void*)0,&g_89,(void*)0},{(void*)0,(void*)0,&g_89,&g_89,&g_89},{&g_89,&g_89,(void*)0,(void*)0,(void*)0},{(void*)0,(void*)0,(void*)0,(void*)0,(void*)0}},{{&g_89,(void*)0,&g_89,&g_89,(void*)0},{(void*)0,&g_89,(void*)0,&g_89,&g_89},{(void*)0,(void*)0,&g_89,(void*)0,(void*)0},{(void*)0,&g_89,(void*)0,(void*)0,&g_89}},{{&g_89,(void*)0,(void*)0,&g_89,&g_89},{&g_89,(void*)0,&g_89,&g_89,&g_89},{&g_89,&g_89,(void*)0,(void*)0,(void*)0},{&g_89,&g_89,(void*)0,(void*)0,&g_89}},{{&g_89,(void*)0,&g_89,&g_89,(void*)0},{&g_89,&g_89,&g_89,&g_89,(void*)0},{(void*)0,&g_89,&g_89,(void*)0,(void*)0},{(void*)0,(void*)0,(void*)0,&g_89,(void*)0}},{{&g_89,&g_89,(void*)0,(void*)0,&g_89},{(void*)0,&g_89,(void*)0,(void*)0,&g_89},{(void*)0,&g_89,&g_89,(void*)0,(void*)0},{&g_89,(void*)0,&g_89,(void*)0,(void*)0}}};
                unsigned long long ***l_982 = &l_692;
                unsigned char l_999[3];
                unsigned l_1017[5][10] = {{8UL,8UL,4294967291UL,0x3F5201E7L,4294967291UL,8UL,8UL,4294967291UL,0x3F5201E7L,4294967291UL},{8UL,8UL,4294967291UL,0x3F5201E7L,4294967291UL,8UL,8UL,4294967291UL,0x3F5201E7L,4294967291UL},{8UL,8UL,4294967291UL,0x3F5201E7L,4294967291UL,8UL,8UL,4294967291UL,0x3F5201E7L,4294967291UL},{8UL,8UL,4294967291UL,0x3F5201E7L,4294967291UL,8UL,8UL,4294967291UL,0x3F5201E7L,4294967291UL},{8UL,8UL,4294967291UL,0x3F5201E7L,4294967291UL,8UL,8UL,4294967291UL,0x3F5201E7L,4294967291UL}};
                int *l_1022 = (void*)0;
                int i, j, k;
                for (i = 0; i < 3; i++)
                    l_999[i] = 0x39L;
                (*g_936) = l_935;

                ;
                if (func_58(p_31, p_31, p_32, l_947))
                {
                    unsigned long long **l_951 = &l_950;
                    (*l_914) = (safe_mul_func_int16_t_s_s(p_31, (l_939[3][3] ^ (((*l_951) = ((**l_691) = l_950)) != l_952))));
                    (*g_953) = &l_37;

                    ;
                    for (l_568 = (-10); (l_568 >= 33); l_568 = safe_add_func_uint32_t_u_u(l_568, 8))
                    {
                        (*g_141) = (**g_140);
                    }
                }
                else
                {
                    unsigned l_958 = 0x46AC218FL;
                    unsigned *****l_962 = &l_961;
                    int l_984 = 1L;
                    l_939[5][3] = (safe_rshift_func_uint8_t_u_s(g_155, l_958));
                    if ((safe_lshift_func_uint16_t_u_u((&g_636 == ((*l_962) = l_961)), 4)))
                    {
                        int *l_963 = &l_939[0][0];
                        int **l_964 = &g_141;
                        unsigned char **l_965 = &l_946;
                        unsigned char ***l_966 = &l_965;
                        (*l_964) = l_963;

                        ;
                        (*l_914) = (((*l_966) = l_965) == g_967);
                        (*l_964) = (*l_964);
                    }
                    else
                    {
                        (*g_970) = &l_939[0][1];

                        ;
                    }

                    ;
                    for (g_413 = 29; (g_413 < 3); g_413--)
                    {
                        unsigned l_981 = 2UL;
                        unsigned long long ****l_983 = &l_982;
                        l_984 = (9L < ((safe_lshift_func_int8_t_s_s((safe_sub_func_int64_t_s_s(p_32, 1UL)), 7)) && (l_939[0][1] = ((safe_sub_func_int16_t_s_s((safe_unary_minus_func_uint64_t_u((l_980[5][1][2] == (void*)0))), ((**l_673) = ((l_981 > 8UL) > (g_921[2] == ((*l_983) = l_982)))))) & 0xADL))));
                        (*l_914) = p_31;
                    }
                    (*g_985) = l_914;

                    ;
                }

                ;
                if (((*g_141) = p_32))
                {
                    return l_935;



                }
                else
                {
                    int l_992 = (-9L);
                    const short l_1000 = (-1L);
                    for (l_597 = 0; (l_597 >= 17); l_597++)
                    {
                        int **l_989 = &l_44;
                        (*l_989) = l_935;

                        ;
                    }

                    ;
                    l_992 = ((safe_add_func_uint16_t_u_u((l_992 || (safe_lshift_func_uint8_t_u_s(((*l_946) = (func_38(l_914, l_914, (safe_lshift_func_int16_t_s_u((0xE67A4A819348683ALL || ((*l_950) = l_999[1])), 14)), p_31, l_914) < (l_939[0][1] < l_992))), p_31))), 0x755BL)) && (***g_567));

                    ;
                    (*g_936) = &l_37;

                    ;
                    (*g_141) = (func_55((***g_636), p_32) == (p_32 < l_1000));
                }

                ;
                for (p_31 = 0; (p_31 <= 2); p_31 += 1)
                {
                    unsigned short *l_1018 = &l_926[8][1];
                    unsigned *l_1020 = &g_434;
                    int *l_1023 = &l_37;
                    int i;
                    if ((safe_sub_func_uint64_t_u_u(l_999[p_31], ((p_32 = (safe_add_func_uint8_t_u_u(((*l_946) = (((*l_1020) = func_55(((safe_sub_func_uint32_t_u_u(((((safe_sub_func_uint16_t_u_u((*g_129), (safe_add_func_int16_t_s_s((((*l_946) = (1L != 65534UL)) != (((((func_55(((**l_945) = (((safe_rshift_func_int8_t_s_s((safe_lshift_func_uint16_t_u_s(((*l_1018) = (((p_31 >= ((((*g_357) = (safe_mul_func_uint16_t_u_u(((&g_84[2] != &g_84[0]) & l_939[0][1]), (p_31 & 0xECL)))) == l_1017[1][0]) <= 7UL)) < p_32) < p_31)), 8)), 2)) < l_939[0][1]) > 0xB8C0B2933EB9726ELL)), p_32) || (*l_914)) <= g_68) < p_32) | p_32) == 0xE980E1E0L)), l_1019)))) == l_999[p_31]) & (*l_914)) && l_999[p_31]), (*g_141))) && p_32), p_31)) >= 1L)), (-4L)))) | 0x59B8A43AL))))
                    {
                        (*g_141) = (**g_140);
                        (*g_1021) = (*g_148);
                    }
                    else
                    {
                        (*l_914) = ((p_31 ^ (((void*)0 != (**g_745)) < p_31)) != p_31);
                        l_1023 = l_1022;

                        ;
                        (*l_914) = 0x53FCFC6AL;
                    }

                    ;
                    for (l_928 = 0; (l_928 <= 2); l_928 += 1)
                    {
                        unsigned char l_1024[10] = {0xFEL,0xFEL,0UL,251UL,0UL,0xFEL,0xFEL,0UL,251UL,0UL};
                        int i;
                        (*g_141) = l_1024[5];
                    }
                }
            }
            else
            {
                const unsigned short l_1030 = 0xBED8L;
                int l_1039 = 0xC7FFA26AL;
                for (l_1019 = 2; (l_1019 >= 9); l_1019 = safe_add_func_uint32_t_u_u(l_1019, 2))
                {
                    unsigned char *l_1038[4][3][8] = {{{&g_224[2][1][0],&l_495,&l_495,(void*)0,&g_224[6][6][3],&g_224[2][1][0],&l_495,&l_495},{&g_224[6][1][3],&g_224[2][1][0],&l_495,&l_495,&g_224[6][1][3],&l_495,&g_224[0][6][2],&l_495},{&g_224[2][4][0],&g_224[6][2][1],&l_495,&g_224[4][6][0],&g_224[2][1][0],&l_495,(void*)0,(void*)0}},{{(void*)0,&g_224[2][1][0],&g_224[0][6][2],&g_224[4][6][0],&l_495,&l_495,&g_224[2][3][1],&l_495},{&g_224[6][6][3],&l_495,&g_224[2][1][0],&l_495,&g_224[6][6][3],(void*)0,&g_224[2][1][0],&l_495},{&g_224[2][1][0],&l_495,&l_495,&l_495,&l_495,&g_224[6][2][1],&l_495,&l_495}},{{&g_224[2][1][0],&g_224[0][6][2],&l_495,&g_224[2][1][0],&l_495,&g_224[2][1][0],&g_224[2][1][0],&l_495},{&l_495,&g_224[2][1][0],&g_224[2][1][0],&l_495,&g_224[4][6][0],(void*)0,&g_224[2][3][1],&l_495},{&g_224[2][1][0],&l_495,&g_224[0][6][2],&g_224[2][1][0],(void*)0,&g_224[6][1][3],(void*)0,&l_495}},{{&l_495,&l_495,&l_495,&g_224[2][1][0],&g_224[0][6][2],(void*)0,&g_224[0][6][2],&g_224[2][1][0]},{&l_495,&g_224[2][1][0],&l_495,&g_224[6][6][3],(void*)0,&g_224[2][1][0],&l_495,&g_224[0][6][2]},{&g_224[4][6][0],&g_224[0][6][2],&g_224[2][1][0],(void*)0,&g_224[2][1][0],&g_224[6][2][1],(void*)0,&l_495}}};
                    unsigned ***l_1043 = &g_746[0];
                    const int l_1049 = 2L;
                    int *l_1054 = &g_11[2];
                    int i, j, k;
                    (*l_914) = (((safe_mul_func_int8_t_s_s(((void*)0 != l_1029), l_1030)) < (((*l_914) > (safe_add_func_uint32_t_u_u((g_1033 = ((**l_1029) != (**g_782))), (func_58(func_58(p_31, (l_1039 = (safe_add_func_int64_t_s_s(p_32, (safe_rshift_func_int16_t_s_u(((**l_673) = (*l_914)), 10))))), l_1019, (*g_357)), p_31, p_32, (**g_356)) > (*l_496))))) | 0xBBL)) == l_1030);
                    for (g_68 = (-16); (g_68 != 22); ++g_68)
                    {
                        int *l_1042 = (void*)0;
                        return l_1042;



                    }
                    if (((*l_914) ^ ((((*l_1043) = (void*)0) != (void*)0) > ((((l_1044 = (*g_265)) == (void*)0) | (safe_rshift_func_uint8_t_u_s((g_224[2][1][0] = g_89), 5))) && (safe_sub_func_int32_t_s_s(0x8F26A08AL, 4294967291UL))))))
                    {
                        (*l_914) = 5L;
                        (*l_914) = l_1039;
                        if (l_1049)
                            break;
                        (*g_1050) = &l_1049;

                        ;
                    }
                    else
                    {
                        int *l_1052 = (void*)0;
                        int **l_1053 = &l_44;
                        l_1052 = ((*l_1053) = l_1052);

                        ;
                        return l_1054;



                    }

                    ;
                    (*g_305) = &l_939[0][1];

                    ;
                }




                (*l_914) = (*l_44);
                (*l_914) = p_31;
                for (g_155 = 0; (g_155 >= 0); g_155 -= 1)
                {
                    unsigned char l_1058 = 0x73L;
                    for (g_7 = 3; (g_7 >= 0); g_7 -= 1)
                    {
                        int **l_1055 = &l_914;
                        int i, j;
                        (*l_1055) = &l_939[(g_7 + 3)][g_7];

                        ;
                        (*l_914) = 0x523C01CAL;
                    }
                }

                ;
            }

            ;


            ;

            for (l_37 = (-26); (l_37 < (-18)); ++l_37)
            {
                long long *l_1080 = &g_429[1][4];
                int l_1081 = 0xDBE42FC0L;
                char *l_1082[2][5][3] = {{{(void*)0,&g_313,(void*)0},{(void*)0,&g_313,(void*)0},{(void*)0,&g_313,(void*)0},{(void*)0,&g_315[3],(void*)0},{(void*)0,(void*)0,(void*)0}},{{(void*)0,&g_315[3],(void*)0},{(void*)0,(void*)0,(void*)0},{(void*)0,&g_315[3],(void*)0},{(void*)0,(void*)0,(void*)0},{(void*)0,&g_315[3],(void*)0}}};
                unsigned *l_1098 = &g_875;
                int *l_1141 = &l_1075;
                int i, j, k;
            }
        }

        ;




    }





    ;





    return g_1148;



}







static char func_38(int * p_39, int * p_40, unsigned short p_41, int p_42, int * p_43)
{
    unsigned char l_497 = 0x04L;
    int l_498 = 0x741899E8L;
    unsigned short **l_521 = &g_357;
    l_498 = l_497;
    for (g_89 = 0; (g_89 <= 57); g_89++)
    {
        unsigned l_503 = 0UL;
        int l_529 = 1L;
        int l_559[9][3][3] = {{{3L,0xBA05EC20L,0x4D2A164DL},{(-1L),(-1L),(-1L)},{(-9L),2L,0x4D2A164DL}},{{0xEB2506BEL,0x3EA2A0F3L,0x40D6DFB2L},{0x7245D8A3L,2L,3L},{0x40D6DFB2L,(-1L),4L}},{{0x7245D8A3L,0xBA05EC20L,0x7245D8A3L},{0xEB2506BEL,0xBA1A5415L,4L},{(-9L),0xC60A29E6L,3L}},{{(-1L),0xBA1A5415L,0x40D6DFB2L},{3L,0xBA05EC20L,0x4D2A164DL},{(-1L),(-1L),(-1L)}},{{(-9L),2L,0x4D2A164DL},{0xEB2506BEL,0x3EA2A0F3L,0x40D6DFB2L},{0x7245D8A3L,2L,3L}},{{0x40D6DFB2L,(-1L),4L},{0x7245D8A3L,0xBA05EC20L,0x7245D8A3L},{0xEB2506BEL,0xBA1A5415L,4L}},{{(-9L),0xC60A29E6L,3L},{(-1L),0xBA1A5415L,0x40D6DFB2L},{3L,0xBA05EC20L,0x4D2A164DL}},{{(-1L),(-1L),(-1L)},{(-9L),2L,0x4D2A164DL},{0xEB2506BEL,0x3EA2A0F3L,0x40D6DFB2L}},{{0x7245D8A3L,2L,3L},{4L,0xBA1A5415L,0xEB2506BEL},{(-10L),2L,(-10L)}}};
        int i, j, k;
        for (g_114 = 0; (g_114 <= 2); g_114 = safe_add_func_int64_t_s_s(g_114, 8))
        {
            unsigned short l_513 = 65532UL;
            int *l_541 = &l_529;
            unsigned char *l_556 = &l_497;
            if (l_503)
                break;
            (*g_506) = g_504;
            for (g_90 = 0; (g_90 != 15); ++g_90)
            {
                int l_531 = 2L;
                int **l_535 = &g_84[7];
                int *l_536[3];
                char *l_557 = &g_313;
                int l_558 = 1L;
                long long l_560 = 0x8208BC958F3FFE42LL;
                int *l_566 = &l_498;
                int i;
                for (i = 0; i < 3; i++)
                    l_536[i] = &g_70;
                if (l_503)
                {
                    long long l_519 = (-4L);
                    unsigned char *l_530 = &g_224[2][2][2];
                    int l_532 = 0xDC0E57D9L;
                    for (g_7 = 0; (g_7 >= (-20)); g_7 = safe_sub_func_uint16_t_u_u(g_7, 5))
                    {
                        int *l_518[1][5];
                        unsigned char *l_524 = &l_497;
                        unsigned *l_525 = &g_434;
                        int i, j;
                        for (i = 0; i < 1; i++)
                        {
                            for (j = 0; j < 5; j++)
                                l_518[i][j] = &g_413;
                        }
                        l_519 = ((safe_sub_func_int8_t_s_s(l_513, p_41)) ^ (p_41 > (safe_sub_func_uint16_t_u_u(((func_58(g_313, ((void*)0 == &g_429[3][1]), (***g_265), (safe_unary_minus_func_uint8_t_u(p_41))) != g_224[2][0][0]) || g_180), p_41))));
                        l_498 = (safe_unary_minus_func_uint32_t_u(((*l_525) = ((l_521 != (*g_127)) == (safe_add_func_int16_t_s_s(func_58(l_498, ((*l_524) = g_429[1][4]), p_42, p_41), (**g_356)))))));
                    }
                    if (func_58(((*l_530) = ((func_58(((safe_unary_minus_func_uint32_t_u(g_11[2])) && func_58(((safe_rshift_func_uint16_t_u_u(((((l_529 = (-1L)) < ((void*)0 == &p_42)) && g_68) >= func_58(g_72[3][5], ((*l_530) = (p_42 != l_513)), (***g_265), l_503)), l_503)) != 0xFF3EL), l_531, l_519, (**g_356))), g_313, l_513, l_519) >= 0x50552F21D3C004E1LL) != g_155)), p_41, (**g_266), p_42))
                    {
                        int *l_533 = &g_120;
                        l_532 = l_531;
                        (*g_534) = l_533;

                        ;
                        (*l_533) = ((*g_265) != l_535);
                        if (l_503)
                            break;
                    }
                    else
                    {
                        int *l_538 = &l_498;
                        (*g_537) = (((&p_42 != l_536[1]) & p_41) <= p_41);
                        (*l_538) = (*p_40);
                        (*l_538) = l_529;
                        (*l_538) = ((safe_lshift_func_int8_t_s_s((-6L), l_513)) < (*l_538));
                    }
                }
                else
                {
                    p_43 = p_40;


                    l_541 = p_39;


                }
            }


        }
        (*g_567) = (*g_127);
    }


    p_43 = p_43;
    return l_497;
}







static unsigned short func_45(unsigned char p_46, int * p_47)
{
    unsigned short l_64 = 0x3DCDL;
    int l_349 = 0L;
    unsigned long long *l_386 = &g_89;
    unsigned long long **l_385 = &l_386;
    int l_396 = 0xAE3961EAL;
    int *l_404 = &l_349;
    for (p_46 = (-29); (p_46 <= 25); ++p_46)
    {
        unsigned long long l_63 = 0x276463A47399D012LL;
        unsigned short *l_67 = &g_68;
        int *l_69 = &g_70;
        unsigned short ***l_341[2];
        int **l_345 = &g_141;
        int l_391 = 0xD757BACDL;
        int i;
        for (i = 0; i < 2; i++)
            l_341[i] = (void*)0;
    }
    if ((safe_rshift_func_uint16_t_u_s((safe_add_func_uint16_t_u_u(func_52(l_64, l_396), (safe_mul_func_uint8_t_u_u((4294967295UL < ((0xA752FAC1601FB992LL == (safe_rshift_func_uint8_t_u_s(l_396, 2))) <= ((~p_46) <= (safe_mod_func_uint32_t_u_u(l_64, 1UL))))), g_224[4][5][2])))), 13)))
    {
        return l_396;
    }
    else
    {
        short l_405[8] = {0x85C0L,0x85C0L,0x85C0L,0x85C0L,0x85C0L,0x85C0L,0x85C0L,0x85C0L};
        int **l_411 = (void*)0;
        unsigned **l_438 = (void*)0;
        short * const l_490 = &g_72[3][5];
        short * const *l_489 = &l_490;
        int i;
        for (l_64 = 0; (l_64 <= 0); l_64 += 1)
        {
            int **l_403 = &g_141;
            (*l_403) = (void*)0;

            ;
            (*l_403) = p_47;

            ;
            for (g_70 = 0; (g_70 >= 0); g_70 -= 1)
            {
                unsigned l_416 = 18446744073709551615UL;
                for (g_120 = 0; (g_120 >= 0); g_120 -= 1)
                {
                    int **l_409 = &g_84[0];
                    int *l_415 = &g_11[2];
                    (*l_403) = p_47;

                    ;
                    if (l_349)
                    {
                        char *l_408 = &g_90;
                        int ***l_410 = &l_409;
                        int i, j, k;
                        l_404 = p_47;

                        ;
                        (*g_414) = (l_405[6] >= (0xCE4DL >= (4UL | (7UL >= (safe_lshift_func_int8_t_s_s((((*l_408) = 0xA9L) & (((*l_410) = l_409) != l_411)), 5))))));
                        (*g_140) = (void*)0;

                        ;
                    }
                    else
                    {
                        (*l_403) = l_415;
                        if (l_416)
                            continue;
                    }

                    ;
                }
            }

            ;
        }

        ;
        ;
        for (g_89 = 2; (g_89 <= 7); g_89 += 1)
        {
            unsigned l_423 = 18446744073709551615UL;
            unsigned char *l_426 = (void*)0;
            unsigned char *l_427[9] = {&g_224[2][1][0],&g_224[2][1][0],&g_224[2][1][0],&g_224[2][1][0],&g_224[2][1][0],&g_224[2][1][0],&g_224[2][1][0],&g_224[2][1][0],&g_224[2][1][0]};
            long long *l_428 = &g_429[1][4];
            int l_435 = 5L;
            int *l_479 = &g_11[2];
            int i;
            if ((safe_add_func_int64_t_s_s((safe_add_func_int8_t_s_s((((l_435 = (safe_sub_func_uint64_t_u_u(g_413, (*l_404)))) || (-3L)) && 6L), p_46)), 0xCC87DAEB41E39056LL)))
            {
                for (g_90 = 0; (g_90 <= 4); g_90 += 1)
                {
                    char l_437 = 0x0BL;
                    (*g_436) = (*g_143);
                    for (g_413 = 0; (g_413 <= 4); g_413 += 1)
                    {
                        unsigned ***l_439 = &l_438;
                        l_437 = (*p_47);
                        (*l_439) = l_438;
                    }
                }
                (*g_440) = (*p_47);
            }
            else
            {
                int *l_443 = &g_120;
                if ((*p_47))
                {
                    short l_441[1][1][2];
                    int i, j, k;
                    for (i = 0; i < 1; i++)
                    {
                        for (j = 0; j < 1; j++)
                        {
                            for (k = 0; k < 2; k++)
                                l_441[i][j][k] = 0x2CA7L;
                        }
                    }
                    l_441[0][0][1] = 0xB0A236A0L;
                }
                else
                {
                    int *l_442 = &g_120;
                    (*l_442) = (*p_47);
                }
                (*l_443) = (0UL ^ p_46);
            }
            for (g_120 = 7; (g_120 >= 0); g_120 -= 1)
            {
                int ***l_457 = &l_411;
                int ****l_456 = &l_457;
                int l_466[6][2][3] = {{{0x5E52A0C3L,1L,1L},{0L,0x5720C289L,0L}},{{0x5E52A0C3L,0x5E52A0C3L,1L},{1L,0x5720C289L,1L}},{{0x5E52A0C3L,1L,1L},{0L,0x5720C289L,0L}},{{0x5E52A0C3L,0x5E52A0C3L,1L},{1L,0x5720C289L,1L}},{{0x5E52A0C3L,1L,1L},{0L,0x5720C289L,0L}},{{0x5E52A0C3L,0x5E52A0C3L,1L},{1L,0x5720C289L,1L}}};
                unsigned *l_467 = &g_434;
                int i, j, k;
                if ((*p_47))
                    break;
                if ((safe_mod_func_uint32_t_u_u(g_155, (safe_lshift_func_int16_t_s_s(func_58((safe_add_func_uint32_t_u_u((~(safe_add_func_uint8_t_u_u((safe_mul_func_int8_t_s_s(g_70, (((*l_467) = ((g_72[(g_120 + 1)][g_89] = (safe_add_func_int64_t_s_s((((*l_456) = &g_266) == &l_411), (safe_rshift_func_int16_t_s_s(((safe_sub_func_uint64_t_u_u(1UL, ((-10L) < 0x7AL))) <= (safe_sub_func_uint32_t_u_u(p_46, (safe_add_func_int64_t_s_s(((*g_357) < (*g_129)), l_466[5][1][1]))))), 2))))) <= (*l_404))) & l_466[5][1][1]))), g_315[2]))), l_423)), g_89, l_435, l_435), g_224[2][1][0])))))
                {
                    return p_46;



                }
                else
                {
                    int **l_468 = (void*)0;
                    (*g_469) = p_47;

                    ;
                    for (l_423 = 0; (l_423 <= 4); l_423 += 1)
                    {
                        if (l_466[1][1][0])
                            break;
                    }
                }

                ;
                ;
                for (l_396 = 0; (l_396 <= 4); l_396 += 1)
                {
                    unsigned long long l_478[8][4][3] = {{{0xD8FC810B0F55A41CLL,0UL,18446744073709551615UL},{1UL,0x10FC326C9732376BLL,0x10FC326C9732376BLL},{5UL,18446744073709551615UL,0UL},{18446744073709551615UL,0xFF12191CCB3189EFLL,0UL}},{{0UL,0xFEEA5D783F69C20DLL,0xA098B0D4BBE3C3D4LL},{0xF61D4E597F0CCF32LL,0x54722D62352BCF8ALL,3UL},{0x8FB844435A646DACLL,0xFEEA5D783F69C20DLL,0x71EFD2C5EDC73D43LL},{0x844ACF881606B654LL,0xFF12191CCB3189EFLL,0xF61D4E597F0CCF32LL}},{{18446744073709551607UL,18446744073709551615UL,0x6BAD3585880D4CDALL},{0x9DA8D574B7864916LL,0x10FC326C9732376BLL,0x9DA8D574B7864916LL},{0xF1DC6E4EA9B5E3FELL,0UL,1UL},{3UL,0UL,0UL}},{{0xF1DC6E4EA9B5E3FELL,0xBFDBF61017FAE190LL,0xA098B0D4BBE3C3D4LL},{18446744073709551615UL,0x844ACF881606B654LL,0UL},{0xF1DC6E4EA9B5E3FELL,0UL,0xD8FC810B0F55A41CLL},{0x8EC2CF7A3F03639ELL,0x10FC326C9732376BLL,1UL}},{{0x8D45222AF414E0ADLL,0x51B17D30F8C35CB5LL,0xFEEA5D783F69C20DLL},{0xAF9E2C309A928C25LL,0xAF9E2C309A928C25LL,3UL},{0xC2C47D8770A7E696LL,0x8FB844435A646DACLL,0x71EFD2C5EDC73D43LL},{0UL,0x3530299EC872CF7CLL,0x829AB1F02715E0B2LL}},{{0xFEEA5D783F69C20DLL,0xA098B0D4BBE3C3D4LL,1UL},{0x10FC326C9732376BLL,0UL,0x829AB1F02715E0B2LL},{0xCB27B7E052A30EF6LL,0xD8FC810B0F55A41CLL,0x71EFD2C5EDC73D43LL},{0x9DA8D574B7864916LL,1UL,3UL}},{{0x570061209BC661F5LL,0xFEEA5D783F69C20DLL,0xFEEA5D783F69C20DLL},{0xFF12191CCB3189EFLL,3UL,1UL},{0x6BAD3585880D4CDALL,0x71EFD2C5EDC73D43LL,0xD8FC810B0F55A41CLL},{1UL,0x829AB1F02715E0B2LL,0UL}},{{0x8FB844435A646DACLL,1UL,0xA098B0D4BBE3C3D4LL},{0x4E4AA5A9EBCC252DLL,0x829AB1F02715E0B2LL,0x3530299EC872CF7CLL},{0xBFDBF61017FAE190LL,0x71EFD2C5EDC73D43LL,0x8FB844435A646DACLL},{0x54722D62352BCF8ALL,3UL,0xAF9E2C309A928C25LL}}};
                    int *l_481 = (void*)0;
                    short *l_484 = &g_7;
                    int i, j, k;
                    for (p_46 = 0; (p_46 <= 4); p_46 += 1)
                    {
                        unsigned l_476 = 0xE8310E1FL;
                        short *l_477 = &g_7;
                        int **l_480[10][4] = {{&l_479,&g_141,&g_141,&l_404},{&l_404,&g_141,&g_141,&l_404},{&l_479,&g_141,&g_141,&l_404},{&l_404,&g_141,&g_141,&l_404},{&l_479,&g_141,&g_141,&l_404},{&l_404,&g_141,&g_141,&l_404},{&l_479,&g_141,&g_141,&l_404},{&l_404,&g_141,&g_141,&l_404},{&l_479,&g_141,&g_141,&l_404},{&l_404,&g_141,&g_141,&l_404}};
                        int i, j;
                        l_466[2][0][2] = ((safe_mod_func_uint8_t_u_u(((safe_mul_func_int8_t_s_s((safe_mul_func_uint16_t_u_u(l_476, ((*g_357) = 0UL))), func_58((p_46 <= p_46), ((((*l_477) = g_89) >= 0L) && 0xEDD1D08C08D05BDDLL), l_478[4][3][1], p_46))) & p_46), 1L)) ^ l_476);
                        p_47 = (l_481 = l_479);

                        ;
                    }

                    ;
                    l_466[5][1][1] = (func_58((~(+((safe_add_func_int8_t_s_s((-1L), ((g_11[0] & (p_46 & ((*l_484) = 0xC16AL))) == (0x2785EC50F4389B07LL && (255UL == (g_315[2] && (0x48L != ((((*l_467) = (((*g_119) >= (*p_47)) < (*l_404))) != (*p_47)) ^ g_224[2][1][0])))))))) || g_90))), l_405[2], l_405[6], p_46) <= g_70);
                    if ((*p_47))
                    {
                        (*g_485) = (*p_47);
                        (*g_487) = l_481;
                    }
                    else
                    {
                        int **l_488[9] = {&l_479,&g_141,&l_479,&l_479,&g_141,&l_479,&l_479,&g_141,&l_479};
                        int i;
                        p_47 = &l_349;

                        ;
                        l_479 = p_47;

                        ;
                        if (l_405[6])
                            break;
                        p_47 = p_47;
                    }
                    (*g_492) = l_489;

                    ;
                }

                ;
            }

            ;
        }

        ;
        ;
        ;
        return l_405[6];



    }
}







static char func_52(int p_53, long long p_54)
{
    int l_109[2];
    int l_118[6];
    const unsigned l_209 = 18446744073709551615UL;
    short *l_210[1][2][5] = {{{&g_7,&g_7,&g_7,&g_7,&g_7},{&g_72[1][5],&g_72[1][5],&g_72[1][5],&g_72[1][5],&g_72[1][5]}}};
    int l_240 = 0x64EB96B6L;
    unsigned l_258[1][3];
    unsigned long long *l_260 = &g_89;
    long long l_282 = 0x2061BE2EFF3B490FLL;
    int l_317 = 0x6A2F6E2AL;
    int **l_329 = &g_141;
    unsigned char *l_330 = &g_224[0][0][3];
    unsigned short l_335 = 0x965BL;
    int *l_336 = &g_120;
    int i, j, k;
    for (i = 0; i < 2; i++)
        l_109[i] = 5L;
    for (i = 0; i < 6; i++)
        l_118[i] = (-1L);
    for (i = 0; i < 1; i++)
    {
        for (j = 0; j < 3; j++)
            l_258[i][j] = 0x4CBC2A9CL;
    }
    for (g_70 = 0; (g_70 != 9); ++g_70)
    {
        long long l_108 = 0xA4178B3ED55ED510LL;
        unsigned short *l_110 = (void*)0;
        unsigned short *l_111 = &g_68;
        short l_112 = 0x67F3L;
        unsigned short *l_113[8][7] = {{&g_114,(void*)0,(void*)0,&g_114,&g_114,&g_114,&g_114},{&g_114,(void*)0,(void*)0,&g_114,&g_114,&g_114,&g_114},{&g_114,(void*)0,&g_114,(void*)0,&g_114,(void*)0,&g_114},{&g_114,(void*)0,(void*)0,&g_114,&g_114,&g_114,(void*)0},{(void*)0,&g_114,&g_114,&g_114,&g_114,&g_114,&g_114},{(void*)0,(void*)0,(void*)0,&g_114,&g_114,(void*)0,&g_114},{(void*)0,&g_114,&g_114,&g_114,(void*)0,(void*)0,(void*)0},{(void*)0,&g_114,(void*)0,(void*)0,&g_114,(void*)0,&g_114}};
        long long l_117 = 0xF2A49CFF131093E8LL;
        unsigned long long *l_136 = &g_89;
        int l_175 = 8L;
        unsigned l_222[4] = {0UL,0UL,0UL,0UL};
        int l_226 = 0xDF76FED9L;
        int l_257 = 1L;
        int *l_268 = &l_175;
        int i, j;
        (*g_119) = ((8L || ((safe_add_func_uint8_t_u_u((safe_rshift_func_uint16_t_u_u((safe_add_func_int16_t_s_s((safe_mul_func_int16_t_s_s((safe_lshift_func_uint16_t_u_s(0x74C4L, (safe_mod_func_int64_t_s_s(g_72[3][5], p_53)))), l_108)), ((*l_111) = l_109[0]))), (g_114 = l_112))), (l_109[0] || (l_118[3] = (safe_mul_func_uint8_t_u_u((p_54 & l_109[0]), l_117)))))) & l_109[0])) > l_109[0]);
        for (g_68 = 0; (g_68 < 60); g_68 = safe_add_func_uint64_t_u_u(g_68, 9))
        {
            int l_137 = 0xA2A823BFL;
            int **l_149 = (void*)0;
            for (g_114 = 0; (g_114 <= 7); g_114 += 1)
            {
                int l_147 = 4L;
                int i;
                for (l_108 = 1; (l_108 <= 7); l_108 += 1)
                {
                    unsigned *l_130 = &g_131;
                    int l_138 = 0xEBDD0841L;
                    int l_139 = (-1L);
                    int **l_144 = &g_141;
                }
                (*g_141) = (safe_mod_func_uint32_t_u_u((((void*)0 == g_84[g_114]) ^ (l_137 <= l_147)), 0x82148F47L));
            }
            (*g_148) = &l_118[3];

            ;
            (*g_150) = (*g_140);
        }
        for (g_90 = 0; (g_90 > (-5)); g_90 = safe_sub_func_int16_t_s_s(g_90, 2))
        {
            unsigned short l_153 = 3UL;
            int * const l_170 = (void*)0;
            int *l_183[2][10][6] = {{{&g_11[2],&g_11[2],&g_120,&g_11[2],&l_118[3],&g_11[0]},{&l_118[3],&g_120,(void*)0,&g_11[2],&g_120,&g_120},{&g_120,&g_120,&g_11[1],&g_120,&g_120,&g_120},{&l_118[2],&g_120,&g_11[2],&l_118[2],(void*)0,&l_118[3]},{&l_118[2],(void*)0,&l_118[3],&g_120,&g_120,&l_118[3]},{&g_120,&g_120,&g_11[2],&l_118[3],&g_120,&g_120},{&g_120,(void*)0,&g_11[1],&l_118[3],(void*)0,&g_11[2]},{&g_120,&g_120,&g_11[1],&g_120,&g_120,&g_120},{&l_118[2],&g_120,&g_11[2],&l_118[2],(void*)0,&l_118[3]},{&l_118[2],(void*)0,&l_118[3],&g_120,&g_120,&l_118[3]}},{{&g_120,&g_120,&g_11[2],&l_118[3],&g_120,&g_120},{&g_120,(void*)0,&g_11[1],&l_118[3],(void*)0,&g_11[2]},{&g_120,&g_120,&g_11[1],&g_120,&g_120,&g_120},{&l_118[2],&g_120,&g_11[2],&l_118[2],(void*)0,&l_118[3]},{&l_118[2],(void*)0,&l_118[3],&g_120,&g_120,&l_118[3]},{&g_120,&g_120,&g_11[2],&l_118[3],&g_120,&g_120},{&g_120,(void*)0,&g_11[1],&l_118[3],(void*)0,&g_11[2]},{&g_120,&g_120,&g_11[1],&g_120,&g_120,&l_118[3]},{(void*)0,&l_118[3],&g_11[1],(void*)0,&g_120,&g_11[2]},{(void*)0,&g_120,&g_11[2],&l_118[3],&l_118[3],&g_11[2]}}};
            short *l_211 = (void*)0;
            unsigned short **l_256 = &l_113[1][5];
            unsigned short ***l_255 = &l_256;
            int i, j, k;
            if (l_153)
                break;
        }
    }

    ;
    (*l_329) = (void*)0;

    ;
    (*l_336) = (((***g_127) >= (7UL >= (((void*)0 != l_330) & (0x53L && (safe_mod_func_int8_t_s_s((&g_11[0] != (void*)0), (-9L))))))) >= ((safe_sub_func_int8_t_s_s(((p_54 < l_335) && p_53), 0UL)) <= 8L));
    (*l_329) = (*g_328);
    return g_155;
}







static long long func_55(unsigned p_56, unsigned short p_57)
{
    unsigned short *l_74 = &g_68;
    unsigned short ** const l_73 = &l_74;
    unsigned short ***l_75 = (void*)0;
    unsigned short **l_76 = &l_74;
    int l_81 = 5L;
    int **l_82 = (void*)0;
    int **l_83[2];
    int l_87[9][6][4] = {{{0xB39C2D96L,0x66A4DCBDL,1L,0xA864CC43L},{0xA8E6F95DL,0xED4FF94FL,0x9A6A910BL,1L},{(-1L),0L,0L,1L},{0xDD0F33D3L,0x660C9299L,0xA67FE427L,1L},{5L,(-9L),0xD896CD2AL,0xB30262A8L},{5L,(-6L),0x14ABDC48L,0x23298C05L}},{{0L,0L,1L,0x14ABDC48L},{0x58F1AF85L,(-8L),(-2L),0L},{0x67607BBCL,(-1L),(-4L),(-1L)},{0x9FCC30D4L,(-9L),0xF57B567EL,0xA67FE427L},{5L,0x9AADFED4L,0L,0x9037596CL},{0x6116ABE3L,0x0AC9F79EL,(-1L),1L}},{{0x6116ABE3L,8L,0L,0x85BB29A1L},{5L,1L,0xF57B567EL,0x9A0A0809L},{0x9FCC30D4L,0xAC0FE8B8L,(-4L),3L},{0x67607BBCL,(-1L),(-2L),0xA5F02B52L},{0x58F1AF85L,(-9L),1L,(-2L)},{0L,3L,0x14ABDC48L,0x9A6A910BL}},{{5L,8L,0xD896CD2AL,0x9A0A0809L},{5L,0x577EE7E4L,0xA67FE427L,0xA864CC43L},{0xDD0F33D3L,5L,(-1L),1L},{0x660C9299L,0xD896CD2AL,3L,1L},{0x9FCC30D4L,0xDD0F33D3L,8L,0x14ABDC48L},{(-1L),0xEA94120BL,(-1L),0x9AADFED4L}},{{(-6L),0x132C5A17L,0x58F1AF85L,0x2FE0EC92L},{(-1L),0xF56D1B7AL,0xEA94120BL,0x58F1AF85L},{8L,0L,1L,5L},{0x63D7CB68L,0x9AADFED4L,0x67607BBCL,0x660C9299L},{0x577EE7E4L,0xEA94120BL,1L,8L},{0x67607BBCL,0xA5F02B52L,1L,0x9A6A910BL}},{{0xF203748AL,0xED4FF94FL,7L,1L},{0x14ABDC48L,0xB30262A8L,8L,0xB39C2D96L},{(-8L),0x0324A0BDL,0x0324A0BDL,(-8L)},{0x577EE7E4L,5L,(-1L),(-1L)},{7L,(-1L),0x6116ABE3L,1L},{0xAC0FE8B8L,0x1463D90BL,0xEA94120BL,1L}},{{0x9A0A0809L,(-1L),(-1L),(-1L)},{(-1L),5L,(-6L),(-8L)},{(-1L),0x0324A0BDL,6L,0xB39C2D96L},{0x4120E742L,0xB30262A8L,0x85BB29A1L,1L},{0xCDDECA68L,0xED4FF94FL,(-1L),0x9A6A910BL},{0x9FCC30D4L,0xA5F02B52L,0x14ABDC48L,8L}},{{(-2L),0xEA94120BL,(-6L),0x660C9299L},{(-9L),0x9AADFED4L,0x58F1AF85L,5L},{5L,0L,1L,0L},{0x63D7CB68L,(-1L),0L,0x0AC9F79EL},{0xB30262A8L,0x66A4DCBDL,0xD896CD2AL,1L},{0xA864CC43L,0x58F1AF85L,1L,(-4L)}},{{8L,1L,0xBB6FCE13L,(-8L)},{0x2FE0EC92L,0xDD0F33D3L,(-9L),(-9L)},{0x9A0A0809L,0x9FCC30D4L,0xA8E6F95DL,0xF203748AL},{0xD896CD2AL,0xB39C2D96L,(-1L),1L},{0xA864CC43L,0xFA7FFF35L,1L,0xA67FE427L},{(-1L),6L,0xAC0FE8B8L,0x9A6A910BL}}};
    unsigned long long *l_88 = &g_89;
    int *l_92 = &l_87[7][4][3];
    char l_93 = (-8L);
    int i, j, k;
    for (i = 0; i < 2; i++)
        l_83[i] = (void*)0;
    l_76 = l_73;
    (*l_92) = (g_90 = (safe_rshift_func_int16_t_s_u(g_11[1], ((!g_68) ^ (((safe_rshift_func_uint8_t_u_s((((l_81 = (0xC3F40837L && 0x08A7CF5EL)) | p_56) == ((g_72[6][2] & ((g_84[0] = &g_70) != &g_70)) >= ((((*l_88) = (safe_rshift_func_int16_t_s_s((l_87[7][4][3] >= p_57), g_70))) | g_72[1][0]) || g_70))), 3)) || g_68) == g_68)))));
    return l_93;
}







static short func_58(unsigned char p_59, unsigned char p_60, int p_61, unsigned short p_62)
{
    short l_71[7] = {0L,0L,0xFF1DL,0L,0L,0xFF1DL,0L};
    int i;
    g_72[3][5] = (l_71[1] & 0xD673L);
    return g_7;
}





int main (void)
{
    int i, j, k;
    int print_hash_value = 0;
    platform_main_begin();
    crc32_gentab();
    func_1();
    transparent_crc(g_7, "g_7", print_hash_value);
    for (i = 0; i < 3; i++)
    {
        transparent_crc(g_11[i], "g_11[i]", print_hash_value);
        if (print_hash_value) printf("index = [%d]\n", i);

    }
    transparent_crc(g_68, "g_68", print_hash_value);
    transparent_crc(g_70, "g_70", print_hash_value);
    for (i = 0; i < 9; i++)
    {
        for (j = 0; j < 8; j++)
        {
            transparent_crc(g_72[i][j], "g_72[i][j]", print_hash_value);
            if (print_hash_value) printf("index = [%d][%d]\n", i, j);

        }
    }
    transparent_crc(g_89, "g_89", print_hash_value);
    transparent_crc(g_90, "g_90", print_hash_value);
    transparent_crc(g_114, "g_114", print_hash_value);
    transparent_crc(g_120, "g_120", print_hash_value);
    transparent_crc(g_131, "g_131", print_hash_value);
    transparent_crc(g_155, "g_155", print_hash_value);
    transparent_crc(g_180, "g_180", print_hash_value);
    for (i = 0; i < 7; i++)
    {
        for (j = 0; j < 8; j++)
        {
            for (k = 0; k < 4; k++)
            {
                transparent_crc(g_224[i][j][k], "g_224[i][j][k]", print_hash_value);
                if (print_hash_value) printf("index = [%d][%d][%d]\n", i, j, k);

            }
        }
    }
    transparent_crc(g_313, "g_313", print_hash_value);
    for (i = 0; i < 8; i++)
    {
        transparent_crc(g_315[i], "g_315[i]", print_hash_value);
        if (print_hash_value) printf("index = [%d]\n", i);

    }
    transparent_crc(g_413, "g_413", print_hash_value);
    for (i = 0; i < 8; i++)
    {
        for (j = 0; j < 6; j++)
        {
            transparent_crc(g_429[i][j], "g_429[i][j]", print_hash_value);
            if (print_hash_value) printf("index = [%d][%d]\n", i, j);

        }
    }
    transparent_crc(g_434, "g_434", print_hash_value);
    for (i = 0; i < 1; i++)
    {
        for (j = 0; j < 4; j++)
        {
            for (k = 0; k < 2; k++)
            {
                transparent_crc(g_639[i][j][k], "g_639[i][j][k]", print_hash_value);
                if (print_hash_value) printf("index = [%d][%d][%d]\n", i, j, k);

            }
        }
    }
    transparent_crc(g_785, "g_785", print_hash_value);
    transparent_crc(g_791, "g_791", print_hash_value);
    transparent_crc(g_875, "g_875", print_hash_value);
    transparent_crc(g_969, "g_969", print_hash_value);
    transparent_crc(g_1033, "g_1033", print_hash_value);
    transparent_crc(g_1073, "g_1073", print_hash_value);
    platform_main_end(crc32_context ^ 0xFFFFFFFFUL, print_hash_value);
    return 0;
}
