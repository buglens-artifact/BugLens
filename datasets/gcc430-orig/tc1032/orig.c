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
   unsigned f0;
   unsigned f1;
   unsigned short f2;
   unsigned f3;
   volatile unsigned char f4;
   unsigned short f5;
   unsigned f6;
   int f7;
};


static short g_5 = 6L;
static int g_7 = 9L;
static int g_18 = (-1L);
static char g_29 = 2L;
static int g_56 = 0x20B395B9L;
static int *g_55 = &g_56;
static struct S0 g_85 = {4294967292UL,4UL,0x8DE3L,4294967294UL,2UL,0x75FCL,0UL,1L};
static int g_88 = 0xBE229A0CL;
static int *g_87 = &g_88;
static unsigned char g_108 = 0xA5L;
static struct S0 g_109 = {0x07040CCAL,0UL,0xFAD4L,4294967291UL,0UL,65527UL,0xB5CE3A63L,0x677434CAL};
static char g_126 = 0L;
static struct S0 g_139 = {0x84333342L,0xDD6F46CEL,0UL,0UL,0x36L,0xF815L,1UL,-4L};
static struct S0 g_140 = {4294967295UL,4294967295UL,4UL,0x0812B24AL,6UL,0x81ACL,0xAB448763L,7L};
static volatile struct S0 g_151 = {4UL,1UL,0x53E6L,5UL,0x93L,0x2DF5L,0x47FBB040L,0x87E0A5EFL};
static short g_161 = 0L;
static int g_186 = 0xE7E88078L;
static struct S0 g_189 = {7UL,0x37DB0440L,0x41BBL,4294967295UL,255UL,0x2651L,0x99610AA6L,0x9E33AE95L};
static unsigned char g_206 = 255UL;
static unsigned g_221 = 4294967295UL;
static unsigned char g_234 = 0UL;
static char **g_245 = (void*)0;
static volatile struct S0 g_246 = {0xE86A8CA0L,1UL,0xC2ADL,5UL,8UL,0UL,0x8E08496BL,0x616CE418L};
static volatile struct S0 g_261 = {0xA9A72296L,0UL,8UL,0x541395CBL,0xBCL,0x1E50L,4294967295UL,0x281ED6BCL};
static volatile struct S0 g_262 = {0xA828AA00L,0xFFD0FE09L,1UL,1UL,0x2DL,0x9610L,4294967295UL,1L};
static struct S0 g_294 = {4294967292UL,4294967288UL,65533UL,0x957DAADAL,255UL,65529UL,0xFAD5A6DDL,0x4F156DC9L};
static volatile struct S0 g_302 = {4294967295UL,4294967295UL,0x0FDEL,8UL,0xC6L,5UL,0x746C3F0DL,0x02A2DC1FL};
static volatile struct S0 g_307 = {0xA6071FA6L,0xB818E0E8L,1UL,0xCC25EFEDL,0xC7L,2UL,4294967295UL,0L};
static volatile unsigned g_336 = 0x75444CAAL;
static struct S0 g_338 = {1UL,0x481F4E8CL,0xDC0FL,0x8D22E013L,1UL,65535UL,0x20EA0EF9L,0xF86150DFL};
static volatile int g_358 = 0x69B51EB5L;
static volatile int *g_357 = &g_358;
static volatile int **g_356 = &g_357;
static struct S0 g_361 = {4294967295UL,0x5A1C232DL,0x76BAL,4294967287UL,0xA0L,65529UL,2UL,1L};
static struct S0 g_418 = {0xDBE3D278L,0x288F0C4BL,8UL,4294967290UL,255UL,1UL,4294967287UL,-6L};
static volatile struct S0 g_428 = {0x0E969956L,0x2E0544A2L,1UL,0x14508803L,9UL,0x099BL,3UL,0x909B225CL};
static int *g_443 = &g_7;
static int **g_442 = &g_443;
static int g_452 = 0L;
static struct S0 g_481 = {0x95419F9BL,4294967295UL,1UL,0x13ACE506L,0xACL,65535UL,4294967293UL,0L};
static unsigned **g_509 = (void*)0;
static volatile struct S0 g_523 = {0x6387E986L,1UL,0x231CL,0x532F79CCL,3UL,65535UL,4294967295UL,9L};
static struct S0 *g_543 = &g_361;
static int g_556 = (-7L);
static struct S0 g_557 = {0x710824ECL,4294967295UL,0x4D92L,0x8F8F0049L,0xF0L,0UL,0UL,0x61177807L};
static struct S0 g_583 = {1UL,0UL,0x026FL,4294967289UL,0x32L,0xC3F6L,4294967294UL,0x7C98DB7EL};
static struct S0 g_618 = {0x1CDA89CBL,0UL,9UL,0x3BE89B87L,0xA0L,0xDD81L,4294967295UL,0x8450111DL};
static struct S0 g_660 = {4294967288UL,0x9A4FBDB7L,0x4356L,0UL,0x7AL,0x24F0L,6UL,7L};
static struct S0 g_679 = {0x1626BA1EL,0x18516661L,0x389BL,1UL,0x1DL,0xB614L,4294967292UL,0x101BB919L};
static volatile struct S0 g_686 = {0x34329B7EL,0xB3434D51L,0x15F4L,4294967287UL,2UL,0x0C6FL,0x7F7D6767L,-1L};
static struct S0 g_690 = {0x87532C77L,0UL,1UL,4294967286UL,0xE7L,0x2C88L,0x20BE524BL,0xAFEEAECDL};
static struct S0 g_708 = {5UL,0UL,1UL,3UL,252UL,1UL,0x7E877C39L,0xE31EE4C4L};



static unsigned func_1(void);
static struct S0 func_2(char p_3, char p_4);
static int * func_10(int * p_11, int * p_12, int p_13, int * p_14, int p_15);
static int func_31(char * p_32, short p_33, int * p_34, unsigned short p_35);
static unsigned char func_39(unsigned char p_40, unsigned short p_41, char * p_42);
static char * func_44(int ** p_45, int * p_46, int ** p_47);
static int ** func_48(unsigned p_49, unsigned short p_50);
static struct S0 func_51(int * p_52, unsigned short p_53);
static unsigned short func_65(int * p_66, unsigned p_67, unsigned short p_68, char p_69);
static int * func_70(int p_71, int * p_72, int p_73, int * p_74, int ** p_75);
static unsigned func_1(void)
{
    struct S0 *l_709 = &g_418;
    int *l_710 = (void*)0;
    int *l_711 = &g_88;
    (*l_709) = func_2(g_5, g_5);
    (*l_711) &= ((*g_443) = (**g_442));
    return (*l_711);
}







