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
   volatile int f0;
   int f1;
   volatile int f2;
   short f3;
   int f4;
   unsigned short f5;
   volatile unsigned f6;
   unsigned char f7;
};

union U1 {
   unsigned f0;
};

union U2 {
   unsigned f0;
   char f1;
   volatile int f2;
   volatile char * f3;
   short f4;
};

union U3 {
   volatile int f0;
   struct S0 f1;
   unsigned f2;
   struct S0 f3;
   unsigned f4;
};


static int g_13 = 0x5D2D9150L;
static char g_15 = 0x08L;
static unsigned char g_17 = 0x4CL;
static volatile struct S0 g_18 = {-1L,1L,0x874DA862L,0x405CL,0xFD06BDE6L,0xF6CBL,0UL,0x7AL};
static unsigned char g_29 = 0xB1L;
static struct S0 g_61 = {0x3C66883CL,3L,0L,7L,0x139F4802L,65526UL,0x59E478DFL,248UL};
static struct S0 *g_60 = &g_61;
static union U1 g_62 = {0xE28AB82AL};
static int g_67 = 0xB28543B5L;
static union U2 g_77 = {1UL};
static union U2 *g_76 = &g_77;
static int *g_92 = &g_61.f4;
static struct S0 g_116 = {6L,0xF98811FBL,0x6500C247L,-7L,0xD830BE99L,65535UL,0x0CFB035BL,0x08L};
static char g_121 = (-8L);
static struct S0 g_140 = {0x38E40FFFL,-1L,7L,6L,0x8A4BD3C1L,1UL,6UL,1UL};
static struct S0 g_142 = {0x2A50B6C3L,0xCEF870ABL,0L,0x1DE3L,1L,0xDE7EL,0x673044D6L,1UL};
static volatile unsigned char ***g_172 = (void*)0;
static unsigned g_185 = 0xE35FF2B4L;
static struct S0 g_187 = {-9L,-6L,0L,0xE2C8L,0x7C01AD3EL,0xC3B7L,0x1B653921L,0xFAL};
static struct S0 g_205 = {1L,0x21D07C0FL,0x9DDB2936L,0L,0x60A8C9BAL,7UL,4294967295UL,0xB3L};
static struct S0 g_247 = {1L,0x44B1EA3EL,0x8ABBA1DCL,3L,0xBDAB2CB7L,4UL,0xB6F53839L,0x6AL};
static volatile short g_268 = 0x0C5CL;
static volatile short *g_267 = &g_268;
static short *g_269 = &g_205.f3;
static short g_289 = (-1L);
static union U2 g_293 = {4294967295UL};
static volatile union U1 g_306 = {4294967295UL};
static volatile union U1 *g_305 = &g_306;
static volatile union U1 **g_304 = &g_305;
static struct S0 g_314 = {0x1F67890DL,0x0B6333A4L,0x72F5B41CL,0x995FL,-1L,2UL,0xBF266B89L,5UL};
static struct S0 g_341 = {0x0F8876A3L,-1L,0x83E0304AL,0x5FE1L,-1L,0x5BAFL,0x07765BBCL,255UL};
static struct S0 g_343 = {0xFD20CEAFL,0x0F1770DDL,0xE62A4A42L,0x7FCBL,0L,0x56AFL,0x290DDE9AL,1UL};
static struct S0 g_350 = {0L,0x4B1F9F82L,0xC33D4B22L,1L,1L,9UL,0x74170A7DL,0x78L};
static union U1 *g_367 = (void*)0;
static struct S0 g_403 = {0x1B563916L,1L,0xF731B951L,0L,1L,65535UL,5UL,0xB1L};
static struct S0 g_405 = {0x05AD0C4DL,1L,-1L,0x5DD1L,0xE389250CL,0x7255L,1UL,0xCBL};
static union U3 g_424 = {0x45E9C9CDL};
static union U3 g_426 = {0xDC54451AL};
static struct S0 g_468 = {0x26658D1AL,0x91BE41BAL,-10L,8L,0xCD4AB566L,65534UL,0UL,5UL};
static struct S0 g_470 = {0xAEB7A9DDL,4L,0L,0x97AFL,0xE345E44BL,0x8077L,1UL,0x06L};
static struct S0 *g_469 = &g_470;
static struct S0 g_473 = {0x2781781BL,0x8735A37DL,0L,-3L,0x5D55B35DL,0xE90FL,0x34F1C786L,0x4DL};
static union U2 g_479 = {8UL};
static struct S0 g_527 = {0x42C7A6F0L,6L,6L,0x516DL,0x911995FFL,0xE537L,0UL,0UL};
static union U3 g_539 = {0xE7747F3BL};
static union U2 **g_597 = &g_76;
static volatile struct S0 g_652 = {-3L,0L,0L,0x4891L,0xF04AE1EFL,65528UL,3UL,9UL};
static volatile union U2 g_657 = {1UL};
static union U3 *g_659 = &g_539;
static volatile struct S0 g_681 = {-8L,4L,0xD83B30FCL,-3L,1L,0x6214L,0x3A620833L,255UL};
static volatile struct S0 g_682 = {-1L,0x6549D2BDL,0x8BDE4D6BL,0L,0L,0x1284L,0x701B5712L,1UL};
static volatile unsigned *g_685 = &g_140.f6;
static volatile unsigned **g_684 = &g_685;
static volatile struct S0 g_705 = {0x4D815582L,0x1ED892CAL,-1L,0xACCEL,1L,65535UL,0x93A6D3BDL,9UL};
static volatile union U2 *g_766 = &g_657;
static volatile union U2 **g_765 = &g_766;
static volatile union U2 ***g_764 = &g_765;
static volatile union U2 ****g_763 = &g_764;
static struct S0 g_791 = {0L,1L,-7L,-9L,1L,65535UL,1UL,0x37L};
static struct S0 g_796 = {0x88601F03L,-4L,0x0804DC5AL,0x3D45L,8L,65535UL,0UL,255UL};
static union U3 g_822 = {0x33916AF5L};



