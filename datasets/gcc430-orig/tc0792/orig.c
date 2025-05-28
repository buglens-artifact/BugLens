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
   int f0;
   const volatile int f1;
};

union U1 {
   int f0;
   volatile char * volatile f1;
   const unsigned char f2;
   struct S0 f3;
   short f4;
};

union U2 {
   int f0;
   const volatile int f1;
   const volatile unsigned short f2;
};

union U3 {
   signed f0 : 22;
   struct S0 f1;
};


static volatile unsigned short g_7 = 0xF2FDL;
static char *g_22 = (void*)0;
static char g_30 = (-1L);
static unsigned char g_33 = 253UL;
static volatile int g_36 = 6L;
static int g_50 = (-1L);
static int g_62 = 0x63F7CEC7L;
static union U1 g_78 = {0x74C111BEL};
static volatile int g_120 = 0x613E184AL;
static short *g_141 = &g_78.f4;
static short * volatile *g_140 = &g_141;
static short * volatile ** volatile g_142 = &g_140;
static struct S0 g_164 = {0L,0x28F58BFBL};
static volatile union U2 g_165 = {2L};
static union U2 g_183 = {0xB62C0939L};
static volatile unsigned g_186 = 4294967295UL;
static volatile unsigned *g_185 = &g_186;
static int g_192 = 1L;
static volatile int g_199 = 0xAF48925BL;
static volatile union U2 g_206 = {0x73C81C1EL};
static struct S0 g_216 = {7L,0x50F49279L};
static unsigned g_222 = 0xE345E967L;
static int g_227 = 1L;
static volatile int *g_232 = (void*)0;
static volatile int ** volatile g_231 = &g_232;
static volatile struct S0 g_233 = {0xD2540276L,0x7CF728D4L};
static union U2 g_234 = {0x00C7963AL};
static int * volatile g_239 = &g_183.f0;
static union U3 g_250 = {-3L};
static union U3 g_259 = {-1L};
static unsigned short g_262 = 0x24AFL;
static unsigned short g_265 = 1UL;
static unsigned char g_277 = 0UL;
static int *g_282 = &g_183.f0;
static int ** volatile g_281 = &g_282;
static volatile unsigned char g_285 = 0xFBL;
static unsigned char g_320 = 255UL;
static union U2 ** volatile g_322 = (void*)0;
static volatile struct S0 g_334 = {0x68B8C2CDL,0x695A7DD3L};
static volatile struct S0 g_335 = {0x0F163D53L,1L};
static union U3 g_336 = {0xB44842A3L};
static int ** volatile g_341 = &g_282;
static volatile union U2 g_350 = {0L};
static union U2 g_364 = {0x62457B24L};
static volatile union U3 g_372 = {0x2F90A0EEL};
static union U2 *g_397 = (void*)0;
static union U2 ** volatile g_396 = &g_397;
static volatile union U2 g_401 = {0xB0C2FF71L};
static char g_438 = 1L;
static const union U1 g_478 = {0x1C9F8534L};
static const union U1 *g_477 = &g_478;
static union U3 ** volatile g_482 = (void*)0;
static union U2 *g_516 = (void*)0;
static volatile int ** volatile g_534 = &g_232;
static volatile union U1 g_542 = {0xC71EAD5DL};
static union U3 *g_549 = &g_250;
static union U3 ** volatile g_548 = &g_549;
static union U2 g_571 = {0xE215B427L};
static union U2 g_573 = {-3L};
static volatile union U3 g_574 = {0L};
static struct S0 g_585 = {0L,0x1886731CL};
static struct S0 g_588 = {0x6BBA75F5L,0x8E91A2BFL};
static volatile union U1 g_592 = {5L};
static volatile union U1 g_596 = {0xAF2BF19CL};
static union U1 g_618 = {0x98925843L};
static int * volatile g_646 = (void*)0;
static int * volatile g_647 = &g_227;
static union U1 g_651 = {0x48BCF51CL};
static char g_658 = 0x43L;
static int * volatile g_667 = &g_216.f0;
static volatile int ** volatile g_669 = (void*)0;
static unsigned g_711 = 9UL;
static struct S0 g_714 = {0x9FEF1D39L,0x26B3615CL};
static unsigned *g_723 = (void*)0;
static unsigned **g_722 = &g_723;
static unsigned *** volatile g_721 = &g_722;
static unsigned g_729 = 0UL;
static unsigned char **g_734 = (void*)0;
static struct S0 *g_769 = &g_588;
static struct S0 ** volatile g_768 = &g_769;
static volatile union U2 g_773 = {6L};
static int g_852 = (-2L);
static union U1 g_879 = {-1L};
static unsigned short *g_900 = &g_265;
static unsigned short **g_899 = &g_900;
static char g_938 = (-1L);
static int ** const volatile g_940 = &g_282;
static union U3 g_941 = {0L};
static volatile struct S0 g_958 = {0xFB6896DBL,0xD506A310L};
static struct S0 g_961 = {0x3671FA00L,-7L};
static int ** volatile g_963 = &g_282;
static struct S0 g_972 = {1L,-4L};
static volatile struct S0 g_973 = {0xA78170C6L,0xE6DF96B7L};
static union U2 g_986 = {-9L};
static const volatile union U1 g_988 = {1L};
static int ** volatile g_1004 = &g_282;
static volatile union U1 g_1007 = {1L};
static unsigned *g_1026 = &g_711;
static unsigned **g_1025 = &g_1026;
static const volatile union U1 g_1050 = {9L};
static struct S0 g_1051 = {-6L,9L};
static struct S0 g_1054 = {0xBFFE9805L,1L};
static short g_1059 = 0x0888L;
static volatile union U3 g_1072 = {0x0009357EL};
static volatile struct S0 g_1081 = {0x4C06AFF0L,0x73116A95L};
static volatile union U2 g_1092 = {-1L};
static int **g_1104 = &g_282;
static int *** volatile g_1103 = &g_1104;
static union U1 g_1113 = {0x6E70F3E9L};
static union U3 g_1131 = {0x0D826A97L};
static const volatile unsigned g_1134 = 0xFD9EF073L;
static union U1 g_1142 = {1L};
static union U2 g_1146 = {0xA3286B59L};
static struct S0 g_1147 = {0L,0L};
static volatile union U1 g_1181 = {0x2B675ECEL};
static int * const volatile g_1225 = &g_1147.f0;
static union U1 g_1231 = {1L};
static union U1 g_1233 = {0xB1A2375EL};
static union U1 *g_1232 = &g_1233;
static volatile short * volatile *g_1248 = (void*)0;
static volatile short * volatile **g_1247 = &g_1248;
static unsigned g_1256 = 7UL;
static union U1 **g_1269 = &g_1232;
static union U1 *** volatile g_1268 = &g_1269;
static volatile union U2 g_1278 = {0xCB530244L};
static const unsigned g_1281 = 0UL;
static unsigned g_1321 = 0x846B9CFEL;
static union U2 g_1330 = {0x226E97CAL};



