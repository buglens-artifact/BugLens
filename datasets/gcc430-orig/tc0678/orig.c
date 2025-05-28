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
   volatile unsigned char f0;
   unsigned char f1;
   int f2;
   unsigned f3;
   unsigned short f4;
   unsigned char f5;
};


static char g_7 = 0xE8L;
static int g_36 = 0xCF7D1649L;
static int *g_70 = &g_36;
static int **g_69 = &g_70;
static volatile struct S0 g_74 = {0xEAL,0x66L,0x69E96C9FL,0x3B76F056L,0x99FDL,0x0FL};
static volatile struct S0 *g_73 = &g_74;
static volatile struct S0 g_75 = {0x0FL,0x3EL,8L,0xCDF274C1L,9UL,0x16L};
static unsigned g_82 = 4294967295UL;
static short g_85 = 0xF149L;
static struct S0 g_96 = {255UL,1UL,-1L,4294967295UL,65530UL,0xCCL};
static char g_140 = 1L;
static int * volatile g_141 = (void*)0;
static int * volatile g_143 = (void*)0;
static int * volatile g_144 = &g_96.f2;
static volatile struct S0 g_145 = {9UL,0x7FL,-2L,0xB2A2CB73L,0x7AD9L,0UL};
static struct S0 *g_149 = &g_96;
static struct S0 **g_148 = &g_149;
static struct S0 *** volatile g_147 = &g_148;
static int *** volatile g_156 = &g_69;
static const int ** volatile g_172 = (void*)0;
static const int *g_174 = &g_96.f2;
static const int ** volatile g_173 = &g_174;
static int ** volatile g_176 = &g_70;
static volatile struct S0 g_179 = {1UL,255UL,0x2C9DD34EL,0xB83B62BCL,65535UL,0x13L};
static struct S0 g_188 = {255UL,0x62L,0xE13D9898L,0x753CBC61L,0x2114L,1UL};
static int ** volatile g_189 = (void*)0;
static int ** volatile g_190 = &g_70;
static int ** volatile g_191 = &g_70;
static int ** volatile g_196 = &g_70;
static struct S0 g_197 = {0x86L,255UL,0x376D112AL,0x9DC3AFFDL,0x00EFL,0x4AL};
static int *g_199 = &g_197.f2;
static struct S0 g_208 = {0UL,0x3AL,-4L,0x393E8204L,0x3207L,255UL};
static const int ** volatile g_236 = &g_174;
static const int ** volatile g_237 = &g_174;
static short *** volatile g_255 = (void*)0;
static short *g_258 = &g_85;
static short **g_257 = &g_258;
static short *** volatile g_256 = &g_257;
static int *g_273 = &g_188.f2;
static int *g_287 = &g_188.f2;
static struct S0 * volatile * volatile g_303 = &g_149;
static struct S0 * volatile * volatile *g_302 = &g_303;
static struct S0 * volatile * volatile * volatile *g_301 = &g_302;
static const struct S0 g_332 = {253UL,1UL,2L,4294967290UL,0xA394L,0x4EL};
static unsigned g_350 = 0xD7D86132L;
static char g_353 = 1L;
static char *g_387 = &g_353;
static struct S0 g_390 = {255UL,0xFFL,0x97FB931DL,4UL,0x1E11L,0xBFL};
static int ** volatile g_413 = &g_287;
static volatile struct S0 g_420 = {255UL,255UL,0xD869262CL,4294967295UL,65535UL,246UL};
static volatile struct S0 g_421 = {0xE5L,0x80L,1L,4294967295UL,0UL,251UL};
static volatile struct S0 g_428 = {253UL,0x94L,0xBD02CD53L,0x466A0160L,2UL,254UL};
static volatile struct S0 *g_427 = &g_428;
static volatile struct S0 **g_426 = &g_427;
static volatile int *g_458 = &g_145.f2;
static volatile int * volatile *g_457 = &g_458;
static volatile int * volatile * volatile * volatile g_456 = &g_457;
static volatile int * volatile * volatile * volatile *g_455 = &g_456;
static volatile int * volatile * volatile * volatile ** const g_454 = &g_455;
static struct S0 g_466 = {254UL,0x05L,0x94CC4786L,0xC4DDF6A9L,0xD4DFL,0x69L};
static const volatile struct S0 g_467 = {1UL,0xC9L,-1L,0x83E6EB0BL,0xF6C1L,0x8BL};
static struct S0 g_476 = {0x18L,0x5DL,0xD4605079L,0x4D338BC8L,0UL,1UL};
static struct S0 g_486 = {0xDAL,0xB6L,0x2744744CL,0x159E1C9FL,0x5342L,0x0BL};
static int ** const volatile g_493 = (void*)0;
static int g_525 = 1L;
static int ** volatile g_526 = &g_70;
static unsigned short **g_533 = (void*)0;
static unsigned short ***g_532 = &g_533;
static volatile struct S0 g_537 = {0x34L,0x8EL,0xADBD2BE8L,0x828091BFL,1UL,0xA7L};
static volatile struct S0 g_538 = {251UL,255UL,1L,5UL,1UL,0UL};
static int ** volatile g_559 = &g_273;
static int ** volatile g_604 = &g_70;
static int ** volatile g_605 = &g_199;
static short g_609 = (-8L);
static int g_641 = 0L;
static const struct S0 g_653 = {0x73L,5UL,0x71FB7C04L,1UL,65528UL,0x42L};
static const struct S0 g_654 = {255UL,0xA5L,-1L,0x421FE795L,0xB58CL,0x86L};
static struct S0 g_657 = {1UL,0x66L,0xA72B958CL,1UL,1UL,255UL};
static struct S0 g_658 = {0x45L,255UL,0xA8B6896BL,0x8BCF51C4L,65535UL,9UL};
static unsigned g_664 = 0x564F7A1FL;
static struct S0 g_673 = {0x64L,0x6DL,0xF8009D34L,4294967295UL,0xEDC1L,0xA3L};
static volatile struct S0 g_693 = {0x44L,1UL,0xCCC2EEFBL,1UL,65530UL,0UL};
static const volatile struct S0 g_728 = {0xABL,255UL,0L,0xC5875928L,0x8E1AL,255UL};
static const int ** volatile g_733 = &g_174;
static int *g_748 = (void*)0;
static int **g_747 = &g_748;
static int *** volatile g_746 = &g_747;
static const unsigned short *g_756 = &g_197.f4;
static const unsigned short **g_755 = &g_756;
static volatile struct S0 g_775 = {0UL,0UL,1L,0x9F0B8752L,0x9E8DL,0x6CL};
static struct S0 g_776 = {247UL,6UL,4L,0xF417EDD1L,0x477CL,0x70L};
static int ** volatile g_788 = &g_273;
static char **g_811 = &g_387;
static unsigned g_812 = 0x4D24D545L;
static int ** volatile g_813 = &g_273;
static struct S0 ** const *g_825 = &g_148;
static struct S0 ** const **g_824 = &g_825;
static struct S0 g_858 = {1UL,1UL,0xBFE8FEA6L,4294967286UL,0xBB58L,0xF0L};
static struct S0 g_859 = {0xDAL,246UL,0x2EB495BCL,4294967294UL,0xB4ABL,255UL};
static const struct S0 ** volatile g_892 = (void*)0;
static const struct S0 ** volatile g_894 = (void*)0;
static volatile struct S0 g_904 = {0x33L,255UL,0xD84A3975L,0xBBE7E909L,65535UL,0xFBL};
static int * volatile g_914 = &g_96.f2;
static volatile struct S0 g_919 = {6UL,2UL,1L,2UL,0xC359L,1UL};
static int g_939 = 0x7D638A3FL;
static const int ** const volatile g_953 = &g_174;
static volatile struct S0 g_983 = {1UL,0x0CL,1L,0x86443431L,0UL,0x0EL};
static volatile short g_984 = (-9L);
static struct S0 ***g_1022 = &g_148;
static struct S0 ****g_1021 = &g_1022;
static struct S0 *****g_1020 = &g_1021;
static short ***g_1027 = &g_257;
static short ****g_1026 = &g_1027;
static struct S0 g_1061 = {1UL,0x79L,0x029694CCL,0UL,2UL,255UL};
static volatile int * volatile g_1078 = &g_179.f2;
static volatile struct S0 g_1100 = {0x64L,250UL,0xAAA3648FL,0xEFBE0002L,0xE8B7L,247UL};
static const int ** volatile g_1105 = &g_174;
static int ** volatile g_1127 = &g_287;