static struct S0 func_2(char p_3, char p_4)
{
    int *l_6 = &g_7;
    char l_30 = 0x72L;
    unsigned l_576 = 0x7A2C672CL;
    int l_580 = 0x886E9F35L;
    struct S0 *l_588 = (void*)0;
    int *l_642 = &g_88;
    char ***l_705 = &g_245;
    if (((*l_6) = g_5))
    {
        int *l_16 = (void*)0;
        int *l_17 = &g_18;
        int **l_19 = (void*)0;
        int *l_21 = (void*)0;
        int **l_20 = &l_21;
        char *l_28 = &g_29;
        int *l_555 = &g_556;
        struct S0 *l_558 = (void*)0;
        struct S0 *l_559 = &g_361;
        (*l_555) &= (((*l_17) = (safe_rshift_func_int8_t_s_u((+(((l_6 != ((*g_442) = func_10((((*l_17) ^= (-8L)) , &g_7), ((*l_20) = &g_7), (g_5 == (((*l_6) = ((*l_6) && p_4)) == (safe_mod_func_uint8_t_u_u(((safe_mul_func_uint8_t_u_u((safe_lshift_func_int16_t_s_u((((((*l_28) = (l_19 == (void*)0)) >= p_3) , 6UL) > 1UL), 5)), p_4)) , l_30), p_3)))), l_6, p_4))) <= g_338.f3) || p_3)), g_418.f3))) , (-1L));
        (*l_559) = g_557;
        (*l_559) = (*l_559);
    }
    else
    {
        unsigned char l_570 = 0UL;
        short *l_573 = &g_5;
        unsigned *l_574 = &g_221;
        int *l_575 = &g_556;
        char *l_577 = &g_29;
        unsigned char *l_578 = (void*)0;
        unsigned char *l_579 = &g_108;
        char ***l_597 = &g_245;
        unsigned char l_627 = 0UL;
        int *l_672 = &g_7;
        if ((l_580 |= (safe_add_func_uint32_t_u_u((!func_65(((((*l_579) |= (((((((((safe_lshift_func_int8_t_s_u(((safe_mod_func_int32_t_s_s((((void*)0 != &g_18) ^ func_39(p_4, (((safe_lshift_func_uint8_t_u_s((safe_add_func_int16_t_s_s(func_39((p_3 > (((*l_573) = ((((*l_575) |= ((((func_39(g_246.f5, func_39((((*l_574) ^= (l_570 || ((*l_573) = (safe_mul_func_uint8_t_u_u((((l_570 < (*g_443)) | g_186) , p_4), p_4))))) , l_570), (*l_6), &l_30), &g_126) & (*g_87)) , 1L) | 255UL) | p_3)) == (*l_6)) >= 0x498BL)) , l_576)), g_139.f6, &l_30), 65532UL)), 2)) < g_294.f6) , (*l_6)), l_577)), (*g_87))) | (*l_6)), 2)) == p_3) | 0x7EL) , p_3) , 1L) > g_85.f5) || (*l_575)) & 9L) < 2L)) > (-1L)) , l_574), p_4, (*l_6), p_3)), (*l_6)))))
        {
            struct S0 *l_586 = &g_294;
            int l_601 = 0xB7EFAB41L;
            int *l_617 = &g_189.f7;
            unsigned l_631 = 0x3BE08A6CL;
            char l_645 = 0xC8L;
            int **l_647 = &g_87;
            short l_669 = 0x2116L;
            for (g_418.f2 = 0; (g_418.f2 != 43); g_418.f2++)
            {
                return g_583;
            }
        }
        else
        {
            unsigned short *l_696 = &g_618.f5;
            unsigned char *l_706 = (void*)0;
            unsigned char *l_707 = &l_627;
            for (g_139.f3 = (-23); (g_139.f3 <= 36); ++g_139.f3)
            {
                struct S0 **l_693 = &g_543;
                (*l_693) = &g_294;
            }
            (*g_357) = ((*g_443) = (safe_sub_func_uint16_t_u_u(((*l_696) = 0UL), (((*l_642) = g_686.f7) , ((g_140.f5 == (*l_575)) , (safe_sub_func_uint8_t_u_u(((*l_707) = ((*l_579) = ((g_583.f0 <= (safe_add_func_int16_t_s_s((*l_575), g_294.f5))) || (safe_rshift_func_uint16_t_u_s(((*l_6) && (((safe_lshift_func_uint8_t_u_s((l_705 != &g_245), 5)) <= (*l_6)) >= 0L)), g_679.f3))))), 249UL)))))));
        }
    }
    return g_708;
}







static int * func_10(int * p_11, int * p_12, int p_13, int * p_14, int p_15)
{
    char *l_36 = &g_29;
    int l_43 = (-2L);
    int **l_440 = &g_87;
    int *l_441 = &g_338.f7;
    int l_529 = 0x30379DDAL;
    unsigned *l_530 = &g_418.f0;
    int l_531 = 0xBB060943L;
    struct S0 *l_542 = (void*)0;
    short *l_545 = &g_5;
    (*p_11) = ((func_31(l_36, p_13, &g_18, (((((l_531 = (+(l_43 = ((*l_530) |= (((*l_36) = ((((safe_rshift_func_int8_t_s_u(g_7, func_39(((!l_43) , g_18), g_18, func_44((l_440 = func_48((&p_13 != (void*)0), l_43)), l_441, g_442)))) != 4294967295UL) , l_529) , p_15)) <= l_529))))) | p_13) , (void*)0) != &l_529) , p_13)) , 1UL) , (**g_442));
    g_543 = l_542;
    (*p_14) ^= ((0x33F0L || (p_13 , ((*l_545) = (safe_unary_minus_func_uint32_t_u(p_15))))) < (((*g_55) , (((((safe_unary_minus_func_int32_t_s(func_39(((p_15 < 5UL) , 252UL), g_151.f4, l_36))) && (-3L)) , l_36) == (void*)0) ^ p_13)) < 0xD8L));
    return (*g_442);
}







static int func_31(char * p_32, short p_33, int * p_34, unsigned short p_35)
{
    unsigned short *l_532 = &g_361.f2;
    int *l_533 = &g_452;
    short l_536 = (-1L);
    int l_537 = 0xFE198EA7L;
    unsigned l_538 = 0x3FA5466DL;
    unsigned l_541 = 0xC46FA489L;
    (*l_533) = ((*g_443) = (((*l_532) = p_35) , p_33));
    (*g_443) = (((!p_35) & (*l_533)) , p_35);
    (**g_442) = (safe_rshift_func_uint8_t_u_u(l_541, 0));
    (*g_442) = l_533;
    return (*l_533);
}