static char func_1(void);
static int func_2(int p_3, unsigned p_4, char * p_5, char * p_6, char * p_7);
static int func_8(unsigned char p_9, unsigned char p_10, int p_11, unsigned p_12);
static char * func_25(unsigned char p_26, char * p_27);
static unsigned short func_34(unsigned p_35, int * p_36, char * p_37, unsigned p_38);
static unsigned func_39(char * p_40);
static char * func_41(unsigned p_42, int p_43, unsigned short p_44);
static unsigned char * func_47(unsigned char * p_48, char * p_49);
static unsigned char * func_50(int p_51, unsigned char * p_52);
static int func_53(struct S0 * p_54, struct S0 * p_55, unsigned char p_56, struct S0 * p_57);
static char func_1(void)
{
    char *l_14 = &g_15;
    unsigned char *l_16 = &g_17;
    int *l_21 = &g_13;
    int l_24 = 0x5189D9E6L;
    unsigned char *l_28 = &g_29;
    char **l_794 = &l_14;
    struct S0 *l_795 = &g_796;
    struct S0 **l_797 = &g_469;
    unsigned char l_798 = 0x11L;
    if (func_2(((*l_21) = func_8(g_13, ((*l_16) = ((void*)0 == l_14)), g_15, g_15)), (safe_sub_func_int16_t_s_s(g_15, l_24)), func_25(((*l_28) = (&g_15 == &g_15)), l_28), &g_15, &g_15))
    {
        int l_725 = (-5L);
        int **l_726 = &g_92;
        unsigned l_735 = 8UL;
        char *l_736 = (void*)0;
        int *l_737 = (void*)0;
        int *l_738 = &l_725;
        l_725 = (*l_21);
        (*l_726) = &g_13;

        ;
        (**l_726) = ((safe_rshift_func_uint16_t_u_u((safe_unary_minus_func_uint16_t_u((+(((**l_726) > (safe_unary_minus_func_uint16_t_u((safe_add_func_uint16_t_u_u((0x3923234DL <= ((**l_726) || (((g_341.f4 = (safe_lshift_func_int8_t_s_u(l_735, ((&g_15 == l_736) >= g_314.f7)))) ^ ((*l_738) = ((**l_726) && (!(*l_21))))) , (*l_738)))), g_247.f6))))) > (*g_92))))), (*l_21))) <= 4L);
    }
    else
    {
        int *l_739 = &g_343.f4;
        int **l_740 = &g_92;
        short *l_761 = &g_343.f3;
        short l_762 = 0x319DL;
        int l_767 = 0L;
lbl_784:
        (*l_740) = l_739;

        ;
        if ((safe_add_func_uint32_t_u_u((safe_mod_func_int8_t_s_s((**l_740), g_142.f2)), 0x71FEC273L)))
        {
            short *l_759 = (void*)0;
            short **l_760 = &l_759;
            int l_768 = 1L;
            (*g_469) = ((((safe_rshift_func_uint16_t_u_s((safe_mod_func_int16_t_s_s((((!((void*)0 != &g_684)) < ((*l_739) = (safe_mod_func_uint16_t_u_u((safe_mul_func_int8_t_s_s((safe_sub_func_uint16_t_u_u((safe_rshift_func_uint16_t_u_u((safe_mul_func_uint8_t_u_u(((((*l_760) = l_759) != l_761) | ((l_762 , 4294967295UL) < ((((void*)0 == g_763) , (*g_659)) , (*g_92)))), 0xB4L)), 13)), l_767)), l_768)), 65533UL)))) & g_17), l_768)), 5)) == 4294967295UL) != 5L) , (*g_469));
            for (g_426.f1.f1 = 0; (g_426.f1.f1 > 0); g_426.f1.f1++)
            {
                for (g_187.f5 = 0; (g_187.f5 == 26); g_187.f5++)
                {
                    unsigned short *l_777 = &g_343.f5;
                    int l_780 = 0xFC1FD054L;
                    unsigned *l_781 = (void*)0;
                    (*g_92) = (0UL & ((*l_21) = ((func_8((((safe_mod_func_uint16_t_u_u(g_341.f2, l_768)) <= (((*l_14) = (safe_mul_func_uint16_t_u_u(((*l_777) = 0xBB63L), 0x85B4L))) >= ((*l_21) = (safe_mod_func_uint16_t_u_u(65535UL, l_768))))) <= 0xE0529986L), (*l_739), (*g_92), l_780) & (**l_740)) , (**g_684))));
                }
            }
        }
        else
        {
lbl_787:
            for (g_247.f7 = 0; (g_247.f7 >= 35); g_247.f7 = safe_add_func_int32_t_s_s(g_247.f7, 8))
            {
                if (l_24)
                    goto lbl_784;
            }
            if (g_67)
                goto lbl_788;
lbl_788:
            for (g_350.f3 = (-14); (g_350.f3 > (-13)); g_350.f3 = safe_add_func_uint16_t_u_u(g_350.f3, 7))
            {
                if (g_343.f4)
                    goto lbl_787;
            }
            for (g_539.f1.f3 = 0; (g_539.f1.f3 >= (-30)); g_539.f1.f3--)
            {
                g_791 = (*g_469);
                return g_539.f4;
            }
            (*l_740) = (*l_740);
        }
        return (*l_21);
    }

    ;
    ;
    ;
    ;
    ;
    if (((*g_685) != ((((*g_92) = (((*l_21) > l_798) == 0UL)) , &l_14) == (void*)0)))
    {
        union U1 l_812 = {4294967295UL};
        unsigned short *l_813 = &g_791.f5;
        int l_814 = 0x02DC0EFCL;
        int **l_815 = &g_92;
        int **l_816 = &l_21;
        int **l_817 = (void*)0;
        int *l_819 = (void*)0;
        int **l_818 = &l_819;
        (*l_818) = ((*l_816) = ((*l_815) = (((*l_813) = (((l_814 = (safe_lshift_func_int16_t_s_s((safe_unary_minus_func_int16_t_s((((*g_469) , (safe_lshift_func_int16_t_s_s((safe_lshift_func_uint16_t_u_s((safe_rshift_func_uint16_t_u_u(((safe_mod_func_uint16_t_u_u(((safe_add_func_int8_t_s_s(((((*l_28) = ((*l_21) > (func_8(g_350.f0, (((l_812 , 0x5FL) | (((*l_813) = 65532UL) | 0x5CE7L)) == (*g_92)), l_812.f0, (*l_21)) && 0x4CC4A5C9L))) == g_479.f1) ^ g_473.f4), 1UL)) != (*l_21)), g_314.f7)) > 1UL), 1)), 11)), 9))) ^ g_426.f4))), (*l_21)))) < (*g_92)) , g_77.f1)) , &g_67)));

        ;
        ;
        ;
    }
    else
    {
        return (*l_21);
    }

    ;
    ;
    for (g_187.f7 = 0; (g_187.f7 != 34); g_187.f7++)
    {
        int *l_823 = &g_187.f4;
        (*l_21) = func_34(((g_822 , (*l_21)) > (*g_269)), l_823, (*l_794), (*l_21));
        l_823 = l_823;
    }

    ;
    return (*l_21);
}







static int func_2(int p_3, unsigned p_4, char * p_5, char * p_6, char * p_7)
{
    struct S0 **l_568 = &g_60;
    struct S0 ***l_567 = &l_568;
    struct S0 ***l_577 = &l_568;
    struct S0 ****l_576 = &l_577;
    int l_578 = 0L;
    unsigned short l_579 = 0UL;
    int *l_580 = &g_247.f4;
    union U2 *l_584 = &g_293;
    union U1 **l_650 = (void*)0;
    union U2 ***l_665 = &g_597;
    union U1 l_674 = {4294967290UL};
    union U3 *l_675 = &g_426;
    short **l_698 = &g_269;
    union U1 ***l_721 = &l_650;
    unsigned l_722 = 1UL;
    unsigned char *l_723 = &g_314.f7;
    unsigned *l_724 = &g_185;
    if ((l_578 = ((l_567 == &l_568) > (safe_lshift_func_uint8_t_u_s((safe_sub_func_uint8_t_u_u(((safe_lshift_func_int16_t_s_u((((*p_5) > 0x0AL) || p_3), g_343.f4)) != 0UL), p_4)), l_579)))))
    {
        int **l_581 = (void*)0;
        int **l_582 = (void*)0;
        int **l_583 = &l_580;
        unsigned char *l_587 = &g_205.f7;
        short *l_590 = &g_341.f3;
        int l_591 = 0x233801A1L;
        int l_592 = 5L;
        unsigned short l_593 = 0UL;
        unsigned l_609 = 0x5696FB7BL;
        struct S0 *l_634 = &g_350;
        unsigned l_655 = 0x2B20399FL;
        union U2 **l_680 = &l_584;
        (*l_583) = l_580;
        g_76 = l_584;

        ;
    }
    else
    {
        union U3 **l_706 = (void*)0;
        union U3 **l_707 = (void*)0;
        union U3 **l_708 = &g_659;
        union U3 *l_710 = (void*)0;
        union U3 **l_709 = &l_710;
        (*l_709) = ((*l_708) = (l_675 = l_675));

        ;
        ;
    }

    ;
    ;
    p_3 = (safe_mod_func_int16_t_s_s(((((((*l_724) = ((safe_lshift_func_int8_t_s_u(((p_4 >= 5UL) , (*p_6)), g_343.f1)) >= 0x56944E92L)) && (*l_580)) >= (*p_6)) ^ (*g_269)) , (*g_267)), 0x2B5CL));
    return (*l_580);
}