static unsigned char func_1(void);
static int func_2(unsigned p_3, unsigned p_4, const char p_5, unsigned short p_6);
static unsigned func_10(unsigned p_11, unsigned p_12);
static unsigned func_13(unsigned p_14, unsigned p_15);
static char func_22(short p_23, unsigned p_24, int p_25, unsigned char p_26, short p_27);
static unsigned short func_32(int p_33);
static int * func_37(int * p_38, int p_39, char p_40, unsigned short p_41, int p_42);
static int * func_43(short p_44, int * p_45, short p_46, int p_47, unsigned p_48);
static short func_49(int p_50, int * p_51);
static int func_52(int * p_53, const short p_54, short p_55, const int p_56, int * p_57);
static unsigned char func_1(void)
{
    struct S0 *l_430 = (void*)0;
    struct S0 **l_429 = &l_430;
    struct S0 ***l_431 = &l_429;
    int l_434 = (-1L);
    unsigned short *l_435 = (void*)0;
    unsigned short *l_436 = &g_208.f4;
    int l_437 = (-8L);
    int l_713 = 0x5887EA54L;
    unsigned *l_714 = &g_350;
    int l_915 = (-4L);
    int *l_979 = &g_776.f2;
    char l_980 = 0x3EL;
    short **l_1035 = &g_258;
    char **l_1096 = &g_387;
    unsigned char l_1132 = 0x12L;
    int *l_1133 = &l_437;
    unsigned l_1147 = 4294967291UL;
    struct S0 *l_1148 = &g_208;
    (*l_979) = func_2(g_7, (safe_sub_func_int32_t_s_s((func_10(func_13(((*l_714) = ((((safe_lshift_func_int16_t_s_u(((*g_258) = ((((safe_rshift_func_uint16_t_u_s((safe_lshift_func_int8_t_s_s(func_22(((safe_add_func_uint16_t_u_u((safe_add_func_uint16_t_u_u(func_32(g_7), (g_426 != ((*l_431) = l_429)))), ((*l_436) = (func_49(g_390.f1, g_273) | (safe_mod_func_int8_t_s_s(l_434, (-1L))))))) <= g_390.f1), l_434, l_437, l_434, g_332.f5), 5)), g_476.f3)) >= l_713) & g_332.f3) & l_434)), l_437)) | 9UL) != 1UL) ^ 0xDFC9776FL)), g_654.f2), l_437) >= g_858.f4), 0x6C54376FL)), g_812, l_915);
    if (l_980)
    {
        unsigned short l_996 = 1UL;
        int **l_999 = &g_748;
        int l_1008 = 0x8AD1BD3BL;
        int *l_1009 = &g_390.f2;
        int l_1025 = 5L;
        short ****l_1028 = &g_1027;
        for (g_96.f1 = 0; (g_96.f1 == 25); g_96.f1++)
        {
            int *l_987 = &g_390.f2;
            unsigned char l_997 = 0x8BL;
            struct S0 * const * const ***l_1019 = (void*)0;
            (*g_427) = g_983;
            if (g_984)
            {
                unsigned short ****l_991 = &g_532;
                unsigned short *****l_990 = &l_991;
                unsigned short *****l_992 = (void*)0;
                unsigned short ****l_994 = &g_532;
                unsigned short *****l_993 = &l_994;
                int l_995 = 0xC9F0A87CL;
                unsigned char *l_998 = &g_197.f1;
                (*l_987) = (g_658.f0 < (safe_sub_func_uint8_t_u_u(1UL, (func_49((*l_979), l_987) || (((*l_998) = (((((**g_755) >= (((*l_979) = (l_996 = ((safe_rshift_func_int16_t_s_u(((*g_258) = (((*l_990) = &g_532) == ((*l_993) = &g_532))), l_995)) <= (*l_987)))) > 0x441C859AL)) <= l_995) != l_997) < 0x9DL)) > g_658.f4)))));
            }
            else
            {
                int ***l_1000 = (void*)0;
                int ***l_1001 = &g_747;
                short l_1016 = 0L;
                struct S0 ******l_1023 = &g_1020;
                int l_1024 = 3L;
                (*l_1001) = l_999;
                (*l_979) = (((safe_sub_func_uint16_t_u_u((l_1024 = (safe_lshift_func_int8_t_s_u((0x46C16A53L > (func_49(((*l_979) = (l_1008 = 4L)), (l_1009 = l_1009)) != (safe_lshift_func_uint8_t_u_s((safe_rshift_func_uint16_t_u_s(((!((safe_add_func_uint16_t_u_u(func_2(l_996, ((((l_1016 = g_664) & (*l_987)) < ((safe_add_func_int16_t_s_s((l_1019 != ((*l_1023) = g_1020)), (*g_258))) <= 5L)) ^ 0x459B5BEBL), g_197.f3, l_1024), (*l_987))) < l_1025)) ^ g_390.f1), (*g_258))), l_1024)))), g_657.f2))), (*g_756))) != 0x82D5L) == 0UL);
                (*l_987) = (*l_1009);
                (*l_987) = (~((*l_979) | (((*l_979) >= ((l_1028 = g_1026) != &g_255)) <= func_49((safe_sub_func_uint16_t_u_u(65534UL, func_2(((safe_add_func_uint32_t_u_u(g_420.f4, (*l_979))) != ((safe_lshift_func_int8_t_s_u(((void*)0 != l_1035), l_1024)) <= (-1L))), (*l_979), (*l_979), (*l_987)))), &g_36))));
            }
        }
    }
    else
    {
        unsigned char l_1058 = 0xD1L;
        short ****l_1073 = &g_1027;
        struct S0 ***l_1074 = (void*)0;
        struct S0 * volatile l_1077 = &g_96;
        const char l_1115 = 0x78L;
        int l_1120 = 0xDA096AA7L;
        char *l_1134 = &l_980;
        int **l_1135 = (void*)0;
        int **l_1136 = &g_287;
        unsigned l_1137 = 0x5B4A7AC2L;
        char l_1138 = (-10L);
        for (g_859.f4 = 0; (g_859.f4 == 24); ++g_859.f4)
        {
            char l_1042 = 6L;
            int l_1045 = 0L;
            struct S0 ****l_1057 = (void*)0;
            const unsigned short l_1091 = 0xD600L;
            const unsigned short l_1118 = 1UL;
            int l_1123 = (-1L);
            for (g_466.f5 = 12; (g_466.f5 <= 11); g_466.f5 = safe_sub_func_uint16_t_u_u(g_466.f5, 1))
            {
                for (l_434 = 0; (l_434 == (-23)); l_434--)
                {
                    l_1042 = (*g_914);
                }
                for (g_776.f5 = 0; (g_776.f5 > 30); g_776.f5 = safe_add_func_uint32_t_u_u(g_776.f5, 6))
                {
                    (**g_426) = (*g_73);
                    l_1045 = ((*l_979) = (*l_979));
                }
            }
            for (g_208.f2 = (-12); (g_208.f2 < 7); ++g_208.f2)
            {
                int *l_1050 = (void*)0;
                int l_1076 = 0x8D3AD817L;
                struct S0 **l_1097 = &l_430;
                unsigned char l_1116 = 0x28L;
                unsigned short l_1124 = 0x8FE1L;
                for (g_466.f3 = (-18); (g_466.f3 > 9); g_466.f3++)
                {
                    int *l_1051 = &l_437;
                    int l_1056 = (-1L);
                    l_979 = func_37(l_1050, ((*l_1051) = g_776.f1), ((void*)0 == (*g_755)), (l_1050 == (void*)0), (safe_sub_func_uint32_t_u_u((l_1058 = ((safe_rshift_func_uint8_t_u_u((l_1056 = g_983.f2), 4)) || (l_1057 != (void*)0))), 0xDFC30F80L)));
                    return l_1056;
                }
                for (g_859.f3 = 0; (g_859.f3 > 34); ++g_859.f3)
                {
                    short ****l_1072 = (void*)0;
                    const int l_1079 = 1L;
                    int l_1089 = 5L;
                    int *l_1090 = (void*)0;
                }
                for (g_673.f1 = (-19); (g_673.f1 == 58); g_673.f1 = safe_add_func_uint32_t_u_u(g_673.f1, 9))
                {
                    int l_1112 = 1L;
                    char *l_1117 = &g_353;
                    int l_1119 = 0x6FF1C069L;
                    int **l_1125 = &l_1050;
                    unsigned l_1126 = 4294967289UL;
                    for (g_776.f5 = 1; (g_776.f5 >= 16); g_776.f5 = safe_add_func_int32_t_s_s(g_776.f5, 6))
                    {
                        (*l_979) = 0xEF073A72L;
                        if ((**g_237))
                            break;
                        (*g_1105) = (*g_953);
                        (****g_454) = (**g_456);
                    }
                    l_1119 = (((**l_1035) = (safe_rshift_func_int8_t_s_s(((*l_1117) = (safe_mod_func_int32_t_s_s((safe_lshift_func_int8_t_s_s(l_1112, 7)), ((*l_714) = (l_1058 ^ func_2(g_657.f4, ((l_1058 != ((*l_436) = (safe_add_func_uint32_t_u_u(0UL, l_1058)))) && (*l_979)), l_1115, ((*g_756) ^ l_1116))))))), l_1118))) != l_1058);
                    l_1120 = ((void*)0 == &l_429);
                    (*g_413) = func_37(((*l_1125) = func_37(func_37(&l_434, l_1115, g_919.f2, (l_1115 > (safe_rshift_func_uint8_t_u_u(((0xA110L ^ (*l_979)) <= (((func_49((0UL <= (l_1042 >= (l_1058 != g_208.f3))), &l_1045) <= 65535UL) >= l_1123) != (*g_174))), 0))), l_1124), g_653.f4, l_1045, (**g_755), (*g_174))), (*l_979), l_1120, l_1126, (*l_979));
                }
            }
            (*g_1127) = &l_1045;
        }
        (*l_1136) = &l_434;
        (*l_1136) = (*l_1136);
    }
    (*l_429) = (l_1148 = (**l_431));
    return (*l_979);
}







static int func_2(unsigned p_3, unsigned p_4, const char p_5, unsigned short p_6)
{
    int *l_920 = &g_466.f2;
    int ****** const l_932 = (void*)0;
    int l_943 = 1L;
    unsigned char * const l_967 = &g_466.f1;
    for (g_664 = 10; (g_664 >= 13); g_664++)
    {
        int *l_918 = &g_476.f2;
        (*l_918) = p_4;
        (*g_427) = g_919;
        l_920 = l_918;
        if (p_5)
            continue;
    }
    for (g_140 = 0; (g_140 >= (-13)); g_140--)
    {
        unsigned short ***l_925 = &g_533;
        int l_929 = 0xCFA057F4L;
        int *l_931 = &g_641;
        int ******l_933 = (void*)0;
        int *l_941 = (void*)0;
        int *l_958 = &g_859.f2;
        unsigned char *l_969 = &g_486.f1;
        unsigned char **l_968 = &l_969;
        unsigned short *l_971 = &g_390.f4;
        unsigned l_972 = 4294967295UL;
        unsigned short *l_973 = (void*)0;
        unsigned short *l_974 = &g_658.f4;
        int *l_975 = &g_36;
        int **l_976 = &l_920;
        if (((safe_mod_func_uint16_t_u_u(p_3, p_3)) != p_6))
        {
            unsigned char *l_928 = (void*)0;
            const int l_930 = 0x1262C82BL;
            int *l_934 = (void*)0;
            int *l_935 = (void*)0;
            int *l_936 = (void*)0;
            int *l_937 = &g_525;
            int *l_938 = &g_939;
            unsigned l_940 = 5UL;
            int *l_942 = &g_188.f2;
            (*g_427) = (*g_427);
            l_942 = l_941;
            if (l_943)
                continue;
        }
        else
        {
            unsigned short *l_950 = &g_96.f4;
            unsigned short *l_951 = &g_486.f4;
            char l_952 = 0xB1L;
            (*g_953) = (*g_733);
            return p_5;
        }
    }
    return p_5;
}







static unsigned func_10(unsigned p_11, unsigned p_12)
{
    unsigned short ***l_910 = &g_533;
    const int l_911 = 0L;
    const unsigned short l_912 = 0xEBB2L;
    (***g_302) = g_904;
    for (g_664 = 26; (g_664 == 52); ++g_664)
    {
        int *l_909 = (void*)0;
        int *l_913 = &g_858.f2;
        (*g_914) = (safe_mod_func_int32_t_s_s(((*l_913) = (((l_912 || p_11) == 0x66L) ^ (-1L))), (**g_173)));
        (*l_913) = p_11;
    }
    return l_912;
}