static unsigned char func_39(unsigned char p_40, unsigned short p_41, char * p_42)
{
    unsigned l_506 = 0xA2A40AB4L;
    int *l_520 = &g_361.f7;
    int **l_522 = &g_87;
    int l_524 = 0x19E9BAABL;
    int *l_528 = &l_524;
    if (l_506)
    {
        unsigned ***l_510 = (void*)0;
        unsigned ***l_511 = &g_509;
        int *l_512 = &g_7;
        for (g_85.f6 = 0; (g_85.f6 != 4); g_85.f6++)
        {
            if (p_41)
                break;
        }
        (*l_511) = g_509;
        (*g_442) = l_512;
        for (g_418.f6 = 0; (g_418.f6 != 60); g_418.f6++)
        {
            char l_517 = 1L;
            for (g_481.f1 = 0; (g_481.f1 > 48); g_481.f1++)
            {
                int *l_518 = &g_452;
                (*l_518) ^= l_517;
                return p_40;
            }
        }
    }
    else
    {
        int l_519 = 1L;
        int *l_521 = &g_481.f7;
        l_524 &= l_519;
        return g_221;
    }
    for (g_338.f7 = 24; (g_338.f7 < (-11)); g_338.f7 = safe_sub_func_int32_t_s_s(g_338.f7, 6))
    {
        char l_527 = 0xE7L;
        l_527 |= (p_40 , (g_29 == (*p_42)));
    }
    (*l_528) = p_41;
    return g_161;
}







static char * func_44(int ** p_45, int * p_46, int ** p_47)
{
    int l_446 = (-1L);
    int l_502 = 0xE55E217BL;
    int *l_503 = (void*)0;
    int *l_504 = (void*)0;
    char *l_505 = &g_126;
    (*g_356) = (*g_356);
    for (g_189.f6 = 0; (g_189.f6 == 45); g_189.f6 = safe_add_func_int32_t_s_s(g_189.f6, 5))
    {
        unsigned char l_460 = 0x8AL;
        char l_474 = 0L;
        short l_476 = 0x880FL;
        short l_480 = 0x9CF4L;
        unsigned short *l_494 = &g_140.f5;
        int l_499 = 0xB3322A08L;
        if (((((g_139.f5 , 0xE4881454L) || (**p_47)) , (-3L)) ^ (l_446 | 0xF900L)))
        {
            volatile struct S0 *l_447 = &g_428;
            int l_459 = 0x03008ED1L;
            unsigned char l_469 = 0x93L;
            (*l_447) = g_307;
            for (g_189.f1 = 8; (g_189.f1 >= 21); g_189.f1++)
            {
                unsigned l_475 = 0x32EED176L;
                for (g_109.f3 = 0; (g_109.f3 != 27); g_109.f3 = safe_add_func_uint8_t_u_u(g_109.f3, 2))
                {
                    int *l_461 = &l_446;
                    int *l_464 = &g_88;
                    char *l_467 = &g_126;
                    unsigned short *l_468 = &g_85.f5;
                    if (g_452)
                        break;
                    (*g_442) = func_70((safe_sub_func_uint8_t_u_u(((safe_add_func_int8_t_s_s((safe_mod_func_int32_t_s_s(l_459, ((*l_461) |= (l_460 = (**p_47))))), 0xF7L)) <= ((safe_mod_func_uint32_t_u_u(5UL, ((*l_464) = l_459))) && ((*l_467) = (safe_sub_func_int16_t_s_s(l_459, (~g_246.f2)))))), (l_469 = ((~((*l_468) = l_459)) , 1UL)))), &g_56, (*p_46), p_46, &l_464);
                    (*l_464) = (((g_85.f0 , g_262.f4) , ((safe_rshift_func_uint8_t_u_s((((safe_add_func_int16_t_s_s(l_459, l_474)) , (l_459 = (g_307.f6 != (((**g_442) = (g_109.f6 ^ g_161)) < l_459)))) != l_475), l_476)) < g_361.f2)) , (*l_464));
                    (*l_464) ^= ((safe_rshift_func_int8_t_s_s((((safe_unary_minus_func_int16_t_s(((void*)0 == &g_245))) ^ l_475) && (l_476 , ((!(~(**p_47))) , (((*l_461) = (l_480 , 4L)) , g_7)))), 7)) == ((g_481 , g_189.f5) , (-5L)));
                }
            }
        }
        else
        {
            unsigned l_488 = 0x7297B09AL;
            unsigned short *l_493 = &g_294.f5;
            int *l_500 = (void*)0;
            int *l_501 = &g_452;
            (*l_501) ^= ((((((l_460 , (7UL != ((safe_rshift_func_int16_t_s_s(((safe_mod_func_int8_t_s_s(0xBEL, l_446)) , (safe_mod_func_uint32_t_u_u(l_488, ((safe_mul_func_uint16_t_u_u(l_488, (~(safe_rshift_func_uint16_t_u_s((l_493 == l_494), 2))))) , (safe_add_func_int8_t_s_s((safe_rshift_func_uint8_t_u_s(((*p_47) == (*p_47)), 5)), l_446)))))), 12)) & l_488))) ^ l_488) > l_488) , l_499) <= l_488) , (**p_47));
            if ((*l_501))
                break;
        }
    }
    g_88 ^= l_502;
    return l_505;
}







static int ** func_48(unsigned p_49, unsigned short p_50)
{
    int *l_54 = &g_18;
    int *l_81 = &g_7;
    int **l_80 = &l_81;
    int **l_82 = &l_81;
    unsigned l_373 = 1UL;
    int l_378 = 0xE88A4265L;
    int l_379 = 0x83BA15FAL;
    int l_385 = 0x82488655L;
    char *l_404 = &g_29;
    int l_408 = 1L;
    unsigned l_414 = 0x8F7840E0L;
    if ((((func_51((g_55 = l_54), ((safe_rshift_func_int16_t_s_s((safe_add_func_int16_t_s_s((safe_lshift_func_int16_t_s_u((safe_rshift_func_int16_t_s_u(g_56, 5)), ((void*)0 != &g_29))), func_65(func_70(p_49, l_54, ((((safe_mul_func_uint16_t_u_u((((safe_lshift_func_int8_t_s_u(((void*)0 != l_80), (l_82 != (void*)0))) > (-10L)) < 3L), (**l_82))) | p_49) || p_50) <= p_49), &g_56, &l_81), (**l_82), (**l_80), g_139.f3))), 8)) || 4294967295UL)) , p_50) || (**l_80)) , (**l_82)))
    {
        return &g_87;
    }
    else
    {
        struct S0 *l_362 = &g_140;
        int *l_365 = &g_140.f7;
        unsigned short l_391 = 65532UL;
        int l_405 = (-1L);
        int l_432 = 4L;
        (*l_362) = g_361;
        for (g_294.f7 = 0; (g_294.f7 != (-7)); g_294.f7 = safe_sub_func_int16_t_s_s(g_294.f7, 1))
        {
            int **l_366 = &g_55;
            short *l_370 = &g_161;
            int l_415 = 1L;
        }
    }
    (*g_357) = (l_385 |= (((*l_81) & ((void*)0 == &g_356)) ^ (safe_add_func_int16_t_s_s(p_49, g_261.f0))));
    (*g_356) = (void*)0;
    return &g_87;
}