static int func_8(unsigned char p_9, unsigned char p_10, int p_11, unsigned p_12)
{
    volatile struct S0 *l_19 = (void*)0;
    volatile struct S0 *l_20 = &g_18;
    (*l_20) = g_18;
    return p_9;
}







static char * func_25(unsigned char p_26, char * p_27)
{
    union U1 l_30 = {4294967294UL};
    struct S0 *l_58 = (void*)0;
    struct S0 **l_59 = &l_58;
    unsigned char *l_227 = &g_205.f7;
    unsigned char **l_226 = &l_227;
    int *l_254 = (void*)0;
    char *l_255 = &g_15;
    int *l_564 = &g_314.f4;
    int l_565 = (-3L);
    int *l_566 = &g_527.f4;
    (*l_566) = (l_30 , (safe_add_func_uint32_t_u_u(((((*l_564) = ((safe_unary_minus_func_uint16_t_u(func_34(func_39(func_41(l_30.f0, (p_26 && (~(safe_rshift_func_uint8_t_u_u((((*l_226) = func_47(func_50(func_53(((*l_59) = l_58), g_60, g_61.f3, (((0UL != l_30.f0) , g_62) , (void*)0)), &g_29), p_27)) == (void*)0), p_26)))), p_26)), l_254, l_255, g_142.f7))) , (-2L))) != l_565) , (*l_564)), p_26)));

    ;

    ;
    ;
    return &g_15;


}