static unsigned func_13(unsigned p_14, unsigned p_15)
{
    const int *l_719 = &g_658.f2;
    int *l_731 = (void*)0;
    int *l_765 = &g_658.f2;
    int *l_766 = &g_466.f2;
    int * const *l_781 = &l_766;
    int * const **l_780 = &l_781;
    int * const *** const l_779 = &l_780;
    int * const *** const *l_778 = &l_779;
    unsigned short **l_792 = (void*)0;
    short *l_804 = &g_609;
    struct S0 ***l_807 = &g_148;
    unsigned l_844 = 3UL;
    const struct S0 *l_891 = &g_466;
    int *l_896 = &g_486.f2;
    char *l_899 = &g_353;
    unsigned short ****l_900 = &g_532;
    int *l_901 = &g_476.f2;
    int **l_902 = &l_766;
    int **l_903 = &l_901;
    for (g_466.f4 = 0; (g_466.f4 != 11); g_466.f4 = safe_add_func_uint16_t_u_u(g_466.f4, 9))
    {
        int *l_720 = &g_208.f2;
        struct S0 *l_741 = &g_658;
        int *l_745 = &g_525;
        int **l_744 = &l_745;
        unsigned short *l_754 = &g_476.f4;
        unsigned short **l_753 = &l_754;
        short **l_758 = (void*)0;
        if ((248UL & (safe_mod_func_int16_t_s_s(p_14, p_14))))
        {
            unsigned short *l_723 = (void*)0;
            unsigned short * const *l_722 = &l_723;
            int l_739 = 0x10FABF97L;
            struct S0 *l_740 = &g_658;
            if ((+(l_719 == l_720)))
            {
                unsigned short **l_721 = (void*)0;
                (*l_720) = (g_693.f3 ^ (l_721 == l_722));
            }
            else
            {
                int *l_732 = (void*)0;
                for (g_82 = 0; (g_82 <= 20); g_82++)
                {
                    int *l_729 = (void*)0;
                    int *l_736 = &g_466.f2;
                    unsigned *l_737 = (void*)0;
                    unsigned *l_738 = &g_350;
                    for (g_208.f4 = (-19); (g_208.f4 < 27); g_208.f4 = safe_add_func_int16_t_s_s(g_208.f4, 3))
                    {
                        unsigned l_730 = 0UL;
                        (*g_73) = g_728;
                        (*g_733) = (*g_236);
                    }
                    (*l_720) = (((*l_738) = (safe_sub_func_uint32_t_u_u(func_49(p_14, l_732), func_49(p_14, l_736)))) < l_739);
                }
                return p_14;
            }
            l_741 = l_740;
        }
        else
        {
            (*l_720) = (*l_720);
        }
        for (g_658.f4 = 22; (g_658.f4 <= 60); g_658.f4 = safe_add_func_int8_t_s_s(g_658.f4, 1))
        {
            const unsigned short ***l_757 = &g_755;
            int l_759 = 0xD69FDDECL;
            unsigned char *l_760 = &g_657.f1;
            (*g_746) = l_744;
            (*l_720) = ((((safe_lshift_func_uint16_t_u_u((safe_rshift_func_uint8_t_u_u((l_753 != ((*l_757) = g_755)), 4)), ((p_14 && (1UL == (l_758 != (void*)0))) <= ((((void*)0 == &l_744) && p_14) == l_759)))) & 0xE5A149CCL) & p_15) & p_15);
        }
        return g_467.f0;
    }
    if ((safe_mod_func_int32_t_s_s(((*l_766) = ((*l_765) = (safe_rshift_func_uint16_t_u_u(p_15, 1)))), p_15)))
    {
        int *l_767 = &g_390.f2;
        int **l_768 = &g_70;
        (*l_768) = l_767;
        for (g_658.f5 = 11; (g_658.f5 != 34); g_658.f5++)
        {
            for (g_390.f2 = 0; (g_390.f2 >= 5); g_390.f2 = safe_add_func_int16_t_s_s(g_390.f2, 1))
            {
                for (g_208.f4 = 7; (g_208.f4 < 18); g_208.f4 = safe_add_func_int16_t_s_s(g_208.f4, 7))
                {
                    (*l_766) = ((-1L) == (**g_755));
                    (****g_301) = g_775;
                    (*g_427) = g_776;
                }
            }
        }
    }
    else
    {
        int *l_777 = &g_525;
        int l_786 = 9L;
        unsigned l_787 = 0xB7B6700CL;
        unsigned short * const **l_789 = (void*)0;
        unsigned short * const *l_791 = (void*)0;
        unsigned short * const **l_790 = &l_791;
        const short l_803 = (-9L);
        unsigned *l_805 = &g_350;
        struct S0 ***l_808 = &g_148;
        int *l_809 = &g_641;
        short l_817 = 0xE47BL;
        short l_827 = 0x14B8L;
        unsigned char l_838 = 251UL;
        (*g_788) = &l_786;
        l_786 = ((*****l_778) = ((((*l_790) = (*g_532)) != l_792) ^ g_653.f3));
        (***l_780) = ((*g_273) = l_787);
        if ((((&g_747 != (void*)0) < (-4L)) == ((**l_781) = func_49((g_657.f4 == ((safe_rshift_func_uint8_t_u_u(((safe_sub_func_uint8_t_u_u((safe_sub_func_uint8_t_u_u((((safe_lshift_func_uint16_t_u_s((l_787 | (*****l_778)), ((*g_258) = (((((safe_rshift_func_int16_t_s_s((~(((l_803 == ((0xCA67CB40L > ((*l_805) = (l_804 != (void*)0))) < p_15)) & 0L) >= (***l_780))), p_14)) > 0x9FCD6B9CL) <= p_14) && 0UL) != l_787)))) <= g_421.f3) <= 0xEC14L), (*l_765))), 0xE1L)) | l_786), 0)) && 0x4FL)), &l_786))))
        {
            int *l_806 = &g_658.f2;
            char **l_810 = &g_387;
            (*l_765) = (*g_273);
            l_809 = func_37(l_806, l_787, p_14, (g_96.f5 != p_15), l_786);
            (*g_813) = func_37(func_37(l_806, p_14, p_15, (***l_780), (((l_810 = (void*)0) != (g_811 = (void*)0)) && ((*l_806) = (~p_15)))), p_14, g_812, p_15, (**g_733));
            (***g_302) = (**g_426);
        }
        else
        {
            char l_814 = (-1L);
            int *l_815 = (void*)0;
            int **l_816 = &l_765;
            char *l_818 = &g_140;
            unsigned char l_834 = 0UL;
            int ** const *l_843 = &l_816;
            int ** const **l_842 = &l_843;
            int ** const ***l_841 = &l_842;
            int ** const *** const *l_840 = &l_841;
            struct S0 ****l_866 = &l_807;
            struct S0 *****l_865 = &l_866;
            l_814 = p_15;
            (*l_816) = func_37(&l_786, (*l_809), (*l_809), (*g_756), p_14);
            for (g_82 = 0; (g_82 == 33); g_82 = safe_add_func_int32_t_s_s(g_82, 8))
            {
                unsigned l_821 = 0x4BFC82B6L;
                int *l_835 = &g_36;
                unsigned char l_847 = 0x0EL;
                int ***l_851 = &g_747;
                int l_855 = 7L;
                unsigned short l_883 = 0x6B9EL;
                struct S0 ** const l_885 = (void*)0;
                if (l_821)
                {
                    char l_836 = 0xD0L;
                    if (p_14)
                    {
                        struct S0 ** const ***l_826 = &g_824;
                        int l_837 = 1L;
                        unsigned l_839 = 4294967295UL;
                        (*l_809) = ((*****l_778) = (safe_add_func_int16_t_s_s(p_14, ((&g_302 == ((*l_826) = g_824)) || ((l_827 = 0UL) == ((safe_add_func_int8_t_s_s(((*l_818) = 1L), (-7L))) || (p_14 || (p_15 ^ (**l_781)))))))));
                        (***l_842) = func_37(((*l_816) = l_835), (p_15 == 0xD7B8E51AL), p_15, p_14, (*l_809));
                        (*****l_840) = func_37(&l_786, p_14, ((*l_818) = (p_15 == (**g_755))), (*l_809), (**g_788));
                    }
                    else
                    {
                        int *l_848 = (void*)0;
                        unsigned char *l_854 = &g_486.f5;
                        (*l_766) = ((***l_843) = func_49((safe_mod_func_uint32_t_u_u(((0L >= 0x3B0EDFEDL) == ((-1L) != func_49(l_847, l_848))), p_15)), l_848));
                        (*l_765) = ((0xB0L < p_15) <= (4294967295UL != 1UL));
                    }
                    if ((***l_780))
                        break;
                }
                else
                {
                    (*l_790) = l_792;
                    l_835 = (*l_781);
                    for (g_476.f1 = 0; (g_476.f1 <= 49); ++g_476.f1)
                    {
                        g_859 = g_858;
                        (***g_301) = (**g_302);
                    }
                }
                for (g_525 = 0; (g_525 != (-7)); g_525--)
                {
                    short l_864 = (-5L);
                    struct S0 *****l_867 = &l_866;
                    char *l_868 = &l_814;
                    short ***l_870 = &g_257;
                    int *l_882 = &g_776.f2;
                    int **l_889 = (void*)0;
                    int **l_890 = &g_70;
                    const struct S0 **l_893 = (void*)0;
                    const struct S0 **l_895 = &l_891;
                    (****l_841) = l_835;
                    if ((func_49((p_15 <= (p_15 || ((g_428.f2 | ((l_864 > 0xB6AAL) <= (func_49(p_15, ((**l_843) = &g_36)) != ((*l_868) = (+((*l_818) = (l_865 != l_867))))))) == g_776.f2))), &g_36) ^ (*g_756)))
                    {
                        short ***l_869 = &g_257;
                        short ***l_872 = &g_257;
                        short ****l_871 = &l_872;
                        int l_877 = (-4L);
                        unsigned char *l_878 = (void*)0;
                        unsigned char *l_879 = &g_657.f5;
                        int **l_884 = &l_731;
                        struct S0 ***l_886 = &g_148;
                        if (p_14)
                            break;
                        (*l_884) = (**l_780);
                        (***g_455) = (***g_455);
                        (*l_886) = l_885;
                    }
                    else
                    {
                        const int **l_887 = &g_174;
                        const int **l_888 = &l_719;
                        (*l_888) = ((*l_887) = l_882);
                        (*l_887) = l_882;
                        (**l_843) = (void*)0;
                        (**g_426) = (**g_426);
                    }
                    (*l_890) = (**l_780);
                    (*l_895) = l_891;
                }
                (***l_842) = &l_786;
            }
        }
    }
    (*l_902) = (***l_779);
    (*l_903) = (***l_779);
    return p_14;
}