static struct S0 func_51(int * p_52, unsigned short p_53)
{
    (*g_357) = (p_53 , p_53);
    return g_151;
}







static unsigned short func_65(int * p_66, unsigned p_67, unsigned short p_68, char p_69)
{
    unsigned short l_197 = 0x4840L;
    int l_209 = 0L;
    char *l_254 = &g_29;
    unsigned char *l_259 = &g_234;
    unsigned char l_260 = 3UL;
    unsigned *l_316 = &g_85.f0;
    unsigned l_321 = 0x37839183L;
    short *l_326 = (void*)0;
    int **l_359 = &g_87;
    int **l_360 = &g_87;
    if ((*g_87))
    {
        struct S0 *l_190 = &g_189;
        (*l_190) = g_189;
    }
    else
    {
        struct S0 *l_191 = &g_109;
        int **l_192 = &g_87;
        int l_210 = 0xA685A1DFL;
        unsigned l_244 = 0xA80779CCL;
lbl_193:
        (*l_191) = g_189;
        (*l_192) = &g_7;
        if (((**l_192) || (-7L)))
        {
            int *l_194 = (void*)0;
            (*l_191) = g_140;
            if (g_7)
                goto lbl_193;
            (*l_192) = l_194;
        }
        else
        {
            unsigned l_211 = 2UL;
            int l_250 = 0x9016659DL;
            int *l_253 = &l_250;
            for (g_108 = 0; (g_108 != 26); g_108 = safe_add_func_uint16_t_u_u(g_108, 7))
            {
                short l_208 = 5L;
                int l_214 = 1L;
                if (l_197)
                    break;
                for (g_186 = 0; (g_186 == 29); g_186 = safe_add_func_int32_t_s_s(g_186, 7))
                {
                    char l_200 = (-5L);
                    int **l_201 = (void*)0;
                    int ***l_202 = &l_192;
                    unsigned char *l_205 = &g_206;
                    char *l_207 = &l_200;
                    (*l_202) = (l_200 , l_201);
                    l_210 |= (l_209 = ((safe_lshift_func_uint8_t_u_s(((*l_205) &= g_140.f2), ((*l_207) |= ((*g_87) || (*g_87))))) | l_208));
                    if (((l_214 = (l_211 && (safe_sub_func_int8_t_s_s(((*l_207) = (-7L)), l_211)))) && p_69))
                    {
                        unsigned *l_219 = (void*)0;
                        unsigned *l_220 = &g_221;
                        struct S0 *l_228 = &g_189;
                        unsigned char *l_233 = &g_234;
                        int *l_235 = &l_214;
                        char **l_247 = &l_207;
                        int **l_251 = &l_235;
                        if ((*g_87))
                            break;
                        (*l_235) = (safe_sub_func_uint8_t_u_u((g_206 = (safe_add_func_int16_t_s_s((l_211 != (*g_87)), (((*l_220) = l_208) , 0x8A90L)))), (safe_lshift_func_int8_t_s_u((-8L), (safe_rshift_func_uint8_t_u_u(((*l_233) = (safe_rshift_func_int16_t_s_s((((l_228 == (g_7 , (void*)0)) != (safe_mod_func_uint32_t_u_u((safe_lshift_func_uint16_t_u_s(g_140.f4, 9)), (*g_87)))) , p_69), 6))), p_67))))));
                        l_250 = (safe_lshift_func_uint8_t_u_s(((l_209 , (*g_87)) == (safe_sub_func_int16_t_s_s((~p_67), ((safe_lshift_func_int8_t_s_u(((safe_rshift_func_uint8_t_u_u(l_244, (((g_245 != (g_246 , l_247)) < ((((p_69 ^ ((*l_235) = (safe_mod_func_uint16_t_u_u(4UL, g_189.f6)))) , 0x5CBCC48FL) & g_139.f6) , l_209)) & (*g_87)))) >= p_68), 1)) ^ p_68)))), 7));
                        (*l_251) = &g_7;
                    }
                    else
                    {
                        int *l_252 = (void*)0;
                        l_252 = p_66;
                    }
                }
            }
            (*l_253) |= p_68;
        }
    }
lbl_297:
    g_88 = (&g_29 == l_254);
    if (((safe_mul_func_uint16_t_u_u(((l_209 , 4294967289UL) , ((l_197 >= (((((p_67 , (p_68 > (safe_sub_func_int8_t_s_s(0xF9L, p_69)))) ^ ((*l_259) = (l_209 = g_189.f4))) > l_260) ^ 3UL) , 9L)) && p_69)), g_109.f3)) ^ 255UL))
    {
        return g_234;
    }
    else
    {
        short l_265 = (-1L);
        char **l_266 = &l_254;
        unsigned short *l_267 = &g_189.f2;
        short *l_270 = (void*)0;
        short *l_271 = &g_161;
        int l_280 = 0x637826DAL;
        g_262 = g_261;
        if ((((safe_rshift_func_uint16_t_u_u((((l_265 , ((l_260 | ((*l_271) = ((((((*l_267) = (l_266 == g_245)) , ((l_260 == g_139.f5) == g_56)) >= (-1L)) && ((safe_add_func_uint8_t_u_u((p_67 | 0x36L), p_68)) <= l_260)) & 0x3BL))) != p_67)) > 6UL) , p_67), l_197)) && p_69) ^ l_265))
        {
            int l_283 = (-1L);
            int *l_288 = (void*)0;
            for (p_67 = (-20); (p_67 == 53); p_67 = safe_add_func_int8_t_s_s(p_67, 6))
            {
                char l_274 = 0x7FL;
                int *l_277 = &l_209;
                (*l_277) = (g_234 , (l_274 == (safe_rshift_func_uint16_t_u_u(p_68, g_151.f2))));
                l_280 ^= (safe_add_func_int16_t_s_s(l_265, l_260));
            }
            for (g_161 = 0; (g_161 > (-28)); g_161 = safe_sub_func_int16_t_s_s(g_161, 9))
            {
                char l_289 = 1L;
                int l_290 = 0x4404513EL;
                int **l_296 = &g_87;
                if (l_283)
                    break;
                for (p_67 = 0; (p_67 == 49); p_67 = safe_add_func_int8_t_s_s(p_67, 1))
                {
                    int l_293 = 0x81C5EE8DL;
                    l_290 = ((safe_add_func_uint32_t_u_u(p_67, (0x62FA0CCBL <= (l_288 != &g_186)))) , ((g_139.f6 &= p_67) < l_289));
                    for (g_189.f3 = 0; (g_189.f3 == 53); g_189.f3 = safe_add_func_int32_t_s_s(g_189.f3, 9))
                    {
                        struct S0 *l_295 = &g_85;
                        l_290 = l_293;
                        (*l_295) = g_294;
                    }
                }
                (*l_296) = p_66;
            }
            return p_68;
        }
        else
        {
            char l_301 = (-1L);
            unsigned char l_312 = 1UL;
            if (g_294.f2)
                goto lbl_297;
            for (g_109.f0 = 17; (g_109.f0 < 56); ++g_109.f0)
            {
                int **l_300 = &g_87;
                short *l_327 = &g_5;
                (*l_300) = p_66;
                if (p_67)
                {
                    int *l_313 = &l_280;
                    char *l_322 = &l_301;
                    if (l_301)
                    {
                        volatile struct S0 *l_303 = &g_246;
                        int l_306 = (-6L);
                        (*l_303) = g_302;
                        l_306 = (safe_rshift_func_int16_t_s_u(0x3051L, 3));
                        if ((*g_87))
                            break;
                        if (l_306)
                            break;
                    }
                    else
                    {
                        l_280 &= ((p_68 , (((+p_69) , ((((g_307 , (*g_87)) , 2L) == ((l_209 == (safe_sub_func_uint8_t_u_u(((((p_68 , (void*)0) == (void*)0) , l_301) & 0x66C8D2CAL), 0xACL))) <= (-1L))) == (*g_87))) & g_85.f2)) >= l_301);
                        (*l_300) = &g_88;
                    }
                    for (g_85.f5 = 12; (g_85.f5 <= 13); g_85.f5 = safe_add_func_uint32_t_u_u(g_85.f5, 3))
                    {
                        return (**l_300);
                    }
                    (*l_313) &= l_312;
                    if ((safe_rshift_func_int16_t_s_s((l_316 != &p_67), (g_294.f1 > (safe_mod_func_int16_t_s_s((safe_rshift_func_int16_t_s_s((l_321 && ((((*l_316) = (((*l_254) ^= (**l_300)) <= ((*l_313) = (p_68 && (0xE8L || g_18))))) , ((*l_267) = 65531UL)) , (-5L))), 6)), (-1L)))))))
                    {
                        (*l_313) ^= (*g_87);
                    }
                    else
                    {
                        char *l_323 = &g_29;
                        (*l_300) = &l_209;
                        (*l_313) = ((((((~(g_261 , ((*l_267) = ((void*)0 == &l_301)))) , p_69) | (*l_313)) , ((((*g_87) = (l_322 != ((p_69 , (g_85 , ((*l_254) = g_234))) , &p_69))) , l_323) == (void*)0)) , 1UL) < p_67);
                    }
                }
                else
                {
                    char l_330 = 0xB1L;
                    l_209 ^= (l_330 = ((*g_87) ^ (safe_mul_func_uint16_t_u_u((g_18 <= ((l_312 > (((l_326 = (void*)0) == l_327) ^ ((((**l_266) = p_69) > g_126) , (g_294 , (safe_sub_func_uint32_t_u_u(g_151.f0, p_69)))))) <= (-1L))), g_56))));
                    if ((*g_87))
                        continue;
                }
                if (p_67)
                {
                    int *l_337 = &l_209;
                    (*l_337) &= ((!(safe_unary_minus_func_int16_t_s((safe_lshift_func_uint8_t_u_s(p_67, (safe_rshift_func_int8_t_s_u(g_7, 4))))))) <= g_336);
                }
                else
                {
                    struct S0 *l_339 = &g_140;
                    int *l_340 = &l_209;
                    int *l_341 = &g_88;
                    (*l_339) = g_338;
                    (*l_341) = ((*l_340) = (~p_67));
                    l_209 = (safe_lshift_func_uint8_t_u_s((l_209 <= (((safe_mul_func_int8_t_s_s((p_66 == (void*)0), (safe_mod_func_int16_t_s_s(((safe_sub_func_uint8_t_u_u(((*g_87) ^ (p_68 , p_68)), ((0xD9ACDC3DL || (safe_rshift_func_uint16_t_u_u(0x9D89L, 7))) < (safe_add_func_uint32_t_u_u(0xC7AB0D69L, p_69))))) & 4294967295UL), p_69)))) && p_67) | 4294967294UL)), 7));
                    for (g_85.f5 = (-6); (g_85.f5 != 30); g_85.f5++)
                    {
                        (*l_341) = (*g_87);
                    }
                }
            }
        }
    }
    (*l_360) = (*l_360);
    return p_69;
}







