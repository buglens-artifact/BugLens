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
   int f1;
   short f2;
   signed f3 : 24;
   char f4;
   short f5;
   short f6;
   unsigned short f7;
   unsigned f8;
   unsigned short f9;
};

struct S1 {
   int f0;
   unsigned short f1;
   unsigned short f2;
   int f3;
   int f4;
   struct S0 f5;
   unsigned f6;
   signed f7 : 19;
   unsigned char f8;
};


static char g_4 = 1L;
static int g_30 = 0x1FDA6603L;
static int *g_49 = &g_30;
static struct S0 g_50 = {0L,0xE81D84CBL,4L,-954,0x99L,0x15BAL,0x9F94L,0xB44DL,0x381D8479L,1UL};
static short g_52[2][2] = {{7L,7L},{7L,7L}};
static struct S1 g_57 = {0x9AD35785L,5UL,0xE089L,-10L,0xECB2DECAL,{0x65B034E2L,1L,0x6F2FL,1134,0xB6L,0xE3C6L,-1L,0xA693L,1UL,0x049BL},4294967293UL,349,0x50L};
static struct S0 *g_90 = &g_50;
static struct S0 **g_89 = &g_90;
static struct S1 *g_97 = (void*)0;
static struct S1 **g_96 = &g_97;
static unsigned g_103 = 0UL;
static unsigned g_114 = 4294967295UL;
static unsigned g_122 = 4UL;
static struct S1 g_165 = {5L,0UL,7UL,0x27DD179FL,1L,{-7L,1L,0x1DF5L,1890,-1L,0L,0x01F9L,0xBB54L,0UL,0xD1BEL},0x84E9489AL,-42,253UL};
static unsigned char *g_173 = &g_165.f8;
static unsigned char **g_172[1][3][8] = {{{(void*)0,&g_173,(void*)0,&g_173,&g_173,&g_173,&g_173,&g_173},{&g_173,&g_173,(void*)0,(void*)0,&g_173,&g_173,&g_173,&g_173},{&g_173,&g_173,&g_173,&g_173,&g_173,&g_173,&g_173,&g_173}}};
static struct S0 g_243 = {0x4DB17821L,0x6A83A9B5L,0xFADFL,-3896,0xCEL,0xFD8EL,0x9470L,0UL,4294967289UL,0x00F1L};
static struct S1 g_261 = {1L,0x7F61L,0x554CL,0x7E684543L,-1L,{0x573CE48CL,0x20C3A654L,0x27E1L,-1859,0xE5L,8L,0x6BF6L,0x9DB1L,0UL,65530UL},0UL,-452,1UL};
static unsigned short g_272[8][10] = {{0x7661L,0x7FD5L,0x275DL,1UL,2UL,3UL,3UL,2UL,1UL,0x275DL},{2UL,2UL,65533UL,0x7661L,0xDD87L,3UL,0xA5E2L,3UL,0x2298L,0x275DL},{0x275DL,3UL,0x275DL,65533UL,0x7FD5L,0x8DD8L,0xDD87L,0xDD87L,0x8DD8L,0x7FD5L},{0x7661L,1UL,1UL,0x7661L,0x275DL,0x2298L,65533UL,0xDD87L,65533UL,0x2298L},{0x8DD8L,2UL,0x275DL,2UL,0x8DD8L,0xA5E2L,1UL,65533UL,65533UL,1UL},{0xDD87L,0xA5E2L,0x7661L,0x7661L,0xA5E2L,0xDD87L,0x7FD5L,1UL,0x8DD8L,1UL},{2UL,0x7661L,0x8DD8L,65533UL,0x8DD8L,0x7661L,2UL,0x7FD5L,0x2298L,0x2298L},{2UL,0x2298L,0xDD87L,0x275DL,0x275DL,0xDD87L,0x2298L,2UL,0xA5E2L,0x7FD5L}};
static int **g_298[6] = {&g_49,&g_49,&g_49,&g_49,&g_49,&g_49};
static int ***g_297[1] = {&g_298[1]};
static short g_307 = 0L;
static unsigned short *g_334[4] = {&g_57.f5.f7,&g_57.f5.f7,&g_57.f5.f7,&g_57.f5.f7};
static int *g_461 = (void*)0;
static struct S1 ***g_475 = &g_96;
static struct S1 ****g_474 = &g_475;
static struct S1 *g_481 = &g_261;
static unsigned short g_537 = 0x29BEL;
static unsigned *g_587 = (void*)0;
static unsigned **g_586[5] = {&g_587,&g_587,&g_587,&g_587,&g_587};
static unsigned ***g_585 = &g_586[3];
static int g_609 = 1L;
static unsigned short **g_624 = &g_334[0];
static unsigned short ***g_623[6] = {&g_624,&g_624,&g_624,&g_624,&g_624,&g_624};
static int g_667 = (-5L);
static struct S1 g_696 = {-10L,0xFEF5L,0xF274L,0L,0xCD5AC602L,{1L,0L,0xD518L,-1398,0xBEL,-1L,-10L,4UL,1UL,7UL},0x6EA927A7L,-268,0x8AL};
static unsigned g_725[9] = {4294967289UL,4294967289UL,0xDD0D12F0L,4294967289UL,4294967289UL,0xDD0D12F0L,4294967289UL,4294967289UL,0xDD0D12F0L};
static unsigned short g_739 = 1UL;
static unsigned *g_760 = (void*)0;
static unsigned **g_759 = &g_760;
static int *g_761 = (void*)0;
static unsigned g_846[6][7] = {{0x5F7038BDL,0xE99E93F0L,0x2CD154BBL,0x5F7038BDL,0x5F7038BDL,0x2CD154BBL,1UL},{0xE99E93F0L,1UL,0xE2D89C6CL,0xE99E93F0L,0UL,0UL,0xE99E93F0L},{0xE2D89C6CL,1UL,0xE2D89C6CL,0UL,1UL,1UL,1UL},{1UL,0xE99E93F0L,0x2CD154BBL,0xE99E93F0L,1UL,0x2CD154BBL,0x5F7038BDL},{0x5F7038BDL,1UL,0UL,0x5F7038BDL,0UL,1UL,0x5F7038BDL},{0xE2D89C6CL,0x5F7038BDL,1UL,0UL,0x5F7038BDL,0UL,1UL}};
static short g_901 = 0x8976L;
static unsigned g_927 = 4294967295UL;
static short g_1114 = 1L;
static unsigned g_1135 = 0UL;



static unsigned func_1(void);
static unsigned char func_5(unsigned p_6, int p_7, int p_8);
static short func_9(struct S0 p_10);
static struct S1 func_11(unsigned short p_12);
static char func_13(unsigned p_14, unsigned short p_15, unsigned p_16, unsigned short p_17, struct S0 p_18);
static struct S0 func_19(unsigned p_20);
static short func_23(char p_24);
static int * func_26(int * p_27, unsigned char p_28);
static unsigned char func_33(int * p_34, unsigned p_35, int * p_36, unsigned p_37);
static int * func_42(int * p_43, struct S1 p_44, int * p_45);
static unsigned func_1(void)
{
    int l_25 = 0x84B0F4F2L;
    unsigned short *l_234[5][9][5] = {{{&g_57.f1,&g_50.f9,&g_50.f7,&g_50.f9,&g_57.f1},{&g_165.f5.f7,&g_165.f1,(void*)0,(void*)0,&g_165.f1},{&g_57.f2,(void*)0,(void*)0,&g_50.f9,(void*)0},{&g_165.f1,&g_50.f9,&g_57.f5.f9,&g_165.f1,&g_165.f1},{(void*)0,&g_50.f9,(void*)0,(void*)0,&g_57.f1},{&g_165.f1,&g_165.f5.f7,(void*)0,&g_50.f9,&g_165.f5.f7},{&g_57.f2,&g_50.f9,(void*)0,&g_50.f9,&g_57.f2},{&g_165.f5.f7,&g_50.f9,(void*)0,&g_165.f5.f7,&g_165.f1},{&g_57.f1,(void*)0,(void*)0,&g_50.f9,(void*)0}},{{&g_165.f1,&g_165.f1,&g_57.f5.f9,&g_50.f9,&g_165.f1},{(void*)0,&g_50.f9,(void*)0,(void*)0,&g_57.f2},{&g_165.f1,&g_57.f5.f9,&g_57.f5.f9,&g_165.f5.f7,&g_165.f1},{(void*)0,(void*)0,&g_57.f1,(void*)0,(void*)0},{&g_165.f1,&g_165.f5.f7,&g_57.f5.f9,&g_57.f5.f9,&g_165.f5.f7},{(void*)0,&g_50.f9,(void*)0,(void*)0,(void*)0},{&g_165.f5.f7,(void*)0,&g_50.f9,&g_165.f5.f7,&g_165.f5.f7},{&g_50.f7,(void*)0,&g_50.f7,&g_50.f9,(void*)0},{&g_165.f5.f7,&g_165.f1,&g_57.f5.f9,(void*)0,&g_165.f1}},{{(void*)0,(void*)0,&g_57.f2,(void*)0,(void*)0},{&g_165.f1,(void*)0,&g_57.f5.f9,&g_165.f1,&g_165.f5.f7},{(void*)0,&g_50.f9,&g_50.f7,(void*)0,&g_50.f7},{&g_165.f5.f7,&g_165.f5.f7,&g_50.f9,(void*)0,&g_165.f5.f7},{(void*)0,(void*)0,(void*)0,&g_50.f9,(void*)0},{&g_165.f5.f7,&g_57.f5.f9,&g_57.f5.f9,&g_165.f5.f7,&g_165.f1},{(void*)0,(void*)0,&g_57.f1,(void*)0,(void*)0},{&g_165.f1,&g_165.f5.f7,&g_57.f5.f9,&g_57.f5.f9,&g_165.f5.f7},{(void*)0,&g_50.f9,(void*)0,(void*)0,(void*)0}},{{&g_165.f5.f7,(void*)0,&g_50.f9,&g_165.f5.f7,&g_165.f5.f7},{&g_50.f7,(void*)0,&g_50.f7,&g_50.f9,(void*)0},{&g_165.f5.f7,&g_165.f1,&g_57.f5.f9,(void*)0,&g_165.f1},{(void*)0,(void*)0,&g_57.f2,(void*)0,(void*)0},{&g_165.f1,(void*)0,&g_57.f5.f9,&g_165.f1,&g_165.f5.f7},{(void*)0,&g_50.f9,&g_50.f7,(void*)0,&g_50.f7},{&g_165.f5.f7,&g_165.f5.f7,&g_50.f9,(void*)0,&g_165.f5.f7},{(void*)0,(void*)0,(void*)0,&g_50.f9,(void*)0},{&g_165.f5.f7,&g_57.f5.f9,&g_57.f5.f9,&g_165.f5.f7,&g_165.f1}},{{(void*)0,(void*)0,&g_57.f1,(void*)0,(void*)0},{&g_165.f1,&g_165.f5.f7,&g_57.f5.f9,&g_57.f5.f9,&g_165.f5.f7},{(void*)0,&g_50.f9,(void*)0,(void*)0,(void*)0},{&g_165.f5.f7,(void*)0,&g_50.f9,&g_165.f5.f7,&g_165.f5.f7},{&g_50.f7,(void*)0,&g_50.f7,&g_50.f9,(void*)0},{&g_165.f5.f7,&g_165.f1,&g_57.f5.f9,(void*)0,&g_165.f1},{(void*)0,(void*)0,&g_57.f2,(void*)0,(void*)0},{&g_165.f1,(void*)0,&g_57.f5.f9,&g_165.f1,&g_165.f5.f7},{(void*)0,&g_50.f9,&g_50.f7,(void*)0,&g_50.f7}}};
    int l_235[7][1][6] = {{{0L,0L,0xD038F0C9L,0L,(-1L),0xD038F0C9L}},{{0L,(-1L),0xD038F0C9L,(-1L),0L,0xD038F0C9L}},{{(-1L),0L,0xD038F0C9L,0L,0L,0xD038F0C9L}},{{0L,0L,0xD038F0C9L,0xDCD79D70L,(-3L),0L}},{{0xDCD79D70L,(-3L),0L,(-3L),0xDCD79D70L,0L}},{{(-3L),0xDCD79D70L,0L,5L,5L,0L}},{{5L,5L,0L,0xDCD79D70L,(-3L),0L}}};
    unsigned char l_277 = 0x58L;
    struct S0 l_278[2] = {{0x7CF974B5L,4L,0xE7BDL,2730,0x8AL,0x32BCL,0x7ECBL,7UL,0x144EB37FL,0x4A8AL},{0x7CF974B5L,4L,0xE7BDL,2730,0x8AL,0x32BCL,0x7ECBL,7UL,0x144EB37FL,0x4A8AL}};
    unsigned *l_845[2][5] = {{&g_114,&g_114,&g_114,&g_114,&g_114},{&g_725[5],&g_725[1],&g_725[5],&g_725[1],&g_725[5]}};
    struct S1 l_1086 = {0x2FAC3074L,0x845CL,65535UL,1L,0x83D30530L,{0xE0B1670FL,0xB5BC3CCAL,0xE67BL,-2410,1L,0L,-1L,0x7ABEL,1UL,0xE14CL},0xE3F393FDL,670,0x27L};
    struct S0 ***l_1089 = (void*)0;
    int **l_1094 = (void*)0;
    int **l_1096[10][8] = {{&g_461,&g_461,&g_761,&g_461,&g_49,&g_761,&g_461,&g_461},{&g_761,&g_461,&g_461,&g_461,&g_461,&g_461,&g_461,&g_761},{&g_49,&g_761,&g_761,&g_461,&g_49,&g_49,&g_761,&g_461},{&g_49,&g_49,&g_761,&g_461,&g_461,&g_49,&g_49,&g_461},{&g_761,&g_761,&g_761,&g_761,&g_49,&g_461,&g_761,&g_461},{&g_461,&g_461,&g_761,&g_461,&g_49,&g_761,&g_461,&g_461},{&g_761,&g_461,&g_461,&g_461,&g_461,&g_461,&g_461,&g_761},{&g_49,&g_761,&g_761,&g_461,&g_49,&g_49,&g_761,&g_49},{&g_761,&g_461,&g_761,&g_49,&g_461,&g_461,&g_461,&g_461},{&g_49,&g_761,&g_761,&g_49,&g_461,&g_461,&g_761,&g_461}};
    int *l_1111 = &l_278[1].f0;
    struct S0 *l_1133 = &g_261.f5;
    unsigned l_1134[9][1];
    int i, j, k;
    for (i = 0; i < 9; i++)
    {
        for (j = 0; j < 1; j++)
            l_1134[i][j] = 0x60B45C46L;
    }
    if ((safe_lshift_func_int16_t_s_s(g_4, ((((l_278[1].f0 = ((func_5((g_725[4] = (func_9((func_11((((func_13((func_19(((g_57.f1 = (safe_rshift_func_int8_t_s_s(((func_23(l_25) & (g_57.f4 & 0x278AL)) && func_23(g_52[0][1])), 0))) < l_235[5][0][3])) , l_235[5][0][3]), l_277, l_277, g_261.f5.f8, l_278[1]) & g_261.f5.f3) ^ l_278[1].f9) <= 0x2DL)) , l_278[0])) , l_278[1].f1)), l_278[1].f0, g_846[2][1]) == l_278[1].f0) && (-9L))) >= 4294967295UL) && l_278[1].f9) <= 0x36L))))
    {
        return l_235[5][0][3];
    }
    else
    {
        struct S0 l_1081 = {0x578E5FF5L,-1L,6L,-4066,0x6CL,0x7A58L,0x6D05L,65531UL,0xB22CBE10L,65535UL};
        int *l_1085 = (void*)0;
        int *l_1090 = &g_609;
        struct S0 *l_1132 = &g_57.f5;
        for (g_165.f1 = (-3); (g_165.f1 > 19); g_165.f1++)
        {
            char l_1082 = (-1L);
            int **l_1087 = (void*)0;
            int **l_1088 = &g_49;
            l_1081.f3 = (~(safe_add_func_uint32_t_u_u(l_1082, ((safe_lshift_func_int8_t_s_s(g_165.f5.f8, 2)) == ((l_278[1].f6 & 65530UL) == ((*g_173) != func_33(func_42(l_1085, l_1086, &l_235[5][0][3]), l_1082, &l_235[5][0][3], l_1082)))))));
            (*l_1088) = l_1085;
            if (l_1086.f5.f2)
                break;
        }
        if (((*l_1090) = (l_1089 != l_1089)))
        {
            int *l_1091 = &g_165.f4;
            int *l_1097 = &l_235[5][0][3];
            unsigned l_1104 = 1UL;
            int l_1121 = 0xDC668E4BL;
            struct S1 l_1129[8][5] = {{{0x3BA60CCBL,0UL,0x62D5L,0xC9A74DCDL,0x16FDBEBEL,{6L,0x605EB1D9L,0x4362L,-1443,0L,0x46E2L,0L,65535UL,4294967295UL,9UL},4294967295UL,-465,7UL},{0xD52D5B71L,9UL,1UL,1L,-4L,{0x9E4268BCL,-8L,5L,1575,-1L,-1L,0xEAE7L,0UL,0x7EE91463L,0x9278L},3UL,215,0UL},{6L,65528UL,65535UL,0xAE01E3E7L,-2L,{0xAD3D9197L,0xADA5C14CL,0x41E3L,-815,-4L,0x47C9L,0xC787L,0x23C2L,0x397F5334L,0xFD26L},4294967289UL,299,0xDDL},{6L,65528UL,65535UL,0xAE01E3E7L,-2L,{0xAD3D9197L,0xADA5C14CL,0x41E3L,-815,-4L,0x47C9L,0xC787L,0x23C2L,0x397F5334L,0xFD26L},4294967289UL,299,0xDDL},{0xD52D5B71L,9UL,1UL,1L,-4L,{0x9E4268BCL,-8L,5L,1575,-1L,-1L,0xEAE7L,0UL,0x7EE91463L,0x9278L},3UL,215,0UL}},{{9L,2UL,65535UL,1L,-1L,{-1L,0x62FD79EDL,-1L,-404,1L,-1L,0x5C85L,0x2B87L,4294967295UL,0UL},0x01625A9CL,-701,0xF3L},{0xC484B16AL,65527UL,65534UL,-1L,0L,{0xD707B55CL,0L,5L,3683,0L,6L,0x044EL,1UL,1UL,65530UL},0x288D011AL,229,0xFDL},{1L,65534UL,6UL,7L,0x99A3B523L,{-1L,1L,0L,-3457,-9L,0x28A5L,0L,65532UL,0xE8972FC5L,65535UL},0x529628ECL,18,1UL},{1L,65534UL,6UL,7L,0x99A3B523L,{-1L,1L,0L,-3457,-9L,0x28A5L,0L,65532UL,0xE8972FC5L,65535UL},0x529628ECL,18,1UL},{0xC484B16AL,65527UL,65534UL,-1L,0L,{0xD707B55CL,0L,5L,3683,0L,6L,0x044EL,1UL,1UL,65530UL},0x288D011AL,229,0xFDL}},{{0x3BA60CCBL,0UL,0x62D5L,0xC9A74DCDL,0x16FDBEBEL,{6L,0x605EB1D9L,0x4362L,-1443,0L,0x46E2L,0L,65535UL,4294967295UL,9UL},4294967295UL,-465,7UL},{0xD52D5B71L,9UL,1UL,1L,-4L,{0x9E4268BCL,-8L,5L,1575,-1L,-1L,0xEAE7L,0UL,0x7EE91463L,0x9278L},3UL,215,0UL},{6L,65528UL,65535UL,0xAE01E3E7L,-2L,{0xAD3D9197L,0xADA5C14CL,0x41E3L,-815,-4L,0x47C9L,0xC787L,0x23C2L,0x397F5334L,0xFD26L},4294967289UL,299,0xDDL},{6L,65528UL,65535UL,0xAE01E3E7L,-2L,{0xAD3D9197L,0xADA5C14CL,0x41E3L,-815,-4L,0x47C9L,0xC787L,0x23C2L,0x397F5334L,0xFD26L},4294967289UL,299,0xDDL},{0xD52D5B71L,9UL,1UL,1L,-4L,{0x9E4268BCL,-8L,5L,1575,-1L,-1L,0xEAE7L,0UL,0x7EE91463L,0x9278L},3UL,215,0UL}},{{9L,2UL,65535UL,1L,-1L,{-1L,0x62FD79EDL,-1L,-404,1L,-1L,0x5C85L,0x2B87L,4294967295UL,0UL},0x01625A9CL,-701,0xF3L},{0xC484B16AL,65527UL,65534UL,-1L,0L,{0xD707B55CL,0L,5L,3683,0L,6L,0x044EL,1UL,1UL,65530UL},0x288D011AL,229,0xFDL},{1L,65534UL,6UL,7L,0x99A3B523L,{-1L,1L,0L,-3457,-9L,0x28A5L,0L,65532UL,0xE8972FC5L,65535UL},0x529628ECL,18,1UL},{1L,65534UL,6UL,7L,0x99A3B523L,{-1L,1L,0L,-3457,-9L,0x28A5L,0L,65532UL,0xE8972FC5L,65535UL},0x529628ECL,18,1UL},{0xC484B16AL,65527UL,65534UL,-1L,0L,{0xD707B55CL,0L,5L,3683,0L,6L,0x044EL,1UL,1UL,65530UL},0x288D011AL,229,0xFDL}},{{0x3BA60CCBL,0UL,0x62D5L,0xC9A74DCDL,0x16FDBEBEL,{6L,0x605EB1D9L,0x4362L,-1443,0L,0x46E2L,0L,65535UL,4294967295UL,9UL},4294967295UL,-465,7UL},{0xD52D5B71L,9UL,1UL,1L,-4L,{0x9E4268BCL,-8L,5L,1575,-1L,-1L,0xEAE7L,0UL,0x7EE91463L,0x9278L},3UL,215,0UL},{6L,65528UL,65535UL,0xAE01E3E7L,-2L,{0xAD3D9197L,0xADA5C14CL,0x41E3L,-815,-4L,0x47C9L,0xC787L,0x23C2L,0x397F5334L,0xFD26L},4294967289UL,299,0xDDL},{6L,65528UL,65535UL,0xAE01E3E7L,-2L,{0xAD3D9197L,0xADA5C14CL,0x41E3L,-815,-4L,0x47C9L,0xC787L,0x23C2L,0x397F5334L,0xFD26L},4294967289UL,299,0xDDL},{0xD52D5B71L,9UL,1UL,1L,-4L,{0x9E4268BCL,-8L,5L,1575,-1L,-1L,0xEAE7L,0UL,0x7EE91463L,0x9278L},3UL,215,0UL}},{{9L,2UL,65535UL,1L,-1L,{-1L,0x62FD79EDL,-1L,-404,1L,-1L,0x5C85L,0x2B87L,4294967295UL,0UL},0x01625A9CL,-701,0xF3L},{0xC484B16AL,65527UL,65534UL,-1L,0L,{0xD707B55CL,0L,5L,3683,0L,6L,0x044EL,1UL,1UL,65530UL},0x288D011AL,229,0xFDL},{1L,65534UL,6UL,7L,0x99A3B523L,{-1L,1L,0L,-3457,-9L,0x28A5L,0L,65532UL,0xE8972FC5L,65535UL},0x529628ECL,18,1UL},{1L,65534UL,6UL,7L,0x99A3B523L,{-1L,1L,0L,-3457,-9L,0x28A5L,0L,65532UL,0xE8972FC5L,65535UL},0x529628ECL,18,1UL},{0xC484B16AL,65527UL,65534UL,-1L,0L,{0xD707B55CL,0L,5L,3683,0L,6L,0x044EL,1UL,1UL,65530UL},0x288D011AL,229,0xFDL}},{{0x3BA60CCBL,0UL,0x62D5L,0xC9A74DCDL,0x16FDBEBEL,{6L,0x605EB1D9L,0x4362L,-1443,0L,0x46E2L,0L,65535UL,4294967295UL,9UL},4294967295UL,-465,7UL},{0xD52D5B71L,9UL,1UL,1L,-4L,{0x9E4268BCL,-8L,5L,1575,-1L,-1L,0xEAE7L,0UL,0x7EE91463L,0x9278L},3UL,215,0UL},{6L,65528UL,65535UL,0xAE01E3E7L,-2L,{0xAD3D9197L,0xADA5C14CL,0x41E3L,-815,-4L,0x47C9L,0xC787L,0x23C2L,0x397F5334L,0xFD26L},4294967289UL,299,0xDDL},{6L,65528UL,65535UL,0xAE01E3E7L,-2L,{0xAD3D9197L,0xADA5C14CL,0x41E3L,-815,-4L,0x47C9L,0xC787L,0x23C2L,0x397F5334L,0xFD26L},4294967289UL,299,0xDDL},{0xD52D5B71L,9UL,1UL,1L,-4L,{0x9E4268BCL,-8L,5L,1575,-1L,-1L,0xEAE7L,0UL,0x7EE91463L,0x9278L},3UL,215,0UL}},{{9L,2UL,65535UL,1L,-1L,{-1L,0x62FD79EDL,-1L,-404,1L,-1L,0x5C85L,0x2B87L,4294967295UL,0UL},0x01625A9CL,-701,0xF3L},{0xC484B16AL,65527UL,65534UL,-1L,0L,{0xD707B55CL,0L,5L,3683,0L,6L,0x044EL,1UL,1UL,65530UL},0x288D011AL,229,0xFDL},{1L,65534UL,6UL,7L,0x99A3B523L,{-1L,1L,0L,-3457,-9L,0x28A5L,0L,65532UL,0xE8972FC5L,65535UL},0x529628ECL,18,1UL},{1L,65534UL,6UL,7L,0x99A3B523L,{-1L,1L,0L,-3457,-9L,0x28A5L,0L,65532UL,0xE8972FC5L,65535UL},0x529628ECL,18,1UL},{0xC484B16AL,65527UL,65534UL,-1L,0L,{0xD707B55CL,0L,5L,3683,0L,6L,0x044EL,1UL,1UL,65530UL},0x288D011AL,229,0xFDL}}};
            unsigned char l_1130 = 0x83L;
            int i, j;
            if (((*l_1091) = ((*l_1090) = l_1086.f1)))
            {
                int ***l_1095[5][4] = {{&g_298[2],&g_298[2],&g_298[2],&g_298[2]},{&g_298[2],&g_298[2],&g_298[2],&g_298[2]},{&g_298[2],&g_298[2],&g_298[2],&g_298[2]},{&g_298[2],&g_298[2],&g_298[2],&g_298[2]},{&g_298[2],&g_298[2],&g_298[2],&g_298[2]}};
                char *l_1098 = &l_1081.f4;
                struct S1 l_1101 = {0x55DE6567L,0xE479L,0xD292L,0x867DB6E5L,0x50DB15DCL,{0x7F808EF1L,0xDE2E1EEFL,0x9FD6L,3708,2L,-1L,0xA70BL,0xC3B4L,0x26350F47L,0UL},0xBF0D43A4L,584,1UL};
                char *l_1102 = &g_243.f4;
                char *l_1103 = &g_261.f5.f4;
                int *l_1109 = &g_30;
                int i, j;
                (*l_1097) = (safe_sub_func_int8_t_s_s(((*l_1098) = func_33(((l_1094 == (l_1096[0][4] = &l_1091)) , l_1097), (*l_1090), l_1091, (*l_1091))), ((*l_1103) = (safe_mod_func_int8_t_s_s(((*l_1102) = ((*l_1090) <= ((g_696.f5.f3 , l_1101) , g_52[0][0]))), (*g_173))))));
                if (l_1104)
                {
                    unsigned l_1105 = 0x5CD3F12EL;
                    unsigned short ***l_1110 = &g_624;
                    (*l_1097) = (l_1105 = ((*l_1090) = 0L));
                    for (g_57.f5.f8 = 0; (g_57.f5.f8 >= 22); g_57.f5.f8 = safe_add_func_uint16_t_u_u(g_57.f5.f8, 6))
                    {
                        unsigned l_1108 = 0xF8FE898BL;
                        l_1108 = (*l_1090);
                    }
                    l_1085 = l_1109;
                    (*l_1110) = &l_234[2][5][4];
                }
                else
                {
                    l_1085 = l_1085;
                }
                l_1111 = l_1090;
            }
            else
            {
                unsigned l_1117 = 0xA75CFFBBL;
                char *l_1118 = &g_57.f5.f4;
                int *l_1122[7][2][10] = {{{&l_1086.f0,&g_696.f0,&l_25,&l_25,&g_696.f0,&l_1086.f0,(void*)0,&l_25,&l_25,(void*)0},{&g_165.f0,&g_696.f0,&g_696.f0,&l_25,&g_667,(void*)0,&g_667,&g_696.f0,&l_1086.f0,&l_25}},{{&l_1086.f0,&l_25,&l_1086.f0,(void*)0,&l_1086.f0,&g_165.f0,&l_25,&g_261.f0,&g_696.f0,&l_25},{&g_165.f0,&l_25,&g_261.f0,&g_696.f0,&l_25,&g_696.f0,&l_25,(void*)0,&g_696.f0,&g_696.f0}},{{&g_57.f0,&l_25,&l_1086.f0,(void*)0,&g_696.f0,&l_25,&g_696.f0,(void*)0,&l_1086.f0,&l_25},{&g_165.f0,&l_25,&g_261.f0,&g_696.f0,&l_1086.f0,&g_261.f0,&g_696.f0,&g_261.f0,&l_1086.f0,&g_696.f0}},{{&g_165.f0,&l_25,&l_1086.f0,&g_696.f0,&l_25,&g_261.f0,&l_25,(void*)0,&g_261.f0,&g_696.f0},{&g_165.f0,&l_25,&l_1086.f0,(void*)0,&l_25,&l_25,&l_25,&g_696.f0,&l_1086.f0,&g_696.f0}},{{&g_57.f0,&l_25,&g_696.f0,(void*)0,&l_1086.f0,&g_696.f0,&l_25,&g_261.f0,&g_261.f0,&l_25},{&g_165.f0,&g_696.f0,&g_696.f0,&g_696.f0,&g_696.f0,&g_165.f0,&l_25,&g_696.f0,&l_1086.f0,&g_696.f0}},{{&l_1086.f0,&g_696.f0,&l_1086.f0,&g_696.f0,&l_25,&l_25,&l_25,(void*)0,&l_1086.f0,&l_25},{&l_1086.f0,&l_25,&l_1086.f0,(void*)0,&g_696.f0,&g_696.f0,&g_57.f0,&g_667,&g_667,&g_57.f0}},{{&g_696.f0,&g_57.f0,&g_667,&g_667,&g_57.f0,&g_261.f0,&g_165.f0,(void*)0,&g_667,&g_261.f0},{&g_696.f0,&g_165.f0,&g_667,(void*)0,&l_1086.f0,&l_25,&l_1086.f0,(void*)0,&g_667,&g_165.f0}}};
                int *l_1125 = &l_1086.f5.f0;
                char l_1126 = 0x03L;
                struct S1 l_1127 = {0xDAA233D8L,0x32FEL,1UL,-1L,4L,{2L,1L,0L,-2663,0xA9L,3L,0xCB38L,0x5A32L,0xD467BE48L,0xC9D9L},4294967286UL,-547,0xD0L};
                int *l_1128 = &g_261.f5.f1;
                int i, j, k;
                (*l_1091) = (safe_lshift_func_uint8_t_u_u(g_1114, 4));
                (*l_1097) = (safe_rshift_func_int8_t_s_u((((*l_1118) = l_1117) || ((safe_lshift_func_uint16_t_u_u((l_1130 = (**g_624)), (*l_1111))) , 0x11L)), (*l_1097)));
            }
        }
        else
        {
            int *l_1131 = &l_1086.f4;
            l_1085 = l_1131;
            return (*l_1090);
        }
        l_1133 = l_1132;
        l_1085 = l_1090;
    }
    (*l_1111) = l_1134[6][0];
    return g_1135;
}