static char func_22(short p_23, unsigned p_24, int p_25, unsigned char p_26, short p_27)
{
    int *l_442 = &g_36;
    int *l_443 = &g_208.f2;
    short *l_446 = &g_85;
    struct S0 **l_522 = &g_149;
    unsigned short ***l_531 = (void*)0;
    int l_571 = 0L;
    int * const * const l_599 = &l_442;
    int * const * const *l_598 = &l_599;
    unsigned l_644 = 0x6DF83289L;
    if ((safe_add_func_int32_t_s_s(p_27, (safe_add_func_int8_t_s_s((p_23 || (*g_258)), p_25)))))
    {
        unsigned l_447 = 1UL;
        int *l_448 = &g_390.f2;
        char *l_459 = &g_353;
        p_25 = 0xD28A6E83L;
        l_443 = l_443;
        (*g_191) = func_37(l_448, (*l_448), (*l_448), (*l_442), (**g_237));
    }
    else
    {
        struct S0 ***l_464 = &g_148;
        unsigned * const l_465 = &g_350;
        int l_473 = 8L;
        int *l_510 = &g_208.f2;
        int l_511 = 0x5F396184L;
        char **l_529 = (void*)0;
        unsigned short l_572 = 0x9F5DL;
        unsigned l_588 = 0xB5B1CF8DL;
        unsigned short l_602 = 0x1B8BL;
        int **l_709 = &l_443;
        int **l_710 = (void*)0;
        int **l_711 = (void*)0;
        int **l_712 = &g_287;
        if (p_26)
        {
            int ***l_490 = &g_69;
            int ****l_489 = &l_490;
            int *****l_488 = &l_489;
            int ******l_487 = &l_488;
            unsigned l_496 = 0x565B0DABL;
            int *l_504 = (void*)0;
            int l_513 = 0x12BDEA78L;
            if ((*l_443))
            {
                for (g_390.f2 = 0; (g_390.f2 != (-15)); g_390.f2--)
                {
                    (*g_273) = func_49((safe_lshift_func_uint16_t_u_s(0x0E5CL, ((void*)0 == l_464))), l_442);
                    (****g_455) = (l_465 == (void*)0);
                }
                g_466 = (****g_301);
                (*g_73) = g_467;
            }
            else
            {
                struct S0 ***l_468 = &g_148;
                struct S0 ****l_469 = &l_464;
                struct S0 ****l_470 = (void*)0;
                struct S0 ***l_472 = &g_148;
                struct S0 ****l_471 = &l_472;
                int l_491 = (-4L);
                int *l_514 = &l_513;
                if (((0x66A0L <= ((l_468 = &g_148) == ((*l_471) = ((*l_469) = l_464)))) && l_473))
                {
                    for (g_208.f5 = (-16); (g_208.f5 >= 50); g_208.f5 = safe_add_func_uint16_t_u_u(g_208.f5, 9))
                    {
                        if (p_25)
                            break;
                        (*g_73) = g_476;
                    }
                    return p_25;
                }
                else
                {
                    int l_481 = 0x3B8823D4L;
                    short ***l_508 = &g_257;
                    short ****l_507 = &l_508;
                    int l_509 = 1L;
                    int *l_512 = &g_466.f2;
                    for (g_188.f5 = 0; (g_188.f5 < 37); g_188.f5 = safe_add_func_int32_t_s_s(g_188.f5, 6))
                    {
                        char *l_482 = &g_353;
                        int l_485 = 0x475A223FL;
                        (*l_442) = ((((safe_mod_func_uint8_t_u_u((*l_442), ((*l_482) = l_481))) | ((*g_302) == &g_427)) | (safe_add_func_uint32_t_u_u(g_7, (l_481 && func_49(l_485, &l_473))))) >= l_485);
                        if (l_473)
                            continue;
                        g_486 = (*g_149);
                        (***g_455) = (****g_454);
                    }
                    if (((void*)0 != l_487))
                    {
                        char *l_492 = &g_353;
                        (**g_303) = (*g_427);
                        (*****g_454) = (g_421.f5 ^ (l_491 != ((*l_492) = p_25)));
                    }
                    else
                    {
                        int **l_494 = &g_199;
                        (*l_494) = &p_25;
                    }
                    if ((*l_443))
                    {
                        int *l_495 = &g_486.f2;
                        (*g_236) = func_37(l_443, (*l_495), p_26, p_23, (*l_442));
                    }
                    else
                    {
                        int *l_503 = &g_36;
                        l_473 = l_473;
                        (*l_443) = ((*g_258) == p_27);
                        (*g_457) = (void*)0;
                        l_503 = l_503;
                    }
                    l_514 = func_37(&l_491, ((*l_442) != 0x215CL), g_486.f3, (*l_512), l_513);
                }
                if ((*l_443))
                {
                    int *l_520 = &g_476.f2;
                    for (g_208.f4 = 0; (g_208.f4 > 5); g_208.f4 = safe_add_func_uint32_t_u_u(g_208.f4, 4))
                    {
                        int *l_517 = (void*)0;
                        const int l_521 = 0L;
                        struct S0 **l_523 = (void*)0;
                        int *l_524 = &g_525;
                        (*g_526) = func_37(l_517, ((*l_524) = (safe_lshift_func_int16_t_s_u((*g_258), (l_522 == l_523)))), g_486.f0, g_332.f5, (*g_174));
                    }
                }
                else
                {
                    unsigned short ****l_534 = (void*)0;
                    unsigned short ****l_535 = &g_532;
                    unsigned short *l_536 = &g_486.f4;
                    int l_556 = 4L;
                    if ((((((safe_add_func_uint32_t_u_u((l_529 != &g_387), (safe_unary_minus_func_uint32_t_u(g_208.f4)))) & (((*l_536) = (p_23 > (*l_514))) < p_24)) == p_24) > (*l_514)) != p_26))
                    {
                        return p_24;
                    }
                    else
                    {
                        int *l_539 = (void*)0;
                        unsigned char *l_548 = &g_96.f1;
                        int *l_555 = &g_466.f2;
                        unsigned *l_557 = &l_496;
                        int *l_558 = &g_96.f2;
                        (*g_176) = (void*)0;
                        g_538 = g_537;
                        (*g_196) = l_539;
                        l_558 = func_37(l_539, (safe_sub_func_uint32_t_u_u(((*l_465) = p_24), (safe_sub_func_int32_t_s_s(p_25, ((*l_557) = (safe_mod_func_int8_t_s_s(((((*l_514) > (((safe_lshift_func_uint8_t_u_u(((*l_548) = g_537.f0), (safe_sub_func_uint16_t_u_u((safe_sub_func_uint32_t_u_u(func_49((safe_rshift_func_uint16_t_u_u((p_26 != (func_49(((*l_442) = p_27), (l_555 = &p_25)) == (*l_514))), 11)), &l_473), l_556)), p_23)))) >= 1UL) & p_23)) && g_421.f0) || 0x742B50ECL), 1UL))))))), p_25, p_23, p_23);
                    }
                    (*g_559) = &l_491;
                }
                (*g_413) = &p_25;
                (*g_413) = &p_25;
            }
        }
        else
        {
            int *l_570 = &g_96.f2;
            char *l_573 = &g_353;
            unsigned l_690 = 0x59B9715EL;
            (*g_458) = (safe_sub_func_uint32_t_u_u((safe_sub_func_int8_t_s_s((safe_mod_func_int8_t_s_s(((*l_573) = ((safe_rshift_func_int16_t_s_s((*g_258), (safe_add_func_int8_t_s_s(p_24, func_49((**g_559), l_442))))) != ((*l_442) = func_49(((func_49((p_25 < ((*l_510) & g_208.f5)), func_37(func_37(l_570, (*l_570), p_26, (*l_510), p_25), (*l_443), (*l_570), l_571, l_572)) == g_197.f3) < (*l_443)), &g_36)))), 255UL)), 0xD9L)), 4294967289UL));
            (*g_457) = (*g_457);
            for (l_511 = 15; (l_511 >= 3); l_511--)
            {
                unsigned short l_578 = 0x1C06L;
                unsigned l_587 = 0xED615219L;
                unsigned l_589 = 0xB928C0F4L;
                l_510 = func_37(&p_25, p_27, l_589, p_24, p_26);
                (*g_273) = (-7L);
            }
            if (((*l_442) = p_27))
            {
                char l_596 = 0xEDL;
                unsigned char *l_597 = &g_390.f5;
                int * const * const **l_600 = &l_598;
                unsigned char l_601 = 0xF9L;
                int **l_603 = (void*)0;
                (*g_457) = (*g_457);
                (*g_604) = l_570;
                return p_25;
            }
            else
            {
                short *l_608 = &g_609;
                int **l_618 = &g_273;
                int * const **l_637 = (void*)0;
                int * const l_640 = &g_641;
                int * const *l_639 = &l_640;
                int * const **l_638 = &l_639;
                int ***l_642 = &l_618;
                unsigned short l_643 = 2UL;
                int *l_650 = &g_476.f2;
                struct S0 *l_671 = (void*)0;
                (*g_605) = l_570;
                (*l_618) = (**l_598);
                if (((**l_599) = (safe_lshift_func_int16_t_s_u(p_23, (((safe_lshift_func_int16_t_s_u(((*g_258) = (safe_lshift_func_int8_t_s_u((((safe_add_func_int8_t_s_s(g_466.f0, p_25)) == ((((safe_add_func_int8_t_s_s((safe_add_func_int16_t_s_s((&g_353 != &g_353), ((safe_lshift_func_int16_t_s_u((safe_lshift_func_int16_t_s_u((safe_mod_func_int8_t_s_s((((*l_638) = &g_287) == ((*l_642) = (g_69 = &g_287))), (g_96.f3 || g_332.f4))), 3)), l_643)) == g_525))), 255UL)) & (*l_510)) > (*g_174)) & 1L)) & p_25), (*l_443)))), p_27)) || 65530UL) && l_644)))))
                {
                    int *l_645 = &g_96.f2;
                    const struct S0 *l_672 = &g_673;
                    (*l_618) = (void*)0;
                    (*l_618) = (void*)0;
                    if ((*l_570))
                    {
                        (*l_618) = &l_511;
                        (*l_618) = l_645;
                        (**l_642) = func_37((**g_156), func_49((+(*g_287)), &l_473), (*l_570), (*l_570), (safe_add_func_uint32_t_u_u(4294967289UL, 0x29325D82L)));
                        (*g_69) = l_570;
                    }
                    else
                    {
                        (*g_73) = g_653;
                        (**l_522) = g_654;
                    }
                    if ((safe_mod_func_uint16_t_u_u(((**l_599) = ((*l_645) == (*l_510))), 0xF998L)))
                    {
                        unsigned short *l_659 = &g_188.f4;
                        int l_662 = (-10L);
                        unsigned char *l_663 = &g_476.f1;
                        g_658 = g_657;
                        (*g_458) = ((1L >= func_49((*l_443), func_37(func_37(&p_25, p_25, p_25, ((*l_650) = ((*l_659) = p_27)), (safe_sub_func_int32_t_s_s(0x31D6C16AL, ((*l_570) == func_49(((((*l_663) = l_662) & (*l_510)) <= (*l_570)), l_645))))), g_208.f4, p_23, (***l_598), g_664))) != 4294967295UL);
                        (*l_510) = (safe_lshift_func_int16_t_s_s(p_23, (*l_645)));
                        (*g_199) = p_24;
                    }
                    else
                    {
                        const struct S0 **l_674 = &l_672;
                        (*l_650) = ((**l_599) < (g_609 >= (safe_sub_func_int8_t_s_s(((*g_303) == (void*)0), (((l_671 = (*l_522)) != ((*l_674) = l_672)) | (!0xEC00230EL))))));
                        (*l_650) = (safe_add_func_int8_t_s_s(p_24, 9L));
                    }
                }
                else
                {
                    unsigned l_689 = 0x46A34A7AL;
                    for (g_525 = 13; (g_525 != (-25)); g_525--)
                    {
                        int *l_686 = (void*)0;
                        int **l_687 = &g_287;
                        int **l_688 = &g_70;
                        (**g_457) = ((*l_570) = ((g_421.f5 == g_657.f4) == (safe_unary_minus_func_uint16_t_u((safe_add_func_int32_t_s_s((p_25 = (*g_174)), (((safe_mod_func_uint16_t_u_u((safe_lshift_func_uint8_t_u_u(func_49(((*l_640) = ((*l_510) && ((**l_598) != (g_273 = l_443)))), &g_36), g_332.f1)), l_689)) != l_690) && p_27)))))));
                        (*l_687) = &p_25;
                        (*l_618) = &p_25;
                        (*l_688) = ((*l_687) = (*g_69));
                    }
                }
                (**l_599) = (**g_457);
            }
        }
        for (g_673.f5 = (-18); (g_673.f5 >= 36); g_673.f5++)
        {
            unsigned l_694 = 0x83F1FBC8L;
            int l_695 = 0L;
            struct S0 *l_703 = (void*)0;
            int **l_704 = &l_442;
            if ((**g_237))
            {
                (**g_426) = g_693;
                (***l_598) = (0x40B2556EL >= l_694);
            }
            else
            {
                int l_696 = 1L;
                l_695 = 1L;
                return l_696;
            }
            (*l_704) = &p_25;
            (**l_599) = (((p_23 >= (((*l_510) = p_27) == (safe_sub_func_int32_t_s_s(0xBE3A5EE8L, func_49(p_24, &l_511))))) == p_23) < (&l_446 == (void*)0));
            (**l_599) = p_26;
        }
        (*l_709) = (l_510 = (void*)0);
        (*l_712) = (*l_599);
    }
    (**g_302) = (*l_522);
    return g_208.f4;
}