static int * func_70(int p_71, int * p_72, int p_73, int * p_74, int ** p_75)
{
    unsigned short l_107 = 65535UL;
    int l_135 = 0x25C753BBL;
    int l_164 = 6L;
    char *l_172 = &g_29;
    char *l_182 = (void*)0;
    for (g_5 = (-5); (g_5 < 14); ++g_5)
    {
        struct S0 *l_86 = &g_85;
        int l_116 = 0xF7977D32L;
        unsigned l_124 = 4294967295UL;
        char **l_173 = &l_172;
        unsigned char *l_174 = (void*)0;
        unsigned char *l_175 = &g_108;
        unsigned short *l_183 = (void*)0;
        unsigned short *l_184 = &g_109.f5;
        unsigned short *l_185 = &g_140.f5;
        int *l_187 = &l_135;
        int *l_188 = &g_88;
        (*l_86) = g_85;
        g_87 = (*p_75);
        if ((~((safe_rshift_func_int16_t_s_s(0xBE2DL, (+5L))) < (safe_mul_func_int16_t_s_s((g_108 |= (((safe_sub_func_int16_t_s_s(p_73, ((safe_mul_func_int16_t_s_s(g_18, (((*l_86) , p_73) , ((~(safe_rshift_func_int8_t_s_s(((((safe_lshift_func_int8_t_s_u((safe_add_func_int16_t_s_s(0xDADCL, (safe_sub_func_uint32_t_u_u(((safe_add_func_uint8_t_u_u(p_71, p_71)) == 248UL), (*g_87))))), 3)) | p_73) == g_88) & l_107), g_85.f2))) , 0x86BCL)))) && p_73))) , p_73) < 0x54L)), 0xD161L)))))
        {
            char *l_125 = &g_126;
            int l_127 = 0x455C58EAL;
            (*l_86) = g_109;
            if (((safe_lshift_func_uint16_t_u_s(((((safe_rshift_func_int8_t_s_u((safe_lshift_func_uint16_t_u_u((g_5 ^ ((g_29 = l_116) & g_85.f3)), 8)), 2)) != (((*l_125) = (safe_rshift_func_uint8_t_u_u((((*g_87) > 3L) , (safe_add_func_int8_t_s_s(((**p_75) != (safe_unary_minus_func_uint8_t_u((safe_add_func_int16_t_s_s(g_109.f0, p_73))))), 0x1AL))), l_124))) | p_73)) && 7UL) > (-6L)), l_127)) , 0x91CC1712L))
            {
                int *l_134 = (void*)0;
                if ((**p_75))
                    break;
                l_135 ^= (safe_mod_func_int8_t_s_s((safe_rshift_func_uint16_t_u_u(g_18, 7)), ((*l_125) &= (safe_lshift_func_uint8_t_u_s(g_18, g_109.f0)))));
            }
            else
            {
                char l_136 = 1L;
                short *l_157 = (void*)0;
                short *l_158 = (void*)0;
                short *l_159 = (void*)0;
                short *l_160 = &g_161;
                int l_162 = (-1L);
                if (l_136)
                    break;
                l_116 = (*g_87);
                for (l_127 = 0; (l_127 != (-2)); l_127 = safe_sub_func_uint16_t_u_u(l_127, 9))
                {
                    int *l_141 = &l_135;
                    unsigned *l_144 = &g_139.f6;
                    g_140 = g_139;
                    (*l_141) = (*g_87);
                    (*l_141) = (p_71 == (g_109.f2 ^ (safe_add_func_int32_t_s_s(((l_116 ^= (p_73 && (l_86 == (void*)0))) | 0L), (((*l_144) ^= 0xDEDC864EL) <= (**p_75))))));
                }
                l_127 ^= ((safe_rshift_func_uint8_t_u_u((((*g_87) > (((safe_sub_func_uint32_t_u_u(p_71, p_73)) , (g_151 , g_109.f0)) == ((safe_unary_minus_func_uint16_t_u((safe_sub_func_int16_t_s_s((p_71 , (l_162 = (p_73 > ((safe_add_func_uint16_t_u_u((g_85.f5 ^= (g_140.f0 != ((*l_160) |= (l_135 &= p_71)))), 3L)) , p_73)))), g_139.f3)))) >= g_7))) == l_136), 0)) >= 0xD0L);
            }
        }
        else
        {
            int *l_163 = &l_116;
            short *l_165 = (void*)0;
            short *l_166 = &g_161;
            char *l_167 = &g_126;
            (*l_163) ^= ((**p_75) == (g_151.f4 , l_107));
            (*l_163) ^= (((*l_166) = (p_71 < (g_140.f0 && (+(g_109.f3 != l_164))))) , (*g_87));
            (*l_163) |= ((g_139.f2 = (g_85 , (((*l_167) = l_124) & p_71))) <= l_164);
            return &g_56;
        }
        (*l_188) = ((*l_187) = ((((g_139.f5 = (safe_rshift_func_uint16_t_u_u(((*l_185) = (p_71 , ((*l_184) = ((safe_mul_func_uint8_t_u_u((l_124 , (((*l_173) = l_172) != (void*)0)), ((*l_175) = p_71))) > (safe_mod_func_int16_t_s_s((safe_add_func_uint32_t_u_u(((safe_rshift_func_uint8_t_u_s(((&g_126 == (l_182 = l_182)) <= l_124), l_164)) == 65531UL), (*g_87))), g_85.f3)))))), g_186))) && 0x657FL) , l_124) == p_71));
    }
    return &g_186;
}