static unsigned char func_5(unsigned p_6, int p_7, int p_8)
{
    struct S0 l_847 = {0x74EFC001L,1L,0x9FD6L,2904,1L,0x35B0L,-4L,0x0977L,0x21554B04L,0x5B75L};
    char *l_856 = (void*)0;
    char *l_857 = &g_57.f5.f4;
    struct S1 l_858[7] = {{-1L,0x234AL,0xD3E4L,-10L,0xB0ADE618L,{0xF8127319L,3L,-6L,3037,0x91L,0L,0xFADEL,0x246CL,0x597519E8L,0xDACDL},0UL,561,0x99L},{-1L,0x234AL,0xD3E4L,-10L,0xB0ADE618L,{0xF8127319L,3L,-6L,3037,0x91L,0L,0xFADEL,0x246CL,0x597519E8L,0xDACDL},0UL,561,0x99L},{-1L,0x234AL,0xD3E4L,-10L,0xB0ADE618L,{0xF8127319L,3L,-6L,3037,0x91L,0L,0xFADEL,0x246CL,0x597519E8L,0xDACDL},0UL,561,0x99L},{-1L,0x234AL,0xD3E4L,-10L,0xB0ADE618L,{0xF8127319L,3L,-6L,3037,0x91L,0L,0xFADEL,0x246CL,0x597519E8L,0xDACDL},0UL,561,0x99L},{-1L,0x234AL,0xD3E4L,-10L,0xB0ADE618L,{0xF8127319L,3L,-6L,3037,0x91L,0L,0xFADEL,0x246CL,0x597519E8L,0xDACDL},0UL,561,0x99L},{-1L,0x234AL,0xD3E4L,-10L,0xB0ADE618L,{0xF8127319L,3L,-6L,3037,0x91L,0L,0xFADEL,0x246CL,0x597519E8L,0xDACDL},0UL,561,0x99L},{-1L,0x234AL,0xD3E4L,-10L,0xB0ADE618L,{0xF8127319L,3L,-6L,3037,0x91L,0L,0xFADEL,0x246CL,0x597519E8L,0xDACDL},0UL,561,0x99L}};
    unsigned char l_860 = 1UL;
    int *l_867 = (void*)0;
    short l_899 = 1L;
    int ***l_906 = &g_298[1];
    unsigned l_985 = 0x9F75DA46L;
    short l_987 = 0xC0DFL;
    unsigned l_991[7] = {0xC6A0AA42L,0xC6A0AA42L,0xC6A0AA42L,0xC6A0AA42L,0xC6A0AA42L,0xC6A0AA42L,0xC6A0AA42L};
    int l_1001 = 0x55A729DEL;
    unsigned l_1017 = 0x6014FBF0L;
    int *l_1025[3];
    int l_1053[1][10][1];
    int i, j, k;
    for (i = 0; i < 3; i++)
        l_1025[i] = (void*)0;
    for (i = 0; i < 1; i++)
    {
        for (j = 0; j < 10; j++)
        {
            for (k = 0; k < 1; k++)
                l_1053[i][j][k] = 0x0E7E038CL;
        }
    }
    l_860 = (l_847 , (safe_add_func_uint32_t_u_u(((void*)0 == &g_52[0][1]), (0x9844L | (safe_mod_func_int16_t_s_s((safe_rshift_func_int8_t_s_s(g_261.f7, (safe_rshift_func_int16_t_s_u(((((*l_857) = 0x00L) & (l_858[4] , ((safe_unary_minus_func_int8_t_s((g_50.f4 = (g_261.f5.f4 = ((((p_7 == p_6) <= 1UL) && p_6) ^ (-7L)))))) , p_7))) || p_6), 6)))), p_7))))));
    if (p_7)
    {
        unsigned short l_873 = 0x9135L;
        int l_876[2];
        int *l_891 = &g_57.f5.f0;
        struct S1 *l_902 = &g_261;
        int i;
        for (i = 0; i < 2; i++)
            l_876[i] = 1L;
        for (g_261.f6 = 6; (g_261.f6 < 30); g_261.f6 = safe_add_func_uint8_t_u_u(g_261.f6, 5))
        {
            int *l_863[2][1];
            int **l_864 = &l_863[0][0];
            struct S0 l_868 = {0xE0C416E5L,-1L,0x92A7L,2743,6L,0xA10DL,0x5A00L,65529UL,0UL,65527UL};
            struct S1 l_884 = {0xDA4D359CL,0xB350L,0xB064L,-10L,0x2E24FBC2L,{0x14BBDD4CL,1L,1L,-757,-6L,0x0132L,0x7121L,65535UL,9UL,65535UL},0xDF2DF3B6L,-368,255UL};
            short l_885 = (-5L);
            unsigned short **l_890 = &g_334[1];
            int i, j;
            for (i = 0; i < 2; i++)
            {
                for (j = 0; j < 1; j++)
                    l_863[i][j] = (void*)0;
            }
            (*l_864) = l_863[0][0];
            for (g_103 = 28; (g_103 == 29); g_103 = safe_add_func_uint32_t_u_u(g_103, 8))
            {
                int *l_869[7];
                struct S1 l_898 = {1L,0xE6FEL,0x5D02L,0xD084DAD4L,-6L,{-1L,2L,0xE02FL,1869,0xBCL,1L,-1L,65535UL,0x728FED35L,65535UL},0x5A4A723BL,-552,0xBEL};
                int i;
                for (i = 0; i < 7; i++)
                    l_869[i] = &g_261.f5.f0;
                for (g_261.f1 = 1; (g_261.f1 <= 7); g_261.f1 += 1)
                {
                    for (g_57.f6 = 0; (g_57.f6 <= 5); g_57.f6 += 1)
                    {
                        int i, j;
                        (*g_49) = g_272[g_261.f1][(g_57.f6 + 1)];
                        p_8 = g_272[g_261.f1][(g_261.f1 + 2)];
                    }
                    (*l_864) = l_867;
                }
                for (l_847.f9 = 0; (l_847.f9 <= 7); l_847.f9 += 1)
                {
                    int *l_870 = &l_858[4].f5.f1;
                    struct S0 l_877 = {0xC2CADA42L,0L,1L,2182,-10L,0xD2E4L,0xAC09L,1UL,0x53C2F261L,65529UL};
                    (*g_49) = p_7;
                    for (l_847.f0 = 0; (l_847.f0 <= 7); l_847.f0 += 1)
                    {
                        g_165.f5 = l_868;
                        p_8 = p_6;
                        l_867 = l_870;
                    }
                    if (p_8)
                    {
                        (*g_49) = (p_8 = (safe_add_func_uint32_t_u_u(p_6, (!l_873))));
                        l_867 = l_867;
                    }
                    else
                    {
                        int *l_874 = &l_858[4].f4;
                        struct S0 *l_875 = &g_696.f5;
                        (*l_864) = l_874;
                        (*l_875) = l_847;
                        l_876[0] = 0xC810999BL;
                        l_877 = g_50;
                    }
                    return p_7;
                }
                for (g_261.f5.f7 = 0; (g_261.f5.f7 < 26); ++g_261.f5.f7)
                {
                    char l_882[7][10] = {{2L,0x87L,0xBCL,9L,0x87L,2L,0xB3L,2L,0xF3L,9L},{0x36L,8L,0L,9L,4L,4L,9L,0L,8L,0x36L},{0L,2L,8L,(-4L),1L,0x03L,0L,0x36L,0x03L,8L},{2L,0x36L,0xC3L,2L,1L,0xF3L,1L,2L,0xC3L,0x36L},{1L,0L,1L,0xB3L,4L,1L,0x36L,8L,0L,9L},{(-4L),2L,4L,0x03L,0x87L,0x06L,0x06L,4L,0xF3L,2L},{0x03L,0x03L,1L,4L,0L,0xB3L,0xD8L,0x03L,2L,0xD8L}};
                    short *l_883[1];
                    struct S0 *l_886 = &g_261.f5;
                    int i, j;
                    for (i = 0; i < 1; i++)
                        l_883[i] = &g_50.f6;
                    if ((~(p_7 ^ (safe_sub_func_uint16_t_u_u((~((**g_624) = l_882[2][8])), (l_876[0] = g_261.f5.f4))))))
                    {
                        l_884 = l_858[6];
                        if (l_885)
                            continue;
                    }
                    else
                    {
                        struct S0 **l_887 = &g_90;
                        (*l_887) = l_886;
                    }
                }
                for (g_165.f2 = 0; (g_165.f2 <= 5); g_165.f2 += 1)
                {
                    unsigned short **l_888[2][7][5] = {{{&g_334[2],&g_334[0],&g_334[2],&g_334[2],&g_334[0]},{&g_334[2],&g_334[2],&g_334[0],&g_334[0],(void*)0},{(void*)0,&g_334[0],&g_334[0],(void*)0,&g_334[1]},{(void*)0,&g_334[2],&g_334[0],&g_334[2],&g_334[2]},{&g_334[2],&g_334[0],&g_334[0],&g_334[2],&g_334[0]},{&g_334[2],(void*)0,&g_334[2],&g_334[2],(void*)0},{&g_334[0],&g_334[0],&g_334[1],(void*)0,(void*)0}},{{&g_334[0],(void*)0,&g_334[2],&g_334[0],&g_334[0]},{&g_334[0],&g_334[0],&g_334[3],&g_334[2],&g_334[2]},{&g_334[0],&g_334[1],&g_334[0],&g_334[3],&g_334[1]},{&g_334[0],&g_334[1],&g_334[2],&g_334[0],(void*)0},{&g_334[2],&g_334[0],&g_334[2],&g_334[2],&g_334[0]},{&g_334[2],(void*)0,&g_334[2],(void*)0,&g_334[2]},{(void*)0,&g_334[0],&g_334[0],(void*)0,&g_334[2]}}};
                    unsigned short ***l_889[6] = {&l_888[0][5][2],&l_888[1][5][0],&l_888[0][5][2],&l_888[0][5][2],&l_888[1][5][0],&l_888[0][5][2]};
                    short *l_900 = &g_243.f6;
                    int i, j, k;
                    (*l_864) = (g_667 , (void*)0);
                    l_890 = l_888[1][5][0];
                    l_891 = l_867;
                    p_8 = ((safe_sub_func_int16_t_s_s(p_7, p_6)) & (g_57.f5.f8 >= (safe_mod_func_int32_t_s_s((((*l_900) = (safe_lshift_func_uint16_t_u_s((p_6 , (+l_899)), g_50.f3))) && g_901), 1UL))));
                }
            }
            for (g_50.f2 = 0; g_50.f2 < 1; g_50.f2 += 1)
            {
                for (p_8 = 0; p_8 < 3; p_8 += 1)
                {
                    for (g_243.f9 = 0; g_243.f9 < 8; g_243.f9 += 1)
                    {
                        g_172[g_50.f2][p_8][g_243.f9] = (void*)0;
                    }
                }
            }
            (***g_474) = (((*g_173) ^ ((void*)0 == &g_89)) , l_902);
        }
    }
    else
    {
        struct S1 l_903 = {1L,1UL,65530UL,0x058934A7L,0xE41B08C1L,{1L,0x91997FA5L,0xFCD6L,-386,0x36L,-1L,0x9874L,5UL,0xC001CCA9L,0x57E4L},4294967289UL,-70,0UL};
        int *l_904 = &g_696.f5.f0;
        int ***l_905[9] = {&g_298[1],&g_298[1],&g_298[1],&g_298[1],&g_298[1],&g_298[1],&g_298[1],&g_298[1],&g_298[1]};
        int i;
        (**l_906) = func_42(l_867, l_903, &p_8);
        (*g_49) = p_8;
    }
    if (((***l_906) = ((((g_165.f7 , (*g_49)) == (p_7 != p_8)) & (p_8 || p_7)) , p_8)))
    {
        unsigned char l_907 = 0x29L;
        int l_912 = 0xE098F170L;
        struct S1 *l_965 = &g_57;
        int l_984 = 0xD76C26DEL;
        short *l_986[9] = {&g_50.f5,&g_50.f5,&g_50.f5,&g_50.f5,&g_50.f5,&g_50.f5,&g_50.f5,&g_50.f5,&g_50.f5};
        int *l_997 = (void*)0;
        int i;
        if (((p_8 ^ l_907) , (safe_sub_func_uint16_t_u_u(p_8, p_6))))
        {
            short l_910[2];
            struct S0 l_913 = {0x96F9A739L,1L,0x948AL,1162,7L,-7L,4L,65535UL,0xF610476AL,1UL};
            unsigned char l_938[8][1][1] = {{{0UL}},{{3UL}},{{3UL}},{{0UL}},{{3UL}},{{3UL}},{{0UL}},{{3UL}}};
            int *l_954 = &g_57.f3;
            int i, j, k;
            for (i = 0; i < 2; i++)
                l_910[i] = 0x9576L;
            for (l_847.f6 = 5; (l_847.f6 >= 1); l_847.f6 -= 1)
            {
                unsigned short **l_911 = (void*)0;
                int l_930[5] = {0xB2106B8DL,0xB2106B8DL,0xB2106B8DL,0xB2106B8DL,0xB2106B8DL};
                struct S0 l_939 = {-10L,-5L,0x9A5DL,-910,0x98L,0xFD78L,0xDB37L,0xFDD4L,4294967295UL,65535UL};
                int *l_949 = &g_261.f0;
                int i;
                p_8 = (p_6 < (l_910[1] != 0xBCE8L));
                for (g_243.f1 = 0; (g_243.f1 <= 5); g_243.f1 += 1)
                {
                    int l_914 = 0xC0E12479L;
                    int l_924 = 0xF8F5D093L;
                    unsigned char ***l_929[3][4][2] = {{{&g_172[0][1][2],&g_172[0][0][2]},{&g_172[0][0][2],&g_172[0][1][7]},{&g_172[0][0][2],&g_172[0][1][7]},{&g_172[0][0][2],&g_172[0][0][2]}},{{&g_172[0][1][2],&g_172[0][1][2]},{&g_172[0][1][2],&g_172[0][0][2]},{&g_172[0][0][2],&g_172[0][1][7]},{&g_172[0][0][2],&g_172[0][1][7]}},{{&g_172[0][0][2],&g_172[0][0][2]},{&g_172[0][1][2],&g_172[0][1][2]},{&g_172[0][1][2],&g_172[0][0][2]},{&g_172[0][0][2],&g_172[0][1][7]}}};
                    int *l_933[1][3];
                    short *l_936 = &l_858[4].f5.f6;
                    short *l_937 = &g_261.f5.f2;
                    struct S0 *l_963[6][6][2] = {{{&g_57.f5,&g_243},{&g_243,&g_243},{(void*)0,&l_939},{(void*)0,&g_243},{&g_243,&g_243},{&g_57.f5,&g_243}},{{&g_243,&g_243},{(void*)0,&l_939},{(void*)0,&g_243},{&g_243,&g_243},{&g_57.f5,&g_243},{&g_243,&g_243}},{{(void*)0,&l_939},{(void*)0,&g_243},{&g_243,&g_243},{&g_57.f5,&g_243},{&g_243,&g_243},{(void*)0,&l_939}},{{(void*)0,&g_243},{&g_243,&g_243},{&g_57.f5,&g_243},{&g_243,&g_243},{(void*)0,&g_243},{(void*)0,&l_939}},{{&g_57.f5,(void*)0},{(void*)0,(void*)0},{&g_57.f5,&l_939},{(void*)0,&g_243},{(void*)0,&l_939},{&g_57.f5,(void*)0}},{{(void*)0,(void*)0},{&g_57.f5,&l_939},{(void*)0,&g_243},{(void*)0,&l_939},{&g_57.f5,(void*)0},{(void*)0,(void*)0}}};
                    struct S0 **l_964 = &l_963[1][5][1];
                    int i, j, k;
                    for (i = 0; i < 1; i++)
                    {
                        for (j = 0; j < 3; j++)
                            l_933[i][j] = &l_858[4].f4;
                    }
                    if (((*g_49) = p_6))
                    {
                        int i;
                        l_914 = (((((g_667 & (((void*)0 != l_911) , ((*g_173) = (*g_173)))) < p_6) , (l_913 , ((void*)0 == l_856))) > p_6) , l_907);
                        if (l_912)
                            break;
                    }
                    else
                    {
                        unsigned short l_923 = 0x074EL;
                        short *l_928 = &l_847.f2;
                        p_8 = (safe_sub_func_uint16_t_u_u((safe_add_func_int8_t_s_s((safe_add_func_int32_t_s_s(p_7, ((***l_906) = (1L > ((safe_sub_func_int8_t_s_s(((***l_906) < (l_924 = l_923)), (safe_rshift_func_uint16_t_u_s((l_914 , ((((p_7 , ((*l_928) = (7UL > (g_927 <= l_923)))) != 0x4801L) != (-1L)) < g_57.f7)), 8)))) & p_6))))), (-1L))), g_696.f5.f0));
                        (**l_906) = &p_8;
                        return l_913.f6;
                    }
                    if ((((void*)0 != l_929[0][2][1]) || (((((*g_173) = l_930[1]) , (safe_add_func_uint16_t_u_u(((**g_624) , 0UL), 1UL))) >= (-5L)) || 0UL)))
                    {
                        struct S0 *l_940 = &g_57.f5;
                        int *l_941 = &g_57.f5.f0;
                        int *l_943 = &g_261.f0;
                        int **l_942 = &l_943;
                        int *l_945[9] = {&l_858[4].f0,&l_858[4].f0,&l_858[4].f0,&l_858[4].f0,&l_858[4].f0,&l_858[4].f0,&l_858[4].f0,&l_858[4].f0,&l_858[4].f0};
                        int **l_944 = &l_945[6];
                        int i;
                        (*l_940) = l_939;
                        l_941 = &l_912;
                        (*g_49) = ((((l_913.f0 = 4UL) , (((*l_944) = ((*l_942) = &p_7)) != ((g_50.f9 , (safe_lshift_func_int8_t_s_s((!g_57.f5.f9), (+(safe_unary_minus_func_uint8_t_u(0x22L)))))) , l_949))) >= ((*g_173) = (*g_173))) < (g_846[1][3] = (((*l_949) = (l_907 <= (safe_add_func_int8_t_s_s((((safe_sub_func_int8_t_s_s((l_939 , 1L), p_8)) != 0xEE689353L) ^ (-1L)), l_939.f4)))) , p_8)));
                        if (p_6)
                            continue;
                    }
                    else
                    {
                        l_954 = &l_912;
                        p_8 = ((***l_906) = (((p_7 , (((*l_937) = ((0xC2ADL | 0x501DL) || (safe_rshift_func_int8_t_s_u((safe_sub_func_uint8_t_u_u(l_912, ((safe_lshift_func_uint16_t_u_s(p_8, 8)) && (p_6 ^ 0UL)))), 7)))) == 0x21F9L)) > p_7) | p_8));
                        (**l_906) = &p_8;
                        (**l_906) = &l_912;
                    }
                    (*l_964) = (((safe_rshift_func_uint8_t_u_u((p_7 && (((**g_624) = p_7) , (!(*l_954)))), p_6)) == (0x34L || (((*g_173) = p_8) , g_165.f5.f5))) , l_963[1][5][1]);
                    if (p_8)
                    {
                        (*g_96) = (***g_474);
                        (*g_481) = l_858[4];
                        (*g_49) = (*g_49);
                    }
                    else
                    {
                        (*l_954) = 1L;
                        (*l_964) = &g_50;
                        return p_8;
                    }
                }
                (**l_906) = func_42((l_912 , func_42(&l_930[1], l_858[0], (**l_906))), (g_57.f5.f9 , l_858[1]), l_867);
            }
            (**l_906) = (void*)0;
        }
        else
        {
            (*g_96) = l_965;
        }
        if (((((*g_173) = ((((~l_912) == (((*l_965) , 5L) != l_987)) > g_261.f1) , l_907)) , (*l_965)) , 0xAC325536L))
        {
            struct S1 l_988 = {0x3F2BC0F5L,0x0F93L,0x35ABL,-3L,0x0E20F134L,{1L,0x53D5F610L,0xFAD7L,2602,-9L,-8L,-9L,65535UL,0x850F0FCBL,0xD96EL},4294967292UL,-551,253UL};
            int l_996 = 0x4952E608L;
            l_997 = func_42(((**l_906) = &l_912), l_988, ((((safe_mod_func_uint16_t_u_u(l_991[0], ((g_901 = (safe_lshift_func_uint8_t_u_s(l_988.f5.f8, (~p_8)))) , p_6))) > p_6) , ((l_996 = ((((safe_sub_func_int8_t_s_s((0L || p_6), 0xE3L)) && p_7) != 0L) != 5L)) , g_165.f1)) , &l_912));
            return p_8;
        }
        else
        {
            for (g_243.f4 = (-20); (g_243.f4 >= 7); g_243.f4++)
            {
                struct S0 l_1000 = {-3L,0L,0xFF89L,480,1L,-1L,0xC260L,0xD107L,0x12BBE6CEL,0xDD12L};
                (**l_906) = (l_1000 , &p_8);
            }
            return l_1001;
        }
    }
    else
    {
        unsigned l_1011 = 4294967288UL;
        short *l_1016[10][5][5] = {{{&l_987,&g_52[1][0],&g_52[1][0],&l_987,&g_165.f5.f2},{&g_261.f5.f6,&l_987,&g_165.f5.f2,&g_57.f5.f6,(void*)0},{&g_165.f5.f2,&g_52[1][0],&g_50.f6,&g_52[0][1],&g_52[0][1]},{(void*)0,&g_50.f2,(void*)0,&g_57.f5.f6,&l_847.f2},{&l_847.f5,&l_987,&g_52[0][1],&l_987,&l_847.f5}},{{(void*)0,&g_243.f6,(void*)0,&l_987,(void*)0},{&g_165.f5.f2,&g_165.f5.f2,&g_52[0][1],&l_847.f5,&g_50.f2},{&g_261.f5.f6,&g_165.f5.f6,(void*)0,&g_243.f6,(void*)0},{&l_987,&l_847.f5,&g_50.f6,&g_50.f6,&l_847.f5},{(void*)0,&g_165.f5.f6,&g_165.f5.f2,&l_847.f6,&l_847.f2}},{{&g_52[1][0],&g_165.f5.f2,&g_52[1][0],&g_50.f6,&g_52[0][1]},{(void*)0,&g_243.f6,&l_847.f2,&g_243.f6,(void*)0},{&l_987,&g_50.f2,&g_52[0][1],&g_52[1][0],&g_52[0][1]},{&l_847.f2,&l_847.f6,&g_165.f5.f2,&g_165.f5.f6,(void*)0},{&g_50.f2,&l_987,&l_987,&g_50.f2,&g_52[0][1]}},{{&l_847.f2,&g_165.f5.f6,(void*)0,&l_987,(void*)0},{&g_52[0][1],&l_987,&l_847.f5,&g_50.f6,&g_50.f6},{&g_261.f5.f6,&l_847.f6,&g_261.f5.f6,&l_987,&g_165.f5.f2},{&g_52[1][0],&g_50.f2,&g_50.f6,&g_50.f2,&g_52[1][0]},{&g_261.f5.f6,&g_696.f5.f2,&l_847.f2,&g_165.f5.f6,&l_847.f2}},{{&g_52[0][1],&g_52[0][1],&g_50.f6,&g_52[1][0],&g_165.f5.f2},{&l_847.f2,&g_243.f6,&g_261.f5.f6,&g_696.f5.f2,&l_847.f2},{&g_50.f2,&g_52[1][0],&l_847.f5,&l_847.f5,&g_52[1][0]},{&l_847.f2,&g_243.f6,(void*)0,&g_57.f5.f6,&g_165.f5.f2},{&l_987,&g_52[0][1],&l_987,&l_847.f5,&g_50.f6}},{{(void*)0,&g_696.f5.f2,&g_165.f5.f2,&g_696.f5.f2,(void*)0},{&l_987,&g_50.f2,&g_52[0][1],&g_52[1][0],&g_52[0][1]},{&l_847.f2,&l_847.f6,&g_165.f5.f2,&g_165.f5.f6,(void*)0},{&g_50.f2,&l_987,&l_987,&g_50.f2,&g_52[0][1]},{&l_847.f2,&g_165.f5.f6,(void*)0,&l_987,(void*)0}},{{&g_52[0][1],&l_987,&l_847.f5,&g_50.f6,&g_165.f5.f2},{(void*)0,&g_696.f5.f2,(void*)0,&l_847.f6,(void*)0},{&g_50.f6,&g_52[1][0],&g_165.f5.f2,&g_52[1][0],&g_50.f6},{(void*)0,&g_165.f5.f6,&l_847.f2,&g_57.f5.f6,&l_847.f2},{&g_50.f2,&g_50.f2,&g_165.f5.f2,&g_50.f6,&l_987}},{{(void*)0,&l_987,(void*)0,&g_165.f5.f6,&l_847.f2},{&g_52[1][0],&g_50.f6,&g_52[0][1],&g_52[0][1],&g_50.f6},{&l_847.f2,&l_987,&l_847.f2,&g_50.f2,(void*)0},{&l_847.f5,&g_50.f2,&l_847.f5,&g_52[0][1],&g_165.f5.f2},{&g_165.f5.f2,&g_165.f5.f6,(void*)0,&g_165.f5.f6,&g_165.f5.f2}},{{&l_847.f5,&g_52[1][0],&g_50.f2,&g_50.f6,&g_50.f2},{&l_847.f2,&g_696.f5.f2,(void*)0,&g_57.f5.f6,&g_261.f5.f6},{&g_52[1][0],&l_847.f5,&l_847.f5,&g_52[1][0],&g_50.f2},{(void*)0,&g_57.f5.f6,&l_847.f2,&l_847.f6,&g_165.f5.f2},{&g_50.f2,&l_847.f5,&g_52[0][1],&g_165.f5.f2,&g_165.f5.f2}},{{(void*)0,&g_696.f5.f2,(void*)0,&l_847.f6,(void*)0},{&g_50.f6,&g_52[1][0],&g_165.f5.f2,&g_52[1][0],&g_50.f6},{(void*)0,&g_165.f5.f6,&l_847.f2,&g_57.f5.f6,&l_847.f2},{&g_50.f2,&g_50.f2,&g_165.f5.f2,&g_50.f6,&l_987},{(void*)0,&l_987,(void*)0,&g_165.f5.f6,&l_847.f2}}};
        int l_1018 = (-10L);
        int l_1019 = 1L;
        struct S0 l_1028 = {0x35FC8894L,0x76780B2AL,5L,2317,-7L,1L,0xC1AFL,0xDB94L,0x72C84CF1L,2UL};
        struct S1 *l_1056 = &g_261;
        unsigned *l_1063[2];
        int l_1066 = 0x7D580376L;
        int i, j, k;
        for (i = 0; i < 2; i++)
            l_1063[i] = &g_696.f5.f8;
        for (g_165.f0 = 0; (g_165.f0 <= (-11)); g_165.f0 = safe_sub_func_int32_t_s_s(g_165.f0, 6))
        {
            short l_1004 = (-7L);
            return l_1004;
        }
        l_1019 = (safe_sub_func_int16_t_s_s(((0x1193L || 0x0D29L) || (((p_6 >= (l_1018 = ((((-1L) & (safe_add_func_uint8_t_u_u(((*g_173) = (p_6 && (((l_1011 < (safe_lshift_func_uint8_t_u_u((((((safe_add_func_int16_t_s_s(((***l_906) = (l_1011 & (l_1011 , p_7))), 0x1B41L)) < p_7) >= l_1011) > p_8) | l_1011), l_1017))) > l_1011) <= 0xBD295AE6L))), p_6))) >= 0L) >= l_1011))) == p_6) <= l_1011)), 0x7FF2L));
        if (p_6)
        {
            int *l_1024 = &l_858[4].f5.f1;
            unsigned *l_1026 = (void*)0;
            unsigned *l_1027[4];
            struct S0 *l_1029[9] = {&l_1028,&l_1028,&l_1028,&l_1028,&l_1028,&l_1028,&l_1028,&l_1028,&l_1028};
            short l_1032 = (-2L);
            short l_1062[2];
            int i;
            for (i = 0; i < 4; i++)
                l_1027[i] = (void*)0;
            for (i = 0; i < 2; i++)
                l_1062[i] = 1L;
            (***l_906) = (safe_sub_func_int16_t_s_s((safe_lshift_func_int16_t_s_u(((0L ^ g_57.f5.f8) < (*l_1024)), p_7)), (65528UL >= l_1018)));
            l_1028 = l_1028;
            if (((((p_6 != ((l_1032 || (!(safe_sub_func_uint32_t_u_u((safe_mod_func_int32_t_s_s((*l_1024), (safe_lshift_func_uint8_t_u_s(((***l_906) || ((*l_1024) , ((((***l_906) = ((safe_lshift_func_uint16_t_u_s(((p_8 = l_1028.f0) ^ (*l_1024)), ((safe_lshift_func_uint16_t_u_u((safe_sub_func_uint8_t_u_u((safe_lshift_func_int8_t_s_s(g_243.f4, 5)), (safe_lshift_func_int16_t_s_u((safe_lshift_func_uint16_t_u_s((((p_6 < 3L) == 0L) , 0xA523L), g_57.f5.f6)), 9)))), 0)) ^ l_1028.f9))) , (*g_49))) , 0x0877EA1DL) != 0x5C25CB70L))), (*l_1024))))), p_7)))) ^ 0xCD48L)) > p_7) , g_261.f5) , 7L))
            {
                (***l_906) = p_6;
            }
            else
            {
                unsigned l_1054 = 4294967293UL;
                unsigned *l_1061 = &g_927;
                (***l_906) = ((safe_mod_func_uint8_t_u_u(l_1053[0][5][0], l_1054)) , (((g_57.f5 , (!(safe_unary_minus_func_uint32_t_u((l_1056 != (***g_474)))))) < ((l_1028 , (((safe_sub_func_int32_t_s_s(p_6, p_7)) >= 4294967291UL) != 0xFFL)) == p_7)) | g_243.f0));
            }
            (*g_49) = ((l_1026 == l_1063[0]) && (p_8 != (safe_rshift_func_int8_t_s_u(((p_8 & (((*l_1024) = ((8UL > ((l_1066 , (p_6 | g_57.f5.f2)) || g_57.f7)) ^ 0xB23ABB6AL)) >= 0x42BADE32L)) != (-9L)), p_6))));
        }
        else
        {
            unsigned l_1072 = 4294967292UL;
            int l_1073[7][3][8] = {{{(-2L),4L,(-1L),0x2CB2F613L,0x0FCD3B9EL,1L,1L,1L},{4L,0xB7CC36B0L,0L,0xB7CC36B0L,4L,0xFF625360L,0x81A77E4FL,(-3L)},{0L,0xACCC1237L,(-1L),0x0FCD3B9EL,0x65D6A19BL,0x2CB2F613L,0L,0xB7CC36B0L}},{{0L,0x81A77E4FL,(-1L),(-10L),(-10L),(-1L),0x81A77E4FL,0L},{0x65D6A19BL,(-2L),0L,(-3L),(-1L),0xACCC1237L,1L,(-1L)},{0x3B0279CEL,0x0FCD3B9EL,(-1L),0xFF625360L,(-3L),0xACCC1237L,(-3L),0xFF625360L}},{{0x81A77E4FL,(-2L),0x81A77E4FL,0L,0xACCC1237L,(-1L),0x0FCD3B9EL,0x65D6A19BL},{0xFF625360L,0x81A77E4FL,(-3L),1L,0x3B0279CEL,0x2CB2F613L,0xACCC1237L,0xACCC1237L},{0xFF625360L,0xACCC1237L,0L,0L,0xACCC1237L,0xFF625360L,(-2L),4L}},{{0x81A77E4FL,0xB7CC36B0L,0x2CB2F613L,(-2L),(-3L),1L,0x65D6A19BL,(-10L)},{0x3B0279CEL,4L,1L,(-2L),(-1L),(-2L),0L,0x8F7A964BL},{1L,1L,0x0FCD3B9EL,0x2CB2F613L,(-1L),4L,(-2L),0xFF625360L}},{{0x2CB2F613L,0x81A77E4FL,0x8F7A964BL,0x0FCD3B9EL,1L,(-2L),(-2L),1L},{4L,0x0FCD3B9EL,0x0FCD3B9EL,4L,0x8F7A964BL,(-1L),0L,0x65D6A19BL},{0x8F7A964BL,(-1L),0L,0x65D6A19BL,(-3L),0xB7CC36B0L,1L,0x81A77E4FL}},{{0L,(-1L),0x3B0279CEL,(-10L),0x3B0279CEL,(-1L),0L,0x2CB2F613L},{1L,0x0FCD3B9EL,0x2CB2F613L,(-1L),4L,(-2L),0xFF625360L,0xACCC1237L},{0xACCC1237L,0x81A77E4FL,(-10L),(-3L),4L,4L,(-3L),(-10L)}},{{1L,1L,0xB7CC36B0L,0xACCC1237L,0x3B0279CEL,0L,(-10L),0L},{0L,0x8F7A964BL,1L,0x3B0279CEL,(-3L),0L,0x0FCD3B9EL,0L},{0x8F7A964BL,0xACCC1237L,4L,0xACCC1237L,0x8F7A964BL,0x65D6A19BL,0xB7CC36B0L,(-10L)}}};
            unsigned *l_1074[5][10] = {{&g_122,(void*)0,(void*)0,&g_122,(void*)0,&g_725[1],(void*)0,&g_122,(void*)0,(void*)0},{(void*)0,(void*)0,&g_114,&g_114,&g_114,&g_725[1],&g_122,&g_114,&g_122,&g_725[1]},{(void*)0,&g_114,&g_114,&g_114,(void*)0,&g_725[1],&g_725[1],(void*)0,&g_114,&g_114},{&g_114,&g_114,&g_114,(void*)0,(void*)0,(void*)0,&g_114,&g_114,&g_114,&g_114},{&g_114,(void*)0,&g_725[1],&g_725[1],(void*)0,&g_114,&g_114,&g_114,(void*)0,&g_725[1]}};
            int i, j, k;
            (***l_906) = ((p_6 = (safe_lshift_func_int8_t_s_s((l_1072 , ((p_8 = l_1028.f8) < (0xB0L == (1L != l_1073[5][2][4])))), 0))) & ((l_1019 = (safe_mod_func_int32_t_s_s(0x0E9611FAL, p_7))) || p_7));
        }
    }
    return p_8;
}