static int func_1(void);
static struct S0 func_2(unsigned char p_3);
static union U3 func_13(char * const p_14, unsigned char p_15, char * p_16);
static char * func_17(char * p_18, unsigned char p_19, char * p_20, char p_21);
static char * func_23(char * p_24, char * p_25, char * p_26, unsigned p_27, char p_28);
static int func_37(char p_38);
static short func_41(int p_42, char * p_43, short p_44);
static char * func_52(unsigned char * p_53, int p_54, char * p_55);
static short func_56(int * p_57, unsigned char * p_58, char * p_59, char p_60);
static unsigned short func_69(unsigned char p_70, unsigned p_71, unsigned char * p_72, int * p_73, unsigned p_74);
static int func_1(void)
{
    int l_6 = 0x85ED0657L;
    unsigned char l_1219 = 4UL;
    unsigned char *l_1220 = &l_1219;
    unsigned char *l_1221 = (void*)0;
    short **l_1223 = &g_141;
    short ***l_1222 = &l_1223;
    char l_1224 = 0xBBL;
    int l_1277 = 0xE47558EDL;
    int l_1282 = 0x8584792EL;
    int *l_1283 = (void*)0;
    int *l_1284 = &l_6;
    unsigned char *l_1314 = &l_1219;
    if ((((func_2((safe_sub_func_uint8_t_u_u(l_6, g_7))) , (safe_div_func_uint8_t_u_u(l_6, (func_2((((g_33 = ((*l_1220) = l_1219)) == (!(l_6 >= 1UL))) | ((void*)0 != l_1222))) , l_6)))) , 7UL) == l_1224))
    {
        int *l_1226 = &g_585.f0;
        int *l_1227 = &g_50;
lbl_1228:
        (*g_1225) &= (*g_282);
        (*l_1227) ^= ((*l_1226) = (**g_940));
        l_6 = (*l_1226);
        if (g_585.f0)
            goto lbl_1228;
    }
    else
    {
        unsigned short l_1229 = 7UL;
        union U1 *l_1230 = &g_1231;
        short l_1249 = (-3L);
        int *l_1272 = &g_651.f3.f0;
        int * const l_1273 = &g_183.f0;
        if ((*g_282))
        {
            union U1 **l_1234 = &g_1232;
            int *l_1235 = &g_1131.f1.f0;
            int *l_1236 = &g_573.f0;
            unsigned short **l_1257 = &g_900;
            volatile int **l_1264 = &g_232;
            (*l_1236) ^= (((***l_1222) = (l_1229 | func_41(l_1229, &l_1224, l_6))) >= ((((((*g_899) != (*g_899)) < (l_1230 != ((*l_1234) = g_1232))) , (**g_1104)) && 0x354A3056L) >= (*g_282)));

            (*l_1236) = ((*l_1235) = 0x0F7B8682L);
            if ((safe_add_func_uint8_t_u_u(0x78L, (0xF78601CDL <= (((((**g_899) = (**g_899)) ^ (safe_add_func_uint32_t_u_u(func_37(l_1229), (safe_div_func_uint16_t_u_u((safe_sub_func_uint8_t_u_u(((l_1229 <= (g_1247 == &g_1248)) || l_1249), g_618.f4)), (*l_1236)))))) || 4294967287UL) , 0xC84D646FL)))))
            {
                int l_1252 = (-1L);
                for (g_1054.f0 = (-2); (g_1054.f0 <= 13); g_1054.f0 = safe_add_func_uint16_t_u_u(g_1054.f0, 1))
                {
                    unsigned l_1255 = 0xF52AE6FFL;
                    unsigned short ***l_1258 = &l_1257;
                    unsigned char *l_1263 = &g_320;
                    (*g_1104) = l_1236;

                    ;
                    (*l_1235) = l_1252;
                    (**g_1104) ^= (safe_sub_func_int32_t_s_s(l_1255, (((g_1256 , &g_900) == ((*l_1258) = l_1257)) | (+l_1229))));
                }

                ;
            }
            else
            {
                return g_199;
            }

            ;
            (*l_1264) = (*g_534);
        }
        else
        {
            union U1 **l_1267 = &g_1232;
            int l_1276 = (-6L);
            for (g_1059 = 0; (g_1059 < (-5)); g_1059 = safe_sub_func_uint32_t_u_u(g_1059, 9))
            {
                (*g_1268) = l_1267;
            }
            (**g_1104) |= (safe_sub_func_int8_t_s_s((-1L), ((l_1272 = (*g_940)) == l_1273)));

            ;
            l_1282 |= ((l_6 <= ((g_972.f1 != g_478.f4) , (((safe_sub_func_int32_t_s_s(((*g_282) = ((l_1277 ^= l_1276) != ((g_1278 , (*g_647)) && (0x51B0FE06L <= 0xC54EDEE7L)))), (g_222 = (safe_div_func_int32_t_s_s(((0x67L != g_651.f0) ^ 0L), l_1276))))) | 0UL) , l_1224))) , g_1281);
        }

        ;
        ;
    }

    ;
    (*l_1284) ^= (**g_1004);
    for (g_50 = 0; (g_50 == 6); ++g_50)
    {
        int l_1289 = 0x6D159A1CL;
        int l_1290 = 0x72FD1893L;
        short *l_1305 = &g_1231.f4;
        char *l_1310 = &g_30;
        unsigned short ***l_1311 = &g_899;
    }
    return g_1278.f2;
}







static struct S0 func_2(unsigned char p_3)
{
    unsigned short l_12 = 0xCC47L;
    char *l_29 = &g_30;
    char *l_31 = &g_30;
    unsigned char *l_32 = &g_33;
    int l_34 = 0L;
    char **l_862 = (void*)0;
    char **l_863 = &l_31;
    char *l_937 = &g_938;
    int *l_952 = &g_879.f3.f0;
    int *l_953 = &g_573.f0;
    struct S0 ** const l_1056 = &g_769;
    char *l_1079 = &g_438;
    short **l_1150 = &g_141;
    unsigned l_1208 = 0xE0F70225L;
    return (**l_1056);
}







static union U3 func_13(char * const p_14, unsigned char p_15, char * p_16)
{
    int l_946 = 8L;
    if (p_15)
    {
        int *l_939 = (void*)0;
        (*g_940) = l_939;

        ;
        return g_941;

            }
    else
    {
        unsigned short l_947 = 0xC169L;
        int *l_950 = (void*)0;
        int l_951 = 0L;
        l_951 = ((((safe_lshift_func_int16_t_s_u(((***g_142) , 0x260BL), 9)) > (((*p_16) || (safe_div_func_uint32_t_u_u(l_946, l_947))) > ((l_947 <= (safe_add_func_int32_t_s_s(((**g_140) || (*g_141)), p_15))) , l_947))) | l_946) && (*g_667));
    }
    return (**g_548);

    }