static unsigned short func_32(int p_33)
{
    unsigned short l_72 = 0x0CFFL;
    int *l_198 = &g_188.f2;
    int *l_365 = &g_96.f2;
    int *l_382 = (void*)0;
    unsigned char l_395 = 0UL;
    char l_405 = 3L;
    unsigned short ***l_417 = (void*)0;
    if (p_33)
    {
        int l_34 = 0x8F9ED02EL;
        int * const l_68 = &g_36;
        int * const *l_67 = &l_68;
        int *l_359 = (void*)0;
        short l_360 = 0x888FL;
        int *l_383 = &g_197.f2;
        char *l_386 = (void*)0;
        int *l_388 = (void*)0;
        int ****l_401 = (void*)0;
        int *****l_400 = &l_401;
        int **l_414 = &l_382;
        if ((g_7 & (g_7 >= l_34)))
        {
            int *l_35 = &g_36;
            (*l_35) = g_7;
        }
        else
        {
            int **l_58 = (void*)0;
            int *l_60 = (void*)0;
            int **l_59 = &l_60;
            int ***l_71 = &g_69;
            int l_333 = (-1L);
            short l_334 = 0x0537L;
            char *l_385 = &g_140;
            char **l_384 = &l_385;
            unsigned short l_389 = 65532UL;
            l_359 = func_37(func_43(func_49(func_52(((*l_59) = &p_33), (safe_rshift_func_int8_t_s_u(((safe_mod_func_int32_t_s_s(g_36, 0xCE404D46L)) != g_7), 0)), ((p_33 < ((((safe_sub_func_uint8_t_u_u((((l_67 == ((*l_71) = g_69)) > ((g_36 ^ ((l_72 = p_33) != g_36)) >= g_7)) & p_33), g_36)) <= 6L) & g_36) & 4294967295UL)) | (*l_68)), p_33, &g_36), l_198), g_199, (*l_198), (*g_199), g_197.f2), l_333, g_208.f5, g_332.f3, l_334);
            l_360 = (*l_198);
            for (g_197.f4 = 0; (g_197.f4 != 9); ++g_197.f4)
            {
                char *l_374 = &g_353;
                const int l_375 = 0x47A2340BL;
                int **l_376 = &l_365;
                int **l_379 = &g_287;
                (*l_365) = (safe_lshift_func_int8_t_s_s(g_145.f0, 0));
                p_33 = l_375;
                (*l_59) = func_37(((*l_376) = ((*l_59) = l_198)), p_33, (safe_rshift_func_uint16_t_u_u((*l_198), ((*l_198) == (func_49(p_33, ((*l_379) = &p_33)) >= (g_350 = func_49(func_49((safe_mod_func_uint32_t_u_u((*l_198), p_33)), l_382), l_382)))))), (*l_198), p_33);
            }
            (*l_59) = func_37(l_383, (+(g_188.f4 | func_49((((*l_384) = (void*)0) != (g_387 = l_386)), l_388))), g_74.f4, (**l_59), l_389);
        }
        (*g_73) = g_390;
        for (g_140 = 0; (g_140 <= (-7)); g_140 = safe_sub_func_int8_t_s_s(g_140, 6))
        {
            char l_396 = (-6L);
            struct S0 ***l_399 = (void*)0;
            struct S0 ****l_398 = &l_399;
            for (g_188.f2 = 0; (g_188.f2 != (-21)); g_188.f2 = safe_sub_func_uint16_t_u_u(g_188.f2, 8))
            {
                struct S0 ***l_410 = &g_148;
                if (l_395)
                {
                    return l_396;
                }
                else
                {
                    unsigned *l_397 = &g_350;
                    int *****l_403 = (void*)0;
                    int *****l_404 = (void*)0;
                    if ((((*l_198) == ((*l_365) < ((*l_397) = l_396))) != ((void*)0 == l_398)))
                    {
                        int ******l_402 = (void*)0;
                        l_405 = ((l_403 = l_400) != l_404);
                    }
                    else
                    {
                        if (p_33)
                            break;
                    }
                }
                (*l_68) = (safe_sub_func_uint16_t_u_u((safe_rshift_func_int8_t_s_u((0x6B0B1ACBL > (0xE34CL && ((~((void*)0 != l_410)) | (p_33 ^ 0UL)))), 1)), (safe_rshift_func_uint16_t_u_u(p_33, g_197.f3))));
                (*g_413) = &p_33;
            }
        }
        (*l_414) = (void*)0;
    }
    else
    {
        (*g_273) = (safe_lshift_func_int8_t_s_u((*g_387), 2));
        p_33 = 0x55307FD2L;
    }
    (*g_287) = ((l_417 = l_417) == (void*)0);
    for (g_208.f5 = 0; (g_208.f5 == 53); g_208.f5++)
    {
        g_421 = g_420;
        if ((*l_198))
            break;
        for (g_85 = 0; (g_85 == 26); g_85 = safe_add_func_uint32_t_u_u(g_85, 4))
        {
            (*g_287) = (safe_rshift_func_uint8_t_u_u(g_179.f3, g_332.f4));
        }
    }
    return g_197.f2;
}







static int * func_37(int * p_38, int p_39, char p_40, unsigned short p_41, int p_42)
{
    struct S0 * const ***l_337 = (void*)0;
    int l_342 = 0L;
    char *l_343 = &g_140;
    unsigned short *l_348 = &g_208.f4;
    unsigned *l_349 = &g_350;
    int *l_351 = &g_197.f2;
    char *l_352 = &g_353;
    int *l_354 = &g_197.f2;
    int **l_357 = &g_70;
    int *l_358 = &g_96.f2;
    p_38 = &p_42;
    (*l_357) = &l_342;
    return l_358;
}