static unsigned short func_34(unsigned p_35, int * p_36, char * p_37, unsigned p_38)
{
    int *l_256 = &g_67;
    char *l_261 = &g_77.f1;
    union U2 *l_292 = &g_293;
    short **l_311 = &g_269;
    short l_321 = 0x0957L;
    struct S0 *l_347 = (void*)0;
    int l_385 = (-2L);
    struct S0 **l_422 = &g_60;
    unsigned char *l_456 = &g_116.f7;
    unsigned char **l_455 = &l_456;
    union U1 l_485 = {4294967292UL};
    int l_494 = 0xAFCCFCC4L;
    short l_563 = 0xB604L;
    (*l_256) = (p_38 < 2L);
    if ((((*l_261) = (((((*l_256) = (safe_mul_func_int16_t_s_s(func_39((g_187.f4 , &g_121)), (*l_256)))) > 0xE4DA9278L) == 1L) , (*p_37))) < g_62.f0))
    {
lbl_368:
        (*l_256) = (-4L);
        return (*l_256);
    }
    else
    {
        char *l_275 = &g_121;
        int *l_288 = (void*)0;
        int l_303 = 0L;
        char l_312 = (-1L);
        struct S0 *l_313 = &g_314;
        union U1 *l_366 = &g_62;
        unsigned char *l_439 = &g_205.f7;
        unsigned char **l_438 = &l_439;
        int l_448 = 0L;
        union U2 *l_478 = &g_479;
        int **l_481 = &g_92;
        unsigned *l_484 = &g_424.f2;
        short **l_534 = (void*)0;
        if (p_35)
        {
            int l_286 = 0x748A0658L;
            int l_319 = 0L;
            struct S0 *l_342 = &g_343;
            union U2 **l_360 = &g_76;
            union U2 ***l_359 = &l_360;
            short l_383 = 0x5050L;
            int *l_384 = (void*)0;
            for (g_61.f1 = (-2); (g_61.f1 != 14); g_61.f1 = safe_add_func_uint8_t_u_u(g_61.f1, 3))
            {
                unsigned l_266 = 0x11A3A22FL;
                for (g_67 = 2; (g_67 >= (-16)); g_67 = safe_sub_func_int32_t_s_s(g_67, 3))
                {
                    short **l_270 = (void*)0;
                    short **l_271 = (void*)0;
                    short **l_272 = &g_269;
                    char **l_276 = (void*)0;
                    int *l_279 = &g_61.f4;
                    (*l_279) = (((+l_266) <= ((g_267 != ((*l_272) = g_269)) , ((safe_add_func_uint8_t_u_u((g_247.f7 & (0x47L != ((func_39((l_261 = l_275)) != (safe_rshift_func_int16_t_s_u(0xE193L, 5))) <= p_35))), g_247.f1)) <= p_38))) , p_35);

                    ;
                }

                ;
                return p_38;
            }
            for (g_116.f7 = 28; (g_116.f7 < 54); g_116.f7 = safe_add_func_int32_t_s_s(g_116.f7, 8))
            {
                short l_287 = 4L;
                union U2 **l_301 = &g_76;
                int *l_310 = &g_247.f4;
                unsigned char *l_320 = &g_314.f7;
                struct S0 *l_340 = &g_341;
                union U2 ***l_358 = &l_301;
                if ((safe_mul_func_uint16_t_u_u(g_142.f3, (p_38 < 0x7E2E7F7AL))))
                {
                    union U2 **l_300 = &l_292;
                    (*l_256) = (safe_sub_func_int32_t_s_s(l_286, l_287));
                    p_36 = l_288;

                    ;
                    if (g_289)
                    {
                        union U2 **l_294 = &l_292;
                        unsigned short *l_295 = (void*)0;
                        unsigned short *l_296 = (void*)0;
                        unsigned short *l_297 = (void*)0;
                        unsigned short *l_298 = (void*)0;
                        unsigned short *l_299 = &g_61.f5;
                        int *l_302 = &g_116.f4;
                        (*l_302) = ((((*l_256) = ((((*l_299) = (safe_rshift_func_int16_t_s_u(((g_76 != ((*l_294) = l_292)) < func_39(&g_121)), 0))) || func_39(p_37)) <= g_140.f3)) , l_300) == l_301);
                        (*l_302) = (*l_256);
                        (*l_256) = l_303;
                    }
                    else
                    {
                        volatile union U1 ***l_307 = &g_304;
                        int *l_308 = &g_247.f4;
                        int **l_309 = &l_256;
                        (*l_307) = g_304;
                        (*l_309) = l_308;

                        ;
                        p_36 = l_288;
                    }
                }
                else
                {
                    if (g_61.f7)
                        break;
                }
                g_92 = l_310;

                ;
                l_321 = ((&g_267 != l_311) || (l_312 < (p_35 , ((*l_310) ^ p_35))));
                if ((*l_256))
                {
                    union U2 ***l_322 = &l_301;
                    struct S0 **l_323 = &l_313;
                    struct S0 ***l_324 = (void*)0;
                    struct S0 ***l_325 = &l_323;
                    int l_337 = (-9L);
                    (*l_322) = &g_76;
                    (*l_325) = l_323;
                    for (g_187.f5 = 0; (g_187.f5 > 53); ++g_187.f5)
                    {
                        unsigned l_328 = 4294967290UL;
                        int **l_330 = (void*)0;
                        int ***l_329 = &l_330;
                        (*l_256) = p_38;
                        (*g_92) = (l_328 == ((*l_261) = (((*l_329) = &g_92) == (void*)0)));

                        ;
                    }
                    for (p_35 = 0; (p_35 != 26); ++p_35)
                    {
                        int **l_344 = &g_92;
                        unsigned char *l_348 = &g_142.f7;
                        struct S0 *l_349 = &g_350;
                        (*g_92) = ((!((**l_311) = ((safe_mul_func_uint8_t_u_u((((g_15 != g_116.f3) <= (p_38 , (safe_rshift_func_int8_t_s_u(((p_35 , 0x016AL) , l_337), 5)))) >= 0xD32BE164L), (safe_mul_func_uint8_t_u_u(p_35, (*p_37))))) , (*g_269)))) , (*g_92));
                        (*l_344) = (void*)0;

                        ;
                        l_337 = (safe_mul_func_uint8_t_u_u(l_337, (*p_37)));
                        return p_35;
                    }
                }
                else
                {
                    int l_351 = 0x1F72A75FL;
                    union U2 ****l_361 = &l_359;
                    unsigned *l_362 = &g_185;
                    short ***l_373 = &l_311;
                    short **l_375 = &g_269;
                    short ***l_374 = &l_375;
                    unsigned short *l_376 = &g_140.f5;
                    if (l_351)
                        break;
                    if ((((*l_310) <= (*g_269)) <= (((g_350.f3 || ((((safe_sub_func_uint32_t_u_u((safe_add_func_uint16_t_u_u(((((*l_362) = (((l_351 || ((l_358 != ((*l_361) = ((*l_310) , l_359))) == ((*l_320) = ((*p_37) >= (&g_185 == &p_35))))) < (*g_269)) >= 0L)) == (*l_310)) < 4294967291UL), p_35)), 3L)) , p_38) <= p_38) == (-1L))) , (void*)0) != (void*)0)))
                    {
                        char l_365 = 1L;
                        l_365 = (safe_lshift_func_uint16_t_u_u((*l_310), 15));
                        g_367 = l_366;

                        ;
                        (*l_256) = l_365;
                    }
                    else
                    {
                        if ((*l_256))
                            break;
                        if (g_350.f3)
                            goto lbl_368;
                    }
                    l_351 = ((func_39(&g_15) | (*g_92)) > (*g_269));
                }
            }

            ;
            l_385 = ((*l_256) = l_383);
        }
        else
        {
            struct S0 *l_390 = (void*)0;
            int l_394 = 2L;
            struct S0 **l_401 = &l_313;
            struct S0 *l_404 = &g_405;
            union U3 *l_423 = &g_424;
            union U3 *l_425 = &g_426;
            if ((*l_256))
            {
                struct S0 **l_391 = &l_390;
                unsigned char *l_395 = &g_350.f7;
                int l_396 = 0xCCD53971L;
                if ((safe_sub_func_int8_t_s_s((((safe_mod_func_uint8_t_u_u((func_39(l_261) | l_396), l_396)) , g_62) , (*p_37)), 1UL)))
                {
                    struct S0 *l_402 = &g_403;
                    for (g_341.f7 = 0; (g_341.f7 < 6); g_341.f7++)
                    {
                        (*l_256) = (safe_sub_func_uint8_t_u_u((l_394 && (((*p_37) , &g_60) != l_401)), ((((l_396 || p_35) , p_38) , 0x78A4743BL) , g_142.f4)));
                    }
                }
                else
                {
                    (*l_391) = g_60;

                    ;
                }

                ;
                (*l_256) = (*l_256);
                if (((safe_lshift_func_int16_t_s_u(((*l_256) , (safe_add_func_int32_t_s_s(((safe_lshift_func_uint16_t_u_s(g_403.f7, 9)) & (*p_37)), p_35))), ((((safe_rshift_func_int8_t_s_s((safe_rshift_func_int16_t_s_u((safe_mod_func_uint32_t_u_u(0UL, (safe_lshift_func_int8_t_s_s(g_343.f5, ((*l_275) = (l_396 | ((((safe_sub_func_uint16_t_u_u(func_39(p_37), (-1L))) >= (*g_269)) >= p_38) != (*l_256)))))))), p_35)), 1)) || g_61.f5) , l_422) == (void*)0))) , 0x12DDB8F7L))
                {
lbl_444:
                    l_425 = l_423;

                    ;
                    for (g_424.f3.f7 = 28; (g_424.f3.f7 == 47); ++g_424.f3.f7)
                    {
                        int *l_429 = &l_385;
                        (*l_429) = ((*l_256) = g_62.f0);
                    }
                }
                else
                {
                    struct S0 *l_434 = (void*)0;
                    union U1 l_437 = {0xC534D282L};
                    for (l_396 = 0; (l_396 < (-1)); l_396 = safe_sub_func_int32_t_s_s(l_396, 1))
                    {
                        unsigned char ***l_440 = &l_438;
                        unsigned char **l_442 = &l_395;
                        unsigned char ***l_441 = &l_442;
                        int **l_443 = &g_92;
                        g_205.f4 = ((*l_256) = (safe_mul_func_int8_t_s_s((g_116.f7 | p_35), g_140.f7)));
                        (*l_441) = ((*p_37) , ((*l_440) = l_438));

                        ;
                        (*l_443) = &l_385;

                        ;
                    }


                }


                ;
                if (g_140.f7)
                    goto lbl_444;
            }
            else
            {
                char *l_445 = &g_293.f1;
                (*l_256) = func_39((l_445 = p_37));

                ;
            }


            ;
            ;
        }


        ;
        for (g_350.f5 = 14; (g_350.f5 >= 60); g_350.f5++)
        {
            unsigned l_450 = 0x9DEA679EL;
            unsigned l_471 = 0UL;
            struct S0 *l_472 = &g_473;
            int **l_480 = &g_92;
        }
        (*l_481) = &g_67;

        ;
        if ((((*l_484) = (safe_lshift_func_int16_t_s_u(p_38, 3))) != (((l_485 , ((+(((((p_35 > (0x09L != (((1L <= p_38) , (((**l_481) , (void*)0) == (void*)0)) <= 0xE92700A7L))) , l_494) | (**l_481)) | g_341.f7) > g_142.f3)) > (*l_256))) <= p_38) | (*g_269))))
        {
            int *l_497 = &g_403.f4;
            unsigned l_510 = 4294967291UL;
            for (p_35 = 0; (p_35 < 16); p_35 = safe_add_func_int16_t_s_s(p_35, 6))
            {
                char l_500 = 0xE7L;
                unsigned char *l_511 = (void*)0;
                unsigned char *l_512 = &g_314.f7;
                (*l_481) = l_497;

                ;
                for (g_424.f1.f4 = 0; (g_424.f1.f4 >= 4); ++g_424.f1.f4)
                {
                    int *l_501 = &g_61.f4;
                    (*l_497) = ((*l_256) = l_500);
                    l_501 = (void*)0;

                    ;
                }
                if (((((safe_sub_func_uint32_t_u_u(g_247.f5, (*g_92))) | (1UL && (((((safe_mul_func_uint8_t_u_u(((((safe_rshift_func_uint8_t_u_u(((*l_439) = l_510), g_116.f7)) != (((*l_512) = l_500) < (g_479.f1 = ((*l_275) = (*l_497))))) & (safe_mul_func_uint8_t_u_u((g_293.f4 == (*g_92)), 8UL))) <= 0xA9L), p_35)) , g_403.f7) >= 0UL) , 0x280BL) >= p_38))) , (*l_497)) != 0L))
                {
                    if (g_61.f7)
                        goto lbl_368;
                }
                else
                {
                    int *l_515 = &g_205.f4;
                    struct S0 *l_516 = (void*)0;
                    (*l_481) = l_515;

                    ;
                    (*l_422) = l_516;

                    ;
                }

                ;
            }

            ;
        }
        else
        {
            char l_524 = (-1L);
            for (g_341.f4 = 0; (g_341.f4 > 14); g_341.f4 = safe_add_func_uint8_t_u_u(g_341.f4, 2))
            {
                unsigned short l_523 = 3UL;
                int *l_528 = &g_468.f4;
                struct S0 *l_535 = (void*)0;
                for (g_140.f3 = 0; (g_140.f3 > (-21)); g_140.f3 = safe_sub_func_uint32_t_u_u(g_140.f3, 9))
                {
                    unsigned l_525 = 1UL;
                    int *l_529 = &g_140.f4;
                    (*l_481) = &g_67;

                    ;
                    if (((*g_92) >= ((l_524 = (p_35 ^ l_523)) >= ((l_525 < ((0xACE39541L || g_479.f1) <= (((*g_269) != func_39((((*l_484) = (0xC6EE1362L || 0x7CD70FB3L)) , (void*)0))) ^ 0x21D2L))) || 0x2E78L))))
                    {
                        struct S0 *l_526 = &g_527;
                        (*l_422) = l_526;

                        ;
                        (*l_481) = l_528;

                        ;
                        (*l_481) = l_529;

                        ;
                        (*l_422) = l_526;
                    }
                    else
                    {
                        p_36 = &g_67;

                        ;
                        return p_35;
                    }

                    ;
                    ;
                }
                for (g_140.f7 = 0; (g_140.f7 < 7); g_140.f7 = safe_add_func_int16_t_s_s(g_140.f7, 5))
                {
                    int l_536 = 4L;
                    union U3 *l_538 = &g_539;
                    union U3 **l_540 = &l_538;
                    (*l_528) = (safe_lshift_func_uint8_t_u_s(((l_534 = l_534) != &g_269), 7));
                    if (p_38)
                    {
                        union U2 **l_537 = &l_478;
                        (*l_481) = &g_67;

                        ;
                        (*l_537) = l_292;

                        ;
                        (*g_92) = 0x7E60A7B7L;
                    }
                    else
                    {
                        if (l_524)
                            break;
                        (*l_528) = 1L;
                        (*l_481) = &g_67;

                        ;
                    }

                    ;
                    (*l_540) = l_538;
                }
            }

            ;
            ;
        }

        ;
        ;
    }

    ;
    ;
    (*g_92) = ((((l_485 , ((safe_rshift_func_uint8_t_u_s((*l_256), (*l_256))) > (*p_37))) != p_35) , (l_563 | ((*l_261) = (0x19B1AD99L >= ((*l_256) && (g_140.f7 & (*l_256))))))) >= (*l_256));
    return (*l_256);
}