static char * func_17(char * p_18, unsigned char p_19, char * p_20, char p_21)
{
    unsigned l_868 = 0xAC029ABEL;
    unsigned char *l_869 = &g_277;
    unsigned char *l_877 = &g_320;
    union U1 *l_878 = &g_879;
    unsigned short l_880 = 65535UL;
    union U3 **l_887 = &g_549;
    union U3 **l_888 = &g_549;
    unsigned short *l_889 = &g_262;
    const unsigned *l_891 = &g_222;
    const unsigned **l_890 = &l_891;
    int l_919 = (-3L);
    char *l_926 = (void*)0;
    (*g_647) = (safe_rshift_func_int16_t_s_u((safe_add_func_uint8_t_u_u(((*l_869) = l_868), (safe_rshift_func_uint16_t_u_s((g_265 = 0x7A57L), (safe_add_func_int16_t_s_s(((((0xEB44406BL ^ (safe_unary_minus_func_uint32_t_u((safe_lshift_func_uint16_t_u_s((((*l_877) = g_234.f1) != ((l_878 != (((*l_889) |= (l_880 & ((safe_mod_func_uint16_t_u_u((((((safe_div_func_uint32_t_u_u((l_880 >= ((l_887 != l_888) < p_19)), 4294967289UL)) > 0x0EL) & p_19) & p_19) >= p_19), l_868)) != (*g_141)))) , g_477)) && p_19)), p_21))))) , l_880) , l_890) != (void*)0), p_19)))))), p_19));
    for (g_50 = 0; (g_50 >= (-27)); g_50 = safe_sub_func_uint8_t_u_u(g_50, 7))
    {
        char *l_912 = &g_30;
        int l_923 = 9L;
        int *l_934 = &g_879.f0;
        int **l_933 = &l_934;
        int ***l_935 = (void*)0;
        int ***l_936 = &l_933;
        for (g_216.f0 = 1; (g_216.f0 <= (-2)); --g_216.f0)
        {
            unsigned char l_911 = 1UL;
            for (g_164.f0 = 0; (g_164.f0 == (-5)); g_164.f0 = safe_sub_func_uint8_t_u_u(g_164.f0, 1))
            {
                unsigned char **l_898 = &l_877;
                int l_905 = (-9L);
                unsigned char *l_917 = &l_911;
                if (((void*)0 != l_898))
                {
                    int l_915 = 0xC61065B9L;
                    struct S0 **l_920 = &g_769;
                    if (((((**l_887) , ((g_899 = g_899) != &g_900)) || (safe_div_func_uint8_t_u_u((safe_sub_func_uint8_t_u_u((p_19 == 0x3EL), (p_19 >= func_41(l_905, ((**l_887) , &g_30), p_21)))), g_478.f0))) ^ p_21))
                    {
                        union U2 ***l_906 = (void*)0;
                        union U2 **l_908 = &g_397;
                        union U2 ***l_907 = &l_908;
                        union U2 **l_910 = &g_516;
                        union U2 ***l_909 = &l_910;
                        const unsigned l_916 = 4294967295UL;
                        int *l_918 = &g_585.f0;
                        l_905 = (p_21 && (((((*l_909) = ((*l_907) = (void*)0)) == (void*)0) ^ l_915) && l_905));

                        ;
                        ;
                    }
                    else
                    {
                        l_919 = p_21;
                    }
                    (*l_920) = (*g_768);
                }
                else
                {
                    g_585.f0 |= (safe_sub_func_uint32_t_u_u(l_923, (safe_add_func_uint32_t_u_u(func_41(l_905, l_926, (p_19 ^ ((((*g_900) = (((*p_20) = l_911) < (safe_div_func_uint16_t_u_u((!(safe_lshift_func_int16_t_s_u((p_19 | l_905), ((func_37((((l_905 == 0xC658E8D2L) || 0x9AL) == 0x4546B9E8L)) & (*g_667)) && 2UL)))), 0xCCC1L)))) ^ 0xEAFEL) || 0x58C0A5BBL))), p_21))));
                }
                if (p_19)
                    continue;
                for (g_183.f0 = 0; (g_183.f0 < (-3)); g_183.f0 = safe_sub_func_int8_t_s_s(g_183.f0, 1))
                {
                    l_905 = p_19;
                }

            }
        }
        (*l_936) = l_933;
    }
    return l_877;


}