static int * func_43(short p_44, int * p_45, short p_46, int p_47, unsigned p_48)
{
    short l_200 = 0x60BBL;
    int l_201 = 0xF73C81C1L;
    int ***l_203 = &g_69;
    int ****l_202 = &l_203;
    int *l_206 = (void*)0;
    struct S0 ** const *l_220 = &g_148;
    short *l_254 = &g_85;
    short **l_253 = &l_254;
    int *l_260 = &g_208.f2;
    unsigned short l_304 = 3UL;
    unsigned short *l_328 = &l_304;
    unsigned short **l_327 = &l_328;
    (*p_45) = ((p_48 ^ (l_201 = l_200)) >= (p_47 == p_46));
    if (((*g_199) = (((*l_202) = &g_69) == (void*)0)))
    {
        int * const l_204 = &g_36;
        int **l_205 = &g_199;
        struct S0 *l_207 = &g_208;
        struct S0 **l_209 = &g_149;
        unsigned short *l_214 = &g_96.f4;
        struct S0 ** const *l_219 = &g_148;
        int l_222 = 0x7E51FD47L;
        (*l_205) = l_204;
        (**l_205) = (*p_45);
        if ((*p_45))
        {
            int *l_215 = &g_208.f2;
            struct S0 ** const **l_221 = &l_220;
            int *l_227 = &l_201;
            (**l_209) = (**l_209);
            p_45 = l_215;
            if ((safe_unary_minus_func_uint8_t_u((p_44 < ((p_48 >= (safe_lshift_func_int8_t_s_u((((l_219 != ((*l_221) = l_220)) != (((**l_205) < l_222) > (safe_mod_func_uint8_t_u_u(g_197.f3, 4UL)))) ^ (safe_lshift_func_int16_t_s_s(p_44, g_145.f3))), p_44))) <= g_96.f5)))))
            {
                (**l_205) = 1L;
                return (*l_205);
            }
            else
            {
                int *l_228 = &g_188.f2;
                (*g_191) = (void*)0;
                return l_228;
            }
        }
        else
        {
            int l_252 = 0x03523A43L;
            int *l_259 = &l_222;
            short * const *l_266 = &g_258;
            struct S0 *l_282 = &g_208;
            if ((p_47 || (safe_lshift_func_int16_t_s_u((p_44 = p_47), 7))))
            {
                char l_231 = 0x00L;
                struct S0 *l_234 = &g_96;
                const int *l_235 = &g_197.f2;
                if ((l_231 & p_46))
                {
                    for (l_222 = 19; (l_222 < 23); ++l_222)
                    {
                        (*l_209) = l_234;
                    }
                    (*g_236) = l_235;
                    (*g_237) = l_235;
                }
                else
                {
                    for (g_188.f2 = (-12); (g_188.f2 < 26); ++g_188.f2)
                    {
                        (*l_205) = &p_47;
                    }
                    (*p_45) = (safe_mod_func_int8_t_s_s(g_179.f3, g_197.f1));
                }
                for (l_222 = (-23); (l_222 <= (-18)); l_222++)
                {
                    for (l_231 = 6; (l_231 == (-29)); --l_231)
                    {
                        if ((*p_45))
                            break;
                        if ((*p_45))
                            continue;
                    }
                }
            }
            else
            {
                int *l_261 = &l_222;
                struct S0 *l_262 = &g_188;
                int *l_263 = (void*)0;
                int **l_272 = &l_259;
                int *** const l_271 = &l_272;
                int *** const *l_270 = &l_271;
                int *** const **l_269 = &l_270;
                int *l_281 = &l_222;
                (*p_45) = (**g_173);
                for (g_96.f3 = (-19); (g_96.f3 == 15); g_96.f3++)
                {
                    if ((l_252 = (safe_rshift_func_uint16_t_u_u(((*l_214) = func_49(func_49((safe_lshift_func_int16_t_s_u(g_145.f5, 0)), &p_47), ((*l_205) = &p_47))), 2))))
                    {
                        (*g_256) = l_253;
                        return l_260;
                    }
                    else
                    {
                        (*l_205) = l_261;
                    }
                    if ((*l_259))
                        continue;
                    (*l_259) = (-5L);
                    (*l_209) = (*l_209);
                }
                (*l_209) = l_262;
                if ((*p_45))
                {
                    int *l_275 = &l_201;
                    if ((**l_272))
                    {
                        (***l_270) = (*l_205);
                    }
                    else
                    {
                        int *****l_274 = &l_202;
                        (***l_271) = (((*l_274) = (void*)0) == (void*)0);
                        p_45 = ((****l_269) = (**l_271));
                        return &g_36;
                    }
                }
                else
                {
                    struct S0 *l_278 = &g_96;
                    int *l_279 = &l_201;
                    (****l_269) = l_259;
                    for (p_47 = (-25); (p_47 >= (-23)); p_47 = safe_add_func_uint32_t_u_u(p_47, 2))
                    {
                        const unsigned char l_280 = 0UL;
                        (*l_209) = l_278;
                    }
                    p_45 = l_281;
                }
            }
            l_282 = l_282;
            if (((*g_174) || ((((g_188.f0 & 1L) && p_48) & 0xEAD3L) < ((safe_rshift_func_int16_t_s_u((((void*)0 == g_287) == ((((((void*)0 == &g_7) & (*l_204)) != (**l_205)) & 0xF6F1L) | p_47)), 14)) || 0x63E400F4L))))
            {
                (*l_205) = &p_47;
            }
            else
            {
                (*l_259) = (safe_rshift_func_int16_t_s_u((safe_add_func_int32_t_s_s(0x106F96AAL, p_47)), 12));
                for (l_201 = (-6); (l_201 == 26); l_201 = safe_add_func_int8_t_s_s(l_201, 5))
                {
                    (**l_205) = (p_47 == (safe_add_func_uint32_t_u_u((*l_259), 0x0922C1D3L)));
                }
                (*l_205) = l_259;
            }
        }
    }
    else
    {
        unsigned short *l_297 = &g_197.f4;
        unsigned short **l_296 = &l_297;
        struct S0 ****l_300 = (void*)0;
        int *l_306 = &g_96.f2;
        unsigned short ***l_329 = &l_296;
        l_296 = (void*)0;
        if ((((*p_45) | g_75.f2) >= ((safe_lshift_func_uint8_t_u_u((l_300 != g_301), 3)) <= func_49(l_304, &g_36))))
        {
            int *l_305 = &l_201;
            l_305 = l_305;
            l_306 = &p_47;
            (*l_260) = (**g_236);
        }
        else
        {
            unsigned short l_309 = 0xFE7BL;
            short **l_314 = (void*)0;
            int *l_319 = &g_96.f2;
            (*p_45) = (&p_45 != (void*)0);
            if ((l_309 < (0x91A9L > ((*l_297) = p_48))))
            {
                short ***l_315 = &l_253;
                int *l_318 = &l_201;
                (*p_45) = (*p_45);
                if (((safe_mod_func_int16_t_s_s((safe_rshift_func_int8_t_s_u((*l_260), 2)), (p_46 && 0xDFL))) > (((*l_315) = l_314) == (*g_256))))
                {
                    unsigned char l_316 = 0x92L;
                    int **l_317 = &g_70;
                    (*l_306) = func_49(l_316, l_306);
                    (*l_317) = l_306;
                    (*l_317) = &p_47;
                    return l_319;
                }
                else
                {
                    return l_306;
                }
            }
            else
            {
                int *l_320 = &g_36;
                return l_320;
            }
        }
        (*g_287) = ((safe_add_func_uint32_t_u_u((safe_lshift_func_uint16_t_u_u(g_188.f2, ((*l_297) = (((func_49((*p_45), &p_47) & p_47) == p_44) == (safe_sub_func_int8_t_s_s((((*l_329) = l_327) != &l_328), (safe_lshift_func_uint8_t_u_s(0x69L, p_48)))))))), g_85)) || p_48);
        (*p_45) = (*g_174);
    }
    (***g_302) = g_332;
    return &g_36;
}







static short func_49(int p_50, int * p_51)
{
    return p_50;
}