int main (int argc, char* argv[])
{
    int print_hash_value = 0;
    if (argc == 2 && strcmp(argv[1], "1") == 0) print_hash_value = 1;
    platform_main_begin();
    crc32_gentab();
    func_1();
    transparent_crc(g_5, "g_5", print_hash_value);
    transparent_crc(g_7, "g_7", print_hash_value);
    transparent_crc(g_18, "g_18", print_hash_value);
    transparent_crc(g_29, "g_29", print_hash_value);
    transparent_crc(g_56, "g_56", print_hash_value);
    transparent_crc(g_85.f0, "g_85.f0", print_hash_value);
    transparent_crc(g_85.f1, "g_85.f1", print_hash_value);
    transparent_crc(g_85.f2, "g_85.f2", print_hash_value);
    transparent_crc(g_85.f3, "g_85.f3", print_hash_value);
    transparent_crc(g_85.f4, "g_85.f4", print_hash_value);
    transparent_crc(g_85.f5, "g_85.f5", print_hash_value);
    transparent_crc(g_85.f6, "g_85.f6", print_hash_value);
    transparent_crc(g_85.f7, "g_85.f7", print_hash_value);
    transparent_crc(g_88, "g_88", print_hash_value);
    transparent_crc(g_108, "g_108", print_hash_value);
    transparent_crc(g_109.f0, "g_109.f0", print_hash_value);
    transparent_crc(g_109.f1, "g_109.f1", print_hash_value);
    transparent_crc(g_109.f2, "g_109.f2", print_hash_value);
    transparent_crc(g_109.f3, "g_109.f3", print_hash_value);
    transparent_crc(g_109.f4, "g_109.f4", print_hash_value);
    transparent_crc(g_109.f5, "g_109.f5", print_hash_value);
    transparent_crc(g_109.f6, "g_109.f6", print_hash_value);
    transparent_crc(g_109.f7, "g_109.f7", print_hash_value);
    transparent_crc(g_126, "g_126", print_hash_value);
    transparent_crc(g_139.f0, "g_139.f0", print_hash_value);
    transparent_crc(g_139.f1, "g_139.f1", print_hash_value);
    transparent_crc(g_139.f2, "g_139.f2", print_hash_value);
    transparent_crc(g_139.f3, "g_139.f3", print_hash_value);
    transparent_crc(g_139.f4, "g_139.f4", print_hash_value);
    transparent_crc(g_139.f5, "g_139.f5", print_hash_value);
    transparent_crc(g_139.f6, "g_139.f6", print_hash_value);
    transparent_crc(g_139.f7, "g_139.f7", print_hash_value);
    transparent_crc(g_140.f0, "g_140.f0", print_hash_value);
    transparent_crc(g_140.f1, "g_140.f1", print_hash_value);
    transparent_crc(g_140.f2, "g_140.f2", print_hash_value);
    transparent_crc(g_140.f3, "g_140.f3", print_hash_value);
    transparent_crc(g_140.f4, "g_140.f4", print_hash_value);
    transparent_crc(g_140.f5, "g_140.f5", print_hash_value);
    transparent_crc(g_140.f6, "g_140.f6", print_hash_value);
    transparent_crc(g_140.f7, "g_140.f7", print_hash_value);
    transparent_crc(g_151.f0, "g_151.f0", print_hash_value);
    transparent_crc(g_151.f1, "g_151.f1", print_hash_value);
    transparent_crc(g_151.f2, "g_151.f2", print_hash_value);
    transparent_crc(g_151.f3, "g_151.f3", print_hash_value);
    transparent_crc(g_151.f4, "g_151.f4", print_hash_value);
    transparent_crc(g_151.f5, "g_151.f5", print_hash_value);
    transparent_crc(g_151.f6, "g_151.f6", print_hash_value);
    transparent_crc(g_151.f7, "g_151.f7", print_hash_value);
    transparent_crc(g_161, "g_161", print_hash_value);
    transparent_crc(g_186, "g_186", print_hash_value);
    transparent_crc(g_189.f0, "g_189.f0", print_hash_value);
    transparent_crc(g_189.f1, "g_189.f1", print_hash_value);
    transparent_crc(g_189.f2, "g_189.f2", print_hash_value);
    transparent_crc(g_189.f3, "g_189.f3", print_hash_value);
    transparent_crc(g_189.f4, "g_189.f4", print_hash_value);
    transparent_crc(g_189.f5, "g_189.f5", print_hash_value);
    transparent_crc(g_189.f6, "g_189.f6", print_hash_value);
    transparent_crc(g_189.f7, "g_189.f7", print_hash_value);
    transparent_crc(g_206, "g_206", print_hash_value);
    transparent_crc(g_221, "g_221", print_hash_value);
    transparent_crc(g_234, "g_234", print_hash_value);
    transparent_crc(g_246.f0, "g_246.f0", print_hash_value);
    transparent_crc(g_246.f1, "g_246.f1", print_hash_value);
    transparent_crc(g_246.f2, "g_246.f2", print_hash_value);
    transparent_crc(g_246.f3, "g_246.f3", print_hash_value);
    transparent_crc(g_246.f4, "g_246.f4", print_hash_value);
    transparent_crc(g_246.f5, "g_246.f5", print_hash_value);
    transparent_crc(g_246.f6, "g_246.f6", print_hash_value);
    transparent_crc(g_246.f7, "g_246.f7", print_hash_value);
    transparent_crc(g_261.f0, "g_261.f0", print_hash_value);
    transparent_crc(g_261.f1, "g_261.f1", print_hash_value);
    transparent_crc(g_261.f2, "g_261.f2", print_hash_value);
    transparent_crc(g_261.f3, "g_261.f3", print_hash_value);
    transparent_crc(g_261.f4, "g_261.f4", print_hash_value);
    transparent_crc(g_261.f5, "g_261.f5", print_hash_value);
    transparent_crc(g_261.f6, "g_261.f6", print_hash_value);
    transparent_crc(g_261.f7, "g_261.f7", print_hash_value);
    transparent_crc(g_262.f0, "g_262.f0", print_hash_value);
    transparent_crc(g_262.f1, "g_262.f1", print_hash_value);
    transparent_crc(g_262.f2, "g_262.f2", print_hash_value);
    transparent_crc(g_262.f3, "g_262.f3", print_hash_value);
    transparent_crc(g_262.f4, "g_262.f4", print_hash_value);
    transparent_crc(g_262.f5, "g_262.f5", print_hash_value);
    transparent_crc(g_262.f6, "g_262.f6", print_hash_value);
    transparent_crc(g_262.f7, "g_262.f7", print_hash_value);
    transparent_crc(g_294.f0, "g_294.f0", print_hash_value);
    transparent_crc(g_294.f1, "g_294.f1", print_hash_value);
    transparent_crc(g_294.f2, "g_294.f2", print_hash_value);
    transparent_crc(g_294.f3, "g_294.f3", print_hash_value);
    transparent_crc(g_294.f4, "g_294.f4", print_hash_value);
    transparent_crc(g_294.f5, "g_294.f5", print_hash_value);
    transparent_crc(g_294.f6, "g_294.f6", print_hash_value);
    transparent_crc(g_294.f7, "g_294.f7", print_hash_value);
    transparent_crc(g_302.f0, "g_302.f0", print_hash_value);
    transparent_crc(g_302.f1, "g_302.f1", print_hash_value);
    transparent_crc(g_302.f2, "g_302.f2", print_hash_value);
    transparent_crc(g_302.f3, "g_302.f3", print_hash_value);
    transparent_crc(g_302.f4, "g_302.f4", print_hash_value);
    transparent_crc(g_302.f5, "g_302.f5", print_hash_value);
    transparent_crc(g_302.f6, "g_302.f6", print_hash_value);
    transparent_crc(g_302.f7, "g_302.f7", print_hash_value);
    transparent_crc(g_307.f0, "g_307.f0", print_hash_value);
    transparent_crc(g_307.f1, "g_307.f1", print_hash_value);
    transparent_crc(g_307.f2, "g_307.f2", print_hash_value);
    transparent_crc(g_307.f3, "g_307.f3", print_hash_value);
    transparent_crc(g_307.f4, "g_307.f4", print_hash_value);
    transparent_crc(g_307.f5, "g_307.f5", print_hash_value);
    transparent_crc(g_307.f6, "g_307.f6", print_hash_value);
    transparent_crc(g_307.f7, "g_307.f7", print_hash_value);
    transparent_crc(g_336, "g_336", print_hash_value);
    transparent_crc(g_338.f0, "g_338.f0", print_hash_value);
    transparent_crc(g_338.f1, "g_338.f1", print_hash_value);
    transparent_crc(g_338.f2, "g_338.f2", print_hash_value);
    transparent_crc(g_338.f3, "g_338.f3", print_hash_value);
    transparent_crc(g_338.f4, "g_338.f4", print_hash_value);
    transparent_crc(g_338.f5, "g_338.f5", print_hash_value);
    transparent_crc(g_338.f6, "g_338.f6", print_hash_value);
    transparent_crc(g_338.f7, "g_338.f7", print_hash_value);
    transparent_crc(g_358, "g_358", print_hash_value);
    transparent_crc(g_361.f0, "g_361.f0", print_hash_value);
    transparent_crc(g_361.f1, "g_361.f1", print_hash_value);
    transparent_crc(g_361.f2, "g_361.f2", print_hash_value);
    transparent_crc(g_361.f3, "g_361.f3", print_hash_value);
    transparent_crc(g_361.f4, "g_361.f4", print_hash_value);
    transparent_crc(g_361.f5, "g_361.f5", print_hash_value);
    transparent_crc(g_361.f6, "g_361.f6", print_hash_value);
    transparent_crc(g_361.f7, "g_361.f7", print_hash_value);
    transparent_crc(g_418.f0, "g_418.f0", print_hash_value);
    transparent_crc(g_418.f1, "g_418.f1", print_hash_value);
    transparent_crc(g_418.f2, "g_418.f2", print_hash_value);
    transparent_crc(g_418.f3, "g_418.f3", print_hash_value);
    transparent_crc(g_418.f4, "g_418.f4", print_hash_value);
    transparent_crc(g_418.f5, "g_418.f5", print_hash_value);
    transparent_crc(g_418.f6, "g_418.f6", print_hash_value);
    transparent_crc(g_418.f7, "g_418.f7", print_hash_value);
    transparent_crc(g_428.f0, "g_428.f0", print_hash_value);
    transparent_crc(g_428.f1, "g_428.f1", print_hash_value);
    transparent_crc(g_428.f2, "g_428.f2", print_hash_value);
    transparent_crc(g_428.f3, "g_428.f3", print_hash_value);
    transparent_crc(g_428.f4, "g_428.f4", print_hash_value);
    transparent_crc(g_428.f5, "g_428.f5", print_hash_value);
    transparent_crc(g_428.f6, "g_428.f6", print_hash_value);
    transparent_crc(g_428.f7, "g_428.f7", print_hash_value);
    transparent_crc(g_452, "g_452", print_hash_value);
    transparent_crc(g_481.f0, "g_481.f0", print_hash_value);
    transparent_crc(g_481.f1, "g_481.f1", print_hash_value);
    transparent_crc(g_481.f2, "g_481.f2", print_hash_value);
    transparent_crc(g_481.f3, "g_481.f3", print_hash_value);
    transparent_crc(g_481.f4, "g_481.f4", print_hash_value);
    transparent_crc(g_481.f5, "g_481.f5", print_hash_value);
    transparent_crc(g_481.f6, "g_481.f6", print_hash_value);
    transparent_crc(g_481.f7, "g_481.f7", print_hash_value);
    transparent_crc(g_523.f0, "g_523.f0", print_hash_value);
    transparent_crc(g_523.f1, "g_523.f1", print_hash_value);
    transparent_crc(g_523.f2, "g_523.f2", print_hash_value);
    transparent_crc(g_523.f3, "g_523.f3", print_hash_value);
    transparent_crc(g_523.f4, "g_523.f4", print_hash_value);
    transparent_crc(g_523.f5, "g_523.f5", print_hash_value);
    transparent_crc(g_523.f6, "g_523.f6", print_hash_value);
    transparent_crc(g_523.f7, "g_523.f7", print_hash_value);
    transparent_crc(g_556, "g_556", print_hash_value);
    transparent_crc(g_557.f0, "g_557.f0", print_hash_value);
    transparent_crc(g_557.f1, "g_557.f1", print_hash_value);
    transparent_crc(g_557.f2, "g_557.f2", print_hash_value);
    transparent_crc(g_557.f3, "g_557.f3", print_hash_value);
    transparent_crc(g_557.f4, "g_557.f4", print_hash_value);
    transparent_crc(g_557.f5, "g_557.f5", print_hash_value);
    transparent_crc(g_557.f6, "g_557.f6", print_hash_value);
    transparent_crc(g_557.f7, "g_557.f7", print_hash_value);
    transparent_crc(g_583.f0, "g_583.f0", print_hash_value);
    transparent_crc(g_583.f1, "g_583.f1", print_hash_value);
    transparent_crc(g_583.f2, "g_583.f2", print_hash_value);
    transparent_crc(g_583.f3, "g_583.f3", print_hash_value);
    transparent_crc(g_583.f4, "g_583.f4", print_hash_value);
    transparent_crc(g_583.f5, "g_583.f5", print_hash_value);
    transparent_crc(g_583.f6, "g_583.f6", print_hash_value);
    transparent_crc(g_583.f7, "g_583.f7", print_hash_value);
    transparent_crc(g_618.f0, "g_618.f0", print_hash_value);
    transparent_crc(g_618.f1, "g_618.f1", print_hash_value);
    transparent_crc(g_618.f2, "g_618.f2", print_hash_value);
    transparent_crc(g_618.f3, "g_618.f3", print_hash_value);
    transparent_crc(g_618.f4, "g_618.f4", print_hash_value);
    transparent_crc(g_618.f5, "g_618.f5", print_hash_value);
    transparent_crc(g_618.f6, "g_618.f6", print_hash_value);
    transparent_crc(g_618.f7, "g_618.f7", print_hash_value);
    transparent_crc(g_660.f0, "g_660.f0", print_hash_value);
    transparent_crc(g_660.f1, "g_660.f1", print_hash_value);
    transparent_crc(g_660.f2, "g_660.f2", print_hash_value);
    transparent_crc(g_660.f3, "g_660.f3", print_hash_value);
    transparent_crc(g_660.f4, "g_660.f4", print_hash_value);
    transparent_crc(g_660.f5, "g_660.f5", print_hash_value);
    transparent_crc(g_660.f6, "g_660.f6", print_hash_value);
    transparent_crc(g_660.f7, "g_660.f7", print_hash_value);
    transparent_crc(g_679.f0, "g_679.f0", print_hash_value);
    transparent_crc(g_679.f1, "g_679.f1", print_hash_value);
    transparent_crc(g_679.f2, "g_679.f2", print_hash_value);
    transparent_crc(g_679.f3, "g_679.f3", print_hash_value);
    transparent_crc(g_679.f4, "g_679.f4", print_hash_value);
    transparent_crc(g_679.f5, "g_679.f5", print_hash_value);
    transparent_crc(g_679.f6, "g_679.f6", print_hash_value);
    transparent_crc(g_679.f7, "g_679.f7", print_hash_value);
    transparent_crc(g_686.f0, "g_686.f0", print_hash_value);
    transparent_crc(g_686.f1, "g_686.f1", print_hash_value);
    transparent_crc(g_686.f2, "g_686.f2", print_hash_value);
    transparent_crc(g_686.f3, "g_686.f3", print_hash_value);
    transparent_crc(g_686.f4, "g_686.f4", print_hash_value);
    transparent_crc(g_686.f5, "g_686.f5", print_hash_value);
    transparent_crc(g_686.f6, "g_686.f6", print_hash_value);
    transparent_crc(g_686.f7, "g_686.f7", print_hash_value);
    transparent_crc(g_690.f0, "g_690.f0", print_hash_value);
    transparent_crc(g_690.f1, "g_690.f1", print_hash_value);
    transparent_crc(g_690.f2, "g_690.f2", print_hash_value);
    transparent_crc(g_690.f3, "g_690.f3", print_hash_value);
    transparent_crc(g_690.f4, "g_690.f4", print_hash_value);
    transparent_crc(g_690.f5, "g_690.f5", print_hash_value);
    transparent_crc(g_690.f6, "g_690.f6", print_hash_value);
    transparent_crc(g_690.f7, "g_690.f7", print_hash_value);
    transparent_crc(g_708.f0, "g_708.f0", print_hash_value);
    transparent_crc(g_708.f1, "g_708.f1", print_hash_value);
    transparent_crc(g_708.f2, "g_708.f2", print_hash_value);
    transparent_crc(g_708.f3, "g_708.f3", print_hash_value);
    transparent_crc(g_708.f4, "g_708.f4", print_hash_value);
    transparent_crc(g_708.f5, "g_708.f5", print_hash_value);
    transparent_crc(g_708.f6, "g_708.f6", print_hash_value);
    transparent_crc(g_708.f7, "g_708.f7", print_hash_value);
    platform_main_end(crc32_context ^ 0xFFFFFFFFUL, print_hash_value);
    return 0;
}