static char * func_23(char * p_24, char * p_25, char * p_26, unsigned p_27, char p_28)
{
    volatile int *l_35 = &g_36;
    int *l_49 = &g_50;
    char *l_51 = (void*)0;
    char l_668 = 0xF9L;
    unsigned l_715 = 4294967295UL;
    short l_716 = (-6L);
    const union U1 *l_724 = &g_78;
    unsigned char *l_733 = &g_33;
    unsigned char **l_732 = &l_733;
    int l_806 = 0x09BE28F8L;
    unsigned short l_826 = 0x5A8BL;
    const int l_857 = (-8L);
    (*l_35) = g_7;
    (*l_35) = ((*l_49) = func_37((safe_lshift_func_int16_t_s_s(func_41((safe_sub_func_int32_t_s_s((safe_lshift_func_uint8_t_u_s((3L >= ((*l_49) = 0xC411E69DL)), 2)), ((void*)0 != l_51))), func_52(&g_33, p_28, l_51), (l_668 && g_585.f0)), 14))));

            ;

    if ((*l_35))
    {
        unsigned l_697 = 1UL;
        int l_708 = 0x539DA684L;
        int **l_709 = &g_282;
        unsigned *l_710 = &g_711;
        l_708 &= (safe_add_func_uint8_t_u_u(((safe_rshift_func_int16_t_s_u(l_697, 4)) , (safe_rshift_func_uint16_t_u_u(g_364.f2, 4))), ((g_262 = (safe_sub_func_uint32_t_u_u((p_27 = (safe_div_func_uint8_t_u_u((l_697 , g_277), p_27))), (p_28 , (-5L))))) > ((safe_div_func_int16_t_s_s(((*l_49) == func_37(((*p_25) = (safe_rshift_func_int16_t_s_u((p_28 > 0x7CDDB6C2L), p_28))))), 0xFBC2L)) > p_28))));
        (*l_49) = (func_37(((*p_24) = func_41(p_28, ((safe_rshift_func_uint8_t_u_u((!0x75L), ((g_714 , ((func_41(l_715, &g_438, p_27) , l_716) | 0x2CL)) <= 8UL))) , (void*)0), (**g_140)))) , 1L);
    }
    else
    {
        int *l_717 = &g_216.f0;
        int **l_718 = &g_282;
        unsigned *l_720 = &g_222;
        unsigned **l_719 = &l_720;
        unsigned char l_736 = 0x2CL;
        const short *l_772 = (void*)0;
        const short **l_771 = &l_772;
        const short ***l_770 = &l_771;
        char *l_774 = &g_438;
        union U2 **l_795 = &g_516;
        unsigned char l_815 = 0UL;
        struct S0 **l_837 = (void*)0;
        (*l_718) = l_717;

        ;
        if (p_27)
        {
            union U1 *l_725 = &g_651;
            union U1 **l_726 = &l_725;
            (*g_721) = l_719;

            ;
            (**l_718) &= (*l_35);
            (*l_35) = (l_724 != ((*l_726) = l_725));
            (*l_718) = (*l_718);
        }
        else
        {
            unsigned short l_727 = 3UL;
            unsigned *l_728 = &g_729;
            unsigned char *l_756 = &l_736;
            (*l_49) |= (((*g_647) & l_727) != ((*l_728) = (p_27 == ((*l_720) = p_28))));
            for (g_571.f0 = 0; (g_571.f0 >= (-3)); g_571.f0--)
            {
                unsigned short l_735 = 0x1DFAL;
                g_734 = l_732;

                ;
                (*l_718) = (*l_718);
                (*l_49) = (g_335 , p_27);
                if (l_735)
                    break;
            }

            ;
            (**l_718) = (l_727 & l_736);
            if (func_37(((*g_477) , func_41(((*g_282) |= (safe_rshift_func_uint8_t_u_s(g_186, 5))), &g_30, (*l_49)))))
            {
                char **l_741 = &l_51;
                for (l_715 = 0; (l_715 <= 11); l_715 = safe_add_func_uint16_t_u_u(l_715, 1))
                {
                    unsigned short *l_742 = (void*)0;
                    unsigned short *l_743 = &l_727;
                    int l_744 = 0L;
                    (*l_718) = ((((6L & (((l_741 = &g_22) != &p_24) & ((*l_743) = p_28))) && g_571.f2) , (l_744 = (*g_141))) , l_728);

                    ;
                    ;
                    if ((**g_281))
                        continue;
                }

                ;
                ;
                (*l_35) = (*g_282);
                for (g_588.f0 = 0; (g_588.f0 <= 4); ++g_588.f0)
                {
                    for (l_715 = 19; (l_715 <= 60); l_715 = safe_add_func_uint8_t_u_u(l_715, 7))
                    {
                        (*l_49) |= (*g_667);
                    }
                }
                if ((((&p_27 == (void*)0) == (-3L)) == (***g_142)))
                {
                    volatile union U1 *l_750 = &g_592;
                    volatile union U1 **l_749 = &l_750;
                    (*l_718) = l_728;

                    ;
                    (*l_749) = &g_542;

                    ;
                }
                else
                {
                    int l_755 = 0x75145D9FL;
                    (*l_35) |= ((**l_718) |= (safe_div_func_uint8_t_u_u(p_27, (*p_24))));
                }
            }
            else
            {
                char l_759 = 0xCCL;
                char *l_766 = &g_658;
                int l_832 = 0x1F90FC6AL;
                for (g_262 = 0; (g_262 > 47); g_262 = safe_add_func_uint16_t_u_u(g_262, 2))
                {
                    int l_762 = 0L;
                    char **l_763 = &l_51;
                    char *l_765 = &g_658;
                    char **l_764 = &l_765;
                    if ((((l_759 | (1L < (safe_div_func_uint16_t_u_u((p_27 > (*l_49)), 0x8100L)))) > (**l_718)) && l_762))
                    {
                        (*l_717) = p_28;
                    }
                    else
                    {
                        struct S0 * const l_767 = &g_588;
                        (*g_768) = l_767;
                    }
                }
                if (p_27)
                {
                    int l_792 = (-1L);
                    int l_796 = (-1L);
                    int *l_808 = &g_164.f0;
                    for (g_320 = 0; (g_320 <= 50); g_320++)
                    {
                        unsigned short l_789 = 65530UL;
                        union U2 **l_793 = &g_516;
                        union U2 ***l_794 = &l_793;
                        int *l_797 = &g_364.f0;
                        (*l_717) = ((*l_49) = (253UL <= p_27));
                        (*l_797) &= ((safe_lshift_func_int16_t_s_s((((0UL ^ (safe_rshift_func_uint16_t_u_u(((((((**l_719) = (*l_717)) , (void*)0) == (void*)0) == ((safe_add_func_uint16_t_u_u((safe_mod_func_int32_t_s_s((safe_rshift_func_int16_t_s_s((*g_141), 7)), p_28)), 0UL)) > l_727)) , (*l_49)), g_592.f2))) ^ 2L) < 1UL), (*g_141))) >= l_789);
                    }
                    if (((((0x3CL || p_28) == (((l_792 ^ ((safe_mod_func_uint16_t_u_u(((((&g_722 == &g_722) & (-9L)) > (l_792 & (((*l_756) = ((((safe_sub_func_uint8_t_u_u((safe_mod_func_int32_t_s_s((*g_647), (safe_rshift_func_int8_t_s_u(l_727, l_796)))), (**l_718))) | 0x3B1FL) , &l_733) != g_734)) == p_27))) || (*l_717)), l_806)) > (-3L))) != (*p_25)) < 0xBBL)) & (*p_25)) ^ 0xB0EAL))
                    {
                        (*l_718) = l_728;

                        ;
                    }
                    else
                    {
                        short l_807 = 0x46FBL;
                        (*l_49) = l_727;
                        (*l_35) = p_27;
                    }

                    ;
                }
                else
                {
                    unsigned *l_816 = &g_711;
                    int l_821 = 0L;
                    struct S0 ** const l_838 = (void*)0;
                    (*l_35) = (((((*l_717) = (*g_667)) , l_816) != (func_37((*p_25)) , l_717)) < (l_774 == ((*p_24) , (void*)0)));
                    for (g_265 = 0; (g_265 != 55); ++g_265)
                    {
                        unsigned l_827 = 0xF8C76877L;
                        char l_845 = (-8L);
                        (*g_282) = ((*l_35) == (((func_37((func_37((((safe_add_func_int32_t_s_s(func_37(l_821), p_28)) , (((((*l_816) = (p_27 & (*p_26))) , ((*l_49) = (safe_sub_func_uint8_t_u_u(0x20L, ((*l_49) && (safe_add_func_uint16_t_u_u(l_826, 0UL))))))) ^ l_759) || 255UL)) , (*p_25))) >= g_651.f0)) , l_759) >= l_759) | l_827));
                        (*l_49) |= (safe_lshift_func_int8_t_s_s((safe_rshift_func_int8_t_s_s(((0L > (l_727 || ((((((l_821 ^= (l_832 = (*g_141))) , (safe_rshift_func_int16_t_s_u(((l_759 > ((l_837 = &g_769) == l_838)) && p_28), 7))) != (g_571.f0 || p_28)) | g_259.f0) & (***g_142)) <= (**l_718)))) && 0x7889L), 0)), 6));
                        (**l_718) ^= (-8L);
                        (*l_49) = (safe_mod_func_uint8_t_u_u((safe_div_func_int8_t_s_s((l_845 || ((-4L) == (l_832 |= (((*l_717) ^= l_821) || (safe_rshift_func_uint16_t_u_u(func_41(p_27, (((((*g_141) && l_845) , func_41(((*l_49) = ((safe_add_func_uint16_t_u_u(0x9DABL, 1UL)) || (g_852 == g_234.f1))), &l_759, (*g_141))) && 255UL) , &p_28), (*g_141)), (**l_718))))))), 9L)), (*p_25)));
                    }

                    ;
                    (**l_718) = p_28;
                }

                ;
                ;
                (*l_35) = ((*l_717) = (safe_lshift_func_int16_t_s_u((((((*p_25) != l_727) & (*l_35)) > (safe_div_func_uint32_t_u_u((l_857 == (-4L)), (safe_rshift_func_uint16_t_u_u(65535UL, (safe_rshift_func_uint16_t_u_s(g_265, p_27))))))) , (*g_141)), l_759)));
            }

            ;
            ;
        }

        ;
        ;
        ;
        ;
        return &g_658;




    }
    return &g_438;


}







static int func_37(char p_38)
{
    int *l_679 = &g_588.f0;
    unsigned char *l_681 = &g_320;
    unsigned char **l_682 = &l_681;
    unsigned char *l_684 = &g_277;
    unsigned char **l_683 = &l_684;
    int *l_685 = &g_164.f0;
    const short *l_688 = &g_478.f4;
    const short **l_687 = &l_688;
    const short ***l_686 = &l_687;
    short **l_690 = &g_141;
    short ***l_689 = &l_690;
    char *l_691 = (void*)0;
    int l_692 = 0x29B8A55FL;
    for (g_234.f0 = 0; (g_234.f0 >= (-30)); --g_234.f0)
    {
        struct S0 *l_678 = &g_585;
        int l_680 = 0L;
        (*l_679) = (safe_div_func_int8_t_s_s(p_38, ((safe_add_func_uint8_t_u_u((&g_164 == l_678), (p_38 ^ (p_38 ^ l_680)))) || (*l_679))));
    }
    (*l_679) = (*l_679);
    return p_38;
}







static short func_41(int p_42, char * p_43, short p_44)
{
    volatile int **l_670 = &g_232;
    int l_671 = 6L;
    (*l_670) = ((**g_548) , (*g_534));
    return l_671;
}