static int func_52(int * p_53, const short p_54, short p_55, const int p_56, int * p_57)
{
    unsigned l_78 = 4294967295UL;
    int ***l_81 = &g_69;
    unsigned short l_111 = 0UL;
    short *l_127 = (void*)0;
    if ((*g_70))
    {
        (*g_69) = p_57;
        (*g_69) = p_57;
        g_73 = g_73;
    }
    else
    {
        unsigned l_86 = 0x89503A5AL;
        struct S0 *l_98 = &g_96;
        const int *l_106 = &g_96.f2;
        int l_175 = 0x191750CCL;
        (*g_73) = g_75;
        if (((*g_69) != p_53))
        {
            char l_83 = 1L;
            short *l_84 = &g_85;
            struct S0 *l_95 = &g_96;
            int l_99 = 6L;
            (*g_70) = (*g_70);
            (*g_70) = (g_75.f5 <= (safe_lshift_func_uint16_t_u_u((((~l_78) && (safe_mod_func_int16_t_s_s((g_82 = ((void*)0 == l_81)), 0x2C22L))) <= ((g_36 & ((*l_84) = ((**g_69) <= l_83))) & (*p_57))), 4)));
            if ((*p_53))
            {
                int *l_87 = &g_36;
                if (l_86)
                {
                    (**l_81) = l_87;
                    for (l_86 = (-8); (l_86 < 46); l_86 = safe_add_func_int32_t_s_s(l_86, 7))
                    {
                        (*g_69) = p_57;
                    }
                }
                else
                {
                    unsigned l_92 = 4294967295UL;
                    struct S0 **l_97 = &l_95;
                    (*p_53) = ((safe_rshift_func_int16_t_s_u(((*l_84) = l_92), (safe_rshift_func_uint8_t_u_s((g_96.f1 = ((((*l_97) = l_95) != l_98) ^ (((*l_87) = g_75.f2) > 255UL))), p_56)))) | (g_82 != p_54));
                    l_99 = (*p_53);
                }
                (**l_81) = (**l_81);
            }
            else
            {
                return (**g_69);
            }
            p_53 = p_57;
        }
        else
        {
            unsigned l_110 = 1UL;
            struct S0 **l_146 = &l_98;
            short l_159 = (-6L);
            const int *l_171 = &g_96.f2;
            for (g_96.f4 = (-26); (g_96.f4 > 32); g_96.f4 = safe_add_func_int32_t_s_s(g_96.f4, 1))
            {
                (***l_81) = (***l_81);
            }
            if ((*g_70))
            {
                short **l_128 = (void*)0;
                short **l_129 = &l_127;
                short *l_131 = &g_85;
                short **l_130 = &l_131;
                int l_134 = 0x4D6F6C97L;
                char *l_139 = &g_140;
                int *l_142 = (void*)0;
                for (l_78 = (-14); (l_78 < 37); ++l_78)
                {
                    for (p_55 = 0; (p_55 <= 13); ++p_55)
                    {
                        const int **l_107 = &l_106;
                        (*l_107) = l_106;
                        (*l_107) = (*g_69);
                        (*l_107) = (*g_69);
                    }
                    for (g_82 = (-12); (g_82 <= 27); ++g_82)
                    {
                        unsigned char l_112 = 0x80L;
                        if (l_110)
                            break;
                        (*g_69) = (*g_69);
                        l_112 = ((*p_53) = l_111);
                        if ((*g_70))
                            continue;
                    }
                    for (g_85 = 0; (g_85 > 28); g_85++)
                    {
                        (***l_81) = (safe_rshift_func_uint8_t_u_u(g_82, 5));
                        (**l_81) = p_57;
                    }
                }
                (*g_144) = ((***l_81) = (safe_add_func_int8_t_s_s(g_96.f0, (~(safe_rshift_func_int16_t_s_s((safe_add_func_int32_t_s_s((safe_sub_func_uint8_t_u_u((safe_rshift_func_int16_t_s_s((((*p_53) = (((*l_129) = l_127) != ((*l_130) = &g_85))) <= ((safe_mod_func_int32_t_s_s((**g_69), (l_134 || 0xB18CL))) || 1UL)), 3)), (safe_lshift_func_uint16_t_u_s(p_56, 2)))), (safe_sub_func_int8_t_s_s(((*l_139) = (((**g_69) == (-7L)) ^ g_96.f1)), g_96.f4)))), 9))))));
                (*l_98) = g_145;
            }
            else
            {
                unsigned short l_166 = 0x6C3AL;
                short **l_168 = &l_127;
                (*g_147) = l_146;
                for (g_96.f3 = (-22); (g_96.f3 <= 14); g_96.f3++)
                {
                    char *l_152 = &g_140;
                    int ** const l_155 = &g_70;
                    (*g_70) = ((*p_53) = ((***l_81) | ((*l_152) = 0x41L)));
                    for (g_96.f1 = 5; (g_96.f1 == 45); g_96.f1 = safe_add_func_uint32_t_u_u(g_96.f1, 7))
                    {
                        (*g_69) = p_57;
                        (*g_156) = l_155;
                    }
                    (*g_70) = (*p_57);
                }
                for (l_86 = (-16); (l_86 <= 56); ++l_86)
                {
                    short **l_170 = &l_127;
                    (*g_70) = (((l_159 > 8L) != g_74.f5) <= (safe_add_func_int16_t_s_s(p_54, (((g_7 || g_96.f4) || (safe_add_func_uint8_t_u_u((((*l_81) = (void*)0) != &p_53), (g_96.f5 >= 0x006BL)))) | 0xB4E2L))));
                    for (g_82 = 27; (g_82 == 56); g_82 = safe_add_func_uint32_t_u_u(g_82, 7))
                    {
                        int **l_167 = &g_70;
                        short ***l_169 = &l_168;
                    }
                }
            }
            (*g_173) = l_171;
        }
        if (l_175)
        {
            return (**g_173);
        }
        else
        {
            int *l_194 = &g_36;
            int **l_195 = &l_194;
            (*g_176) = &l_175;
            for (g_140 = 0; (g_140 == (-21)); g_140 = safe_sub_func_int32_t_s_s(g_140, 1))
            {
                int l_182 = 0L;
                short **l_183 = &l_127;
                unsigned l_184 = 0x471B29B6L;
                (*l_81) = (*g_156);
                (*g_149) = g_179;
                for (g_36 = (-27); (g_36 < (-12)); g_36 = safe_add_func_int8_t_s_s(g_36, 8))
                {
                    l_184 = (((l_182 & ((void*)0 == l_183)) < (*l_106)) && (*p_53));
                }
                if ((*l_106))
                {
                    for (g_96.f1 = (-12); (g_96.f1 == 4); g_96.f1++)
                    {
                        int **l_187 = &g_70;
                        (*l_187) = p_57;
                        (*g_73) = g_188;
                        (*g_70) = (1L == 0x8FL);
                    }
                    (*g_190) = &l_175;
                    p_53 = p_57;
                    (*g_191) = &l_175;
                }
                else
                {
                    for (g_96.f2 = 0; (g_96.f2 <= (-30)); g_96.f2 = safe_sub_func_uint16_t_u_u(g_96.f2, 1))
                    {
                        return l_182;
                    }
                    (*g_148) = (*g_148);
                    (*l_98) = (*g_73);
                    (*g_173) = p_57;
                }
            }
            (*l_195) = l_194;
        }
        (*g_196) = p_57;
    }
    (*g_73) = g_197;
    return (*p_57);
}