static unsigned func_39(char * p_40)
{
    unsigned l_242 = 4294967291UL;
    int *l_243 = &g_116.f4;
    struct S0 *l_248 = (void*)0;
    char *l_253 = &g_15;
    char **l_252 = &l_253;
    if (((safe_mod_func_int32_t_s_s(l_242, l_242)) , ((*l_243) = g_142.f5)))
    {
        (*l_243) = (safe_rshift_func_uint16_t_u_u(0xBA9DL, 12));
    }
    else
    {
        struct S0 *l_246 = &g_247;
        int l_249 = 0x404DFAA3L;
        (*l_243) = l_249;
        for (g_205.f5 = 8; (g_205.f5 >= 19); g_205.f5 = safe_add_func_int32_t_s_s(g_205.f5, 4))
        {
            l_252 = &p_40;

            ;
            (*l_243) = (-9L);
            if (g_15)
                break;
        }

        ;
    }

    ;
    return (*l_243);
}







static char * func_41(unsigned p_42, int p_43, unsigned short p_44)
{
    short l_228 = 1L;
    struct S0 *l_232 = (void*)0;
    if ((l_228 != 0xB21537E4L))
    {
        g_92 = &g_67;

        ;
        (*g_92) = (0xA2C95388L || 0x1E382851L);
    }
    else
    {
        int *l_229 = &g_187.f4;
        (*l_229) = 1L;
    }
    for (g_140.f5 = 0; (g_140.f5 != 60); ++g_140.f5)
    {
        struct S0 **l_233 = &l_232;
        (*l_233) = l_232;
    }
    for (g_116.f1 = 0; (g_116.f1 >= 1); g_116.f1 = safe_add_func_uint16_t_u_u(g_116.f1, 5))
    {
        short l_236 = 0x4368L;
        unsigned short *l_239 = &g_205.f5;
        p_43 = ((((l_236 , (void*)0) != (void*)0) > g_142.f7) , ((safe_rshift_func_uint16_t_u_u(((*l_239) = l_236), p_44)) , l_236));
        return &g_15;


    }
    return &g_121;


}







static unsigned char * func_47(unsigned char * p_48, char * p_49)
{
    unsigned l_137 = 4294967295UL;
    int *l_138 = &g_116.f4;
    unsigned char *l_159 = &g_116.f7;
    unsigned char **l_158 = &l_159;
    struct S0 *l_175 = (void*)0;
    struct S0 *l_204 = &g_205;
    union U1 l_220 = {4294967295UL};
    for (g_116.f1 = 0; (g_116.f1 != (-16)); g_116.f1--)
    {
        int *l_132 = &g_61.f4;
        int **l_133 = (void*)0;
        int **l_134 = &g_92;
        struct S0 *l_139 = &g_140;
        struct S0 *l_141 = &g_142;
        int l_151 = 1L;
        int l_155 = 0x3B77C0CFL;
        (*l_134) = l_132;

        ;
        if ((l_137 != (!(*p_48))))
        {
            int l_143 = 0x3B50BCEFL;
            struct S0 *l_144 = (void*)0;
            g_92 = l_138;

            ;
            if ((func_53(l_139, l_141, l_143, l_144) || ((safe_rshift_func_int8_t_s_s((l_143 ^ (safe_sub_func_uint8_t_u_u(g_140.f1, ((((0x21L ^ ((*g_92) <= (*l_138))) == l_143) && 1UL) , 0xA0L)))), (*p_49))) ^ l_143)))
            {
                for (g_116.f5 = (-28); (g_116.f5 <= 48); ++g_116.f5)
                {
                    (*l_132) = l_151;
                }
                return p_49;


            }
            else
            {
                unsigned short l_152 = 0x561BL;
                unsigned char *l_157 = &g_61.f7;
                unsigned char **l_156 = &l_157;
                (*l_134) = &l_143;

                ;
                if (l_152)
                    break;

                (**l_134) = (safe_add_func_uint32_t_u_u((1UL != l_155), (*g_92)));
                l_158 = l_156;

                ;
            }

            ;

            for (g_29 = 0; (g_29 > 46); g_29++)
            {
                (*l_134) = &l_143;
                return p_49;



            }
            (**l_134) = l_143;
        }
        else
        {
            return &g_29;


        }



    }



    for (g_116.f1 = 0; (g_116.f1 != 27); g_116.f1 = safe_add_func_uint8_t_u_u(g_116.f1, 1))
    {
        union U1 *l_167 = (void*)0;
        union U1 **l_166 = &l_167;
        union U1 ***l_168 = &l_166;
        unsigned char *l_170 = &g_61.f7;
        (*l_168) = ((safe_lshift_func_int8_t_s_s(g_61.f4, 7)) , l_166);
        if (((*l_138) = 0x5C328A76L))
        {
            struct S0 **l_169 = &g_60;
            (*l_169) = g_60;
            return &g_29;


        }
        else
        {
            return l_170;


        }
    }
    if ((((((((*l_138) < (((((*p_49) = (safe_unary_minus_func_uint16_t_u(((void*)0 != g_172)))) && (safe_sub_func_int8_t_s_s(((*l_138) & func_53(l_175, g_60, (*p_48), g_60)), (*l_138)))) < (*l_138)) | (*l_138))) >= g_116.f3) , g_61.f4) | (*l_138)) & (*l_138)) && g_61.f4))
    {
        unsigned *l_184 = &g_185;
        struct S0 *l_186 = &g_187;
        int l_190 = (-1L);
        int l_191 = 2L;
        char *l_192 = &g_77.f1;
        int **l_193 = (void*)0;
        int **l_194 = &g_92;
        int **l_195 = &l_138;
        union U1 l_219 = {0xE58EE9C4L};
        (*l_138) = (0x69B51010L < (safe_rshift_func_uint16_t_u_u((safe_rshift_func_uint16_t_u_s(g_15, 2)), ((g_62 , (void*)0) == &l_158))));
        (*l_138) = ((safe_mul_func_int8_t_s_s(((*l_192) = ((safe_lshift_func_uint16_t_u_s((*l_138), (((*l_184) = ((*p_49) ^ g_77.f0)) && (((*l_138) | ((*p_49) = (((func_53(g_60, l_186, (safe_sub_func_uint32_t_u_u((l_190 = ((g_67 , &g_60) != &l_186)), (*l_138))), g_60) & g_77.f4) & l_191) != g_61.f3))) > (*l_138))))) < g_142.f7)), 0L)) > 65535UL);

        (*l_195) = ((*l_194) = l_138);

        ;
        if ((safe_sub_func_int16_t_s_s(g_140.f5, g_187.f1)))
        {
            return p_49;


        }
        else
        {
            char l_208 = 0x64L;
            union U1 *l_221 = &g_62;
            unsigned l_222 = 4294967292UL;
            short *l_223 = (void*)0;
            union U1 **l_224 = &l_221;
            for (g_187.f4 = (-9); (g_187.f4 < (-9)); g_187.f4 = safe_add_func_int16_t_s_s(g_187.f4, 7))
            {
                (*l_138) = l_208;
            }
            (*l_224) = ((safe_sub_func_int16_t_s_s(g_140.f1, 65534UL)) , &l_220);

            ;
        }
    }
    else
    {
        int l_225 = 7L;
        (*l_138) = (l_225 == ((*p_48) && 0xC8L));
        return &g_29;


    }

    ;
    return p_48;


}