static char * func_52(unsigned char * p_53, int p_54, char * p_55)
{
    int *l_61 = &g_62;
    short **l_652 = &g_141;
    char *l_654 = &g_438;
    (*g_647) = ((*l_61) = (((p_53 = &g_33) == (void*)0) ^ func_56(l_61, &g_33, p_55, g_62)));

            ;

    if (p_54)
    {
        int *l_648 = &g_216.f0;
        short **l_653 = &g_141;
        (*l_648) = p_54;
    }
    else
    {
        char l_655 = 0x69L;
        unsigned l_659 = 4294967290UL;
        int *l_660 = &g_259.f1.f0;
        int *l_661 = (void*)0;
        int *l_662 = &g_336.f1.f0;
        int *l_663 = (void*)0;
        int *l_664 = &g_571.f0;
        (*g_239) = (+((*l_61) = l_655));

                (*l_664) |= (safe_add_func_int16_t_s_s(((*g_185) <= ((l_655 , (((*l_61) | (*p_53)) & (*l_61))) < ((!0xECL) , g_658))), ((*g_141) > l_659)));
    }
    (*g_667) &= (safe_add_func_uint8_t_u_u(g_192, (*l_61)));
    return l_654;


}







static short func_56(int * p_57, unsigned char * p_58, char * p_59, char p_60)
{
    unsigned l_79 = 4UL;
    short **l_205 = &g_141;
    unsigned l_217 = 0x259D0595L;
    int l_249 = 0x9D1D7C41L;
    int *l_253 = (void*)0;
    unsigned l_266 = 0UL;
    unsigned l_319 = 0x7BB2D01FL;
    unsigned * const l_363 = &l_217;
    const char *l_384 = &g_30;
    int *l_467 = &g_183.f0;
    unsigned l_531 = 0xCBBCD086L;
    int l_540 = 1L;
    struct S0 *l_587 = &g_588;
    struct S0 * const *l_586 = &l_587;
    union U1 *l_616 = (void*)0;
    int *l_639 = &l_540;
    if ((safe_lshift_func_uint8_t_u_u(0x65L, (p_60 , 254UL))))
    {
        unsigned short l_75 = 0x911BL;
        unsigned char l_88 = 0xF8L;
        short l_195 = 9L;
        char *l_196 = (void*)0;
        char *l_197 = (void*)0;
        char *l_198 = &g_30;
        int *l_202 = &g_164.f0;
        int l_238 = (-6L);
        (*p_57) = (1UL > (safe_sub_func_int8_t_s_s(((*l_198) = ((safe_rshift_func_int16_t_s_s((g_62 || func_69(l_75, ((safe_add_func_int8_t_s_s((g_78 , (l_79 , (-1L))), (safe_div_func_int32_t_s_s((l_88 |= (((safe_add_func_int16_t_s_s(((((safe_sub_func_int8_t_s_s(g_78.f0, p_60)) | (safe_rshift_func_uint8_t_u_u((l_75 == 0xCAL), 0))) < g_62) >= l_75), g_78.f0)) , (void*)0) != (void*)0)), (*p_57))))) & 0xA9L), &g_33, &g_62, l_75)), l_195)) , 0xFEL)), 0x7BL)));

                if (((l_79 != g_199) && (((**g_140) = (((safe_lshift_func_int16_t_s_u((*g_141), (&l_88 != p_59))) , 0xFD700EF3L) ^ ((*l_202) ^= (*p_57)))) ^ ((void*)0 != &g_186))))
        {
            short l_207 = 0x7327L;
            (*l_202) |= ((((*l_198) = (l_79 || ((*p_57) <= ((safe_sub_func_int32_t_s_s((l_205 != (g_206 , l_205)), 0x7B682B91L)) > l_207)))) & ((((l_79 | (safe_add_func_uint16_t_u_u(p_60, l_79))) & g_192) , 0L) , (*p_58))) || 3UL);
            for (l_79 = (-14); (l_79 == 25); ++l_79)
            {
                unsigned char *l_223 = &l_88;
                for (l_75 = (-22); (l_75 < 57); l_75 = safe_add_func_uint32_t_u_u(l_75, 1))
                {
                    unsigned *l_220 = (void*)0;
                    unsigned *l_221 = &g_222;
                    (*p_57) |= (!((safe_add_func_int32_t_s_s(1L, (*g_185))) , (-1L)));
                }
            }
        }
        else
        {
            int **l_224 = &l_202;
            int * const l_230 = &g_62;
            (*l_224) = l_202;
            if (g_78.f4)
            {
                (*l_202) &= (((p_60 >= g_78.f4) == (l_79 , (p_60 != p_60))) < (safe_div_func_int16_t_s_s((g_227 = (&p_57 == (void*)0)), (safe_rshift_func_int16_t_s_s(p_60, p_60)))));
            }
            else
            {
                (*l_224) = &g_62;

                ;
                (*p_57) = l_79;
            }

            ;
            l_202 = l_230;

            ;
            (*g_231) = &g_36;

            ;
        }

        ;
        ;
        if ((((*l_205) = g_141) != &l_195))
        {
            int *l_237 = &g_78.f3.f0;
            int **l_240 = &l_202;
            (*p_57) ^= (g_164.f0 > ((g_233 , g_234) , (safe_rshift_func_uint16_t_u_s(((-1L) >= (-6L)), 15))));
            l_238 |= (*l_202);
            (*g_239) ^= ((*l_237) = (*l_202));
            (*l_240) = p_57;

            ;
        }
        else
        {
            unsigned short *l_245 = &l_75;
            unsigned *l_246 = &g_222;
            int l_247 = 0x08C3D364L;
            int *l_248 = &l_238;
            int **l_254 = &l_248;
            (*p_57) = l_217;
            l_249 |= (&p_57 != ((*l_202) , &g_232));
            (*l_254) = (p_60 , l_253);

            ;
            return p_60;
        }

        ;
    }
    else
    {
        unsigned l_260 = 4294967292UL;
        unsigned short *l_261 = &g_262;
        unsigned short *l_263 = (void*)0;
        unsigned short *l_264 = &g_265;
        unsigned char *l_278 = &g_33;
        int l_318 = 0L;
        int l_351 = 1L;
        union U3 *l_368 = (void*)0;
        union U3 **l_367 = &l_368;
        if (((safe_add_func_int16_t_s_s(p_60, (((0x417AL < ((*l_264) = (g_259 , ((*l_261) = l_260)))) | (l_260 , (p_60 <= l_266))) , (((*g_141) = p_60) , (safe_sub_func_uint8_t_u_u((l_260 < p_60), (*p_58))))))) || (*g_185)))
        {
            unsigned l_273 = 0x324DB4BEL;
            unsigned char *l_276 = &g_277;
            unsigned char *l_301 = &g_33;
            union U2 *l_321 = &g_183;
            union U2 **l_323 = (void*)0;
            union U2 **l_324 = &l_321;
            (*g_239) |= (*p_57);
            for (l_266 = 0; (l_266 == 15); l_266 = safe_add_func_uint32_t_u_u(l_266, 2))
            {
                unsigned l_299 = 5UL;
                int *l_300 = &g_216.f0;
                (*g_281) = &l_249;

                ;
                for (g_227 = 0; (g_227 >= 26); ++g_227)
                {
                    char *l_288 = &g_30;
                    int l_293 = 0xD22268EDL;
                    unsigned *l_294 = &l_79;
                    (*g_282) = ((g_285 , (((*l_288) = (((safe_lshift_func_uint16_t_u_s(g_165.f2, p_60)) < 0x8A3BL) < l_260)) && g_277)) , 0L);
                    (*g_282) &= (safe_add_func_int32_t_s_s((*g_239), ((*g_141) & (safe_rshift_func_int16_t_s_s((**g_140), p_60)))));
                }
                (*l_300) ^= ((safe_rshift_func_uint16_t_u_u((((*g_282) = (*p_57)) <= (safe_mod_func_int32_t_s_s(l_273, (*g_185)))), 2)) < ((g_222 ^ p_60) & l_273));
            }

            ;
            (*g_282) ^= ((g_30 &= g_165.f1) > ((p_60 != (safe_lshift_func_uint8_t_u_u((((safe_div_func_int16_t_s_s((((p_60 , (safe_rshift_func_uint16_t_u_u((((*l_261) &= p_60) >= (((*l_264) |= ((1UL > (l_318 = (safe_lshift_func_int8_t_s_s(g_33, 7)))) ^ (((g_320 |= l_319) <= 250UL) , g_320))) != p_60)), g_277))) <= g_78.f2) | (*p_57)), 0x72AEL)) > 0x59L) > (**g_140)), 5))) , g_216.f0));

                        (*l_324) = l_321;
        }
        else
        {
            unsigned l_355 = 0xD2D16CAFL;
            int l_358 = 0x3D5A4969L;
            (*p_57) = (g_222 <= ((*g_185) != ((*g_282) = (safe_div_func_int32_t_s_s((*p_57), l_260)))));
            for (g_192 = 24; (g_192 == 17); --g_192)
            {
                unsigned l_331 = 0x575AA0C1L;
                int *l_344 = &g_62;
                unsigned char *l_365 = &g_33;
                int l_366 = 0L;
                if ((g_206.f2 , (safe_mod_func_uint8_t_u_u(((*g_185) & (*p_57)), ((*l_278) = l_331)))))
                {
                    (*g_282) &= (*p_57);
                    (*g_282) &= ((*g_141) & (safe_add_func_uint8_t_u_u((*p_58), (0L & ((l_260 & ((g_334 , (g_335 , g_78)) , (g_336 , (((l_331 , g_164.f1) > g_192) & g_222)))) <= g_216.f0)))));
                    if (l_331)
                    {
                        union U2 *l_338 = &g_234;
                        union U2 **l_337 = &l_338;
                        union U2 *l_340 = (void*)0;
                        union U2 **l_339 = &l_340;
                        (*l_339) = ((*l_337) = &g_183);

                        ;
                        ;
                        (*g_282) = l_260;
                    }
                    else
                    {
                        (*g_341) = (*g_281);
                    }
                }
                else
                {
                    int **l_345 = (void*)0;
                    (*p_57) = (safe_lshift_func_uint16_t_u_u(g_222, 2));
                    p_57 = l_344;
                }
                for (g_250.f1.f0 = (-27); (g_250.f1.f0 == 14); g_250.f1.f0 = safe_add_func_uint8_t_u_u(g_250.f1.f0, 1))
                {
                    short l_354 = 6L;
                    unsigned *l_356 = (void*)0;
                    unsigned *l_357 = &g_222;
                    l_249 ^= (safe_mod_func_uint32_t_u_u(4294967290UL, ((*l_357) = ((g_350 , (((-1L) > (*l_344)) < l_351)) , (((*g_282) = (g_78.f2 != ((safe_add_func_uint32_t_u_u((*g_185), l_354)) < ((!(g_185 != g_232)) & p_60)))) & l_355)))));
                }
                if ((1L > (l_358 = (*g_282))))
                {
                    p_57 = l_344;
                    g_259.f0 ^= (((((*g_282) = 0xF2C2E8F7L) ^ 0x65D62C66L) != (((p_60 != ((safe_add_func_int8_t_s_s((safe_mod_func_int32_t_s_s(l_358, p_60)), (l_363 == (g_364 , g_239)))) <= (((void*)0 == &g_277) || 1UL))) <= 0x013F2B21L) & p_60)) && (*l_344));
                    (*g_282) &= (((&p_57 != &g_239) && ((*g_185) == ((p_60 > (*l_344)) || ((void*)0 == l_365)))) <= (&p_60 == (((((l_366 ^= 0x38279839L) >= p_60) || 0xE0L) >= p_60) , (void*)0)));
                }
                else
                {
                    (*p_57) = (*p_57);
                    return p_60;
                }
                (*p_57) = (*l_344);
            }
            (*p_57) ^= l_351;
            (*p_57) ^= l_260;
        }

                        ;
        (*l_367) = &g_250;

        ;
    }

            ;
    ;
    for (p_60 = 0; (p_60 >= 18); p_60 = safe_add_func_int8_t_s_s(p_60, 2))
    {
        unsigned short *l_371 = &g_262;
        unsigned char *l_374 = &g_33;
        unsigned char **l_373 = &l_374;
        int **l_375 = &g_282;
        union U2 *l_474 = &g_183;
        int l_518 = 0x184F68C7L;
        unsigned l_543 = 4294967295UL;
        short ***l_555 = &l_205;
        unsigned l_632 = 0xE3D29450L;
        (*g_341) = p_57;

        ;
    }

    ;
    return (*g_141);


}