static short func_9(struct S0 p_10)
{
    unsigned char l_571 = 255UL;
    struct S1 l_590 = {1L,4UL,0x30B1L,-1L,0x6C31B58BL,{0L,0x59463867L,1L,2201,0x97L,0xDEC3L,0L,6UL,7UL,0xCDD5L},0xA357116DL,320,0x58L};
    int *l_591 = &g_243.f1;
    int *l_594 = &g_261.f3;
    struct S0 *l_625 = &g_261.f5;
    int *l_641 = &g_261.f4;
    int *l_642 = &g_609;
    struct S1 **l_654 = &g_481;
    unsigned l_664 = 0UL;
    unsigned l_764 = 4294967295UL;
    short l_804 = 0xB2FBL;
    int *l_806 = &g_243.f0;
    unsigned l_808 = 0xFD4964AFL;
    char l_812 = (-1L);
    int **l_832 = &l_806;
    unsigned l_842 = 0x1601FFBCL;
    for (g_57.f8 = 26; (g_57.f8 > 48); g_57.f8 = safe_add_func_int32_t_s_s(g_57.f8, 1))
    {
        int *l_570 = (void*)0;
        struct S0 l_583 = {0L,0xAB25F84AL,0x9FF3L,724,0xFDL,0xBDCFL,0xD024L,0xE76DL,0UL,0x5E12L};
        char l_598 = 0x4DL;
        struct S1 ****l_629[4][8][2] = {{{&g_475,&g_475},{(void*)0,&g_475},{&g_475,&g_475},{(void*)0,&g_475},{&g_475,&g_475},{(void*)0,&g_475},{&g_475,&g_475},{(void*)0,&g_475}},{{&g_475,&g_475},{(void*)0,&g_475},{&g_475,&g_475},{(void*)0,&g_475},{&g_475,&g_475},{(void*)0,&g_475},{&g_475,&g_475},{(void*)0,&g_475}},{{&g_475,&g_475},{(void*)0,&g_475},{&g_475,&g_475},{(void*)0,&g_475},{&g_475,&g_475},{(void*)0,&g_475},{&g_475,&g_475},{(void*)0,&g_475}},{{&g_475,&g_475},{(void*)0,&g_475},{&g_475,&g_475},{(void*)0,&g_475},{&g_475,&g_475},{(void*)0,&g_475},{&g_475,&g_475},{(void*)0,&g_475}}};
        struct S0 *l_660 = &g_165.f5;
        int ***l_706 = &g_298[2];
        int *l_709 = &g_261.f5.f0;
        unsigned l_711 = 3UL;
        unsigned ***l_714 = &g_586[3];
        int i, j, k;
        for (g_57.f5.f6 = 0; (g_57.f5.f6 <= 3); g_57.f5.f6 += 1)
        {
            for (g_261.f5.f5 = 0; (g_261.f5.f5 <= 3); g_261.f5.f5 += 1)
            {
                int *l_569[4] = {(void*)0,(void*)0,(void*)0,(void*)0};
                int i;
                l_570 = l_569[3];
                return l_571;
            }
        }
        for (g_57.f5.f8 = 0; (g_57.f5.f8 == 29); g_57.f5.f8 = safe_add_func_int32_t_s_s(g_57.f5.f8, 4))
        {
            int *l_580 = &g_165.f5.f1;
            struct S0 *l_584 = &g_50;
            unsigned ***l_588[9] = {&g_586[4],&g_586[3],&g_586[4],&g_586[4],&g_586[3],&g_586[4],&g_586[4],&g_586[3],&g_586[4]};
            unsigned ****l_589 = &l_588[5];
            struct S1 **l_655 = (void*)0;
            int *l_724[8] = {&g_165.f5.f0,&l_590.f5.f1,&g_165.f5.f0,&g_165.f5.f0,&l_590.f5.f1,&g_165.f5.f0,&g_165.f5.f0,&l_590.f5.f1};
            int l_727[1][5] = {{0xC3BE1FC0L,0xC3BE1FC0L,0xC3BE1FC0L,0xC3BE1FC0L,0xC3BE1FC0L}};
            struct S1 l_746[1][2] = {{{0xF3DA35ADL,1UL,65533UL,1L,0x8AE04AF5L,{1L,0x4F48737CL,-1L,3410,0xD3L,-7L,0L,0xA9D6L,4294967295UL,65535UL},5UL,-498,1UL},{0xF3DA35ADL,1UL,65533UL,1L,0x8AE04AF5L,{1L,0x4F48737CL,-1L,3410,0xD3L,-7L,0L,0xA9D6L,4294967295UL,65535UL},5UL,-498,1UL}}};
            int l_755 = 1L;
            int i, j;
            for (g_57.f5.f0 = 0; (g_57.f5.f0 == 16); g_57.f5.f0++)
            {
                int *l_576 = &g_243.f0;
                int **l_577 = &l_576;
                (*l_577) = l_576;
                return p_10.f9;
            }
            if (p_10.f9)
            {
                unsigned *l_599 = (void*)0;
                struct S1 l_610 = {0x402EC142L,0x384DL,65535UL,6L,-1L,{0xB90ED224L,0x4D5081E3L,-5L,-2648,2L,1L,-1L,0xFE6CL,0x8E9F43C0L,0x6E33L},0x34DD0DDDL,318,0x90L};
                (*l_591) = (g_57.f5.f6 >= 0xE31C6DE9L);
                for (g_261.f3 = 0; (g_261.f3 <= (-27)); --g_261.f3)
                {
                    int **l_595 = &l_594;
                    (*l_595) = l_594;
                }
                if (((g_30 < ((*l_580) = (safe_rshift_func_uint8_t_u_u(1UL, (p_10.f1 > l_598))))) < (safe_lshift_func_uint8_t_u_s(((void*)0 != l_599), (g_243.f4 = g_261.f1)))))
                {
                    unsigned *l_602[1];
                    int l_603 = 0x47C000D8L;
                    int **l_611 = &l_580;
                    int i;
                    for (i = 0; i < 1; i++)
                        l_602[i] = &g_114;
                    if (p_10.f9)
                        break;
                    if ((*l_580))
                    {
                        (*g_96) = (**g_475);
                        return p_10.f3;
                    }
                    else
                    {
                        l_590 = l_610;
                    }
                    (*l_611) = l_599;
                    (*l_611) = l_580;
                }
                else
                {
                    if (l_610.f5.f7)
                        break;
                    (*l_580) = p_10.f4;
                }
            }
            else
            {
                struct S0 l_626 = {-3L,0x80AF9FF0L,-3L,-1208,0xA1L,0x27B1L,0L,0x76A1L,0UL,6UL};
                int *l_630 = &g_50.f0;
                struct S1 l_661[6][2] = {{{0x3B7A8574L,0xFD51L,65535UL,1L,-1L,{0x2318C344L,0x61212407L,1L,-4078,0xBDL,4L,-7L,0xC6E0L,1UL,65535UL},0UL,399,253UL},{0L,1UL,3UL,0xD52890B6L,0x423DA26FL,{1L,0x90591472L,0xFFE7L,872,0L,0L,3L,65535UL,0xB27EBAF3L,0x782BL},0x55B7DC8FL,-135,1UL}},{{0L,1UL,3UL,0xD52890B6L,0x423DA26FL,{1L,0x90591472L,0xFFE7L,872,0L,0L,3L,65535UL,0xB27EBAF3L,0x782BL},0x55B7DC8FL,-135,1UL},{0x3B7A8574L,0xFD51L,65535UL,1L,-1L,{0x2318C344L,0x61212407L,1L,-4078,0xBDL,4L,-7L,0xC6E0L,1UL,65535UL},0UL,399,253UL}},{{0L,1UL,3UL,0xD52890B6L,0x423DA26FL,{1L,0x90591472L,0xFFE7L,872,0L,0L,3L,65535UL,0xB27EBAF3L,0x782BL},0x55B7DC8FL,-135,1UL},{0L,1UL,3UL,0xD52890B6L,0x423DA26FL,{1L,0x90591472L,0xFFE7L,872,0L,0L,3L,65535UL,0xB27EBAF3L,0x782BL},0x55B7DC8FL,-135,1UL}},{{0x3B7A8574L,0xFD51L,65535UL,1L,-1L,{0x2318C344L,0x61212407L,1L,-4078,0xBDL,4L,-7L,0xC6E0L,1UL,65535UL},0UL,399,253UL},{0L,1UL,3UL,0xD52890B6L,0x423DA26FL,{1L,0x90591472L,0xFFE7L,872,0L,0L,3L,65535UL,0xB27EBAF3L,0x782BL},0x55B7DC8FL,-135,1UL}},{{0L,1UL,3UL,0xD52890B6L,0x423DA26FL,{1L,0x90591472L,0xFFE7L,872,0L,0L,3L,65535UL,0xB27EBAF3L,0x782BL},0x55B7DC8FL,-135,1UL},{0x3B7A8574L,0xFD51L,65535UL,1L,-1L,{0x2318C344L,0x61212407L,1L,-4078,0xBDL,4L,-7L,0xC6E0L,1UL,65535UL},0UL,399,253UL}},{{0L,1UL,3UL,0xD52890B6L,0x423DA26FL,{1L,0x90591472L,0xFFE7L,872,0L,0L,3L,65535UL,0xB27EBAF3L,0x782BL},0x55B7DC8FL,-135,1UL},{0L,1UL,3UL,0xD52890B6L,0x423DA26FL,{1L,0x90591472L,0xFFE7L,872,0L,0L,3L,65535UL,0xB27EBAF3L,0x782BL},0x55B7DC8FL,-135,1UL}}};
                int **l_662 = (void*)0;
                int **l_663 = &l_591;
                unsigned *l_668 = (void*)0;
                unsigned *l_669[10][2] = {{(void*)0,(void*)0},{(void*)0,(void*)0},{(void*)0,(void*)0},{(void*)0,(void*)0},{(void*)0,(void*)0},{(void*)0,(void*)0},{(void*)0,(void*)0},{(void*)0,(void*)0},{(void*)0,(void*)0},{(void*)0,(void*)0}};
                short l_678[6][6] = {{0x0639L,(-8L),(-8L),0x0639L,(-8L),(-8L)},{0x0639L,(-8L),(-8L),0x0639L,(-8L),(-8L)},{0x0639L,(-8L),(-8L),0x0639L,(-8L),(-8L)},{0x0639L,(-8L),(-8L),0x0639L,(-8L),(-8L)},{0x0639L,(-8L),(-8L),0x0639L,(-8L),(-8L)},{0x0639L,(-8L),(-8L),0x0639L,(-8L),(-8L)}};
                unsigned ***l_713 = &g_586[1];
                int i, j;
                if (p_10.f5)
                {
                    short l_615 = 0x762FL;
                    for (p_10.f2 = (-8); (p_10.f2 > (-30)); p_10.f2--)
                    {
                        unsigned l_614 = 0x43F46A6AL;
                        int l_616 = 1L;
                        int **l_617 = (void*)0;
                        int **l_618 = (void*)0;
                        int **l_619 = (void*)0;
                        int **l_620 = (void*)0;
                        int **l_621 = (void*)0;
                        int **l_622 = &g_49;
                        if (p_10.f9)
                            break;
                        (*l_591) = (((((1UL || (p_10.f5 & p_10.f0)) <= (l_614 , ((+(g_50.f5 >= ((l_615 >= p_10.f5) <= (p_10.f0 && l_616)))) & (*g_173)))) < 6L) , (*g_173)) | (*l_591));
                        (*l_622) = func_42(&l_616, ((*g_481) = l_590), ((*l_622) = &l_616));
                    }
                    p_10.f3 = (g_623[2] == (void*)0);
                    (*g_89) = l_625;
                }
                else
                {
                    int *l_631 = &g_30;
                    struct S1 ****l_632 = (void*)0;
                    int **l_633 = &l_631;
                    struct S0 **l_638 = &l_584;
                    (*l_584) = l_626;
                    (*l_633) = func_42((func_33(((safe_lshift_func_int16_t_s_u(p_10.f0, (p_10.f7 = (l_629[3][3][1] == (func_33(l_630, g_57.f8, l_631, p_10.f9) , l_632))))) , l_630), g_272[4][9], l_631, (*l_591)) , (void*)0), (*g_481), l_630);
                    if ((safe_sub_func_int16_t_s_s((safe_lshift_func_int8_t_s_u((~(((*g_481) , ((*l_638) = l_584)) != (void*)0)), (p_10.f0 != p_10.f3))), func_33(l_580, (safe_lshift_func_uint8_t_u_u(((*l_631) || (p_10.f2 <= (*g_49))), 5)), l_642, p_10.f6))))
                    {
                        struct S0 l_643[8] = {{1L,0L,0L,-3854,0L,0xF509L,2L,0xD041L,4294967295UL,65528UL},{-9L,0xE5C0728FL,1L,-482,8L,0x4D0AL,1L,0UL,0x538EAFC8L,0xCB10L},{-9L,0xE5C0728FL,1L,-482,8L,0x4D0AL,1L,0UL,0x538EAFC8L,0xCB10L},{1L,0L,0L,-3854,0L,0xF509L,2L,0xD041L,4294967295UL,65528UL},{-9L,0xE5C0728FL,1L,-482,8L,0x4D0AL,1L,0UL,0x538EAFC8L,0xCB10L},{-9L,0xE5C0728FL,1L,-482,8L,0x4D0AL,1L,0UL,0x538EAFC8L,0xCB10L},{1L,0L,0L,-3854,0L,0xF509L,2L,0xD041L,4294967295UL,65528UL},{-9L,0xE5C0728FL,1L,-482,8L,0x4D0AL,1L,0UL,0x538EAFC8L,0xCB10L}};
                        int i;
                        l_643[7] = (*l_625);
                    }
                    else
                    {
                        unsigned l_646 = 0xF88B2E7FL;
                        (*l_642) = (safe_add_func_uint8_t_u_u(((*g_173) = (((*g_481) , (func_33(((((*l_641) , l_646) >= (p_10.f4 & (0UL != 0xBE3BL))) , l_580), g_243.f0, l_642, (*l_630)) , 0x07773A16L)) , p_10.f2)), g_261.f5.f3));
                    }
                }
                for (g_50.f7 = 0; (g_50.f7 <= 4); g_50.f7 += 1)
                {
                    struct S1 l_649 = {0xDECD49A9L,65530UL,65532UL,0xA6E62CE9L,0x04DC34F0L,{0x34CE1DC7L,0x3790DBE9L,0xA446L,-3515,1L,6L,4L,0x9BA4L,4294967291UL,65529UL},0x49313815L,555,255UL};
                    char *l_658 = (void*)0;
                    char *l_659 = &l_583.f4;
                    int i;
                    l_660 = ((safe_add_func_uint32_t_u_u(0x4E5516A0L, (l_649 , (safe_mod_func_int8_t_s_s(((*l_659) = ((((p_10.f8 != (*l_630)) & (p_10.f9 = ((**g_624) = ((safe_mod_func_uint32_t_u_u((((((l_654 = (void*)0) != ((*g_49) , l_655)) > 1UL) >= ((safe_lshift_func_int16_t_s_u((*l_591), (*l_580))) >= 0x02L)) || p_10.f3), 4294967295UL)) <= 0L)))) == p_10.f6) && (*l_580))), (*l_580)))))) , (void*)0);
                    if ((*g_49))
                        break;
                }
                (*l_663) = func_42(l_641, l_661[1][1], l_570);
                if ((l_664 && ((*l_641) = ((*l_580) = (**l_663)))))
                {
                    int *l_674 = (void*)0;
                    struct S1 l_675 = {0xC9CDB4C7L,0UL,0UL,-1L,-10L,{-10L,-9L,-1L,-2570,1L,1L,0x88ADL,65529UL,0x3002C1DBL,1UL},4294967295UL,72,255UL};
                    struct S1 l_677 = {0x31D63700L,65533UL,0UL,1L,0xA88A1DE3L,{0L,0L,7L,-1127,0xF3L,0L,0xF6F1L,0xBCDAL,0UL,0xB2B1L},0x6BCC5151L,-70,0x11L};
                    char *l_692 = &l_675.f5.f4;
                    unsigned short *l_693 = (void*)0;
                    unsigned short *l_694 = &l_590.f1;
                    for (p_10.f4 = 3; (p_10.f4 < (-25)); p_10.f4 = safe_sub_func_int8_t_s_s(p_10.f4, 7))
                    {
                        struct S1 l_672 = {0x9E3E1BD1L,65527UL,7UL,0L,0x72A146A6L,{0x5200D9C9L,0x8F59A798L,3L,-2533,0x6BL,0xD461L,0xBF76L,0UL,4294967292UL,0x1768L},0xFEA5B143L,-364,0x11L};
                        struct S1 l_673 = {0x77C7086EL,0x143FL,5UL,0xB63022E6L,6L,{0x1101E1E1L,0x179072AEL,0x962EL,-621,-1L,-5L,1L,0xD2ADL,0UL,6UL},0x1267C918L,270,251UL};
                        int *l_676 = (void*)0;
                        (*l_663) = func_42(func_42(l_570, l_672, l_580), (l_673 = l_661[2][1]), ((*l_663) = l_642));
                        (*l_663) = func_42(l_674, l_675, ((*l_663) = func_42(func_42(func_42(func_42(l_676, l_673, (*l_663)), (l_677 = l_661[2][0]), l_674), l_661[1][1], l_674), l_672, l_642)));
                        (*g_481) = (*g_481);
                        if (p_10.f6)
                            continue;
                    }
                    (*l_594) = (((*l_694) = ((**g_624) = ((l_678[3][0] , ((*l_692) = ((safe_mod_func_int16_t_s_s(g_165.f5.f5, p_10.f8)) <= 0x9B13L))) != (*l_594)))) | p_10.f8);
                }
                else
                {
                    int *l_695 = &l_583.f0;
                    struct S1 l_697 = {0xFE1CB948L,0xD18FL,65530UL,0x560C8DDBL,0x1C64DEA2L,{0x3269C50DL,-4L,0xC6AAL,2560,0x49L,0x7713L,6L,3UL,0x0EB64F67L,0x692FL},0x3293A5B0L,-180,0x17L};
                    short *l_710 = &g_696.f5.f6;
                    unsigned l_726 = 0UL;
                    p_10.f3 = ((!(*g_173)) < ((p_10.f1 != (*l_630)) | p_10.f3));
                    if ((((func_33(((p_10.f0 & g_261.f3) , l_695), (((*l_584) = p_10) , g_696.f5.f0), l_695, p_10.f4) <= p_10.f0) == 0UL) | p_10.f0))
                    {
                        (*l_584) = (*l_584);
                    }
                    else
                    {
                        int l_712 = (-7L);
                        int l_723 = 0xB4776E14L;
                        (*g_89) = &p_10;
                        (**l_663) = (((l_712 = 0L) ^ (l_726 = ((l_713 == l_714) , ((*l_695) = ((func_33(func_42(func_42(l_695, l_697, (((((((safe_sub_func_int8_t_s_s(((safe_lshift_func_uint16_t_u_s(((**g_624) = (((*l_709) || g_57.f4) <= func_33(func_42((((!p_10.f1) <= ((***l_706) = (safe_add_func_uint32_t_u_u(((safe_mod_func_int16_t_s_s(g_243.f2, l_723)) && g_696.f6), g_165.f5.f0)))) , (*l_663)), l_697, l_580), g_122, l_724[5], l_723))), l_723)) ^ g_725[7]), (*l_709))) != p_10.f6) , (*l_642)) , 6L) >= 2L) , g_165.f7) , (void*)0)), l_697, &l_723), g_165.f5.f3, &l_723, (*l_594)) > g_103) & g_165.f4))))) && g_165.f5.f4);
                        return l_727[0][1];
                    }
                }
            }
            for (l_590.f5.f6 = 1; (l_590.f5.f6 >= 0); l_590.f5.f6 -= 1)
            {
                int *l_738 = &g_696.f3;
                struct S1 l_745[6][2][3] = {{{{0L,65529UL,0xB7E5L,0x1B548BEBL,0x0CDF70CFL,{0xC509EA33L,0x743D304FL,-10L,3941,-2L,0L,0x4D19L,0x1879L,0UL,0xCBB8L},0xC7AB69F4L,241,0x05L},{5L,65534UL,0x1E21L,6L,0xCC293A69L,{1L,1L,0x5EC2L,-2261,8L,-1L,1L,65535UL,0xD7267650L,0xEB1CL},4294967290UL,345,0x8EL},{0L,65529UL,0xB7E5L,0x1B548BEBL,0x0CDF70CFL,{0xC509EA33L,0x743D304FL,-10L,3941,-2L,0L,0x4D19L,0x1879L,0UL,0xCBB8L},0xC7AB69F4L,241,0x05L}},{{0L,65529UL,0xB7E5L,0x1B548BEBL,0x0CDF70CFL,{0xC509EA33L,0x743D304FL,-10L,3941,-2L,0L,0x4D19L,0x1879L,0UL,0xCBB8L},0xC7AB69F4L,241,0x05L},{1L,65529UL,65530UL,-6L,0L,{0x14171541L,0L,0x19A6L,3941,0x46L,-8L,-1L,8UL,1UL,0xC90BL},0x5C8306D9L,-544,3UL},{5L,65534UL,0x1E21L,6L,0xCC293A69L,{1L,1L,0x5EC2L,-2261,8L,-1L,1L,65535UL,0xD7267650L,0xEB1CL},4294967290UL,345,0x8EL}}},{{{1L,65529UL,65530UL,-6L,0L,{0x14171541L,0L,0x19A6L,3941,0x46L,-8L,-1L,8UL,1UL,0xC90BL},0x5C8306D9L,-544,3UL},{0L,65529UL,0xB7E5L,0x1B548BEBL,0x0CDF70CFL,{0xC509EA33L,0x743D304FL,-10L,3941,-2L,0L,0x4D19L,0x1879L,0UL,0xCBB8L},0xC7AB69F4L,241,0x05L},{0L,65529UL,0xB7E5L,0x1B548BEBL,0x0CDF70CFL,{0xC509EA33L,0x743D304FL,-10L,3941,-2L,0L,0x4D19L,0x1879L,0UL,0xCBB8L},0xC7AB69F4L,241,0x05L}},{{5L,65534UL,0x1E21L,6L,0xCC293A69L,{1L,1L,0x5EC2L,-2261,8L,-1L,1L,65535UL,0xD7267650L,0xEB1CL},4294967290UL,345,0x8EL},{0L,65529UL,0xB7E5L,0x1B548BEBL,0x0CDF70CFL,{0xC509EA33L,0x743D304FL,-10L,3941,-2L,0L,0x4D19L,0x1879L,0UL,0xCBB8L},0xC7AB69F4L,241,0x05L},{0x5DAA92AEL,0UL,0x2E7AL,-7L,0x2F899DB6L,{0L,5L,5L,3147,0xBBL,0x148BL,0L,0xDDE4L,6UL,65528UL},0x5B312160L,-366,255UL}}},{{{0xCF7D3B47L,0xB3BAL,1UL,0L,0L,{0x30638A86L,5L,-2L,772,0x8AL,0x1BBDL,0x5516L,0x3AD4L,0UL,65535UL},0xB45A0E15L,583,0xBEL},{1L,65529UL,65530UL,-6L,0L,{0x14171541L,0L,0x19A6L,3941,0x46L,-8L,-1L,8UL,1UL,0xC90BL},0x5C8306D9L,-544,3UL},{0xB851BCBBL,65535UL,6UL,0x457E8AF1L,0x2A7739DDL,{1L,0xB1847F8BL,0xF05CL,2273,0L,-1L,0x5964L,0x8DD0L,0x96612264L,1UL},6UL,-325,0x99L}},{{5L,65534UL,0x1E21L,6L,0xCC293A69L,{1L,1L,0x5EC2L,-2261,8L,-1L,1L,65535UL,0xD7267650L,0xEB1CL},4294967290UL,345,0x8EL},{5L,65534UL,0x1E21L,6L,0xCC293A69L,{1L,1L,0x5EC2L,-2261,8L,-1L,1L,65535UL,0xD7267650L,0xEB1CL},4294967290UL,345,0x8EL},{0xB851BCBBL,65535UL,6UL,0x457E8AF1L,0x2A7739DDL,{1L,0xB1847F8BL,0xF05CL,2273,0L,-1L,0x5964L,0x8DD0L,0x96612264L,1UL},6UL,-325,0x99L}}},{{{1L,65529UL,65530UL,-6L,0L,{0x14171541L,0L,0x19A6L,3941,0x46L,-8L,-1L,8UL,1UL,0xC90BL},0x5C8306D9L,-544,3UL},{0xCF7D3B47L,0xB3BAL,1UL,0L,0L,{0x30638A86L,5L,-2L,772,0x8AL,0x1BBDL,0x5516L,0x3AD4L,0UL,65535UL},0xB45A0E15L,583,0xBEL},{0x5DAA92AEL,0UL,0x2E7AL,-7L,0x2F899DB6L,{0L,5L,5L,3147,0xBBL,0x148BL,0L,0xDDE4L,6UL,65528UL},0x5B312160L,-366,255UL}},{{0L,65529UL,0xB7E5L,0x1B548BEBL,0x0CDF70CFL,{0xC509EA33L,0x743D304FL,-10L,3941,-2L,0L,0x4D19L,0x1879L,0UL,0xCBB8L},0xC7AB69F4L,241,0x05L},{5L,65534UL,0x1E21L,6L,0xCC293A69L,{1L,1L,0x5EC2L,-2261,8L,-1L,1L,65535UL,0xD7267650L,0xEB1CL},4294967290UL,345,0x8EL},{0L,65529UL,0xB7E5L,0x1B548BEBL,0x0CDF70CFL,{0xC509EA33L,0x743D304FL,-10L,3941,-2L,0L,0x4D19L,0x1879L,0UL,0xCBB8L},0xC7AB69F4L,241,0x05L}}},{{{0L,65529UL,0xB7E5L,0x1B548BEBL,0x0CDF70CFL,{0xC509EA33L,0x743D304FL,-10L,3941,-2L,0L,0x4D19L,0x1879L,0UL,0xCBB8L},0xC7AB69F4L,241,0x05L},{1L,65529UL,65530UL,-6L,0L,{0x14171541L,0L,0x19A6L,3941,0x46L,-8L,-1L,8UL,1UL,0xC90BL},0x5C8306D9L,-544,3UL},{5L,65534UL,0x1E21L,6L,0xCC293A69L,{1L,1L,0x5EC2L,-2261,8L,-1L,1L,65535UL,0xD7267650L,0xEB1CL},4294967290UL,345,0x8EL}},{{1L,65529UL,65530UL,-6L,0L,{0x14171541L,0L,0x19A6L,3941,0x46L,-8L,-1L,8UL,1UL,0xC90BL},0x5C8306D9L,-544,3UL},{0L,65529UL,0xB7E5L,0x1B548BEBL,0x0CDF70CFL,{0xC509EA33L,0x743D304FL,-10L,3941,-2L,0L,0x4D19L,0x1879L,0UL,0xCBB8L},0xC7AB69F4L,241,0x05L},{0L,65529UL,0xB7E5L,0x1B548BEBL,0x0CDF70CFL,{0xC509EA33L,0x743D304FL,-10L,3941,-2L,0L,0x4D19L,0x1879L,0UL,0xCBB8L},0xC7AB69F4L,241,0x05L}}},{{{5L,65534UL,0x1E21L,6L,0xCC293A69L,{1L,1L,0x5EC2L,-2261,8L,-1L,1L,65535UL,0xD7267650L,0xEB1CL},4294967290UL,345,0x8EL},{0L,65529UL,0xB7E5L,0x1B548BEBL,0x0CDF70CFL,{0xC509EA33L,0x743D304FL,-10L,3941,-2L,0L,0x4D19L,0x1879L,0UL,0xCBB8L},0xC7AB69F4L,241,0x05L},{0x5DAA92AEL,0UL,0x2E7AL,-7L,0x2F899DB6L,{0L,5L,5L,3147,0xBBL,0x148BL,0L,0xDDE4L,6UL,65528UL},0x5B312160L,-366,255UL}},{{0xCF7D3B47L,0xB3BAL,1UL,0L,0L,{0x30638A86L,5L,-2L,772,0x8AL,0x1BBDL,0x5516L,0x3AD4L,0UL,65535UL},0xB45A0E15L,583,0xBEL},{1L,65529UL,65530UL,-6L,0L,{0x14171541L,0L,0x19A6L,3941,0x46L,-8L,-1L,8UL,1UL,0xC90BL},0x5C8306D9L,-544,3UL},{0xB851BCBBL,65535UL,6UL,0x457E8AF1L,0x2A7739DDL,{1L,0xB1847F8BL,0xF05CL,2273,0L,-1L,0x5964L,0x8DD0L,0x96612264L,1UL},6UL,-325,0x99L}}}};
                struct S0 *l_756 = &g_165.f5;
                unsigned *l_758 = &g_114;
                unsigned **l_757[9][1];
                int i, j, k;
                for (i = 0; i < 9; i++)
                {
                    for (j = 0; j < 1; j++)
                        l_757[i][j] = &l_758;
                }
                if ((p_10 , ((g_52[l_590.f5.f6][l_590.f5.f6] , (((safe_rshift_func_uint16_t_u_s(func_33(l_591, g_725[(l_590.f5.f6 + 7)], &l_727[0][1], (*l_594)), ((-7L) != 4UL))) != p_10.f6) ^ 0xCF93L)) ^ 9L)))
                {
                    int l_740[2];
                    unsigned short l_741 = 0x3A1EL;
                    struct S1 l_743 = {0xCD710E29L,0UL,0x8EEEL,0x9DADA695L,0x7C10B556L,{0L,3L,-1L,-887,0x08L,2L,-10L,0x63CEL,1UL,0x23BDL},4294967295UL,98,0xA7L};
                    int i;
                    for (i = 0; i < 2; i++)
                        l_740[i] = 1L;
                    if (((3UL || (g_725[(l_590.f5.f6 + 1)] = (1UL != (safe_add_func_int32_t_s_s(p_10.f6, (safe_lshift_func_uint8_t_u_s(p_10.f0, 4))))))) <= ((((safe_add_func_int32_t_s_s((0xA9L == g_52[l_590.f5.f6][l_590.f5.f6]), (*l_709))) || (func_33(l_738, g_739, (**l_706), l_740[0]) && 1L)) ^ 8L) > l_741)))
                    {
                        return p_10.f5;
                    }
                    else
                    {
                        int *l_742[3];
                        struct S1 l_744 = {5L,0x71FDL,0x9987L,0xA14D40D3L,8L,{-1L,-6L,0x8045L,536,0L,0x9EB6L,3L,1UL,4294967288UL,65535UL},0x44BAB9E9L,-387,0UL};
                        int i;
                        for (i = 0; i < 3; i++)
                            l_742[i] = &l_740[0];
                        (**l_706) = func_42(l_742[1], l_743, func_42(func_42(l_742[1], l_744, l_642), l_745[5][1][0], l_738));
                        (*l_642) = 0x93765437L;
                        (*l_642) = ((*g_49) = ((void*)0 == (**g_474)));
                        (**l_706) = (((*l_738) != (***l_706)) , (void*)0);
                    }
                    (*l_709) = (((p_10.f5 , (g_725[(l_590.f5.f6 + 1)] , l_746[0][0])) , func_42((**l_706), (*g_481), ((g_696.f5.f7 | ((((safe_lshift_func_uint8_t_u_u(((safe_add_func_uint8_t_u_u(((*g_173) | (safe_mod_func_uint8_t_u_u((safe_add_func_int16_t_s_s(l_755, ((((+(&p_10 != l_756)) != (-1L)) & 0xB5L) , 0xD13AL))), 0x34L))), (*l_709))) <= (-1L)), 1)) , l_757[7][0]) != g_759) > p_10.f4)) , &l_740[0]))) != l_758);
                    (*g_49) = (((p_10.f4 < (*l_738)) , 0x6A51L) != (*l_738));
                    (*l_709) = (g_261.f5.f8 || (&l_664 == (**l_714)));
                }
                else
                {
                    int *l_766 = (void*)0;
                    for (g_50.f6 = 0; (g_50.f6 <= 1); g_50.f6 += 1)
                    {
                        struct S1 l_765[2] = {{0x96961774L,0x1ED1L,0xEAEEL,0x97254C67L,0xFB76CBC4L,{0x3DCDBEABL,1L,0xC37FL,-993,0L,0x1584L,0x9077L,0x2C0FL,0xF1DF1095L,0x40DBL},4UL,396,1UL},{0x96961774L,0x1ED1L,0xEAEEL,0x97254C67L,0xFB76CBC4L,{0x3DCDBEABL,1L,0xC37FL,-993,0L,0x1584L,0x9077L,0x2C0FL,0xF1DF1095L,0x40DBL},4UL,396,1UL}};
                        int i;
                        (*l_594) = p_10.f1;
                        (**l_706) = func_42((l_764 , (**l_706)), l_765[1], l_766);
                        (*l_709) = p_10.f9;
                    }
                    (**l_706) = func_42(l_766, l_745[5][1][0], (p_10 , (**l_706)));
                }
                return (***l_706);
            }
            return p_10.f2;
        }
    }
    l_641 = func_42(l_642, (**l_654), l_641);
    for (g_696.f5.f6 = 0; (g_696.f5.f6 <= 0); g_696.f5.f6 += 1)
    {
        struct S0 ***l_767 = (void*)0;
        struct S0 ***l_768 = &g_89;
        struct S1 l_770 = {0L,65535UL,0x1FE6L,-1L,2L,{-1L,-3L,0L,-1039,-1L,0x133FL,0x241AL,0xE8AAL,0x32E43569L,0x9EE7L},0x3CD4B828L,-579,0x98L};
        int *l_792 = &g_165.f4;
        struct S1 l_805 = {2L,3UL,0x0317L,0x095D884EL,0x1D131272L,{0xB0A7B5B8L,-1L,0x1254L,-1422,0L,0x62EEL,-7L,0xDDA2L,5UL,1UL},4294967286UL,475,0x35L};
        int *l_807 = &g_243.f0;
        int i;
        if (p_10.f9)
            break;
        if ((*l_641))
            break;
        (*l_768) = &l_625;
        for (g_696.f0 = 0; (g_696.f0 <= 0); g_696.f0 += 1)
        {
            struct S1 l_780[4][4] = {{{0xEF16B8A7L,1UL,1UL,0x18199809L,5L,{-10L,0L,0x4859L,-721,0x5CL,8L,-2L,0x1D61L,7UL,65535UL},0x1711E169L,-331,2UL},{-9L,65527UL,65530UL,0xA0C31E3AL,0x3E4D5AF6L,{0x4198C985L,-1L,0L,3930,0x0DL,1L,-4L,7UL,0UL,1UL},0xED674BD9L,-374,0xACL},{0x33FDB09EL,65535UL,3UL,0L,0x87672542L,{0xD56135B2L,0xF100F1B4L,0x3E2CL,-2169,-2L,0xFC78L,1L,0x1B43L,0x2B33F9C7L,0UL},0UL,-339,0x6DL},{0xCF76271BL,0x4831L,0x0A30L,0xDE5D5881L,0x9A5C7E0EL,{0x6EF6AE5BL,0x9E63F93FL,0xF263L,3760,1L,0xE3F7L,0xCFC9L,0x0208L,1UL,0xF1CDL},0x10F94671L,530,0xB6L}},{{0xEF16B8A7L,1UL,1UL,0x18199809L,5L,{-10L,0L,0x4859L,-721,0x5CL,8L,-2L,0x1D61L,7UL,65535UL},0x1711E169L,-331,2UL},{0x33FDB09EL,65535UL,3UL,0L,0x87672542L,{0xD56135B2L,0xF100F1B4L,0x3E2CL,-2169,-2L,0xFC78L,1L,0x1B43L,0x2B33F9C7L,0UL},0UL,-339,0x6DL},{0xEF16B8A7L,1UL,1UL,0x18199809L,5L,{-10L,0L,0x4859L,-721,0x5CL,8L,-2L,0x1D61L,7UL,65535UL},0x1711E169L,-331,2UL},{-2L,1UL,0UL,0xCDE98449L,-1L,{6L,5L,0x97D2L,318,-1L,0x5BC4L,0x361FL,0UL,0x0E8E4C87L,65535UL},0UL,499,253UL}},{{-9L,65527UL,65530UL,0xA0C31E3AL,0x3E4D5AF6L,{0x4198C985L,-1L,0L,3930,0x0DL,1L,-4L,7UL,0UL,1UL},0xED674BD9L,-374,0xACL},{0xCF76271BL,0x4831L,0x0A30L,0xDE5D5881L,0x9A5C7E0EL,{0x6EF6AE5BL,0x9E63F93FL,0xF263L,3760,1L,0xE3F7L,0xCFC9L,0x0208L,1UL,0xF1CDL},0x10F94671L,530,0xB6L},{-2L,1UL,0UL,0xCDE98449L,-1L,{6L,5L,0x97D2L,318,-1L,0x5BC4L,0x361FL,0UL,0x0E8E4C87L,65535UL},0UL,499,253UL},{-2L,1UL,0UL,0xCDE98449L,-1L,{6L,5L,0x97D2L,318,-1L,0x5BC4L,0x361FL,0UL,0x0E8E4C87L,65535UL},0UL,499,253UL}},{{0x33FDB09EL,65535UL,3UL,0L,0x87672542L,{0xD56135B2L,0xF100F1B4L,0x3E2CL,-2169,-2L,0xFC78L,1L,0x1B43L,0x2B33F9C7L,0UL},0UL,-339,0x6DL},{0x33FDB09EL,65535UL,3UL,0L,0x87672542L,{0xD56135B2L,0xF100F1B4L,0x3E2CL,-2169,-2L,0xFC78L,1L,0x1B43L,0x2B33F9C7L,0UL},0UL,-339,0x6DL},{-1L,65535UL,1UL,0x33E5037AL,0x9D251BC0L,{0xE65ED2C3L,-1L,8L,-1402,0x46L,1L,0x8192L,0x860BL,0xEC793E42L,0xAFFBL},4UL,77,0x5DL},{0xCF76271BL,0x4831L,0x0A30L,0xDE5D5881L,0x9A5C7E0EL,{0x6EF6AE5BL,0x9E63F93FL,0xF263L,3760,1L,0xE3F7L,0xCFC9L,0x0208L,1UL,0xF1CDL},0x10F94671L,530,0xB6L}}};
            int *l_786[9][9] = {{&g_261.f5.f0,&g_696.f4,(void*)0,&l_770.f5.f1,&l_770.f5.f0,(void*)0,&g_261.f5.f1,(void*)0,(void*)0},{&g_261.f5.f1,(void*)0,&g_50.f1,(void*)0,&g_50.f1,(void*)0,&g_261.f5.f1,&g_50.f0,&l_780[1][0].f4},{(void*)0,(void*)0,&l_770.f5.f1,&l_780[1][0].f4,&l_780[1][0].f5.f0,&g_57.f5.f1,&l_590.f5.f1,&l_770.f5.f0,(void*)0},{(void*)0,&g_261.f3,&g_57.f5.f1,(void*)0,&l_770.f5.f0,(void*)0,&g_261.f5.f0,&g_50.f1,&g_50.f0},{&g_50.f0,&l_590.f5.f1,&g_50.f0,(void*)0,&g_57.f5.f1,(void*)0,&g_50.f0,&l_590.f5.f1,&g_50.f0},{(void*)0,&l_770.f5.f0,&g_57.f5.f0,&g_696.f4,&g_50.f0,&g_261.f5.f1,&l_590.f5.f1,&l_780[1][0].f5.f0,&l_770.f5.f1},{(void*)0,&l_770.f5.f1,&l_780[1][0].f5.f0,&l_590.f5.f1,&g_261.f5.f1,&g_50.f0,&g_696.f4,&g_57.f5.f0,&l_770.f5.f0},{(void*)0,&g_50.f0,&l_590.f5.f1,&g_50.f0,(void*)0,&g_57.f5.f1,(void*)0,&g_50.f0,&l_590.f5.f1},{&g_50.f0,&g_50.f0,&g_50.f1,&g_261.f5.f0,(void*)0,&l_770.f5.f0,(void*)0,&g_57.f5.f1,&g_261.f3}};
            int **l_793 = &l_641;
            int i, j;
            if ((0xB2E628F5L == ((*l_654) == (*l_654))))
            {
                (**l_768) = &p_10;
            }
            else
            {
                short l_769 = 0x3DCBL;
                (*l_594) = (p_10.f7 <= l_769);
            }
        }
    }
    if (((p_10.f4 = (*l_641)) > ((&g_173 != (void*)0) | (p_10.f3 || (((*l_641) , ((safe_rshift_func_int8_t_s_u(g_667, 0)) < p_10.f8)) != ((((*l_641) < ((void*)0 == l_832)) && (*l_594)) , p_10.f3))))))
    {
        int *l_833[5];
        struct S0 l_838 = {0L,0x52E0AF0DL,0x92FDL,2325,7L,7L,0x277CL,0xAAFCL,1UL,65535UL};
        unsigned *l_841[1][3];
        unsigned short l_843 = 0xB99AL;
        int *l_844[4][3][9] = {{{(void*)0,(void*)0,&g_696.f3,&g_243.f0,(void*)0,&g_50.f1,&g_50.f1,&g_50.f1,&g_50.f1},{(void*)0,&l_838.f0,(void*)0,&l_838.f0,(void*)0,(void*)0,&g_261.f5.f0,&g_261.f4,(void*)0},{(void*)0,&g_243.f0,&g_696.f3,(void*)0,(void*)0,&g_50.f1,&g_57.f5.f0,&g_165.f5.f1,&g_50.f1}},{{&g_57.f5.f1,&g_57.f3,(void*)0,&l_590.f3,&g_165.f5.f1,(void*)0,&g_57.f5.f0,&g_57.f5.f0,(void*)0},{&g_609,&g_165.f4,&g_696.f3,&g_165.f4,&g_609,&g_50.f1,(void*)0,&g_243.f0,(void*)0},{&g_57.f5.f0,&g_165.f5.f1,&g_57.f5.f0,(void*)0,&g_261.f5.f0,&l_590.f5.f0,&l_590.f3,&g_57.f3,&l_590.f5.f0}},{{&g_165.f5.f1,&g_609,&g_696.f3,(void*)0,&g_50.f1,(void*)0,&g_165.f4,&g_165.f4,(void*)0},{&g_261.f4,&g_57.f5.f1,&g_57.f5.f0,&g_57.f5.f1,&g_261.f4,&l_590.f5.f0,&g_57.f3,&l_590.f3,&l_590.f5.f0},{&g_50.f1,(void*)0,&g_696.f3,&g_609,&g_165.f5.f1,(void*)0,&g_243.f0,(void*)0,(void*)0}},{{&g_261.f5.f0,(void*)0,&g_57.f5.f0,&g_165.f5.f1,&g_57.f5.f0,&l_590.f5.f0,&l_838.f0,&l_838.f0,&l_590.f5.f0},{&g_57.f5.f0,(void*)0,&g_696.f3,(void*)0,&g_57.f5.f0,(void*)0,(void*)0,&g_243.f0,(void*)0},{&g_57.f5.f0,&g_165.f5.f1,&g_57.f5.f0,(void*)0,&g_261.f5.f0,&l_590.f5.f0,&l_590.f3,&g_57.f3,&l_590.f5.f0}}};
        int i, j, k;
        for (i = 0; i < 5; i++)
            l_833[i] = &g_50.f0;
        for (i = 0; i < 1; i++)
        {
            for (j = 0; j < 3; j++)
                l_841[i][j] = &l_664;
        }
        (*l_832) = l_833[3];
        for (l_590.f5.f5 = 28; (l_590.f5.f5 >= (-20)); l_590.f5.f5--)
        {
            return p_10.f3;
        }
        (*l_832) = func_42(l_833[3], func_11((((p_10.f9 | (safe_rshift_func_uint8_t_u_s((+(func_33((*l_832), ((((-1L) | ((func_33((l_844[1][1][8] = (*l_832)), p_10.f2, l_833[3], p_10.f9) & p_10.f3) >= p_10.f1)) , 0xCFL) != g_696.f5.f6), l_841[0][0], p_10.f7) == g_261.f5.f7)), 7))) | 1L) , 1UL)), l_841[0][1]);
    }
    else
    {
        (*l_832) = (*l_832);
    }
    return (*l_806);
}