int main (void)
{
    int print_hash_value = 0;
    platform_main_begin();
    crc32_gentab();
    func_1();
    transparent_crc(g_7, "g_7", print_hash_value);
    transparent_crc(g_36, "g_36", print_hash_value);
    transparent_crc(g_74.f0, "g_74.f0", print_hash_value);
    transparent_crc(g_74.f1, "g_74.f1", print_hash_value);
    transparent_crc(g_74.f2, "g_74.f2", print_hash_value);
    transparent_crc(g_74.f3, "g_74.f3", print_hash_value);
    transparent_crc(g_74.f4, "g_74.f4", print_hash_value);
    transparent_crc(g_74.f5, "g_74.f5", print_hash_value);
    transparent_crc(g_75.f0, "g_75.f0", print_hash_value);
    transparent_crc(g_75.f1, "g_75.f1", print_hash_value);
    transparent_crc(g_75.f2, "g_75.f2", print_hash_value);
    transparent_crc(g_75.f3, "g_75.f3", print_hash_value);
    transparent_crc(g_75.f4, "g_75.f4", print_hash_value);
    transparent_crc(g_75.f5, "g_75.f5", print_hash_value);
    transparent_crc(g_82, "g_82", print_hash_value);
    transparent_crc(g_85, "g_85", print_hash_value);
    transparent_crc(g_96.f0, "g_96.f0", print_hash_value);
    transparent_crc(g_96.f1, "g_96.f1", print_hash_value);
    transparent_crc(g_96.f2, "g_96.f2", print_hash_value);
    transparent_crc(g_96.f3, "g_96.f3", print_hash_value);
    transparent_crc(g_96.f4, "g_96.f4", print_hash_value);
    transparent_crc(g_96.f5, "g_96.f5", print_hash_value);
    transparent_crc(g_140, "g_140", print_hash_value);
    transparent_crc(g_145.f0, "g_145.f0", print_hash_value);
    transparent_crc(g_145.f1, "g_145.f1", print_hash_value);
    transparent_crc(g_145.f2, "g_145.f2", print_hash_value);
    transparent_crc(g_145.f3, "g_145.f3", print_hash_value);
    transparent_crc(g_145.f4, "g_145.f4", print_hash_value);
    transparent_crc(g_145.f5, "g_145.f5", print_hash_value);
    transparent_crc(g_179.f0, "g_179.f0", print_hash_value);
    transparent_crc(g_179.f1, "g_179.f1", print_hash_value);
    transparent_crc(g_179.f2, "g_179.f2", print_hash_value);
    transparent_crc(g_179.f3, "g_179.f3", print_hash_value);
    transparent_crc(g_179.f4, "g_179.f4", print_hash_value);
    transparent_crc(g_179.f5, "g_179.f5", print_hash_value);
    transparent_crc(g_188.f0, "g_188.f0", print_hash_value);
    transparent_crc(g_188.f1, "g_188.f1", print_hash_value);
    transparent_crc(g_188.f2, "g_188.f2", print_hash_value);
    transparent_crc(g_188.f3, "g_188.f3", print_hash_value);
    transparent_crc(g_188.f4, "g_188.f4", print_hash_value);
    transparent_crc(g_188.f5, "g_188.f5", print_hash_value);
    transparent_crc(g_197.f0, "g_197.f0", print_hash_value);
    transparent_crc(g_197.f1, "g_197.f1", print_hash_value);
    transparent_crc(g_197.f2, "g_197.f2", print_hash_value);
    transparent_crc(g_197.f3, "g_197.f3", print_hash_value);
    transparent_crc(g_197.f4, "g_197.f4", print_hash_value);
    transparent_crc(g_197.f5, "g_197.f5", print_hash_value);
    transparent_crc(g_208.f0, "g_208.f0", print_hash_value);
    transparent_crc(g_208.f1, "g_208.f1", print_hash_value);
    transparent_crc(g_208.f2, "g_208.f2", print_hash_value);
    transparent_crc(g_208.f3, "g_208.f3", print_hash_value);
    transparent_crc(g_208.f4, "g_208.f4", print_hash_value);
    transparent_crc(g_208.f5, "g_208.f5", print_hash_value);
    transparent_crc(g_332.f0, "g_332.f0", print_hash_value);
    transparent_crc(g_332.f1, "g_332.f1", print_hash_value);
    transparent_crc(g_332.f2, "g_332.f2", print_hash_value);
    transparent_crc(g_332.f3, "g_332.f3", print_hash_value);
    transparent_crc(g_332.f4, "g_332.f4", print_hash_value);
    transparent_crc(g_332.f5, "g_332.f5", print_hash_value);
    transparent_crc(g_350, "g_350", print_hash_value);
    transparent_crc(g_353, "g_353", print_hash_value);
    transparent_crc(g_390.f0, "g_390.f0", print_hash_value);
    transparent_crc(g_390.f1, "g_390.f1", print_hash_value);
    transparent_crc(g_390.f2, "g_390.f2", print_hash_value);
    transparent_crc(g_390.f3, "g_390.f3", print_hash_value);
    transparent_crc(g_390.f4, "g_390.f4", print_hash_value);
    transparent_crc(g_390.f5, "g_390.f5", print_hash_value);
    transparent_crc(g_420.f0, "g_420.f0", print_hash_value);
    transparent_crc(g_420.f1, "g_420.f1", print_hash_value);
    transparent_crc(g_420.f2, "g_420.f2", print_hash_value);
    transparent_crc(g_420.f3, "g_420.f3", print_hash_value);
    transparent_crc(g_420.f4, "g_420.f4", print_hash_value);
    transparent_crc(g_420.f5, "g_420.f5", print_hash_value);
    transparent_crc(g_421.f0, "g_421.f0", print_hash_value);
    transparent_crc(g_421.f1, "g_421.f1", print_hash_value);
    transparent_crc(g_421.f2, "g_421.f2", print_hash_value);
    transparent_crc(g_421.f3, "g_421.f3", print_hash_value);
    transparent_crc(g_421.f4, "g_421.f4", print_hash_value);
    transparent_crc(g_421.f5, "g_421.f5", print_hash_value);
    transparent_crc(g_428.f0, "g_428.f0", print_hash_value);
    transparent_crc(g_428.f1, "g_428.f1", print_hash_value);
    transparent_crc(g_428.f2, "g_428.f2", print_hash_value);
    transparent_crc(g_428.f3, "g_428.f3", print_hash_value);
    transparent_crc(g_428.f4, "g_428.f4", print_hash_value);
    transparent_crc(g_428.f5, "g_428.f5", print_hash_value);
    transparent_crc(g_466.f0, "g_466.f0", print_hash_value);
    transparent_crc(g_466.f1, "g_466.f1", print_hash_value);
    transparent_crc(g_466.f2, "g_466.f2", print_hash_value);
    transparent_crc(g_466.f3, "g_466.f3", print_hash_value);
    transparent_crc(g_466.f4, "g_466.f4", print_hash_value);
    transparent_crc(g_466.f5, "g_466.f5", print_hash_value);
    transparent_crc(g_467.f0, "g_467.f0", print_hash_value);
    transparent_crc(g_467.f1, "g_467.f1", print_hash_value);
    transparent_crc(g_467.f2, "g_467.f2", print_hash_value);
    transparent_crc(g_467.f3, "g_467.f3", print_hash_value);
    transparent_crc(g_467.f4, "g_467.f4", print_hash_value);
    transparent_crc(g_467.f5, "g_467.f5", print_hash_value);
    transparent_crc(g_476.f0, "g_476.f0", print_hash_value);
    transparent_crc(g_476.f1, "g_476.f1", print_hash_value);
    transparent_crc(g_476.f2, "g_476.f2", print_hash_value);
    transparent_crc(g_476.f3, "g_476.f3", print_hash_value);
    transparent_crc(g_476.f4, "g_476.f4", print_hash_value);
    transparent_crc(g_476.f5, "g_476.f5", print_hash_value);
    transparent_crc(g_486.f0, "g_486.f0", print_hash_value);
    transparent_crc(g_486.f1, "g_486.f1", print_hash_value);
    transparent_crc(g_486.f2, "g_486.f2", print_hash_value);
    transparent_crc(g_486.f3, "g_486.f3", print_hash_value);
    transparent_crc(g_486.f4, "g_486.f4", print_hash_value);
    transparent_crc(g_486.f5, "g_486.f5", print_hash_value);
    transparent_crc(g_525, "g_525", print_hash_value);
    transparent_crc(g_537.f0, "g_537.f0", print_hash_value);
    transparent_crc(g_537.f1, "g_537.f1", print_hash_value);
    transparent_crc(g_537.f2, "g_537.f2", print_hash_value);
    transparent_crc(g_537.f3, "g_537.f3", print_hash_value);
    transparent_crc(g_537.f4, "g_537.f4", print_hash_value);
    transparent_crc(g_537.f5, "g_537.f5", print_hash_value);
    transparent_crc(g_538.f0, "g_538.f0", print_hash_value);
    transparent_crc(g_538.f1, "g_538.f1", print_hash_value);
    transparent_crc(g_538.f2, "g_538.f2", print_hash_value);
    transparent_crc(g_538.f3, "g_538.f3", print_hash_value);
    transparent_crc(g_538.f4, "g_538.f4", print_hash_value);
    transparent_crc(g_538.f5, "g_538.f5", print_hash_value);
    transparent_crc(g_609, "g_609", print_hash_value);
    transparent_crc(g_641, "g_641", print_hash_value);
    transparent_crc(g_653.f0, "g_653.f0", print_hash_value);
    transparent_crc(g_653.f1, "g_653.f1", print_hash_value);
    transparent_crc(g_653.f2, "g_653.f2", print_hash_value);
    transparent_crc(g_653.f3, "g_653.f3", print_hash_value);
    transparent_crc(g_653.f4, "g_653.f4", print_hash_value);
    transparent_crc(g_653.f5, "g_653.f5", print_hash_value);
    transparent_crc(g_654.f0, "g_654.f0", print_hash_value);
    transparent_crc(g_654.f1, "g_654.f1", print_hash_value);
    transparent_crc(g_654.f2, "g_654.f2", print_hash_value);
    transparent_crc(g_654.f3, "g_654.f3", print_hash_value);
    transparent_crc(g_654.f4, "g_654.f4", print_hash_value);
    transparent_crc(g_654.f5, "g_654.f5", print_hash_value);
    transparent_crc(g_657.f0, "g_657.f0", print_hash_value);
    transparent_crc(g_657.f1, "g_657.f1", print_hash_value);
    transparent_crc(g_657.f2, "g_657.f2", print_hash_value);
    transparent_crc(g_657.f3, "g_657.f3", print_hash_value);
    transparent_crc(g_657.f4, "g_657.f4", print_hash_value);
    transparent_crc(g_657.f5, "g_657.f5", print_hash_value);
    transparent_crc(g_658.f0, "g_658.f0", print_hash_value);
    transparent_crc(g_658.f1, "g_658.f1", print_hash_value);
    transparent_crc(g_658.f2, "g_658.f2", print_hash_value);
    transparent_crc(g_658.f3, "g_658.f3", print_hash_value);
    transparent_crc(g_658.f4, "g_658.f4", print_hash_value);
    transparent_crc(g_658.f5, "g_658.f5", print_hash_value);
    transparent_crc(g_664, "g_664", print_hash_value);
    transparent_crc(g_673.f0, "g_673.f0", print_hash_value);
    transparent_crc(g_673.f1, "g_673.f1", print_hash_value);
    transparent_crc(g_673.f2, "g_673.f2", print_hash_value);
    transparent_crc(g_673.f3, "g_673.f3", print_hash_value);
    transparent_crc(g_673.f4, "g_673.f4", print_hash_value);
    transparent_crc(g_673.f5, "g_673.f5", print_hash_value);
    transparent_crc(g_693.f0, "g_693.f0", print_hash_value);
    transparent_crc(g_693.f1, "g_693.f1", print_hash_value);
    transparent_crc(g_693.f2, "g_693.f2", print_hash_value);
    transparent_crc(g_693.f3, "g_693.f3", print_hash_value);
    transparent_crc(g_693.f4, "g_693.f4", print_hash_value);
    transparent_crc(g_693.f5, "g_693.f5", print_hash_value);
    transparent_crc(g_728.f0, "g_728.f0", print_hash_value);
    transparent_crc(g_728.f1, "g_728.f1", print_hash_value);
    transparent_crc(g_728.f2, "g_728.f2", print_hash_value);
    transparent_crc(g_728.f3, "g_728.f3", print_hash_value);
    transparent_crc(g_728.f4, "g_728.f4", print_hash_value);
    transparent_crc(g_728.f5, "g_728.f5", print_hash_value);
    transparent_crc(g_775.f0, "g_775.f0", print_hash_value);
    transparent_crc(g_775.f1, "g_775.f1", print_hash_value);
    transparent_crc(g_775.f2, "g_775.f2", print_hash_value);
    transparent_crc(g_775.f3, "g_775.f3", print_hash_value);
    transparent_crc(g_775.f4, "g_775.f4", print_hash_value);
    transparent_crc(g_775.f5, "g_775.f5", print_hash_value);
    transparent_crc(g_776.f0, "g_776.f0", print_hash_value);
    transparent_crc(g_776.f1, "g_776.f1", print_hash_value);
    transparent_crc(g_776.f2, "g_776.f2", print_hash_value);
    transparent_crc(g_776.f3, "g_776.f3", print_hash_value);
    transparent_crc(g_776.f4, "g_776.f4", print_hash_value);
    transparent_crc(g_776.f5, "g_776.f5", print_hash_value);
    transparent_crc(g_812, "g_812", print_hash_value);
    transparent_crc(g_858.f0, "g_858.f0", print_hash_value);
    transparent_crc(g_858.f1, "g_858.f1", print_hash_value);
    transparent_crc(g_858.f2, "g_858.f2", print_hash_value);
    transparent_crc(g_858.f3, "g_858.f3", print_hash_value);
    transparent_crc(g_858.f4, "g_858.f4", print_hash_value);
    transparent_crc(g_858.f5, "g_858.f5", print_hash_value);
    transparent_crc(g_859.f0, "g_859.f0", print_hash_value);
    transparent_crc(g_859.f1, "g_859.f1", print_hash_value);
    transparent_crc(g_859.f2, "g_859.f2", print_hash_value);
    transparent_crc(g_859.f3, "g_859.f3", print_hash_value);
    transparent_crc(g_859.f4, "g_859.f4", print_hash_value);
    transparent_crc(g_859.f5, "g_859.f5", print_hash_value);
    transparent_crc(g_904.f0, "g_904.f0", print_hash_value);
    transparent_crc(g_904.f1, "g_904.f1", print_hash_value);
    transparent_crc(g_904.f2, "g_904.f2", print_hash_value);
    transparent_crc(g_904.f3, "g_904.f3", print_hash_value);
    transparent_crc(g_904.f4, "g_904.f4", print_hash_value);
    transparent_crc(g_904.f5, "g_904.f5", print_hash_value);
    transparent_crc(g_919.f0, "g_919.f0", print_hash_value);
    transparent_crc(g_919.f1, "g_919.f1", print_hash_value);
    transparent_crc(g_919.f2, "g_919.f2", print_hash_value);
    transparent_crc(g_919.f3, "g_919.f3", print_hash_value);
    transparent_crc(g_919.f4, "g_919.f4", print_hash_value);
    transparent_crc(g_919.f5, "g_919.f5", print_hash_value);
    transparent_crc(g_939, "g_939", print_hash_value);
    transparent_crc(g_983.f0, "g_983.f0", print_hash_value);
    transparent_crc(g_983.f1, "g_983.f1", print_hash_value);
    transparent_crc(g_983.f2, "g_983.f2", print_hash_value);
    transparent_crc(g_983.f3, "g_983.f3", print_hash_value);
    transparent_crc(g_983.f4, "g_983.f4", print_hash_value);
    transparent_crc(g_983.f5, "g_983.f5", print_hash_value);
    transparent_crc(g_984, "g_984", print_hash_value);
    transparent_crc(g_1061.f0, "g_1061.f0", print_hash_value);
    transparent_crc(g_1061.f1, "g_1061.f1", print_hash_value);
    transparent_crc(g_1061.f2, "g_1061.f2", print_hash_value);
    transparent_crc(g_1061.f3, "g_1061.f3", print_hash_value);
    transparent_crc(g_1061.f4, "g_1061.f4", print_hash_value);
    transparent_crc(g_1061.f5, "g_1061.f5", print_hash_value);
    transparent_crc(g_1100.f0, "g_1100.f0", print_hash_value);
    transparent_crc(g_1100.f1, "g_1100.f1", print_hash_value);
    transparent_crc(g_1100.f2, "g_1100.f2", print_hash_value);
    transparent_crc(g_1100.f3, "g_1100.f3", print_hash_value);
    transparent_crc(g_1100.f4, "g_1100.f4", print_hash_value);
    transparent_crc(g_1100.f5, "g_1100.f5", print_hash_value);
    platform_main_end(crc32_context ^ 0xFFFFFFFFUL, print_hash_value);
    return 0;
}