static unsigned char * func_50(int p_51, unsigned char * p_52)
{
    int *l_91 = &g_61.f4;
    struct S0 *l_95 = (void*)0;
    union U2 **l_96 = &g_76;
    union U2 **l_98 = &g_76;
    union U2 ***l_97 = &l_98;
    int l_103 = 1L;
    unsigned l_112 = 5UL;
    union U1 *l_126 = &g_62;
    unsigned char *l_128 = &g_29;
    unsigned char **l_127 = &l_128;
    unsigned char ***l_129 = &l_127;
    g_92 = l_91;
    for (g_67 = 21; (g_67 < (-24)); g_67--)
    {
        if (p_51)
            break;
    }
    if (((*l_91) = (func_53(g_60, l_95, ((0x4BL || ((l_96 != ((*l_97) = l_96)) , (safe_lshift_func_uint8_t_u_s((safe_mod_func_uint16_t_u_u(((l_103 != p_51) > ((p_51 <= ((p_51 | g_67) > (*l_91))) <= (*g_92))), 0xDA5EL)), g_62.f0)))) >= (*p_52)), g_60) , (*g_92))))
    {
        union U2 **l_104 = &g_76;
        int l_111 = (-1L);
        struct S0 *l_115 = &g_116;
        char *l_122 = &g_121;
        int l_123 = 0xC2983F5DL;
        (*l_97) = l_104;
        (*g_92) = (safe_rshift_func_uint16_t_u_u((p_51 , (safe_rshift_func_uint16_t_u_s((safe_lshift_func_uint16_t_u_s((l_111 = g_77.f1), ((((*l_122) = (l_112 & ((safe_add_func_uint8_t_u_u(((func_53(l_115, l_95, g_77.f1, l_115) || ((safe_lshift_func_int16_t_s_u(((safe_mod_func_int8_t_s_s((*l_91), 3UL)) || 1UL), 7)) , g_121)) , g_116.f3), 6L)) <= p_51))) < l_123) & p_51))), 15))), 10));
        (*l_91) = (*g_92);
    }
    else
    {
        union U1 *l_125 = &g_62;
        union U1 **l_124 = &l_125;
        (*l_124) = &g_62;
        (*l_124) = l_126;
    }
    (*l_129) = l_127;
    return &g_29;


}







static int func_53(struct S0 * p_54, struct S0 * p_55, unsigned char p_56, struct S0 * p_57)
{
    unsigned l_65 = 0x175C875FL;
    int *l_66 = &g_67;
    union U2 **l_78 = &g_76;
    int l_90 = (-8L);
    (*l_66) = (((l_65 = (safe_add_func_int32_t_s_s(p_56, (g_61.f4 = g_61.f3)))) >= p_56) ^ p_56);
    for (g_62.f0 = 0; (g_62.f0 >= 6); g_62.f0 = safe_add_func_uint8_t_u_u(g_62.f0, 7))
    {
        unsigned char *l_71 = (void*)0;
        unsigned char **l_70 = &l_71;
        unsigned char ***l_72 = &l_70;
        int **l_73 = &l_66;
        int *l_75 = &g_61.f4;
        int **l_74 = &l_75;
        (*l_72) = l_70;
        (*l_74) = ((*l_73) = l_66);

        ;
        if (p_56)
            continue;
    }
    (*l_78) = g_76;
    for (p_56 = 0; (p_56 <= 37); ++p_56)
    {
        int **l_81 = &l_66;
        char *l_89 = &g_77.f1;
        (*l_81) = l_66;
        for (g_61.f7 = 0; (g_61.f7 != 8); ++g_61.f7)
        {
            short l_86 = (-9L);
            for (g_62.f0 = 0; (g_62.f0 <= 43); g_62.f0 = safe_add_func_uint8_t_u_u(g_62.f0, 5))
            {
                return l_86;
            }
        }
        g_67 = ((**l_81) , g_67);
    }
    return g_77.f0;
}