static unsigned short func_69(unsigned char p_70, unsigned p_71, unsigned char * p_72, int * p_73, unsigned p_74)
{
    unsigned l_95 = 0x19109783L;
    int *l_124 = (void*)0;
    unsigned *l_184 = &l_95;
    if (g_62)
    {
        int l_93 = (-8L);
        short *l_94 = &g_78.f4;
        char *l_96 = &g_30;
        (*p_73) &= ((((safe_div_func_int8_t_s_s(((*l_96) = (p_71 && (((safe_div_func_int32_t_s_s((l_93 <= (l_93 > ((((*l_94) = p_74) | p_71) | (*p_72)))), p_70)) || ((l_95 < ((*p_72) = (*p_72))) && 246UL)) <= l_93))), l_95)) & p_70) == p_70) & 0xDAL);

        (*p_73) |= (l_95 || l_93);
    }
    else
    {
        const unsigned short l_107 = 65535UL;
        char l_161 = 1L;
        short *l_172 = &g_78.f4;
        int *l_194 = &g_183.f0;
        for (p_71 = 21; (p_71 >= 38); ++p_71)
        {
            unsigned l_121 = 6UL;
            int l_157 = 0xC6C14278L;
            int l_175 = (-1L);
            if ((safe_rshift_func_uint8_t_u_u((safe_div_func_int16_t_s_s(g_33, (((g_78.f2 >= 0xF8E45075L) , (safe_rshift_func_int8_t_s_s(((safe_rshift_func_uint8_t_u_u(l_107, 5)) < (safe_rshift_func_uint16_t_u_u((safe_sub_func_int16_t_s_s(p_74, (safe_add_func_uint16_t_u_u((safe_add_func_int16_t_s_s((safe_rshift_func_uint8_t_u_u((safe_rshift_func_int8_t_s_u(0x90L, l_107)), g_120)), ((p_71 , p_74) , l_121))), l_95)))), 9))), g_78.f4))) , p_70))), 1)))
            {
                char l_139 = 0xC3L;
                short **l_154 = &g_141;
                short ***l_153 = &l_154;
                int l_155 = (-1L);
                unsigned *l_156 = &l_95;
                if (g_36)
                    break;
                (*g_142) = ((((safe_rshift_func_uint8_t_u_s((0xBEL <= ((void*)0 != l_124)), 4)) | ((*p_73) = ((safe_lshift_func_uint16_t_u_s(p_74, (safe_mod_func_int16_t_s_s((((g_30 = (safe_add_func_uint32_t_u_u((safe_lshift_func_uint16_t_u_u(((safe_rshift_func_int16_t_s_s(l_121, 11)) || ((safe_lshift_func_int16_t_s_s(l_121, 13)) & p_70)), (safe_div_func_int8_t_s_s(l_139, (0x17L ^ 254UL))))), (*p_73)))) , (*p_72)) & l_107), p_74)))) >= p_71))) > l_107) , g_140);
                if ((l_157 = (safe_div_func_uint32_t_u_u((safe_rshift_func_uint8_t_u_u((safe_sub_func_int16_t_s_s(l_139, ((g_30 & ((p_71 > (g_30 == p_70)) >= (((*p_73) && ((*l_156) = ((p_70 && (l_155 = (&g_140 == l_153))) >= l_139))) | (*p_72)))) > p_71))), (*p_72))), p_74))))
                {
                    unsigned short l_158 = 65528UL;
                    int *l_166 = (void*)0;
                    int *l_167 = &g_78.f3.f0;
                    int *l_168 = &l_155;
                    (*l_168) |= ((l_158 > (l_157 |= (safe_add_func_int32_t_s_s(((*p_73) = (l_161 && (0xC8C3L < (safe_lshift_func_uint8_t_u_s((l_121 & p_70), 4))))), (+((g_164 , g_165) , (0xCB08L == p_70))))))) & 0x0D747CD2L);
                    if (g_7)
                        continue;
                }
                else
                {
                    short l_169 = 0x72AEL;
                    char *l_191 = &g_30;
                    if ((*p_73))
                    {
                        if (l_169)
                            break;
                        if (g_164.f0)
                            continue;
                        l_175 |= ((((*l_156) = (p_74 == ((l_169 > l_155) , g_30))) ^ (safe_add_func_uint16_t_u_u((((***g_142) , l_172) != ((((void*)0 == &g_141) | ((safe_div_func_uint8_t_u_u(g_62, g_62)) ^ 0L)) , (void*)0)), 0L))) | l_157);
                        (*p_73) |= l_107;
                    }
                    else
                    {
                        char *l_182 = &l_161;
                        int *l_187 = (void*)0;
                        int *l_188 = &l_175;
                        (*p_73) = (safe_sub_func_int8_t_s_s(p_74, p_74));
                        g_62 |= (safe_sub_func_int32_t_s_s(g_30, (~(safe_rshift_func_int8_t_s_u(((*l_182) = (p_74 & (***g_142))), 7)))));
                        (*l_188) = ((0L & ((*p_73) = (~g_30))) & (((p_71 >= ((g_183 , (l_175 , l_157)) ^ 0x0EL)) <= ((*p_72) |= ((l_184 == g_185) && g_78.f0))) ^ g_183.f0));
                    }
                    g_62 = (safe_mod_func_int8_t_s_s(((*l_191) = ((*p_72) , p_74)), (g_192 = (*p_72))));
                    if (l_139)
                        continue;
                }
            }
            else
            {
                int **l_193 = &l_124;
                l_194 = ((*l_193) = &g_62);

                ;
                ;
                (*l_194) = 0x754EA53DL;
                return (*l_124);
            }
        }
        return (*l_194);
    }

    return g_78.f4;
}