static struct S1 func_11(unsigned short p_12)
{
    unsigned char ***l_367 = &g_172[0][0][2];
    int *l_368 = &g_30;
    unsigned *l_370[2][6][3] = {{{&g_114,(void*)0,&g_122},{&g_114,&g_114,&g_122},{(void*)0,&g_114,&g_114},{&g_122,&g_114,&g_122},{&g_122,(void*)0,&g_114},{(void*)0,&g_122,&g_122}},{{&g_114,&g_122,&g_114},{&g_114,(void*)0,&g_122},{&g_114,&g_114,&g_122},{(void*)0,&g_114,&g_114},{&g_114,(void*)0,&g_114},{&g_114,&g_114,(void*)0}}};
    unsigned **l_369 = &l_370[1][0][0];
    struct S1 l_373 = {0L,0x12DFL,5UL,1L,0x373E9C80L,{0xF218C628L,0xC409492BL,-2L,338,-1L,4L,-1L,0x4B4EL,0x516FEABBL,1UL},0UL,-538,249UL};
    unsigned l_455 = 0x80610F8DL;
    struct S1 ***l_473 = &g_96;
    struct S1 ****l_472 = &l_473;
    unsigned **l_502 = (void*)0;
    unsigned short **l_526 = (void*)0;
    int *l_554 = (void*)0;
    char l_555 = 1L;
    unsigned l_566 = 0x98BD7899L;
    int i, j, k;
    for (g_261.f5.f7 = 0; (g_261.f5.f7 <= 3); g_261.f5.f7 += 1)
    {
        int *l_375 = &g_261.f5.f1;
        struct S1 l_415 = {0x9A5E2253L,65535UL,65530UL,-1L,-3L,{0L,0x11666B2FL,0xB9E6L,-2534,0x3DL,0L,6L,0xEB72L,0UL,0UL},4294967286UL,-535,0xC4L};
        for (g_165.f5.f0 = 0; (g_165.f5.f0 <= 0); g_165.f5.f0 += 1)
        {
            int *l_371 = (void*)0;
            struct S1 l_380 = {-7L,0x16ADL,0UL,0xB2420B9EL,0x63A82AA4L,{0L,0L,0x9D3FL,-1587,0x4FL,1L,0xAE73L,0x876AL,4294967291UL,65535UL},8UL,500,0x1FL};
            struct S0 l_417 = {0x0C1A84DFL,0xE3E162EAL,1L,-2792,1L,-7L,0L,9UL,1UL,1UL};
            int i, j;
            (*l_368) = (((0x48L < g_272[(g_261.f5.f7 + 4)][(g_261.f5.f7 + 6)]) , l_367) == ((((*l_368) | g_243.f1) ^ 0x12F3L) , l_367));
            l_368 = l_368;
            if (p_12)
            {
                struct S0 *l_372 = &g_165.f5;
                int *l_374 = &l_373.f3;
                struct S1 *l_381[7][9][4] = {{{&l_380,&g_165,&l_380,&g_261},{(void*)0,&g_57,&g_261,(void*)0},{&g_261,&l_373,(void*)0,&g_57},{&l_373,&g_261,(void*)0,&l_373},{&g_261,(void*)0,&g_261,&g_57},{(void*)0,&g_261,&l_380,&l_373},{&l_380,&l_373,&g_57,(void*)0},{&g_261,(void*)0,&l_380,&g_261},{&g_261,&g_165,&g_57,&g_165}},{{&l_373,&g_261,(void*)0,&g_165},{(void*)0,(void*)0,(void*)0,(void*)0},{&l_380,&g_57,&g_165,(void*)0},{&l_373,&l_373,(void*)0,&g_57},{(void*)0,&l_380,(void*)0,&g_57},{(void*)0,&l_373,&g_57,(void*)0},{&l_380,&g_57,&l_373,(void*)0},{&g_261,(void*)0,&l_380,&g_165},{&g_261,&g_261,(void*)0,&g_165}},{{&l_373,&g_165,&l_373,&g_261},{&l_373,(void*)0,&g_165,(void*)0},{&g_57,&l_373,&g_165,&l_373},{(void*)0,&g_261,&l_373,&g_57},{&l_380,&g_165,&l_380,(void*)0},{(void*)0,&l_373,&g_261,(void*)0},{(void*)0,&l_380,&l_380,&g_261},{&l_380,(void*)0,(void*)0,(void*)0},{&l_373,&l_380,&l_373,&g_165}},{{&g_261,&g_165,&g_57,&l_380},{(void*)0,&g_57,(void*)0,&l_373},{&g_165,&g_57,&g_165,&g_261},{&g_261,&g_261,&g_261,&g_261},{&l_380,&l_380,&l_380,&g_57},{&g_261,&g_57,&g_165,&g_261},{&g_57,&g_57,(void*)0,&g_165},{&g_261,&g_57,&g_261,&g_261},{&g_57,&g_57,&l_373,&g_57}},{{(void*)0,&l_380,&g_261,&g_261},{&g_165,&g_261,(void*)0,&g_261},{&l_380,&g_57,&l_380,&l_373},{(void*)0,&g_57,(void*)0,&l_380},{&g_57,&g_165,&g_165,&g_165},{&l_380,&l_380,&l_380,(void*)0},{(void*)0,(void*)0,&l_380,&g_261},{&g_57,&l_380,&l_373,(void*)0},{&g_165,&l_373,&l_373,(void*)0}},{{&g_57,&g_165,&l_380,&l_380},{&g_261,&g_165,&l_373,&l_373},{&l_373,&l_373,&g_261,&g_165},{&l_380,&g_261,&g_57,&g_165},{&g_57,(void*)0,&l_380,&g_57},{&g_165,&g_57,&g_261,(void*)0},{(void*)0,(void*)0,(void*)0,(void*)0},{&g_57,(void*)0,(void*)0,&g_261},{&g_57,&l_373,&g_261,&g_57}},{{(void*)0,&l_373,&l_380,&g_57},{&g_165,&l_373,&g_57,&g_261},{(void*)0,(void*)0,&g_165,(void*)0},{&l_373,(void*)0,(void*)0,(void*)0},{&g_165,&g_57,(void*)0,&g_57},{&l_373,(void*)0,&l_380,&g_165},{&l_373,&g_261,&l_380,&g_165},{&g_57,&l_373,&g_57,&l_373},{&g_261,&g_165,&l_373,&l_380}}};
                int i, j, k;
                for (g_50.f5 = 0; (g_50.f5 <= 3); g_50.f5 += 1)
                {
                    if (p_12)
                        break;
                    (*g_89) = l_372;
                }
                if (((((func_33(func_42(l_370[0][5][2], l_373, l_370[1][0][0]), p_12, l_374, (*l_368)) > ((g_243.f7 | p_12) <= 0xC4F04223L)) >= g_165.f5.f2) < p_12) || p_12))
                {
                    int **l_376 = &l_374;
                    (*l_376) = l_375;
                }
                else
                {
                    for (g_57.f6 = 0; g_57.f6 < 2; g_57.f6 += 1)
                    {
                        for (l_373.f5.f5 = 0; l_373.f5.f5 < 2; l_373.f5.f5 += 1)
                        {
                            g_52[g_57.f6][l_373.f5.f5] = (-1L);
                        }
                    }
                }
                for (g_243.f1 = 0; (g_243.f1 <= 7); g_243.f1 += 1)
                {
                    int **l_382 = &l_374;
                    int i, j;
                }
            }
            else
            {
                short l_385[3][8] = {{1L,0x504CL,0x504CL,1L,0L,0x8B7FL,0L,1L},{0x504CL,0L,0x504CL,7L,9L,9L,7L,0x504CL},{0L,0L,9L,0x8B7FL,0L,0x8B7FL,9L,0L}};
                int *l_389 = (void*)0;
                struct S1 l_390[3][1][2] = {{{{0x35508209L,65528UL,0x2ED8L,0xF7A876C0L,9L,{0L,0x6EA02005L,0x352FL,-276,-1L,-1L,1L,0xA93FL,0x1530A68DL,0x2C64L},0UL,120,0x97L},{0x35508209L,65528UL,0x2ED8L,0xF7A876C0L,9L,{0L,0x6EA02005L,0x352FL,-276,-1L,-1L,1L,0xA93FL,0x1530A68DL,0x2C64L},0UL,120,0x97L}}},{{{-9L,0xF848L,0xE018L,0x5C3D4973L,-3L,{0x58E02CB6L,0xCA07539EL,0x2C29L,-3034,4L,0x8BE9L,-4L,0x816CL,0UL,0xC25CL},0UL,-687,255UL},{0x35508209L,65528UL,0x2ED8L,0xF7A876C0L,9L,{0L,0x6EA02005L,0x352FL,-276,-1L,-1L,1L,0xA93FL,0x1530A68DL,0x2C64L},0UL,120,0x97L}}},{{{0x35508209L,65528UL,0x2ED8L,0xF7A876C0L,9L,{0L,0x6EA02005L,0x352FL,-276,-1L,-1L,1L,0xA93FL,0x1530A68DL,0x2C64L},0UL,120,0x97L},{-9L,0xF848L,0xE018L,0x5C3D4973L,-3L,{0x58E02CB6L,0xCA07539EL,0x2C29L,-3034,4L,0x8BE9L,-4L,0x816CL,0UL,0xC25CL},0UL,-687,255UL}}}};
                unsigned short l_395 = 65535UL;
                unsigned char *l_421 = &l_390[2][0][1].f8;
                int i, j, k;
                for (l_373.f5.f2 = 0; (l_373.f5.f2 <= 7); l_373.f5.f2 += 1)
                {
                    return l_373;
                }
                for (l_380.f5.f2 = 5; (l_380.f5.f2 >= 0); l_380.f5.f2 -= 1)
                {
                    int *l_391 = &l_373.f5.f0;
                    int *l_398 = (void*)0;
                    struct S0 l_399 = {-3L,-10L,1L,-2289,-5L,1L,5L,65535UL,0x8A777F6FL,0x4B8EL};
                    int *l_406 = &g_57.f4;
                    struct S0 *l_408 = &g_57.f5;
                    if (p_12)
                    {
                        unsigned l_388 = 0x830EB65CL;
                        int *l_392 = &g_57.f4;
                        short *l_393 = (void*)0;
                        short *l_394[3];
                        unsigned l_396 = 0xAA26500EL;
                        int **l_397 = &l_392;
                        int i;
                        for (i = 0; i < 3; i++)
                            l_394[i] = &g_57.f5.f5;
                        (*l_375) = ((*l_391) = (((safe_sub_func_int16_t_s_s((g_165.f5.f0 & ((0L || ((l_385[2][6] & (g_261.f5.f2 = ((safe_rshift_func_uint8_t_u_u((p_12 <= (l_388 < ((*l_392) >= g_261.f5.f9))), 7)) , p_12))) != l_395)) <= g_50.f7)), 0x638EL)) > l_396) ^ p_12));
                        (*l_397) = (l_389 = l_392);
                    }
                    else
                    {
                        l_371 = func_42(l_389, l_373, l_371);
                    }
                    if ((p_12 && p_12))
                    {
                        struct S0 *l_400 = &l_390[2][0][1].f5;
                        int *l_405 = &g_165.f4;
                        l_398 = (l_375 = l_368);
                        (*l_400) = l_399;
                        l_406 = (((~0UL) == ((*l_375) = (safe_sub_func_int16_t_s_s(((safe_mod_func_uint32_t_u_u((p_12 > func_33(l_405, p_12, ((*g_49) , func_42(l_391, l_390[2][0][1], func_42(l_375, l_380, l_406))), (*l_391))), g_165.f2)) , p_12), p_12)))) , l_391);
                    }
                    else
                    {
                        int *l_407 = &g_165.f3;
                        int i;
                        (*l_391) = ((*l_368) = p_12);
                        l_407 = l_406;
                        (*g_49) = 0L;
                        if (p_12)
                            continue;
                    }
                    (*l_408) = l_380.f5;
                }
                for (g_243.f9 = 0; (g_243.f9 <= 0); g_243.f9 += 1)
                {
                    int l_409 = (-1L);
                    int *l_413 = &g_57.f5.f0;
                    struct S0 *l_419[10];
                    int i;
                    for (i = 0; i < 10; i++)
                        l_419[i] = (void*)0;
                    if (((*g_49) = l_409))
                    {
                        struct S1 l_410 = {0x09E00719L,0xEB1FL,9UL,0xE2C0CB6CL,0xA1A178BDL,{0xE455B5D4L,0x7A11F9ECL,2L,-407,0x97L,0x2B43L,0L,1UL,4294967293UL,0xA64EL},2UL,-97,255UL};
                        struct S1 *l_411 = (void*)0;
                        struct S1 *l_412[4];
                        int i;
                        for (i = 0; i < 4; i++)
                            l_412[i] = &l_380;
                        g_57 = l_410;
                        if (p_12)
                            continue;
                        l_375 = l_413;
                    }
                    else
                    {
                        int **l_414 = &l_389;
                        struct S1 *l_416 = &l_415;
                        (*l_414) = l_413;
                        (*l_416) = l_415;
                        return g_165;
                    }
                    for (l_415.f0 = 0; (l_415.f0 >= 0); l_415.f0 -= 1)
                    {
                        return l_380;
                    }
                    for (l_415.f0 = 0; (l_415.f0 <= 0); l_415.f0 += 1)
                    {
                        int i, j, k;
                        (*l_368) = ((*g_49) >= g_30);
                    }
                    for (g_243.f2 = 0; (g_243.f2 <= 0); g_243.f2 += 1)
                    {
                        struct S0 *l_418 = &l_415.f5;
                        struct S0 **l_420 = &l_419[9];
                        unsigned char ***l_422 = &g_172[0][0][2];
                        int *l_423 = &l_380.f5.f1;
                        (*l_418) = l_417;
                        (*l_420) = ((*g_89) = l_419[9]);
                        l_413 = ((g_261.f1 , (0xD9L <= (((*g_173) = ((void*)0 == l_421)) & ((void*)0 == l_422)))) , l_423);
                    }
                }
            }
            for (l_415.f5.f5 = 5; (l_415.f5.f5 >= 0); l_415.f5.f5 -= 1)
            {
                return l_415;
            }
        }
        if (p_12)
            break;
        for (g_57.f5.f2 = 5; (g_57.f5.f2 >= 0); g_57.f5.f2 -= 1)
        {
            struct S1 l_424 = {0xE0F1613FL,8UL,0xC223L,-5L,1L,{6L,0x6E647151L,0x7326L,3043,-4L,0xAA7AL,0xDE5FL,0xD2BFL,0xF529F536L,0UL},0UL,-389,0x46L};
            return l_424;
        }
    }
    for (l_373.f0 = 28; (l_373.f0 >= (-15)); l_373.f0 = safe_sub_func_int32_t_s_s(l_373.f0, 8))
    {
        int l_429 = 1L;
        int ***l_435 = &g_298[1];
        unsigned short **l_483[4];
        struct S1 l_500 = {0xB7DAE9B4L,0x69A8L,0x306EL,0xC9001811L,0xCA1E49E5L,{0x5A75CAEFL,0L,0x99B2L,-3600,0xD9L,0xF44DL,1L,1UL,0xDABDC300L,65526UL},4294967287UL,-248,255UL};
        int i;
        for (i = 0; i < 4; i++)
            l_483[i] = &g_334[0];
        for (g_165.f2 = 0; (g_165.f2 == 3); g_165.f2 = safe_add_func_int8_t_s_s(g_165.f2, 2))
        {
            int l_442[6][9] = {{(-1L),(-1L),(-1L),(-1L),(-1L),(-1L),(-1L),(-1L),(-1L)},{0L,0L,0L,0L,0L,0L,0L,0L,0L},{(-1L),(-1L),(-1L),(-1L),(-1L),(-1L),(-1L),(-1L),(-1L)},{0L,0L,0L,0L,0L,0L,0L,0L,0L},{(-1L),(-1L),(-1L),(-1L),(-1L),(-1L),(-1L),(-1L),(-1L)},{0L,0L,0L,0L,0L,0L,0L,0L,0L}};
            struct S1 **l_454 = &g_97;
            int *l_460 = &g_165.f5.f0;
            struct S0 l_497[5] = {{3L,0x6FDF1FB5L,0xF61FL,-2181,0xB0L,1L,0x914AL,0UL,4294967287UL,0x0868L},{3L,0x6FDF1FB5L,0xF61FL,-2181,0xB0L,1L,0x914AL,0UL,4294967287UL,0x0868L},{3L,0x6FDF1FB5L,0xF61FL,-2181,0xB0L,1L,0x914AL,0UL,4294967287UL,0x0868L},{3L,0x6FDF1FB5L,0xF61FL,-2181,0xB0L,1L,0x914AL,0UL,4294967287UL,0x0868L},{3L,0x6FDF1FB5L,0xF61FL,-2181,0xB0L,1L,0x914AL,0UL,4294967287UL,0x0868L}};
            unsigned short *l_498[10] = {&g_165.f1,&l_373.f5.f9,(void*)0,&l_373.f5.f9,&g_165.f1,&g_165.f1,&l_373.f5.f9,(void*)0,&l_373.f5.f9,&g_165.f1};
            struct S1 l_510 = {-6L,65527UL,0xEC88L,3L,-7L,{-6L,9L,0x8FDEL,530,0x0AL,0L,-10L,0x8067L,0xBE90BAF8L,65533UL},4294967294UL,118,0x91L};
            struct S1 l_511[4] = {{1L,65535UL,3UL,0x6ADEB5B2L,1L,{0x19A1E93AL,-4L,0L,1413,0xB7L,0x479FL,-3L,0x6A5BL,0x2C0A5637L,0x171AL},0xC36A143EL,-102,0x6CL},{1L,65535UL,3UL,0x6ADEB5B2L,1L,{0x19A1E93AL,-4L,0L,1413,0xB7L,0x479FL,-3L,0x6A5BL,0x2C0A5637L,0x171AL},0xC36A143EL,-102,0x6CL},{1L,65535UL,3UL,0x6ADEB5B2L,1L,{0x19A1E93AL,-4L,0L,1413,0xB7L,0x479FL,-3L,0x6A5BL,0x2C0A5637L,0x171AL},0xC36A143EL,-102,0x6CL},{1L,65535UL,3UL,0x6ADEB5B2L,1L,{0x19A1E93AL,-4L,0L,1413,0xB7L,0x479FL,-3L,0x6A5BL,0x2C0A5637L,0x171AL},0xC36A143EL,-102,0x6CL}};
            int l_536[7][8] = {{0xD6F4BF9DL,(-1L),(-1L),0xD6F4BF9DL,(-1L),(-1L),0xD6F4BF9DL,(-1L)},{0xD6F4BF9DL,0xD6F4BF9DL,0xE88910EBL,0xD6F4BF9DL,0xD6F4BF9DL,0xE88910EBL,0xD6F4BF9DL,0xD6F4BF9DL},{(-1L),0xD6F4BF9DL,(-1L),0xE88910EBL,(-1L),0xE88910EBL,0xE88910EBL,(-1L)},{(-1L),0xE88910EBL,0xE88910EBL,(-1L),0xE88910EBL,0xE88910EBL,(-1L),0xE88910EBL},{(-1L),(-1L),0xD6F4BF9DL,(-1L),(-1L),0xD6F4BF9DL,(-1L),(-1L)},{0xE88910EBL,(-1L),0xE88910EBL,0xE88910EBL,(-1L),0xE88910EBL,0xE88910EBL,(-1L)},{(-1L),0xE88910EBL,0xE88910EBL,(-1L),0xE88910EBL,0xE88910EBL,(-1L),0xE88910EBL}};
            struct S1 l_538 = {0xF4ACFF5AL,1UL,0x0606L,-2L,1L,{0L,1L,0x98FEL,-3342,0xF4L,0L,-1L,0x0E9CL,0UL,0x7FE0L},1UL,-548,250UL};
            int i, j;
        }
    }
    if ((*l_368))
    {
        int *l_539[10][4] = {{&g_261.f3,&g_243.f0,&g_57.f4,&g_243.f0},{&g_243.f0,&l_373.f4,&g_57.f4,&g_57.f4},{&g_261.f3,&g_261.f3,&g_243.f0,&g_57.f4},{&g_57.f3,&l_373.f4,&g_57.f3,&g_243.f0},{&g_57.f3,&g_243.f0,&g_243.f0,&g_57.f3},{&g_261.f3,&g_243.f0,&g_57.f4,&g_243.f0},{&g_243.f0,&l_373.f4,&g_57.f4,&g_57.f4},{&g_261.f3,&g_261.f3,&g_243.f0,&g_57.f4},{&g_57.f3,&l_373.f4,&g_57.f3,&g_243.f0},{&g_57.f3,&g_243.f0,&g_243.f0,&g_57.f3}};
        int i, j;
        l_539[4][0] = l_539[6][1];
    }
    else
    {
        unsigned char l_544[6][1] = {{0x47L},{0x57L},{0x47L},{0x47L},{0x57L},{0x47L}};
        int *l_552 = &g_57.f4;
        int *l_553 = &g_165.f3;
        unsigned short ***l_557 = (void*)0;
        struct S0 l_559 = {0x9D05ECF8L,0xADB6A6DBL,0x9403L,1222,0x76L,-1L,0x0311L,0x4E18L,0UL,0xAF88L};
        unsigned char l_560 = 0x92L;
        char l_564 = 0L;
        int i, j;
        if ((safe_lshift_func_uint8_t_u_s(0xB9L, (safe_lshift_func_int8_t_s_s(l_544[4][0], 2)))))
        {
            struct S0 *l_545[10] = {&g_50,&g_50,&g_50,&g_50,&g_50,&g_50,&g_50,&g_50,&g_50,&g_50};
            int i;
            g_165.f5 = g_261.f5;
        }
        else
        {
            int *l_556 = &g_57.f0;
            int l_558 = (-5L);
            int *l_565 = &g_50.f1;
            (*g_49) = (~(safe_add_func_int8_t_s_s(((p_12 <= 1L) == (((safe_sub_func_int32_t_s_s(p_12, ((((*l_553) <= 4294967295UL) == p_12) > 0L))) | 0xC8L) , (-1L))), p_12)));
            for (l_559.f0 = 0; (l_559.f0 == 22); l_559.f0++)
            {
                int *l_563 = (void*)0;
                l_565 = (l_564 , l_563);
            }
        }
        (*l_553) = (*g_49);
        l_566 = (*g_49);
    }
    for (g_165.f3 = 0; g_165.f3 < 8; g_165.f3 += 1)
    {
        for (l_373.f5.f6 = 0; l_373.f5.f6 < 10; l_373.f5.f6 += 1)
        {
            g_272[g_165.f3][l_373.f5.f6] = 0xF645L;
        }
    }
    return l_373;
}