int main (void)
{
    int print_hash_value = 0;
    platform_main_begin();
    crc32_gentab();
    func_1();
    transparent_crc(g_13, "g_13", print_hash_value);
    transparent_crc(g_15, "g_15", print_hash_value);
    transparent_crc(g_17, "g_17", print_hash_value);
    transparent_crc(g_18.f0, "g_18.f0", print_hash_value);
    transparent_crc(g_18.f1, "g_18.f1", print_hash_value);
    transparent_crc(g_18.f2, "g_18.f2", print_hash_value);
    transparent_crc(g_18.f3, "g_18.f3", print_hash_value);
    transparent_crc(g_18.f4, "g_18.f4", print_hash_value);
    transparent_crc(g_18.f5, "g_18.f5", print_hash_value);
    transparent_crc(g_18.f6, "g_18.f6", print_hash_value);
    transparent_crc(g_18.f7, "g_18.f7", print_hash_value);
    transparent_crc(g_29, "g_29", print_hash_value);
    transparent_crc(g_61.f0, "g_61.f0", print_hash_value);
    transparent_crc(g_61.f1, "g_61.f1", print_hash_value);
    transparent_crc(g_61.f2, "g_61.f2", print_hash_value);
    transparent_crc(g_61.f3, "g_61.f3", print_hash_value);
    transparent_crc(g_61.f4, "g_61.f4", print_hash_value);
    transparent_crc(g_61.f5, "g_61.f5", print_hash_value);
    transparent_crc(g_61.f6, "g_61.f6", print_hash_value);
    transparent_crc(g_61.f7, "g_61.f7", print_hash_value);
    transparent_crc(g_62.f0, "g_62.f0", print_hash_value);
    transparent_crc(g_67, "g_67", print_hash_value);
    transparent_crc(g_77.f1, "g_77.f1", print_hash_value);
    transparent_crc(g_116.f0, "g_116.f0", print_hash_value);
    transparent_crc(g_116.f1, "g_116.f1", print_hash_value);
    transparent_crc(g_116.f2, "g_116.f2", print_hash_value);
    transparent_crc(g_116.f3, "g_116.f3", print_hash_value);
    transparent_crc(g_116.f4, "g_116.f4", print_hash_value);
    transparent_crc(g_116.f5, "g_116.f5", print_hash_value);
    transparent_crc(g_116.f6, "g_116.f6", print_hash_value);
    transparent_crc(g_116.f7, "g_116.f7", print_hash_value);
    transparent_crc(g_121, "g_121", print_hash_value);
    transparent_crc(g_140.f0, "g_140.f0", print_hash_value);
    transparent_crc(g_140.f1, "g_140.f1", print_hash_value);
    transparent_crc(g_140.f2, "g_140.f2", print_hash_value);
    transparent_crc(g_140.f3, "g_140.f3", print_hash_value);
    transparent_crc(g_140.f4, "g_140.f4", print_hash_value);
    transparent_crc(g_140.f5, "g_140.f5", print_hash_value);
    transparent_crc(g_140.f6, "g_140.f6", print_hash_value);
    transparent_crc(g_140.f7, "g_140.f7", print_hash_value);
    transparent_crc(g_142.f0, "g_142.f0", print_hash_value);
    transparent_crc(g_142.f1, "g_142.f1", print_hash_value);
    transparent_crc(g_142.f2, "g_142.f2", print_hash_value);
    transparent_crc(g_142.f3, "g_142.f3", print_hash_value);
    transparent_crc(g_142.f4, "g_142.f4", print_hash_value);
    transparent_crc(g_142.f5, "g_142.f5", print_hash_value);
    transparent_crc(g_142.f6, "g_142.f6", print_hash_value);
    transparent_crc(g_142.f7, "g_142.f7", print_hash_value);
    transparent_crc(g_185, "g_185", print_hash_value);
    transparent_crc(g_187.f0, "g_187.f0", print_hash_value);
    transparent_crc(g_187.f1, "g_187.f1", print_hash_value);
    transparent_crc(g_187.f2, "g_187.f2", print_hash_value);
    transparent_crc(g_187.f3, "g_187.f3", print_hash_value);
    transparent_crc(g_187.f4, "g_187.f4", print_hash_value);
    transparent_crc(g_187.f5, "g_187.f5", print_hash_value);
    transparent_crc(g_187.f6, "g_187.f6", print_hash_value);
    transparent_crc(g_187.f7, "g_187.f7", print_hash_value);
    transparent_crc(g_205.f0, "g_205.f0", print_hash_value);
    transparent_crc(g_205.f1, "g_205.f1", print_hash_value);
    transparent_crc(g_205.f2, "g_205.f2", print_hash_value);
    transparent_crc(g_205.f3, "g_205.f3", print_hash_value);
    transparent_crc(g_205.f4, "g_205.f4", print_hash_value);
    transparent_crc(g_205.f5, "g_205.f5", print_hash_value);
    transparent_crc(g_205.f6, "g_205.f6", print_hash_value);
    transparent_crc(g_205.f7, "g_205.f7", print_hash_value);
    transparent_crc(g_247.f0, "g_247.f0", print_hash_value);
    transparent_crc(g_247.f1, "g_247.f1", print_hash_value);
    transparent_crc(g_247.f2, "g_247.f2", print_hash_value);
    transparent_crc(g_247.f3, "g_247.f3", print_hash_value);
    transparent_crc(g_247.f4, "g_247.f4", print_hash_value);
    transparent_crc(g_247.f5, "g_247.f5", print_hash_value);
    transparent_crc(g_247.f6, "g_247.f6", print_hash_value);
    transparent_crc(g_247.f7, "g_247.f7", print_hash_value);
    transparent_crc(g_268, "g_268", print_hash_value);
    transparent_crc(g_289, "g_289", print_hash_value);
    transparent_crc(g_293.f0, "g_293.f0", print_hash_value);
    transparent_crc(g_293.f1, "g_293.f1", print_hash_value);
    transparent_crc(g_293.f2, "g_293.f2", print_hash_value);
    transparent_crc(g_293.f4, "g_293.f4", print_hash_value);
    transparent_crc(g_306.f0, "g_306.f0", print_hash_value);
    transparent_crc(g_314.f0, "g_314.f0", print_hash_value);
    transparent_crc(g_314.f1, "g_314.f1", print_hash_value);
    transparent_crc(g_314.f2, "g_314.f2", print_hash_value);
    transparent_crc(g_314.f3, "g_314.f3", print_hash_value);
    transparent_crc(g_314.f4, "g_314.f4", print_hash_value);
    transparent_crc(g_314.f5, "g_314.f5", print_hash_value);
    transparent_crc(g_314.f6, "g_314.f6", print_hash_value);
    transparent_crc(g_314.f7, "g_314.f7", print_hash_value);
    transparent_crc(g_341.f0, "g_341.f0", print_hash_value);
    transparent_crc(g_341.f1, "g_341.f1", print_hash_value);
    transparent_crc(g_341.f2, "g_341.f2", print_hash_value);
    transparent_crc(g_341.f3, "g_341.f3", print_hash_value);
    transparent_crc(g_341.f4, "g_341.f4", print_hash_value);
    transparent_crc(g_341.f5, "g_341.f5", print_hash_value);
    transparent_crc(g_341.f6, "g_341.f6", print_hash_value);
    transparent_crc(g_341.f7, "g_341.f7", print_hash_value);
    transparent_crc(g_343.f0, "g_343.f0", print_hash_value);
    transparent_crc(g_343.f1, "g_343.f1", print_hash_value);
    transparent_crc(g_343.f2, "g_343.f2", print_hash_value);
    transparent_crc(g_343.f3, "g_343.f3", print_hash_value);
    transparent_crc(g_343.f4, "g_343.f4", print_hash_value);
    transparent_crc(g_343.f5, "g_343.f5", print_hash_value);
    transparent_crc(g_343.f6, "g_343.f6", print_hash_value);
    transparent_crc(g_343.f7, "g_343.f7", print_hash_value);
    transparent_crc(g_350.f0, "g_350.f0", print_hash_value);
    transparent_crc(g_350.f1, "g_350.f1", print_hash_value);
    transparent_crc(g_350.f2, "g_350.f2", print_hash_value);
    transparent_crc(g_350.f3, "g_350.f3", print_hash_value);
    transparent_crc(g_350.f4, "g_350.f4", print_hash_value);
    transparent_crc(g_350.f5, "g_350.f5", print_hash_value);
    transparent_crc(g_350.f6, "g_350.f6", print_hash_value);
    transparent_crc(g_350.f7, "g_350.f7", print_hash_value);
    transparent_crc(g_403.f0, "g_403.f0", print_hash_value);
    transparent_crc(g_403.f1, "g_403.f1", print_hash_value);
    transparent_crc(g_403.f2, "g_403.f2", print_hash_value);
    transparent_crc(g_403.f3, "g_403.f3", print_hash_value);
    transparent_crc(g_403.f4, "g_403.f4", print_hash_value);
    transparent_crc(g_403.f5, "g_403.f5", print_hash_value);
    transparent_crc(g_403.f6, "g_403.f6", print_hash_value);
    transparent_crc(g_403.f7, "g_403.f7", print_hash_value);
    transparent_crc(g_405.f0, "g_405.f0", print_hash_value);
    transparent_crc(g_405.f1, "g_405.f1", print_hash_value);
    transparent_crc(g_405.f2, "g_405.f2", print_hash_value);
    transparent_crc(g_405.f3, "g_405.f3", print_hash_value);
    transparent_crc(g_405.f4, "g_405.f4", print_hash_value);
    transparent_crc(g_405.f5, "g_405.f5", print_hash_value);
    transparent_crc(g_405.f6, "g_405.f6", print_hash_value);
    transparent_crc(g_405.f7, "g_405.f7", print_hash_value);
    transparent_crc(g_424.f0, "g_424.f0", print_hash_value);
    transparent_crc(g_424.f2, "g_424.f2", print_hash_value);
    transparent_crc(g_424.f4, "g_424.f4", print_hash_value);
    transparent_crc(g_426.f0, "g_426.f0", print_hash_value);
    transparent_crc(g_426.f2, "g_426.f2", print_hash_value);
    transparent_crc(g_426.f4, "g_426.f4", print_hash_value);
    transparent_crc(g_468.f0, "g_468.f0", print_hash_value);
    transparent_crc(g_468.f1, "g_468.f1", print_hash_value);
    transparent_crc(g_468.f2, "g_468.f2", print_hash_value);
    transparent_crc(g_468.f3, "g_468.f3", print_hash_value);
    transparent_crc(g_468.f4, "g_468.f4", print_hash_value);
    transparent_crc(g_468.f5, "g_468.f5", print_hash_value);
    transparent_crc(g_468.f6, "g_468.f6", print_hash_value);
    transparent_crc(g_468.f7, "g_468.f7", print_hash_value);
    transparent_crc(g_470.f0, "g_470.f0", print_hash_value);
    transparent_crc(g_470.f1, "g_470.f1", print_hash_value);
    transparent_crc(g_470.f2, "g_470.f2", print_hash_value);
    transparent_crc(g_470.f3, "g_470.f3", print_hash_value);
    transparent_crc(g_470.f4, "g_470.f4", print_hash_value);
    transparent_crc(g_470.f5, "g_470.f5", print_hash_value);
    transparent_crc(g_470.f6, "g_470.f6", print_hash_value);
    transparent_crc(g_470.f7, "g_470.f7", print_hash_value);
    transparent_crc(g_473.f0, "g_473.f0", print_hash_value);
    transparent_crc(g_473.f1, "g_473.f1", print_hash_value);
    transparent_crc(g_473.f2, "g_473.f2", print_hash_value);
    transparent_crc(g_473.f3, "g_473.f3", print_hash_value);
    transparent_crc(g_473.f4, "g_473.f4", print_hash_value);
    transparent_crc(g_473.f5, "g_473.f5", print_hash_value);
    transparent_crc(g_473.f6, "g_473.f6", print_hash_value);
    transparent_crc(g_473.f7, "g_473.f7", print_hash_value);
    transparent_crc(g_479.f1, "g_479.f1", print_hash_value);
    transparent_crc(g_527.f0, "g_527.f0", print_hash_value);
    transparent_crc(g_527.f1, "g_527.f1", print_hash_value);
    transparent_crc(g_527.f2, "g_527.f2", print_hash_value);
    transparent_crc(g_527.f3, "g_527.f3", print_hash_value);
    transparent_crc(g_527.f4, "g_527.f4", print_hash_value);
    transparent_crc(g_527.f5, "g_527.f5", print_hash_value);
    transparent_crc(g_527.f6, "g_527.f6", print_hash_value);
    transparent_crc(g_527.f7, "g_527.f7", print_hash_value);
    transparent_crc(g_539.f0, "g_539.f0", print_hash_value);
    transparent_crc(g_539.f2, "g_539.f2", print_hash_value);
    transparent_crc(g_539.f4, "g_539.f4", print_hash_value);
    transparent_crc(g_652.f0, "g_652.f0", print_hash_value);
    transparent_crc(g_652.f1, "g_652.f1", print_hash_value);
    transparent_crc(g_652.f2, "g_652.f2", print_hash_value);
    transparent_crc(g_652.f3, "g_652.f3", print_hash_value);
    transparent_crc(g_652.f4, "g_652.f4", print_hash_value);
    transparent_crc(g_652.f5, "g_652.f5", print_hash_value);
    transparent_crc(g_652.f6, "g_652.f6", print_hash_value);
    transparent_crc(g_652.f7, "g_652.f7", print_hash_value);
    transparent_crc(g_657.f0, "g_657.f0", print_hash_value);
    transparent_crc(g_657.f1, "g_657.f1", print_hash_value);
    transparent_crc(g_657.f2, "g_657.f2", print_hash_value);
    transparent_crc(g_657.f4, "g_657.f4", print_hash_value);
    transparent_crc(g_681.f0, "g_681.f0", print_hash_value);
    transparent_crc(g_681.f1, "g_681.f1", print_hash_value);
    transparent_crc(g_681.f2, "g_681.f2", print_hash_value);
    transparent_crc(g_681.f3, "g_681.f3", print_hash_value);
    transparent_crc(g_681.f4, "g_681.f4", print_hash_value);
    transparent_crc(g_681.f5, "g_681.f5", print_hash_value);
    transparent_crc(g_681.f6, "g_681.f6", print_hash_value);
    transparent_crc(g_681.f7, "g_681.f7", print_hash_value);
    transparent_crc(g_682.f0, "g_682.f0", print_hash_value);
    transparent_crc(g_682.f1, "g_682.f1", print_hash_value);
    transparent_crc(g_682.f2, "g_682.f2", print_hash_value);
    transparent_crc(g_682.f3, "g_682.f3", print_hash_value);
    transparent_crc(g_682.f4, "g_682.f4", print_hash_value);
    transparent_crc(g_682.f5, "g_682.f5", print_hash_value);
    transparent_crc(g_682.f6, "g_682.f6", print_hash_value);
    transparent_crc(g_682.f7, "g_682.f7", print_hash_value);
    transparent_crc(g_705.f0, "g_705.f0", print_hash_value);
    transparent_crc(g_705.f1, "g_705.f1", print_hash_value);
    transparent_crc(g_705.f2, "g_705.f2", print_hash_value);
    transparent_crc(g_705.f3, "g_705.f3", print_hash_value);
    transparent_crc(g_705.f4, "g_705.f4", print_hash_value);
    transparent_crc(g_705.f5, "g_705.f5", print_hash_value);
    transparent_crc(g_705.f6, "g_705.f6", print_hash_value);
    transparent_crc(g_705.f7, "g_705.f7", print_hash_value);
    transparent_crc(g_791.f0, "g_791.f0", print_hash_value);
    transparent_crc(g_791.f1, "g_791.f1", print_hash_value);
    transparent_crc(g_791.f2, "g_791.f2", print_hash_value);
    transparent_crc(g_791.f3, "g_791.f3", print_hash_value);
    transparent_crc(g_791.f4, "g_791.f4", print_hash_value);
    transparent_crc(g_791.f5, "g_791.f5", print_hash_value);
    transparent_crc(g_791.f6, "g_791.f6", print_hash_value);
    transparent_crc(g_791.f7, "g_791.f7", print_hash_value);
    transparent_crc(g_796.f0, "g_796.f0", print_hash_value);
    transparent_crc(g_796.f1, "g_796.f1", print_hash_value);
    transparent_crc(g_796.f2, "g_796.f2", print_hash_value);
    transparent_crc(g_796.f3, "g_796.f3", print_hash_value);
    transparent_crc(g_796.f4, "g_796.f4", print_hash_value);
    transparent_crc(g_796.f5, "g_796.f5", print_hash_value);
    transparent_crc(g_796.f6, "g_796.f6", print_hash_value);
    transparent_crc(g_796.f7, "g_796.f7", print_hash_value);
    transparent_crc(g_822.f0, "g_822.f0", print_hash_value);
    transparent_crc(g_822.f2, "g_822.f2", print_hash_value);
    transparent_crc(g_822.f4, "g_822.f4", print_hash_value);
    platform_main_end(crc32_context ^ 0xFFFFFFFFUL, print_hash_value);
    return 0;
}