int main (void)
{
    int print_hash_value = 0;
    platform_main_begin();
    crc32_gentab();
    func_1();
    transparent_crc(g_7, "g_7", print_hash_value);
    transparent_crc(g_30, "g_30", print_hash_value);
    transparent_crc(g_33, "g_33", print_hash_value);
    transparent_crc(g_36, "g_36", print_hash_value);
    transparent_crc(g_50, "g_50", print_hash_value);
    transparent_crc(g_62, "g_62", print_hash_value);
    transparent_crc(g_78.f2, "g_78.f2", print_hash_value);
    transparent_crc(g_78.f4, "g_78.f4", print_hash_value);
    transparent_crc(g_120, "g_120", print_hash_value);
    transparent_crc(g_164.f0, "g_164.f0", print_hash_value);
    transparent_crc(g_164.f1, "g_164.f1", print_hash_value);
    transparent_crc(g_165.f0, "g_165.f0", print_hash_value);
    transparent_crc(g_165.f1, "g_165.f1", print_hash_value);
    transparent_crc(g_165.f2, "g_165.f2", print_hash_value);
    transparent_crc(g_183.f0, "g_183.f0", print_hash_value);
    transparent_crc(g_183.f1, "g_183.f1", print_hash_value);
    transparent_crc(g_183.f2, "g_183.f2", print_hash_value);
    transparent_crc(g_186, "g_186", print_hash_value);
    transparent_crc(g_192, "g_192", print_hash_value);
    transparent_crc(g_199, "g_199", print_hash_value);
    transparent_crc(g_206.f0, "g_206.f0", print_hash_value);
    transparent_crc(g_206.f1, "g_206.f1", print_hash_value);
    transparent_crc(g_206.f2, "g_206.f2", print_hash_value);
    transparent_crc(g_216.f0, "g_216.f0", print_hash_value);
    transparent_crc(g_216.f1, "g_216.f1", print_hash_value);
    transparent_crc(g_222, "g_222", print_hash_value);
    transparent_crc(g_227, "g_227", print_hash_value);
    transparent_crc(g_233.f0, "g_233.f0", print_hash_value);
    transparent_crc(g_233.f1, "g_233.f1", print_hash_value);
    transparent_crc(g_234.f0, "g_234.f0", print_hash_value);
    transparent_crc(g_234.f1, "g_234.f1", print_hash_value);
    transparent_crc(g_234.f2, "g_234.f2", print_hash_value);
    transparent_crc(g_250.f0, "g_250.f0", print_hash_value);
    transparent_crc(g_259.f0, "g_259.f0", print_hash_value);
    transparent_crc(g_262, "g_262", print_hash_value);
    transparent_crc(g_265, "g_265", print_hash_value);
    transparent_crc(g_277, "g_277", print_hash_value);
    transparent_crc(g_285, "g_285", print_hash_value);
    transparent_crc(g_320, "g_320", print_hash_value);
    transparent_crc(g_334.f0, "g_334.f0", print_hash_value);
    transparent_crc(g_334.f1, "g_334.f1", print_hash_value);
    transparent_crc(g_335.f0, "g_335.f0", print_hash_value);
    transparent_crc(g_335.f1, "g_335.f1", print_hash_value);
    transparent_crc(g_336.f0, "g_336.f0", print_hash_value);
    transparent_crc(g_350.f0, "g_350.f0", print_hash_value);
    transparent_crc(g_350.f1, "g_350.f1", print_hash_value);
    transparent_crc(g_350.f2, "g_350.f2", print_hash_value);
    transparent_crc(g_364.f0, "g_364.f0", print_hash_value);
    transparent_crc(g_364.f1, "g_364.f1", print_hash_value);
    transparent_crc(g_364.f2, "g_364.f2", print_hash_value);
    transparent_crc(g_372.f0, "g_372.f0", print_hash_value);
    transparent_crc(g_401.f0, "g_401.f0", print_hash_value);
    transparent_crc(g_401.f1, "g_401.f1", print_hash_value);
    transparent_crc(g_401.f2, "g_401.f2", print_hash_value);
    transparent_crc(g_438, "g_438", print_hash_value);
    transparent_crc(g_478.f0, "g_478.f0", print_hash_value);
    transparent_crc(g_478.f2, "g_478.f2", print_hash_value);
    transparent_crc(g_478.f4, "g_478.f4", print_hash_value);
    transparent_crc(g_542.f0, "g_542.f0", print_hash_value);
    transparent_crc(g_542.f2, "g_542.f2", print_hash_value);
    transparent_crc(g_542.f4, "g_542.f4", print_hash_value);
    transparent_crc(g_571.f0, "g_571.f0", print_hash_value);
    transparent_crc(g_571.f1, "g_571.f1", print_hash_value);
    transparent_crc(g_571.f2, "g_571.f2", print_hash_value);
    transparent_crc(g_573.f0, "g_573.f0", print_hash_value);
    transparent_crc(g_573.f1, "g_573.f1", print_hash_value);
    transparent_crc(g_573.f2, "g_573.f2", print_hash_value);
    transparent_crc(g_574.f0, "g_574.f0", print_hash_value);
    transparent_crc(g_585.f0, "g_585.f0", print_hash_value);
    transparent_crc(g_585.f1, "g_585.f1", print_hash_value);
    transparent_crc(g_588.f0, "g_588.f0", print_hash_value);
    transparent_crc(g_588.f1, "g_588.f1", print_hash_value);
    transparent_crc(g_592.f0, "g_592.f0", print_hash_value);
    transparent_crc(g_592.f2, "g_592.f2", print_hash_value);
    transparent_crc(g_592.f4, "g_592.f4", print_hash_value);
    transparent_crc(g_596.f0, "g_596.f0", print_hash_value);
    transparent_crc(g_596.f2, "g_596.f2", print_hash_value);
    transparent_crc(g_596.f4, "g_596.f4", print_hash_value);
    transparent_crc(g_618.f0, "g_618.f0", print_hash_value);
    transparent_crc(g_618.f2, "g_618.f2", print_hash_value);
    transparent_crc(g_618.f4, "g_618.f4", print_hash_value);
    transparent_crc(g_651.f0, "g_651.f0", print_hash_value);
    transparent_crc(g_651.f2, "g_651.f2", print_hash_value);
    transparent_crc(g_651.f4, "g_651.f4", print_hash_value);
    transparent_crc(g_658, "g_658", print_hash_value);
    transparent_crc(g_711, "g_711", print_hash_value);
    transparent_crc(g_714.f0, "g_714.f0", print_hash_value);
    transparent_crc(g_714.f1, "g_714.f1", print_hash_value);
    transparent_crc(g_729, "g_729", print_hash_value);
    transparent_crc(g_773.f0, "g_773.f0", print_hash_value);
    transparent_crc(g_773.f1, "g_773.f1", print_hash_value);
    transparent_crc(g_773.f2, "g_773.f2", print_hash_value);
    transparent_crc(g_852, "g_852", print_hash_value);
    transparent_crc(g_879.f0, "g_879.f0", print_hash_value);
    transparent_crc(g_879.f2, "g_879.f2", print_hash_value);
    transparent_crc(g_879.f4, "g_879.f4", print_hash_value);
    transparent_crc(g_938, "g_938", print_hash_value);
    transparent_crc(g_941.f0, "g_941.f0", print_hash_value);
    transparent_crc(g_958.f0, "g_958.f0", print_hash_value);
    transparent_crc(g_958.f1, "g_958.f1", print_hash_value);
    transparent_crc(g_961.f0, "g_961.f0", print_hash_value);
    transparent_crc(g_961.f1, "g_961.f1", print_hash_value);
    transparent_crc(g_972.f0, "g_972.f0", print_hash_value);
    transparent_crc(g_972.f1, "g_972.f1", print_hash_value);
    transparent_crc(g_973.f0, "g_973.f0", print_hash_value);
    transparent_crc(g_973.f1, "g_973.f1", print_hash_value);
    transparent_crc(g_986.f0, "g_986.f0", print_hash_value);
    transparent_crc(g_986.f1, "g_986.f1", print_hash_value);
    transparent_crc(g_986.f2, "g_986.f2", print_hash_value);
    transparent_crc(g_988.f0, "g_988.f0", print_hash_value);
    transparent_crc(g_988.f2, "g_988.f2", print_hash_value);
    transparent_crc(g_988.f4, "g_988.f4", print_hash_value);
    transparent_crc(g_1007.f0, "g_1007.f0", print_hash_value);
    transparent_crc(g_1007.f2, "g_1007.f2", print_hash_value);
    transparent_crc(g_1007.f4, "g_1007.f4", print_hash_value);
    transparent_crc(g_1050.f0, "g_1050.f0", print_hash_value);
    transparent_crc(g_1050.f2, "g_1050.f2", print_hash_value);
    transparent_crc(g_1050.f4, "g_1050.f4", print_hash_value);
    transparent_crc(g_1051.f0, "g_1051.f0", print_hash_value);
    transparent_crc(g_1051.f1, "g_1051.f1", print_hash_value);
    transparent_crc(g_1054.f0, "g_1054.f0", print_hash_value);
    transparent_crc(g_1054.f1, "g_1054.f1", print_hash_value);
    transparent_crc(g_1059, "g_1059", print_hash_value);
    transparent_crc(g_1072.f0, "g_1072.f0", print_hash_value);
    transparent_crc(g_1081.f0, "g_1081.f0", print_hash_value);
    transparent_crc(g_1081.f1, "g_1081.f1", print_hash_value);
    transparent_crc(g_1092.f0, "g_1092.f0", print_hash_value);
    transparent_crc(g_1092.f1, "g_1092.f1", print_hash_value);
    transparent_crc(g_1092.f2, "g_1092.f2", print_hash_value);
    transparent_crc(g_1113.f0, "g_1113.f0", print_hash_value);
    transparent_crc(g_1113.f2, "g_1113.f2", print_hash_value);
    transparent_crc(g_1113.f4, "g_1113.f4", print_hash_value);
    transparent_crc(g_1131.f0, "g_1131.f0", print_hash_value);
    transparent_crc(g_1134, "g_1134", print_hash_value);
    transparent_crc(g_1142.f0, "g_1142.f0", print_hash_value);
    transparent_crc(g_1142.f2, "g_1142.f2", print_hash_value);
    transparent_crc(g_1142.f4, "g_1142.f4", print_hash_value);
    transparent_crc(g_1146.f0, "g_1146.f0", print_hash_value);
    transparent_crc(g_1146.f1, "g_1146.f1", print_hash_value);
    transparent_crc(g_1146.f2, "g_1146.f2", print_hash_value);
    transparent_crc(g_1147.f0, "g_1147.f0", print_hash_value);
    transparent_crc(g_1147.f1, "g_1147.f1", print_hash_value);
    transparent_crc(g_1181.f0, "g_1181.f0", print_hash_value);
    transparent_crc(g_1181.f2, "g_1181.f2", print_hash_value);
    transparent_crc(g_1181.f4, "g_1181.f4", print_hash_value);
    transparent_crc(g_1231.f0, "g_1231.f0", print_hash_value);
    transparent_crc(g_1231.f2, "g_1231.f2", print_hash_value);
    transparent_crc(g_1231.f4, "g_1231.f4", print_hash_value);
    transparent_crc(g_1233.f0, "g_1233.f0", print_hash_value);
    transparent_crc(g_1233.f2, "g_1233.f2", print_hash_value);
    transparent_crc(g_1233.f4, "g_1233.f4", print_hash_value);
    transparent_crc(g_1256, "g_1256", print_hash_value);
    transparent_crc(g_1278.f0, "g_1278.f0", print_hash_value);
    transparent_crc(g_1278.f1, "g_1278.f1", print_hash_value);
    transparent_crc(g_1278.f2, "g_1278.f2", print_hash_value);
    transparent_crc(g_1281, "g_1281", print_hash_value);
    transparent_crc(g_1321, "g_1321", print_hash_value);
    transparent_crc(g_1330.f0, "g_1330.f0", print_hash_value);
    transparent_crc(g_1330.f1, "g_1330.f1", print_hash_value);
    transparent_crc(g_1330.f2, "g_1330.f2", print_hash_value);
    platform_main_end(crc32_context ^ 0xFFFFFFFFUL, print_hash_value);
    return 0;
}