static char func_13(unsigned p_14, unsigned short p_15, unsigned p_16, unsigned short p_17, struct S0 p_18)
{
    struct S1 **l_283 = (void*)0;
    unsigned *l_284[4];
    int l_285 = (-10L);
    int l_286 = 0L;
    int l_299 = (-5L);
    unsigned l_311 = 4294967295UL;
    int *l_315 = &g_243.f0;
    int *l_319 = &g_57.f4;
    char l_338[6][6][7] = {{{(-2L),(-1L),(-2L),0x90L,5L,0x90L,(-2L)},{(-1L),(-1L),(-1L),0x61L,(-1L),0xEEL,0x61L},{0x54L,0x90L,0x2BL,(-1L),0x2BL,0x90L,0x54L},{0x16L,0x61L,0x3AL,0x16L,(-1L),0x3AL,0x3AL},{5L,(-1L),0x66L,(-1L),5L,(-1L),5L},{(-1L),0x16L,0x3AL,0x61L,0x16L,0x16L,0x61L}},{{0x2BL,(-1L),0x2BL,0x90L,0x54L,0x90L,0x2BL},{(-1L),0x61L,(-1L),(-1L),(-1L),(-1L),0x61L},{5L,0x90L,(-2L),(-1L),(-2L),0x90L,5L},{0x16L,(-1L),0x3AL,0x3AL,(-1L),0x16L,0x3AL},{0x54L,(-1L),(-7L),(-1L),0x54L,(-1L),0x54L},{(-1L),0x3AL,0x3AL,(-1L),0x16L,0x3AL,0x61L}},{{(-2L),(-1L),(-2L),0x90L,5L,0x90L,(-2L)},{(-1L),(-1L),(-1L),0x61L,(-1L),0xEEL,0x61L},{0x2BL,(-1L),(-7L),0x90L,(-7L),(-1L),0x2BL},{0xEEL,0x3AL,(-1L),0xEEL,0x16L,(-1L),(-1L)},{(-2L),0x90L,5L,0x90L,(-2L),(-1L),(-2L)},{0x16L,0xEEL,(-1L),0x3AL,0xEEL,0xEEL,0x3AL}},{{(-7L),0x90L,(-7L),(-1L),0x2BL,(-1L),(-7L)},{0x16L,0x3AL,0x61L,0x16L,0x16L,0x61L,0x3AL},{(-2L),(-1L),0x66L,0x90L,0x66L,(-1L),(-2L)},{0xEEL,0x16L,(-1L),(-1L),0x16L,0xEEL,(-1L)},{0x2BL,0x90L,0x54L,0x90L,0x2BL,(-1L),0x2BL},{0x16L,(-1L),(-1L),0x16L,0xEEL,(-1L),0x3AL}},{{0x66L,0x90L,0x66L,(-1L),(-2L),(-1L),0x66L},{0x16L,0x16L,0x61L,0x3AL,0x16L,(-1L),0x3AL},{0x2BL,(-1L),(-7L),0x90L,(-7L),(-1L),0x2BL},{0xEEL,0x3AL,(-1L),0xEEL,0x16L,(-1L),(-1L)},{(-2L),0x90L,5L,0x90L,(-2L),(-1L),(-2L)},{0x16L,0xEEL,(-1L),0x3AL,0xEEL,0xEEL,0x3AL}},{{(-7L),0x90L,(-7L),(-1L),0x2BL,(-1L),(-7L)},{0x16L,0x3AL,0x61L,0x16L,0x16L,0x61L,0x3AL},{(-2L),(-1L),0x66L,0x90L,0x66L,(-1L),(-2L)},{0xEEL,0x16L,(-1L),(-1L),0x16L,0xEEL,(-1L)},{0x2BL,0x90L,0x54L,0x90L,0x2BL,(-1L),0x2BL},{0x16L,(-1L),(-1L),0x16L,0xEEL,(-1L),0x3AL}}};
    int l_344[9];
    struct S1 l_361 = {0x360533EDL,0x1051L,0x94A2L,0L,0x0BFEC0C2L,{5L,1L,1L,-3927,0x36L,6L,-8L,9UL,1UL,0x7C7CL},0UL,-695,0UL};
    unsigned short l_366 = 0x097EL;
    int i, j, k;
    for (i = 0; i < 4; i++)
        l_284[i] = &g_122;
    for (i = 0; i < 9; i++)
        l_344[i] = 0xADE27DFEL;
    (*g_96) = (void*)0;
    if ((safe_rshift_func_uint8_t_u_s(((0x81EBL || (p_18.f2 ^ (((void*)0 != l_283) != (g_57 , (func_23(g_243.f0) , (l_285 = (((g_261.f2 < (func_19(g_122) , g_57.f4)) , l_283) == &g_97))))))) && p_18.f4), l_286)))
    {
        unsigned **l_289[10] = {&l_284[0],(void*)0,&l_284[0],(void*)0,&l_284[0],(void*)0,&l_284[0],(void*)0,&l_284[0],(void*)0};
        unsigned **l_290 = (void*)0;
        int **l_294[3];
        struct S1 l_306 = {0xEBC84A8FL,0x0D8EL,0UL,3L,0xA6EE9587L,{0xED461D7CL,-1L,-3L,2730,0x27L,0x436EL,0x8E53L,0UL,0x53186694L,5UL},1UL,605,0x2CL};
        int i;
        for (i = 0; i < 3; i++)
            l_294[i] = (void*)0;
        p_18.f1 = ((*g_49) = (safe_lshift_func_int8_t_s_u(((l_289[3] = &l_284[2]) == l_290), 5)));
        for (g_57.f5.f8 = 0; (g_57.f5.f8 <= 29); g_57.f5.f8 = safe_add_func_uint16_t_u_u(g_57.f5.f8, 1))
        {
            int l_293[10] = {0xC6922C2DL,0xC6922C2DL,0xC6922C2DL,0xC6922C2DL,0xC6922C2DL,0xC6922C2DL,0xC6922C2DL,0xC6922C2DL,0xC6922C2DL,0xC6922C2DL};
            int i;
            if (p_18.f5)
                break;
            return l_293[1];
        }
        g_49 = &g_30;
        p_18.f1 = (safe_sub_func_int16_t_s_s((0x5090L > p_18.f0), (((void*)0 != g_297[0]) == (l_299 & (safe_mod_func_int32_t_s_s((~((safe_add_func_uint16_t_u_u(func_33(&l_286, g_57.f8, &l_286, (safe_sub_func_uint32_t_u_u((g_307 = func_33(func_42(func_42(&l_286, l_306, &l_285), l_306, &l_286), g_261.f5.f5, &l_285, l_285)), l_299))), l_299)) , (-3L))), g_165.f0))))));
    }
    else
    {
        unsigned char l_310 = 0xEDL;
        struct S1 ***l_312[2];
        int **l_313 = (void*)0;
        int *l_314 = &g_261.f3;
        int i;
        for (i = 0; i < 2; i++)
            l_312[i] = &l_283;
        l_314 = func_26(&l_286, (safe_add_func_uint32_t_u_u((g_165.f7 <= g_272[0][4]), l_310)));
        for (g_57.f0 = 0; (g_57.f0 >= 0); g_57.f0 -= 1)
        {
            int *l_322 = &g_261.f5.f1;
            int *l_327 = (void*)0;
            unsigned short *l_332[4][1][7] = {{{&g_243.f9,&g_243.f9,&g_261.f2,&g_272[4][4],&g_261.f2,&g_243.f9,&g_243.f9}},{{&g_243.f9,&g_261.f2,&g_272[4][4],&g_261.f2,&g_243.f9,&g_243.f9,&g_261.f2}},{{&g_57.f2,&g_243.f7,&g_57.f2,&g_243.f9,&g_243.f9,&g_261.f2,&g_272[4][4]}},{{&g_243.f9,&g_272[4][4],&g_57.f2,&g_57.f2,&g_272[4][4],&g_243.f9,&g_272[4][4]}}};
            struct S1 l_340 = {-2L,0x1EF9L,0x0127L,-8L,0x68BAB210L,{0x9223D01EL,0xC77E0D4BL,-1L,-1828,1L,-1L,-7L,65529UL,4294967288UL,0xDDB4L},4294967295UL,-212,0xB2L};
            int *l_343 = (void*)0;
            int *l_363 = &g_50.f1;
            int i, j, k;
            (*g_89) = &p_18;
            for (g_50.f4 = 3; (g_50.f4 >= 0); g_50.f4 -= 1)
            {
                int *l_318 = &g_165.f5.f0;
                for (g_114 = 0; (g_114 <= 0); g_114 += 1)
                {
                    for (g_261.f3 = 0; (g_261.f3 >= 0); g_261.f3 -= 1)
                    {
                        int i;
                        l_315 = l_284[g_114];
                    }
                }
                for (g_165.f3 = 0; (g_165.f3 <= 3); g_165.f3 += 1)
                {
                    struct S1 l_316 = {0L,6UL,0x3C8FL,0L,0x510B996EL,{-1L,3L,0x79E4L,3752,0xE7L,1L,9L,0x9E20L,4294967289UL,0x8B26L},1UL,455,0x0CL};
                    int **l_317[8][4] = {{&l_315,&l_314,(void*)0,&l_314},{(void*)0,(void*)0,(void*)0,(void*)0},{(void*)0,&g_49,(void*)0,&l_314},{&l_315,(void*)0,&l_315,&g_49},{&l_314,&l_315,&l_314,&g_49},{&l_315,(void*)0,&l_315,&l_314},{(void*)0,&g_49,(void*)0,(void*)0},{(void*)0,(void*)0,(void*)0,&l_314}};
                    int i, j;
                    l_315 = (l_319 = (l_318 = (l_314 = func_42(l_284[g_165.f3], l_316, l_284[g_165.f3]))));
                }
            }
            if (p_18.f4)
            {
                struct S1 l_321 = {0x3AF0CFE3L,0x51A9L,0xE18FL,0x0CAB1BC7L,0x549D7B3FL,{0xEF98773FL,-1L,1L,-341,0L,0L,0x9F7AL,0x5274L,4294967287UL,0x6A09L},6UL,-640,0xB8L};
                int *l_323 = &g_57.f3;
                if (func_23(g_261.f5.f6))
                {
                    g_50 = p_18;
                }
                else
                {
                    int *l_320 = &g_243.f1;
                    int i;
                    (*l_314) = 0x5E225522L;
                    l_323 = func_42(l_320, ((*l_315) , l_321), l_322);
                    (*l_319) = p_18.f6;
                }
            }
            else
            {
                int **l_324[8][8][4] = {{{&l_314,&l_322,&l_322,&l_322},{(void*)0,(void*)0,&l_314,&l_315},{&l_315,&l_314,&l_319,&l_322},{&l_315,(void*)0,&l_322,&l_322},{&l_315,&l_322,&l_319,&l_314},{&l_315,&l_322,&l_314,&l_315},{(void*)0,(void*)0,&l_322,(void*)0},{&l_314,(void*)0,&l_322,&g_49}},{{&l_314,(void*)0,&l_315,&l_315},{&l_314,&g_49,&l_315,&l_314},{(void*)0,(void*)0,&l_314,&l_314},{&l_314,&l_314,&l_314,(void*)0},{&l_319,&l_322,&l_319,&l_315},{&l_315,&l_314,(void*)0,&l_314},{(void*)0,&l_319,&l_314,&l_314},{&l_319,&l_322,(void*)0,(void*)0}},{{&l_314,&l_322,&l_315,&l_314},{&l_314,&l_314,&g_49,&g_49},{&l_314,&l_314,&l_322,&l_322},{(void*)0,(void*)0,&l_314,&l_322},{&g_49,&l_315,&l_314,(void*)0},{&l_314,&l_322,&l_319,&l_314},{&l_319,&l_322,&l_314,(void*)0},{&l_322,&l_315,&l_314,&l_322}},{{&l_315,(void*)0,&l_314,&l_322},{&l_315,&l_314,&l_314,&g_49},{(void*)0,&l_314,&l_322,&l_314},{&l_319,&l_322,&l_315,(void*)0},{&g_49,&l_322,&l_319,&l_314},{(void*)0,&l_319,&l_314,&l_314},{&l_322,&l_314,(void*)0,&g_49},{&l_322,(void*)0,&g_49,&l_322}},{{(void*)0,&g_49,&g_49,&l_315},{(void*)0,&l_314,&l_322,&l_314},{(void*)0,&l_315,&l_314,&l_319},{&l_314,&l_314,&l_319,&l_322},{&l_314,&l_322,&l_315,&l_314},{&g_49,&l_314,&g_49,&l_315},{&l_314,&l_315,&g_49,&l_315},{&l_322,&l_314,&l_319,&l_315}},{{&l_319,(void*)0,&l_319,&l_314},{&l_322,&l_319,&g_49,&l_314},{&l_314,&l_322,&g_49,(void*)0},{&g_49,(void*)0,&l_315,(void*)0},{&l_322,(void*)0,&l_322,&l_314},{(void*)0,&l_314,&l_319,&l_322},{&l_314,&l_322,&l_322,&l_315},{(void*)0,(void*)0,&l_315,&l_315}},{{(void*)0,&g_49,&l_314,&l_314},{&l_315,&l_322,(void*)0,&l_314},{&l_314,&g_49,&l_314,&l_319},{&l_315,(void*)0,&l_314,&g_49},{&l_322,&l_315,&l_322,&g_49},{&l_322,&l_314,&l_322,(void*)0},{&l_315,&l_319,&l_319,&l_319},{&g_49,&l_319,&l_319,&g_49}},{{&l_315,(void*)0,&l_319,&l_314},{&g_49,&l_322,&l_314,&l_319},{&l_322,&l_315,&l_314,&l_319},{&l_314,&l_322,&l_314,&l_314},{(void*)0,(void*)0,(void*)0,&l_315},{&l_322,&l_322,&l_314,(void*)0},{&l_315,&l_319,&l_314,&l_314},{&l_314,&g_49,&l_322,&l_314}}};
                int i, j, k;
                l_315 = (((0x8094B895L == g_57.f5.f9) | (*l_314)) , &l_286);
                l_327 = func_26((l_314 = ((safe_sub_func_uint32_t_u_u(7UL, ((void*)0 == &g_173))) , &l_286)), p_18.f8);
            }
            for (p_18.f2 = 0; (p_18.f2 > 13); ++p_18.f2)
            {
                struct S0 l_330 = {-3L,4L,1L,3860,-3L,1L,0L,3UL,0x58953C87L,0x2588L};
                unsigned short *l_331 = &g_243.f9;
                unsigned short **l_333 = (void*)0;
                char *l_335 = &g_243.f4;
                int *l_339[6] = {(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0};
                int **l_341 = (void*)0;
                int **l_342 = &g_49;
                unsigned short **l_355 = &l_331;
                int i;
                l_330.f1 = (0x5057B03CL > (((*l_322) = func_23(((*l_335) = ((l_330 , l_331) == (g_334[0] = l_332[2][0][5]))))) ^ (p_17 , (g_272[6][2] | (safe_lshift_func_int8_t_s_s(((g_103 , ((((*g_96) != (void*)0) , l_338[1][3][1]) > g_261.f4)) & p_18.f5), 1))))));
                if (((&g_90 != (void*)0) || ((p_18.f6 & g_57.f5.f5) != (*l_315))))
                {
                    int *l_345 = &l_330.f1;
                    (*l_322) = func_23(p_16);
                    (*l_342) = func_26(((*l_342) = l_345), p_18.f5);
                }
                else
                {
                    unsigned char l_356[9][9] = {{247UL,246UL,1UL,0xFEL,251UL,247UL,0xFEL,1UL,0xFEL},{0xFEL,249UL,1UL,1UL,249UL,0xFEL,0x91L,1UL,1UL},{247UL,251UL,0xFEL,1UL,246UL,247UL,247UL,246UL,1UL},{0x77L,249UL,0x77L,0xFEL,246UL,0x77L,0x91L,255UL,0xFEL},{0x77L,246UL,0xFEL,0x77L,249UL,0x77L,0xFEL,246UL,0x77L},{247UL,246UL,1UL,0xFEL,251UL,247UL,0xFEL,1UL,0xFEL},{0xFEL,249UL,1UL,1UL,249UL,0xFEL,0x91L,1UL,1UL},{247UL,251UL,0xFEL,1UL,246UL,247UL,247UL,246UL,1UL},{0x77L,249UL,0x77L,0xFEL,247UL,0x79L,0x6EL,0xFEL,0x29L}};
                    unsigned short l_362 = 0x8590L;
                    int i, j;
                    if ((*g_49))
                    {
                        return p_18.f2;
                    }
                    else
                    {
                        unsigned short l_346[7][9][4] = {{{0x5184L,3UL,0x5184L,0x5184L},{3UL,3UL,0x7231L,3UL},{3UL,0x5184L,0x5184L,3UL},{0x5184L,3UL,0x5184L,0x5184L},{3UL,3UL,0x7231L,3UL},{3UL,0x5184L,0x5184L,3UL},{0x5184L,3UL,0x5184L,0x5184L},{3UL,3UL,0x7231L,3UL},{3UL,0x5184L,0x5184L,3UL}},{{0x5184L,3UL,0x5184L,0x5184L},{3UL,3UL,0x7231L,3UL},{3UL,0x5184L,0x5184L,3UL},{0x5184L,3UL,0x5184L,0x5184L},{3UL,3UL,0x7231L,3UL},{3UL,0x5184L,0x5184L,3UL},{0x5184L,3UL,0x5184L,0x5184L},{3UL,3UL,0x7231L,3UL},{3UL,0x5184L,0x5184L,3UL}},{{0x5184L,3UL,0x5184L,0x5184L},{3UL,3UL,0x7231L,3UL},{3UL,0x5184L,0x5184L,3UL},{0x5184L,3UL,0x5184L,0x5184L},{3UL,3UL,0x7231L,3UL},{3UL,0x5184L,0x5184L,3UL},{0x5184L,3UL,0x5184L,0x5184L},{3UL,3UL,0x7231L,3UL},{3UL,0x5184L,0x5184L,3UL}},{{0x5184L,3UL,0x5184L,0x5184L},{3UL,3UL,0x7231L,3UL},{3UL,0x5184L,0x5184L,3UL},{0x5184L,3UL,0x5184L,0x5184L},{3UL,3UL,0x7231L,3UL},{3UL,0x5184L,0x5184L,3UL},{0x5184L,3UL,0x5184L,0x5184L},{3UL,3UL,0x7231L,3UL},{3UL,0x5184L,0x5184L,3UL}},{{0x5184L,3UL,0x5184L,0x5184L},{3UL,3UL,0x7231L,3UL},{3UL,0x5184L,0x5184L,3UL},{0x5184L,3UL,0x5184L,0x5184L},{3UL,3UL,0x7231L,3UL},{3UL,0x5184L,0x5184L,3UL},{0x5184L,3UL,0x5184L,0x5184L},{3UL,3UL,0x7231L,3UL},{3UL,0x5184L,0x5184L,3UL}},{{0x5184L,3UL,0x5184L,0x5184L},{3UL,3UL,3UL,0x5184L},{0x5184L,0x7231L,0x7231L,0x5184L},{0x7231L,0x5184L,0x7231L,0x7231L},{0x5184L,0x5184L,3UL,0x5184L},{0x5184L,0x7231L,0x7231L,0x5184L},{0x7231L,0x5184L,0x7231L,0x7231L},{0x5184L,0x5184L,3UL,0x5184L},{0x5184L,0x7231L,0x7231L,0x5184L}},{{0x7231L,0x5184L,0x7231L,0x7231L},{0x5184L,0x5184L,3UL,0x5184L},{0x5184L,0x7231L,0x7231L,0x5184L},{0x7231L,0x5184L,0x7231L,0x7231L},{0x5184L,0x5184L,3UL,0x5184L},{0x5184L,0x7231L,0x7231L,0x5184L},{0x7231L,0x5184L,0x7231L,0x7231L},{0x5184L,0x5184L,3UL,0x5184L},{0x5184L,0x7231L,0x7231L,0x5184L}}};
                        int i, j, k;
                        (*l_319) = l_346[3][0][1];
                        if ((*l_315))
                            break;
                        (*l_314) = ((0x26L == ((safe_add_func_int32_t_s_s(p_18.f9, ((safe_mod_func_uint8_t_u_u((safe_add_func_int32_t_s_s((~((((safe_mod_func_uint16_t_u_u((l_355 != (l_356[8][5] , &l_332[2][0][5])), (((**l_355) = (safe_mod_func_uint8_t_u_u((safe_sub_func_int16_t_s_s(g_52[0][0], (&l_342 == &g_298[1]))), ((func_33(func_42(&l_285, l_361, l_322), p_18.f6, l_314, g_165.f5.f6) && p_18.f3) , g_57.f1)))) & 65527UL))) && p_18.f5) != l_356[8][5]) == 0x9569FE05L)), p_18.f7)), 0xB7L)) > p_18.f5))) <= l_362)) >= p_18.f5);
                        l_319 = func_26(((*l_342) = func_42(l_363, l_361, func_26(&l_286, (safe_add_func_uint32_t_u_u((*l_363), p_18.f8))))), p_18.f3);
                    }
                    (*l_342) = &l_344[8];
                    (*g_96) = (void*)0;
                }
            }
        }
        (*l_314) = (*l_319);
    }
    p_18.f1 = ((func_23(p_18.f8) ^ g_243.f6) == l_366);
    return p_18.f7;
}







static struct S0 func_19(unsigned p_20)
{
    short l_236[3][5][4] = {{{0L,0x41F6L,0x0217L,0xD895L},{1L,0L,3L,1L},{3L,1L,1L,3L},{0xBB5FL,0xD991L,0xD895L,0x0217L},{5L,(-6L),(-1L),6L}},{{(-2L),0x41F6L,(-6L),6L},{0xCD81L,(-6L),3L,0x0217L},{8L,(-1L),0xD895L,(-6L)},{1L,(-8L),0xBB5FL,(-8L)},{0xD895L,(-6L),(-2L),5L}},{{0x7617L,1L,(-1L),0x41F6L},{0xFAB7L,1L,(-6L),0x35FDL},{0xFAB7L,6L,(-1L),(-6L)},{0x7617L,0x35FDL,(-2L),0xD895L},{0xD895L,0xD991L,0xBB5FL,0xBB5FL}}};
    int l_241 = 0L;
    struct S0 *l_242 = &g_243;
    unsigned char *l_268 = &g_57.f8;
    struct S1 l_273 = {0x1F790AEDL,0x278AL,0x936CL,0L,0L,{1L,0x97A9BC82L,0L,-582,0xBDL,0x9968L,0xF09DL,0x741AL,0x26A57297L,65531UL},4294967288UL,404,4UL};
    struct S1 *l_274 = (void*)0;
    struct S1 *l_275[8] = {&g_57,&g_57,&g_57,&g_57,&g_57,&g_57,&g_57,&g_57};
    struct S0 l_276 = {-1L,0x78876D1CL,4L,-908,1L,0x6731L,-7L,0x7C3AL,6UL,65530UL};
    int i, j, k;
    if (((p_20 , ((l_236[0][2][1] >= 1UL) <= func_23((safe_sub_func_int32_t_s_s(((safe_mod_func_uint8_t_u_u(1UL, 0x11L)) ^ (l_241 = l_236[0][1][3])), (*g_49)))))) == (l_242 == l_242)))
    {
        for (g_50.f2 = 0; (g_50.f2 > (-2)); g_50.f2 = safe_sub_func_int32_t_s_s(g_50.f2, 1))
        {
            short l_246 = 4L;
            int l_247 = 0x3C814998L;
            if ((*g_49))
            {
                l_247 = ((l_246 & ((*g_173) = l_236[1][1][2])) > g_57.f0);
            }
            else
            {
                return (*l_242);
            }
        }
    }
    else
    {
        unsigned l_257 = 0UL;
        unsigned char **l_269[10][9] = {{&l_268,(void*)0,(void*)0,&l_268,(void*)0,&g_173,&l_268,&l_268,(void*)0},{(void*)0,(void*)0,&l_268,&g_173,&g_173,&l_268,(void*)0,(void*)0,&l_268},{&l_268,&g_173,&g_173,&l_268,&l_268,&g_173,(void*)0,&l_268,&g_173},{&l_268,&g_173,&l_268,(void*)0,&g_173,(void*)0,(void*)0,(void*)0,&l_268},{&l_268,&g_173,&l_268,&g_173,(void*)0,&g_173,(void*)0,&g_173,(void*)0},{&g_173,&g_173,&g_173,&l_268,&l_268,(void*)0,(void*)0,(void*)0,&l_268},{(void*)0,&l_268,&l_268,(void*)0,&g_173,&l_268,&l_268,(void*)0,&g_173},{&l_268,(void*)0,&g_173,(void*)0,(void*)0,&g_173,&g_173,&g_173,&l_268},{&l_268,&l_268,(void*)0,&g_173,&g_173,(void*)0,(void*)0,(void*)0,&l_268},{&l_268,&l_268,&g_173,(void*)0,&g_173,&l_268,&l_268,(void*)0,(void*)0}};
        unsigned char *l_270 = &g_261.f8;
        unsigned char *l_271 = &g_57.f8;
        int i, j;
        for (g_243.f7 = (-15); (g_243.f7 >= 7); g_243.f7 = safe_add_func_uint16_t_u_u(g_243.f7, 1))
        {
            struct S1 l_250 = {-9L,0xD41CL,0x0201L,-1L,0xC9CFEEC7L,{1L,-5L,0x2F30L,1721,0xA9L,-4L,3L,0x9883L,0xC46277B2L,8UL},0x88B95FDDL,-32,0x1AL};
            struct S1 *l_251 = &g_57;
            (*l_251) = l_250;
            for (g_50.f9 = 0; (g_50.f9 <= 1); g_50.f9 += 1)
            {
                int **l_252 = &g_49;
                int *l_254 = &g_165.f4;
                int **l_253 = &l_254;
                struct S0 **l_263 = &l_242;
                unsigned short *l_267 = &g_50.f7;
                (*l_253) = ((*l_252) = &g_30);
                for (g_243.f6 = 1; (g_243.f6 >= 0); g_243.f6 -= 1)
                {
                    unsigned char l_260 = 0UL;
                    struct S0 **l_262 = &g_90;
                    struct S0 *l_264 = &l_250.f5;
                    int i, j;
                    for (g_57.f4 = 1; (g_57.f4 >= 0); g_57.f4 -= 1)
                    {
                        int *l_255 = &g_165.f3;
                        int i, j;
                        (*l_253) = l_255;
                        (*g_49) = ((((safe_unary_minus_func_uint16_t_u(g_52[g_57.f4][g_57.f4])) >= ((((g_165.f5 , ((0x5567A5E6L && l_257) > (((safe_sub_func_int32_t_s_s((l_260 == ((*g_49) | ((g_57.f0 | (g_261 , (((l_257 , l_262) != l_263) == (**l_253)))) > 7L))), (*l_255))) , p_20) > p_20))) , p_20) , 4L) <= (*l_255))) || l_250.f5.f4) && 1L);
                    }
                    (*l_264) = g_50;
                    (**l_253) = ((safe_lshift_func_int16_t_s_s(0x713EL, (g_261.f5 , g_52[g_243.f6][g_243.f6]))) && g_52[g_243.f6][g_243.f6]);
                }
                (*l_254) = (((*l_267) = g_57.f7) > (*l_254));
                (**l_253) = (*g_49);
            }
            if (l_250.f5.f0)
                continue;
        }
        g_272[4][9] = ((l_268 = l_268) != (l_271 = l_270));
    }
    g_165 = l_273;
    return l_276;
}







static short func_23(char p_24)
{
    int *l_29 = &g_30;
    int **l_233 = &g_49;
    (*l_233) = func_26(l_29, (*l_29));
    return p_24;
}







static int * func_26(int * p_27, unsigned char p_28)
{
    int l_40 = 0x32038BE4L;
    int l_41 = (-3L);
    struct S1 l_46 = {-4L,0x6C16L,0xAAE7L,0xC30F141BL,0x8E7029BBL,{9L,1L,0x1BF3L,-841,-1L,0x5CCBL,0L,65530UL,0x8D11A6C9L,65530UL},0xCF37692AL,-363,252UL};
    struct S0 *l_147 = &g_57.f5;
    struct S1 **l_162[7];
    int l_184 = 1L;
    unsigned *l_191 = &g_114;
    int l_232 = 0x6AD12F69L;
    int i;
    for (i = 0; i < 7; i++)
        l_162[i] = (void*)0;
    if ((safe_sub_func_uint8_t_u_u(func_33(&g_30, (l_41 = ((safe_add_func_int32_t_s_s(0x79A9257DL, (l_40 & g_4))) > l_40)), func_42(&g_30, l_46, &g_30), g_4), l_46.f6)))
    {
        char l_129 = 0x11L;
        int l_146 = 0xF168FF3DL;
        short l_149 = 0x3DFFL;
        struct S0 l_151 = {-1L,-1L,-1L,-583,9L,0x0F6BL,0xB499L,1UL,0UL,1UL};
        struct S1 l_186 = {-10L,0x6984L,65535UL,0x85EFD679L,0x6D1B8953L,{0x034354BBL,0L,0xBB9CL,1167,-9L,0x5F25L,1L,65535UL,4294967293UL,0x97ECL},0x6545ED4EL,-574,0xC8L};
        unsigned short l_193[4];
        int i;
        for (i = 0; i < 4; i++)
            l_193[i] = 0x4636L;
        for (l_46.f2 = 0; (l_46.f2 <= 1); l_46.f2 += 1)
        {
            char *l_132 = &g_50.f4;
            struct S1 l_137[2] = {{-1L,0xE6D0L,7UL,0L,1L,{0L,-1L,0x09A7L,-572,-1L,6L,0L,1UL,0x42F6B537L,0xD6D6L},0xB0F209FDL,584,255UL},{-1L,0xE6D0L,7UL,0L,1L,{0L,-1L,0x09A7L,-572,-1L,6L,0L,1UL,0x42F6B537L,0xD6D6L},0xB0F209FDL,584,255UL}};
            int *l_142 = (void*)0;
            int *l_143[4][3][1] = {{{(void*)0},{&l_41},{(void*)0}},{{&l_137[1].f3},{&l_137[1].f3},{(void*)0}},{{&l_41},{(void*)0},{&l_137[1].f3}},{{&l_137[1].f3},{(void*)0},{&l_41}}};
            char *l_144 = (void*)0;
            char *l_145[1][1];
            unsigned char *l_148[2][7];
            int i, j, k;
            for (i = 0; i < 1; i++)
            {
                for (j = 0; j < 1; j++)
                    l_145[i][j] = &l_46.f5.f4;
            }
            for (i = 0; i < 2; i++)
            {
                for (j = 0; j < 7; j++)
                    l_148[i][j] = (void*)0;
            }
        }
        for (g_50.f0 = 1; (g_50.f0 >= 0); g_50.f0 -= 1)
        {
            struct S1 l_159 = {0xB8DD6D27L,65534UL,2UL,0xE26B5C45L,0x08006A75L,{0x764AD00BL,0xC39EAFD2L,0x687FL,3346,0x12L,0xEC10L,0L,5UL,0UL,1UL},0xAD918AC7L,421,0x05L};
            int *l_167 = &g_30;
            for (g_50.f2 = 0; (g_50.f2 <= 1); g_50.f2 += 1)
            {
                int **l_150 = &g_49;
                struct S1 l_155[1][5] = {{{1L,0xF583L,5UL,5L,0xE3794E6FL,{0x3D2F3559L,5L,8L,-3186,0xCAL,2L,0x23FCL,0x3036L,4294967292UL,0x098AL},4294967295UL,250,255UL},{1L,0xF583L,5UL,5L,0xE3794E6FL,{0x3D2F3559L,5L,8L,-3186,0xCAL,2L,0x23FCL,0x3036L,4294967292UL,0x098AL},4294967295UL,250,255UL},{1L,0xF583L,5UL,5L,0xE3794E6FL,{0x3D2F3559L,5L,8L,-3186,0xCAL,2L,0x23FCL,0x3036L,4294967292UL,0x098AL},4294967295UL,250,255UL},{1L,0xF583L,5UL,5L,0xE3794E6FL,{0x3D2F3559L,5L,8L,-3186,0xCAL,2L,0x23FCL,0x3036L,4294967292UL,0x098AL},4294967295UL,250,255UL},{1L,0xF583L,5UL,5L,0xE3794E6FL,{0x3D2F3559L,5L,8L,-3186,0xCAL,2L,0x23FCL,0x3036L,4294967292UL,0x098AL},4294967295UL,250,255UL}}};
                unsigned l_163[5][8][3] = {{{0xF271D079L,5UL,0x15010725L},{0x15010725L,0UL,0x3E19F0D3L},{0xC804D94CL,0xBE0A6FDCL,2UL},{0xA278C172L,4294967295UL,7UL},{0xC804D94CL,0UL,0x3DF38DFEL},{0x15010725L,0xB3DE6F46L,0xFC23E28EL},{0xF271D079L,4294967295UL,0xFC23E28EL},{0x2978E774L,0x1B14C737L,0x3DF38DFEL}},{{6UL,1UL,7UL},{0xC1BF1FC3L,1UL,2UL},{0xF82277D3L,1UL,0x3E19F0D3L},{0x53D80906L,0x1B14C737L,0x15010725L},{2UL,4294967295UL,0x2978E774L},{2UL,0xB3DE6F46L,0xF82277D3L},{0x53D80906L,0x0DF99E02L,0xC1BF1FC3L},{0xC804D94CL,0UL,0x2978E774L}},{{0x53D80906L,1UL,0xC1BF1FC3L},{0xEB3636E8L,0xB3DE6F46L,0xC804D94CL},{6UL,4294967290UL,6UL},{7UL,4294967290UL,0x3E19F0D3L},{0x3E19F0D3L,0xB3DE6F46L,4294967288UL},{0x50092697L,1UL,0x3DF38DFEL},{0xF271D079L,0UL,1UL},{0x50092697L,0x0DF99E02L,0x15010725L}},{{0x3E19F0D3L,0UL,0x1C41481EL},{7UL,0x5E6F25B0L,0x1C41481EL},{6UL,4294967295UL,0x15010725L},{0xEB3636E8L,1UL,1UL},{0x53D80906L,4294967295UL,0x3DF38DFEL},{0xC804D94CL,1UL,4294967288UL},{0x2978E774L,4294967295UL,0x3E19F0D3L},{0x3DF38DFEL,0x5E6F25B0L,6UL}},{{0x3DF38DFEL,0UL,0xC804D94CL},{0x2978E774L,0x0DF99E02L,0xC1BF1FC3L},{0xC804D94CL,0UL,0x2978E774L},{0x53D80906L,1UL,0xC1BF1FC3L},{0xEB3636E8L,0xB3DE6F46L,0xC804D94CL},{6UL,4294967290UL,6UL},{7UL,4294967290UL,0x3E19F0D3L},{0x3E19F0D3L,0xB3DE6F46L,4294967288UL}}};
                int i, j, k;
                (*l_150) = &g_30;
                for (g_57.f8 = 0; (g_57.f8 <= 1); g_57.f8 += 1)
                {
                    struct S1 l_157 = {1L,65535UL,0xB90DL,-1L,0xC3192946L,{0x0A2FD06DL,0x49BB1850L,-10L,-3253,-8L,0x03D8L,6L,0xB89FL,0x9B3D012AL,0xA001L},1UL,598,0UL};
                    int *l_158[5][9][5] = {{{&g_57.f4,&l_155[0][4].f5.f1,&g_57.f3,&g_57.f4,(void*)0},{(void*)0,(void*)0,(void*)0,(void*)0,&g_57.f4},{&l_151.f1,&l_155[0][4].f4,(void*)0,&l_157.f5.f1,&l_157.f5.f1},{(void*)0,&l_151.f1,&l_151.f0,&l_151.f0,&g_57.f4},{&l_151.f0,&l_151.f0,&g_50.f0,&l_46.f5.f1,&l_157.f5.f0},{&g_57.f4,(void*)0,&l_41,&g_50.f0,&l_157.f4},{&g_50.f0,&l_155[0][4].f4,&l_46.f5.f1,&g_50.f0,&l_46.f4},{&l_46.f5.f1,&l_46.f3,&l_157.f5.f0,&l_46.f4,&l_151.f0},{&l_46.f5.f1,&l_151.f0,&l_155[0][4].f5.f1,&l_155[0][4].f5.f0,&l_155[0][4].f5.f0}},{{&g_50.f0,&g_57.f3,&g_50.f0,&l_46.f3,&l_151.f0},{&g_57.f4,(void*)0,&l_151.f0,(void*)0,&g_50.f0},{&l_151.f0,&l_157.f4,&l_155[0][4].f5.f0,&l_155[0][4].f5.f0,&l_157.f4},{(void*)0,(void*)0,&l_151.f0,&g_50.f0,&g_57.f3},{&g_57.f3,&l_46.f5.f1,&g_50.f0,&l_155[0][4].f4,&l_46.f5.f1},{&g_50.f0,&l_157.f4,&l_155[0][4].f5.f1,&g_50.f0,&l_155[0][4].f4},{&g_57.f4,&l_155[0][4].f5.f0,&l_157.f5.f0,&g_50.f0,&l_155[0][4].f4},{&l_157.f4,&g_57.f4,&l_46.f5.f1,&l_151.f0,&l_46.f5.f1},{&l_151.f0,&l_151.f0,&l_41,&l_46.f5.f1,&g_57.f3}},{{&g_57.f5.f0,(void*)0,&g_50.f0,(void*)0,&l_157.f4},{&l_46.f4,&g_50.f0,&l_46.f5.f1,&l_155[0][4].f4,&g_50.f0},{&l_46.f5.f1,(void*)0,&g_57.f4,&l_46.f4,&l_151.f0},{&g_50.f0,&l_151.f0,(void*)0,(void*)0,&l_155[0][4].f5.f0},{&l_46.f4,&g_57.f4,&g_50.f0,(void*)0,&l_46.f5.f1},{&g_57.f3,(void*)0,&l_157.f5.f1,&l_157.f4,&l_46.f5.f1},{&l_46.f5.f1,(void*)0,&l_46.f3,&l_46.f3,(void*)0},{(void*)0,(void*)0,&l_46.f5.f1,&l_46.f5.f1,&l_151.f0},{&l_46.f4,&g_50.f0,&l_155[0][4].f4,&g_57.f4,&l_155[0][4].f4}},{{&l_157.f5.f0,(void*)0,&l_46.f5.f1,&l_157.f5.f0,&g_57.f4},{&l_46.f4,&l_46.f3,&l_151.f0,&l_155[0][4].f5.f0,&g_57.f5.f0},{(void*)0,&l_46.f4,&l_41,&g_57.f4,&l_155[0][4].f4},{&l_46.f5.f1,&g_57.f4,&g_57.f5.f0,(void*)0,&l_151.f0},{&g_57.f3,(void*)0,&g_57.f5.f0,&g_57.f3,&l_46.f5.f1},{&l_46.f5.f1,&g_57.f4,&l_41,&g_57.f4,&l_46.f5.f1},{(void*)0,&l_157.f4,&l_151.f0,&g_50.f0,&g_57.f4},{&l_155[0][4].f5.f0,&l_46.f5.f1,&l_46.f5.f1,(void*)0,&l_46.f3},{&l_46.f5.f1,&l_46.f4,&l_155[0][4].f4,&l_157.f4,&g_57.f4}},{{&g_57.f4,(void*)0,&l_46.f5.f1,(void*)0,&l_46.f5.f1},{&g_57.f4,&l_46.f5.f1,&l_46.f3,(void*)0,&l_46.f5.f1},{(void*)0,&g_50.f0,&l_157.f5.f1,&l_46.f5.f1,&l_151.f0},{&g_50.f0,&g_50.f0,&g_50.f0,&g_57.f5.f0,&l_155[0][4].f4},{&g_57.f3,&l_46.f5.f1,&l_46.f5.f1,&g_57.f3,&g_57.f5.f0},{&l_46.f4,(void*)0,(void*)0,&l_155[0][4].f5.f0,&g_57.f4},{&l_155[0][4].f5.f1,&g_50.f0,&l_151.f1,&l_41,&g_57.f5.f0},{&g_50.f0,&l_41,&l_155[0][4].f3,&l_46.f3,&l_157.f5.f1},{&g_50.f0,&l_46.f5.f1,&g_57.f3,&l_151.f0,(void*)0}}};
                    unsigned char *l_164[10][3][8] = {{{&l_46.f8,&g_57.f8,&l_159.f8,&g_57.f8,&g_57.f8,&g_57.f8,&g_57.f8,&l_155[0][4].f8},{(void*)0,&l_159.f8,&g_57.f8,&l_155[0][4].f8,(void*)0,(void*)0,&l_155[0][4].f8,&g_57.f8},{&l_155[0][4].f8,&l_155[0][4].f8,&l_155[0][4].f8,&g_57.f8,&l_157.f8,&l_155[0][4].f8,&l_155[0][4].f8,(void*)0}},{{(void*)0,&l_155[0][4].f8,&l_159.f8,&l_159.f8,&l_46.f8,&g_57.f8,(void*)0,(void*)0},{&l_155[0][4].f8,&l_46.f8,&l_159.f8,&g_57.f8,&g_57.f8,&l_159.f8,&l_155[0][4].f8,&g_57.f8},{&l_155[0][4].f8,(void*)0,&l_157.f8,&l_155[0][4].f8,&g_57.f8,(void*)0,(void*)0,&l_155[0][4].f8}},{{&g_57.f8,&l_159.f8,&l_46.f8,&g_57.f8,&l_46.f8,&g_57.f8,&l_46.f8,&l_159.f8},{(void*)0,&g_57.f8,&l_159.f8,&g_57.f8,&l_159.f8,&l_159.f8,&g_57.f8,&l_46.f8},{&l_155[0][4].f8,(void*)0,&l_155[0][4].f8,&l_157.f8,(void*)0,(void*)0,&g_57.f8,&l_46.f8}},{{&l_155[0][4].f8,&l_157.f8,&l_159.f8,&l_159.f8,&g_57.f8,&g_57.f8,&l_46.f8,(void*)0},{&g_57.f8,&l_46.f8,&l_46.f8,(void*)0,&l_159.f8,&l_159.f8,&l_155[0][4].f8,&g_57.f8},{&l_157.f8,&l_46.f8,&l_157.f8,&l_157.f8,&l_157.f8,&l_157.f8,&l_46.f8,&l_157.f8}},{{&l_46.f8,(void*)0,&l_159.f8,&l_46.f8,&l_46.f8,&l_155[0][4].f8,&g_57.f8,&l_155[0][4].f8},{&g_57.f8,&l_155[0][4].f8,&g_57.f8,(void*)0,&l_46.f8,&l_155[0][4].f8,&g_57.f8,&l_159.f8},{&l_155[0][4].f8,(void*)0,(void*)0,&l_157.f8,&l_159.f8,&l_157.f8,&l_157.f8,(void*)0}},{{&l_159.f8,&l_46.f8,&l_155[0][4].f8,&l_46.f8,&l_155[0][4].f8,&l_159.f8,&l_46.f8,&l_155[0][4].f8},{&l_159.f8,&l_46.f8,&g_57.f8,&l_46.f8,&g_57.f8,&l_46.f8,&l_159.f8,&g_57.f8},{&g_57.f8,&l_157.f8,(void*)0,&l_157.f8,(void*)0,&g_57.f8,&l_46.f8,(void*)0}},{{&l_159.f8,&l_159.f8,&g_57.f8,&l_159.f8,(void*)0,(void*)0,&g_57.f8,&l_46.f8},{&g_57.f8,&l_155[0][4].f8,&l_46.f8,(void*)0,&g_57.f8,&l_155[0][4].f8,&g_57.f8,&l_155[0][4].f8},{&l_159.f8,&l_155[0][4].f8,&g_57.f8,&g_57.f8,&l_155[0][4].f8,&l_157.f8,&l_157.f8,&l_157.f8}},{{&l_159.f8,&l_159.f8,&l_159.f8,&l_159.f8,&l_159.f8,&l_159.f8,&l_46.f8,&l_155[0][4].f8},{&l_46.f8,&l_157.f8,&l_155[0][4].f8,&g_57.f8,&l_155[0][4].f8,&l_46.f8,&l_46.f8,&l_157.f8},{&l_46.f8,&l_46.f8,&l_157.f8,&g_57.f8,&g_57.f8,(void*)0,&l_46.f8,&l_155[0][4].f8}},{{(void*)0,&g_57.f8,&l_159.f8,&l_157.f8,(void*)0,&l_159.f8,&l_155[0][4].f8,&l_159.f8},{&l_159.f8,&l_157.f8,&g_57.f8,&l_46.f8,&l_155[0][4].f8,&l_159.f8,&l_155[0][4].f8,&l_159.f8},{&l_46.f8,&g_57.f8,(void*)0,&g_57.f8,&l_46.f8,&l_157.f8,&l_46.f8,&g_57.f8}},{{&l_46.f8,&g_57.f8,&l_159.f8,(void*)0,&l_155[0][4].f8,&l_159.f8,(void*)0,&g_57.f8},{&g_57.f8,&l_155[0][4].f8,&l_159.f8,&l_159.f8,&g_57.f8,&l_157.f8,&l_46.f8,&l_46.f8},{&l_155[0][4].f8,&l_46.f8,(void*)0,&g_57.f8,&l_155[0][4].f8,&g_57.f8,&l_155[0][4].f8,&l_46.f8}}};
                    int i, j, k;
                    for (g_57.f5.f6 = 1; (g_57.f5.f6 >= 0); g_57.f5.f6 -= 1)
                    {
                        struct S0 l_152 = {1L,0L,8L,155,0L,2L,3L,0xFC91L,0x7AC14F02L,5UL};
                        int *l_156[2];
                        int i, j;
                        for (i = 0; i < 2; i++)
                            l_156[i] = (void*)0;
                        l_152 = l_151;
                        (*l_150) = func_42(&l_41, ((safe_rshift_func_int16_t_s_s(g_52[g_50.f2][g_57.f5.f6], 6)) , l_155[0][4]), l_156[0]);
                        if ((*p_27))
                            break;
                        (*l_150) = func_42(&g_30, g_57, (l_157 , func_42(l_158[1][0][2], l_159, p_27)));
                    }
                    if ((((safe_rshift_func_int8_t_s_u((l_162[1] == (void*)0), (l_155[0][4].f5 , (l_151.f1 = (g_57.f5.f0 | (p_28 ^ ((g_114 , (+(p_28 < ((*g_49) || 0x2972FC48L)))) & l_163[2][6][2]))))))) , 65529UL) , (*g_49)))
                    {
                        g_165 = l_155[0][4];
                        l_155[0][1] = g_57;
                    }
                    else
                    {
                        struct S1 l_166 = {0xDC29D404L,9UL,65527UL,0xC3E89001L,0L,{0xE820FA6BL,0x7408F307L,-5L,-716,0xA9L,0x9546L,-3L,0UL,0xB1655B86L,0x1599L},4294967289UL,-162,0x25L};
                        (*p_27) = (((l_166 , l_159.f4) , &l_155[0][4]) == &l_155[0][4]);
                        return l_167;
                    }
                    (*g_89) = (*g_89);
                }
            }
            if ((*l_167))
                continue;
            for (l_159.f5.f2 = 0; (l_159.f5.f2 <= 1); l_159.f5.f2 += 1)
            {
                struct S1 ***l_168[7] = {&l_162[3],&l_162[3],&l_162[3],&l_162[3],&l_162[3],&l_162[3],&l_162[3]};
                int i;
                (*g_49) = (l_168[3] != (void*)0);
                (*l_147) = (l_159 , (*l_147));
            }
        }
        for (g_165.f0 = 0; (g_165.f0 <= 1); g_165.f0 += 1)
        {
            struct S1 *l_169 = &l_46;
            int *l_170 = &g_50.f0;
            int i;
            (*p_27) = func_33((func_33(p_27, (((void*)0 != l_169) != (p_28 , g_57.f8)), l_170, (((*l_170) == ((*g_49) | (*g_49))) == p_28)) , l_170), g_165.f5.f7, &l_41, g_165.f5.f3);
            (*l_169) = (*l_169);
            (*g_89) = (void*)0;
            for (l_46.f2 = 0; (l_46.f2 <= 1); l_46.f2 += 1)
            {
                struct S0 l_171 = {-1L,8L,0x539CL,-1889,0L,0x7E9BL,0xA29EL,0x81D6L,2UL,65535UL};
                unsigned char ***l_174 = (void*)0;
                unsigned char ***l_175 = &g_172[0][0][4];
                struct S1 *l_185 = &g_57;
                unsigned *l_190 = (void*)0;
                unsigned **l_189 = &l_190;
                unsigned char *l_192[2][2][10] = {{{&l_186.f8,&g_57.f8,&l_186.f8,&g_57.f8,&l_186.f8,&g_57.f8,&l_186.f8,&g_57.f8,&l_186.f8,&g_57.f8},{&l_186.f8,&g_57.f8,&l_186.f8,&g_57.f8,&l_186.f8,&g_57.f8,&l_186.f8,&g_57.f8,&l_186.f8,&g_57.f8}},{{&l_186.f8,&g_57.f8,&l_186.f8,&g_57.f8,&l_186.f8,&g_57.f8,&l_186.f8,&g_57.f8,&l_186.f8,&g_57.f8},{&l_186.f8,&g_57.f8,&l_186.f8,&g_57.f8,&l_186.f8,&g_57.f8,&l_186.f8,&g_57.f8,&l_186.f8,&g_57.f8}}};
                int i, j, k;
                (*l_147) = l_171;
                (*l_175) = g_172[0][0][2];
                if ((safe_rshift_func_uint16_t_u_u((g_52[g_165.f0][g_165.f0] , (safe_rshift_func_uint8_t_u_u((~(l_171.f0 = ((*g_173) = ((((safe_sub_func_uint32_t_u_u(((0xBCL >= (safe_mod_func_uint16_t_u_u(l_184, g_50.f4))) , (((l_185 == (l_186 , l_169)) ^ (safe_lshift_func_int16_t_s_s(1L, 6))) , ((((*l_189) = func_42(p_27, (*l_185), p_27)) != l_191) || l_184))), p_28)) > 0x6BL) <= 1L) & l_171.f9)))), l_193[2]))), l_171.f1)))
                {
                    for (g_50.f2 = 1; (g_50.f2 >= 0); g_50.f2 -= 1)
                    {
                        int *l_194 = &l_171.f1;
                        int **l_195 = &l_194;
                        (*l_195) = func_42(p_27, (*l_185), l_194);
                        (*g_89) = l_147;
                        (*p_27) = (*l_194);
                    }
                }
                else
                {
                    struct S0 l_196 = {0xE7EDB1D9L,8L,0xE1D5L,-3807,0x36L,1L,-1L,0x4116L,4294967295UL,1UL};
                    (*l_147) = l_196;
                    for (l_186.f6 = 0; (l_186.f6 <= 6); l_186.f6 += 1)
                    {
                        struct S0 l_197 = {0L,1L,0x1796L,1001,-1L,1L,-1L,65534UL,0xA2D3889CL,0x85A2L};
                        l_197 = g_165.f5;
                    }
                }
            }
        }
    }
    else
    {
        char l_202 = (-1L);
        unsigned l_203 = 0x00ED8D9AL;
        struct S1 l_212 = {0L,65535UL,0xC61BL,-6L,0x912B3F79L,{0xA454554EL,0xE1D4F1E7L,0x13BDL,-3918,3L,4L,0x1F56L,0xA287L,7UL,0UL},0UL,565,1UL};
        int *l_228 = &l_212.f3;
        g_57.f7 = ((*p_27) = (safe_lshift_func_uint16_t_u_u((0x1EL & ((safe_sub_func_int16_t_s_s(((*l_147) , (l_202 & (p_28 ^ ((l_46.f2 > (g_165.f1 > g_50.f7)) , func_33(p_27, p_28, p_27, p_28))))), 0x3D27L)) , p_28)), l_203)));
        for (g_57.f5.f5 = 20; (g_57.f5.f5 < (-19)); --g_57.f5.f5)
        {
            struct S1 l_210[5] = {{-3L,0x86A5L,0x42B4L,0L,0xFCDE8412L,{0xD882C97BL,4L,-6L,1231,1L,0L,-1L,65533UL,0xEB58A766L,7UL},4294967287UL,358,0x93L},{-3L,0x86A5L,0x42B4L,0L,0xFCDE8412L,{0xD882C97BL,4L,-6L,1231,1L,0L,-1L,65533UL,0xEB58A766L,7UL},4294967287UL,358,0x93L},{-3L,0x86A5L,0x42B4L,0L,0xFCDE8412L,{0xD882C97BL,4L,-6L,1231,1L,0L,-1L,65533UL,0xEB58A766L,7UL},4294967287UL,358,0x93L},{-3L,0x86A5L,0x42B4L,0L,0xFCDE8412L,{0xD882C97BL,4L,-6L,1231,1L,0L,-1L,65533UL,0xEB58A766L,7UL},4294967287UL,358,0x93L},{-3L,0x86A5L,0x42B4L,0L,0xFCDE8412L,{0xD882C97BL,4L,-6L,1231,1L,0L,-1L,65533UL,0xEB58A766L,7UL},4294967287UL,358,0x93L}};
            int *l_215 = &l_212.f3;
            int *l_221 = &g_165.f5.f1;
            int **l_229 = &g_49;
            int i;
            (*g_89) = l_147;
            for (g_165.f5.f8 = 18; (g_165.f5.f8 >= 21); g_165.f5.f8 = safe_add_func_uint32_t_u_u(g_165.f5.f8, 4))
            {
                struct S1 l_211 = {0xCAFE1B88L,0xA2F6L,0xB708L,0x50732C6FL,0x7B46B6E0L,{-9L,1L,-3L,2856,0xC0L,-1L,0L,65535UL,1UL,8UL},0x91A3EE48L,-683,0UL};
                int *l_223 = &l_212.f4;
                for (l_46.f5.f9 = 11; (l_46.f5.f9 > 21); ++l_46.f5.f9)
                {
                    struct S0 l_216[1][5][6] = {{{{3L,1L,0L,-307,1L,-1L,0x93F7L,0UL,0x085FA091L,0x80FCL},{3L,1L,0L,-307,1L,-1L,0x93F7L,0UL,0x085FA091L,0x80FCL},{0x058CCB2FL,9L,0x5228L,-4008,-10L,0xC591L,7L,0xADF4L,0x33303D4CL,0x43D1L},{3L,1L,0L,-307,1L,-1L,0x93F7L,0UL,0x085FA091L,0x80FCL},{3L,1L,0L,-307,1L,-1L,0x93F7L,0UL,0x085FA091L,0x80FCL},{0x058CCB2FL,9L,0x5228L,-4008,-10L,0xC591L,7L,0xADF4L,0x33303D4CL,0x43D1L}},{{3L,1L,0L,-307,1L,-1L,0x93F7L,0UL,0x085FA091L,0x80FCL},{3L,1L,0L,-307,1L,-1L,0x93F7L,0UL,0x085FA091L,0x80FCL},{0x058CCB2FL,9L,0x5228L,-4008,-10L,0xC591L,7L,0xADF4L,0x33303D4CL,0x43D1L},{3L,1L,0L,-307,1L,-1L,0x93F7L,0UL,0x085FA091L,0x80FCL},{3L,1L,0L,-307,1L,-1L,0x93F7L,0UL,0x085FA091L,0x80FCL},{0x058CCB2FL,9L,0x5228L,-4008,-10L,0xC591L,7L,0xADF4L,0x33303D4CL,0x43D1L}},{{3L,1L,0L,-307,1L,-1L,0x93F7L,0UL,0x085FA091L,0x80FCL},{3L,1L,0L,-307,1L,-1L,0x93F7L,0UL,0x085FA091L,0x80FCL},{0x058CCB2FL,9L,0x5228L,-4008,-10L,0xC591L,7L,0xADF4L,0x33303D4CL,0x43D1L},{3L,1L,0L,-307,1L,-1L,0x93F7L,0UL,0x085FA091L,0x80FCL},{3L,1L,0L,-307,1L,-1L,0x93F7L,0UL,0x085FA091L,0x80FCL},{0x058CCB2FL,9L,0x5228L,-4008,-10L,0xC591L,7L,0xADF4L,0x33303D4CL,0x43D1L}},{{3L,1L,0L,-307,1L,-1L,0x93F7L,0UL,0x085FA091L,0x80FCL},{3L,1L,0L,-307,1L,-1L,0x93F7L,0UL,0x085FA091L,0x80FCL},{0x058CCB2FL,9L,0x5228L,-4008,-10L,0xC591L,7L,0xADF4L,0x33303D4CL,0x43D1L},{3L,1L,0L,-307,1L,-1L,0x93F7L,0UL,0x085FA091L,0x80FCL},{3L,1L,0L,-307,1L,-1L,0x93F7L,0UL,0x085FA091L,0x80FCL},{0x058CCB2FL,9L,0x5228L,-4008,-10L,0xC591L,7L,0xADF4L,0x33303D4CL,0x43D1L}},{{3L,1L,0L,-307,1L,-1L,0x93F7L,0UL,0x085FA091L,0x80FCL},{3L,1L,0L,-307,1L,-1L,0x93F7L,0UL,0x085FA091L,0x80FCL},{0x058CCB2FL,9L,0x5228L,-4008,-10L,0xC591L,7L,0xADF4L,0x33303D4CL,0x43D1L},{3L,1L,0L,-307,1L,-1L,0x93F7L,0UL,0x085FA091L,0x80FCL},{3L,1L,0L,-307,1L,-1L,0x93F7L,0UL,0x085FA091L,0x80FCL},{0x058CCB2FL,9L,0x5228L,-4008,-10L,0xC591L,7L,0xADF4L,0x33303D4CL,0x43D1L}}}};
                    int i, j, k;
                    l_211 = l_210[0];
                    l_212 = l_210[0];
                }
            }
            (*l_229) = l_228;
        }
    }
    (*p_27) = (g_57.f6 != (safe_add_func_uint32_t_u_u((((g_57.f7 >= 0L) || 0x5807ED7AL) > l_232), g_50.f2)));
    (*p_27) = (*p_27);
    return p_27;
}







static unsigned char func_33(int * p_34, unsigned p_35, int * p_36, unsigned p_37)
{
    struct S0 *l_51 = (void*)0;
    struct S1 l_58 = {0xF8006A59L,65535UL,1UL,0x731193F7L,0x95214660L,{0x0866D820L,1L,1L,-2769,0L,-1L,0x4789L,0xB8AEL,0x3225DEAEL,0xAB18L},0x11B1975CL,540,0xABL};
    int *l_69 = &l_58.f3;
    unsigned *l_113 = &g_114;
    int **l_116[7];
    int ***l_115 = &l_116[6];
    unsigned *l_121[9] = {(void*)0,(void*)0,&g_122,(void*)0,(void*)0,&g_122,(void*)0,(void*)0,&g_122};
    int l_123 = 1L;
    char l_124[7] = {(-10L),(-10L),(-10L),(-10L),(-10L),(-10L),(-10L)};
    struct S1 ***l_127 = (void*)0;
    struct S1 ****l_128 = &l_127;
    int i;
    for (i = 0; i < 7; i++)
        l_116[i] = &g_49;
    g_50 = g_50;
    for (g_50.f6 = 1; (g_50.f6 >= 0); g_50.f6 -= 1)
    {
        int **l_53 = &g_49;
        int **l_54 = (void*)0;
        int *l_56 = &g_50.f1;
        int **l_55 = &l_56;
        struct S1 *l_59 = &l_58;
        struct S0 *l_74 = &g_57.f5;
        struct S1 l_100 = {0x48BB85DCL,0xBF38L,0x4BADL,-10L,0L,{8L,-9L,0x0CE1L,1977,8L,1L,0L,65535UL,4294967295UL,0UL},0xB514E017L,515,2UL};
        (*l_55) = func_42(func_42(((*l_55) = ((*l_53) = &g_30)), g_57, &g_30), ((*l_59) = l_58), p_36);
    }
    (*l_69) = ((*p_36) = (safe_add_func_uint32_t_u_u(((*l_113) = p_37), (((*l_115) = &l_69) == &l_69))));
    (*l_69) = ((safe_mod_func_uint32_t_u_u((!0x675B375AL), ((*p_34) = (*l_69)))) < (g_57.f5.f7 > (safe_sub_func_uint16_t_u_u(((g_122 = ((*l_113) = 0x11294E48L)) ^ (l_124[5] = (l_123 , 0xD6EEA9B9L))), (safe_sub_func_uint32_t_u_u((((*l_128) = l_127) == &g_96), (g_50.f3 = ((g_50.f9 , g_50.f9) ^ g_50.f1))))))));
    return p_37;
}







static int * func_42(int * p_43, struct S1 p_44, int * p_45)
{
    int *l_48 = &g_30;
    int **l_47[9][10] = {{&l_48,&l_48,&l_48,&l_48,&l_48,&l_48,&l_48,&l_48,&l_48,&l_48},{&l_48,&l_48,&l_48,&l_48,&l_48,&l_48,&l_48,&l_48,&l_48,&l_48},{&l_48,&l_48,&l_48,&l_48,&l_48,&l_48,&l_48,&l_48,&l_48,&l_48},{&l_48,&l_48,&l_48,&l_48,&l_48,&l_48,&l_48,&l_48,&l_48,&l_48},{&l_48,&l_48,&l_48,&l_48,&l_48,&l_48,&l_48,&l_48,&l_48,&l_48},{&l_48,&l_48,&l_48,&l_48,&l_48,&l_48,&l_48,&l_48,&l_48,&l_48},{&l_48,&l_48,&l_48,&l_48,&l_48,&l_48,&l_48,&l_48,&l_48,&l_48},{&l_48,&l_48,&l_48,&l_48,&l_48,&l_48,&l_48,&l_48,&l_48,&l_48},{&l_48,&l_48,&l_48,&l_48,&l_48,&l_48,&l_48,&l_48,&l_48,&l_48}};
    int i, j;
    g_49 = &g_30;
    return &g_30;
}





int main (int argc, char* argv[])
{
    int i, j, k;
    int print_hash_value = 0;
    if (argc == 2 && strcmp(argv[1], "1") == 0) print_hash_value = 1;
    platform_main_begin();
    crc32_gentab();
    func_1();
    transparent_crc(g_4, "g_4", print_hash_value);
    transparent_crc(g_30, "g_30", print_hash_value);
    transparent_crc(g_50.f0, "g_50.f0", print_hash_value);
    transparent_crc(g_50.f1, "g_50.f1", print_hash_value);
    transparent_crc(g_50.f2, "g_50.f2", print_hash_value);
    transparent_crc(g_50.f3, "g_50.f3", print_hash_value);
    transparent_crc(g_50.f4, "g_50.f4", print_hash_value);
    transparent_crc(g_50.f5, "g_50.f5", print_hash_value);
    transparent_crc(g_50.f6, "g_50.f6", print_hash_value);
    transparent_crc(g_50.f7, "g_50.f7", print_hash_value);
    transparent_crc(g_50.f8, "g_50.f8", print_hash_value);
    transparent_crc(g_50.f9, "g_50.f9", print_hash_value);
    for (i = 0; i < 2; i++)
    {
        for (j = 0; j < 2; j++)
        {
            transparent_crc(g_52[i][j], "g_52[i][j]", print_hash_value);
            if (print_hash_value) printf("index = [%d][%d]\n", i, j);

        }
    }
    transparent_crc(g_57.f0, "g_57.f0", print_hash_value);
    transparent_crc(g_57.f1, "g_57.f1", print_hash_value);
    transparent_crc(g_57.f2, "g_57.f2", print_hash_value);
    transparent_crc(g_57.f3, "g_57.f3", print_hash_value);
    transparent_crc(g_57.f4, "g_57.f4", print_hash_value);
    transparent_crc(g_57.f5.f0, "g_57.f5.f0", print_hash_value);
    transparent_crc(g_57.f5.f1, "g_57.f5.f1", print_hash_value);
    transparent_crc(g_57.f5.f2, "g_57.f5.f2", print_hash_value);
    transparent_crc(g_57.f5.f3, "g_57.f5.f3", print_hash_value);
    transparent_crc(g_57.f5.f4, "g_57.f5.f4", print_hash_value);
    transparent_crc(g_57.f5.f5, "g_57.f5.f5", print_hash_value);
    transparent_crc(g_57.f5.f6, "g_57.f5.f6", print_hash_value);
    transparent_crc(g_57.f5.f7, "g_57.f5.f7", print_hash_value);
    transparent_crc(g_57.f5.f8, "g_57.f5.f8", print_hash_value);
    transparent_crc(g_57.f5.f9, "g_57.f5.f9", print_hash_value);
    transparent_crc(g_57.f6, "g_57.f6", print_hash_value);
    transparent_crc(g_57.f7, "g_57.f7", print_hash_value);
    transparent_crc(g_57.f8, "g_57.f8", print_hash_value);
    transparent_crc(g_103, "g_103", print_hash_value);
    transparent_crc(g_114, "g_114", print_hash_value);
    transparent_crc(g_122, "g_122", print_hash_value);
    transparent_crc(g_165.f0, "g_165.f0", print_hash_value);
    transparent_crc(g_165.f1, "g_165.f1", print_hash_value);
    transparent_crc(g_165.f2, "g_165.f2", print_hash_value);
    transparent_crc(g_165.f3, "g_165.f3", print_hash_value);
    transparent_crc(g_165.f4, "g_165.f4", print_hash_value);
    transparent_crc(g_165.f5.f0, "g_165.f5.f0", print_hash_value);
    transparent_crc(g_165.f5.f1, "g_165.f5.f1", print_hash_value);
    transparent_crc(g_165.f5.f2, "g_165.f5.f2", print_hash_value);
    transparent_crc(g_165.f5.f3, "g_165.f5.f3", print_hash_value);
    transparent_crc(g_165.f5.f4, "g_165.f5.f4", print_hash_value);
    transparent_crc(g_165.f5.f5, "g_165.f5.f5", print_hash_value);
    transparent_crc(g_165.f5.f6, "g_165.f5.f6", print_hash_value);
    transparent_crc(g_165.f5.f7, "g_165.f5.f7", print_hash_value);
    transparent_crc(g_165.f5.f8, "g_165.f5.f8", print_hash_value);
    transparent_crc(g_165.f5.f9, "g_165.f5.f9", print_hash_value);
    transparent_crc(g_165.f6, "g_165.f6", print_hash_value);
    transparent_crc(g_165.f7, "g_165.f7", print_hash_value);
    transparent_crc(g_165.f8, "g_165.f8", print_hash_value);
    transparent_crc(g_243.f0, "g_243.f0", print_hash_value);
    transparent_crc(g_243.f1, "g_243.f1", print_hash_value);
    transparent_crc(g_243.f2, "g_243.f2", print_hash_value);
    transparent_crc(g_243.f3, "g_243.f3", print_hash_value);
    transparent_crc(g_243.f4, "g_243.f4", print_hash_value);
    transparent_crc(g_243.f5, "g_243.f5", print_hash_value);
    transparent_crc(g_243.f6, "g_243.f6", print_hash_value);
    transparent_crc(g_243.f7, "g_243.f7", print_hash_value);
    transparent_crc(g_243.f8, "g_243.f8", print_hash_value);
    transparent_crc(g_243.f9, "g_243.f9", print_hash_value);
    transparent_crc(g_261.f0, "g_261.f0", print_hash_value);
    transparent_crc(g_261.f1, "g_261.f1", print_hash_value);
    transparent_crc(g_261.f2, "g_261.f2", print_hash_value);
    transparent_crc(g_261.f3, "g_261.f3", print_hash_value);
    transparent_crc(g_261.f4, "g_261.f4", print_hash_value);
    transparent_crc(g_261.f5.f0, "g_261.f5.f0", print_hash_value);
    transparent_crc(g_261.f5.f1, "g_261.f5.f1", print_hash_value);
    transparent_crc(g_261.f5.f2, "g_261.f5.f2", print_hash_value);
    transparent_crc(g_261.f5.f3, "g_261.f5.f3", print_hash_value);
    transparent_crc(g_261.f5.f4, "g_261.f5.f4", print_hash_value);
    transparent_crc(g_261.f5.f5, "g_261.f5.f5", print_hash_value);
    transparent_crc(g_261.f5.f6, "g_261.f5.f6", print_hash_value);
    transparent_crc(g_261.f5.f7, "g_261.f5.f7", print_hash_value);
    transparent_crc(g_261.f5.f8, "g_261.f5.f8", print_hash_value);
    transparent_crc(g_261.f5.f9, "g_261.f5.f9", print_hash_value);
    transparent_crc(g_261.f6, "g_261.f6", print_hash_value);
    transparent_crc(g_261.f7, "g_261.f7", print_hash_value);
    transparent_crc(g_261.f8, "g_261.f8", print_hash_value);
    for (i = 0; i < 8; i++)
    {
        for (j = 0; j < 10; j++)
        {
            transparent_crc(g_272[i][j], "g_272[i][j]", print_hash_value);
            if (print_hash_value) printf("index = [%d][%d]\n", i, j);

        }
    }
    transparent_crc(g_307, "g_307", print_hash_value);
    transparent_crc(g_537, "g_537", print_hash_value);
    transparent_crc(g_609, "g_609", print_hash_value);
    transparent_crc(g_667, "g_667", print_hash_value);
    transparent_crc(g_696.f0, "g_696.f0", print_hash_value);
    transparent_crc(g_696.f1, "g_696.f1", print_hash_value);
    transparent_crc(g_696.f2, "g_696.f2", print_hash_value);
    transparent_crc(g_696.f3, "g_696.f3", print_hash_value);
    transparent_crc(g_696.f4, "g_696.f4", print_hash_value);
    transparent_crc(g_696.f5.f0, "g_696.f5.f0", print_hash_value);
    transparent_crc(g_696.f5.f1, "g_696.f5.f1", print_hash_value);
    transparent_crc(g_696.f5.f2, "g_696.f5.f2", print_hash_value);
    transparent_crc(g_696.f5.f3, "g_696.f5.f3", print_hash_value);
    transparent_crc(g_696.f5.f4, "g_696.f5.f4", print_hash_value);
    transparent_crc(g_696.f5.f5, "g_696.f5.f5", print_hash_value);
    transparent_crc(g_696.f5.f6, "g_696.f5.f6", print_hash_value);
    transparent_crc(g_696.f5.f7, "g_696.f5.f7", print_hash_value);
    transparent_crc(g_696.f5.f8, "g_696.f5.f8", print_hash_value);
    transparent_crc(g_696.f5.f9, "g_696.f5.f9", print_hash_value);
    transparent_crc(g_696.f6, "g_696.f6", print_hash_value);
    transparent_crc(g_696.f7, "g_696.f7", print_hash_value);
    transparent_crc(g_696.f8, "g_696.f8", print_hash_value);
    for (i = 0; i < 9; i++)
    {
        transparent_crc(g_725[i], "g_725[i]", print_hash_value);
        if (print_hash_value) printf("index = [%d]\n", i);

    }
    transparent_crc(g_739, "g_739", print_hash_value);
    for (i = 0; i < 6; i++)
    {
        for (j = 0; j < 7; j++)
        {
            transparent_crc(g_846[i][j], "g_846[i][j]", print_hash_value);
            if (print_hash_value) printf("index = [%d][%d]\n", i, j);

        }
    }
    transparent_crc(g_901, "g_901", print_hash_value);
    transparent_crc(g_927, "g_927", print_hash_value);
    transparent_crc(g_1114, "g_1114", print_hash_value);
    transparent_crc(g_1135, "g_1135", print_hash_value);
    platform_main_end(crc32_context ^ 0xFFFFFFFFUL, print_hash_value);
    return 0;
}
