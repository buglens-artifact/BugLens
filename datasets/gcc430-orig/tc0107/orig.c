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
   short f2;
   int f3;
   unsigned f4;
   int f5;
   char f6;
};


static unsigned g_5 = 0xFC3938DDL;
static int g_7 = (-2L);
static int g_46 = 0x55DBFE6BL;
static int *g_45 = &g_46;
static unsigned short g_61[9] = {0xEA52L,0UL,0xEA52L,0xEA52L,0UL,0xEA52L,0xEA52L,0UL,0xEA52L};
static struct S0 g_64 = {4294967295UL,5UL,1L,5L,0x53ED870BL,0xCB45490AL,8L};
static int g_68[5] = {0xF2ABA01CL,0xF2ABA01CL,0xF2ABA01CL,0xF2ABA01CL,0xF2ABA01CL};
static struct S0 g_94 = {0UL,1UL,3L,0x04C89910L,0xCFD3AFC3L,0x34690618L,1L};
static unsigned char g_123 = 1UL;
static unsigned char g_125 = 246UL;
static unsigned g_142[3][6][2] = {{{1UL,1UL},{1UL,1UL},{1UL,1UL},{1UL,1UL},{1UL,1UL},{1UL,1UL}},{{1UL,1UL},{1UL,1UL},{1UL,1UL},{1UL,1UL},{1UL,1UL},{1UL,1UL}},{{1UL,1UL},{1UL,1UL},{1UL,1UL},{1UL,1UL},{1UL,1UL},{1UL,1UL}}};
static unsigned g_143 = 1UL;
static int g_159 = 0xC5433B60L;
static struct S0 g_223 = {4294967295UL,0UL,-1L,0x0BC75360L,0UL,0xCF097603L,0x7FL};
static struct S0 g_244 = {1UL,0UL,0L,1L,5UL,0x2B369159L,-1L};
static int *g_245 = &g_244.f3;
static short *g_266[4] = {&g_223.f2,&g_223.f2,&g_223.f2,&g_223.f2};
static short *g_268 = &g_223.f2;
static unsigned char *g_414 = (void*)0;
static unsigned char **g_413 = &g_414;
static unsigned char ***g_412 = &g_413;
static unsigned *g_420 = &g_223.f0;
static char ***g_462 = (void*)0;
static unsigned g_605 = 0x0F35EA5DL;
static unsigned char g_619 = 248UL;
static short g_646 = 0x2988L;
static char ****g_658[1] = {&g_462};
static unsigned char ****g_751 = &g_412;
static unsigned char *****g_750 = &g_751;
static unsigned char *****g_754 = &g_751;
static unsigned char *****g_755 = &g_751;
static int *g_830[7][7] = {{&g_159,&g_68[0],&g_7,&g_68[0],&g_7,&g_68[0],&g_159},{&g_68[0],&g_159,&g_68[4],(void*)0,&g_244.f3,&g_7,&g_244.f3},{&g_68[0],&g_244.f3,&g_244.f3,&g_68[0],&g_7,&g_244.f3,&g_68[0]},{&g_159,&g_244.f3,&g_68[4],&g_7,&g_7,&g_68[4],&g_244.f3},{&g_7,&g_159,&g_7,&g_159,&g_244.f3,&g_68[0],&g_68[0]},{&g_7,&g_159,&g_7,&g_159,&g_7,&g_159,&g_244.f3},{&g_68[4],&g_244.f3,&g_159,&g_159,(void*)0,&g_159,&g_159}};
static unsigned short g_834 = 0xF472L;
static unsigned short *g_874 = (void*)0;
static unsigned short **g_873 = &g_874;
static unsigned short g_891 = 0x0B27L;
static unsigned char g_920 = 0x5FL;
static int *g_926 = &g_223.f3;



static unsigned char func_1(void);
static struct S0 func_2(unsigned p_3, unsigned short p_4);
static short func_17(int * p_18);
static int * func_19(struct S0 p_20, unsigned short p_21, int * p_22, int p_23, int * p_24);
static struct S0 func_25(unsigned short p_26, struct S0 p_27, int * p_28, struct S0 p_29, unsigned short p_30);
static unsigned short func_33(unsigned p_34, int * p_35);
static int func_36(unsigned p_37, int * p_38, int p_39);
static int * func_41(int * p_42, short p_43, int * p_44);
static short func_47(int * p_48, short p_49, int * p_50, unsigned short p_51, int p_52);
static unsigned func_53(int * p_54, struct S0 p_55, char p_56, unsigned short p_57);
static unsigned char func_1(void)
{
    int *l_6 = &g_7;
    int l_16 = 0x124DC41FL;
    struct S0 l_822[9][3][9] = {{{{0x90C80330L,0x30A1C65AL,-1L,-1L,0xC426D9B6L,0x7C4D5170L,0L},{0xF195967EL,4294967293UL,1L,4L,4294967295UL,0x6BFA21E5L,0xBAL},{0UL,4294967295UL,0xCB51L,0x29C0E850L,4294967292UL,0x9EF70869L,0x6AL},{0x1ED0F099L,4294967295UL,0x0EDEL,0x7E296882L,4294967292UL,0xB7080122L,0x2FL},{6UL,0xC30AF972L,1L,0x9A7213BFL,0xB5C33DACL,0x3CB9B89BL,-1L},{0x4DB6E8EDL,0x3C8B3B2FL,1L,0x7405F6D3L,1UL,0x91197B9CL,4L},{5UL,0x0DB8CAC0L,0xC9FFL,-6L,4294967293UL,7L,0x39L},{1UL,0xD83BD36DL,-1L,-2L,0xFDB65352L,-7L,0L},{0xB59B8C81L,0x14E89C42L,0x8309L,1L,4294967288UL,-8L,7L}},{{4294967293UL,0x0E221C90L,0xA152L,1L,4294967286UL,0x12A117C7L,1L},{1UL,0UL,-10L,9L,0UL,0L,-1L},{0xE2B37638L,0x1599F2F6L,0xA77BL,-7L,0x94F07019L,0x041BB484L,9L},{4294967292UL,0xCB54D569L,-1L,0x7E15BDB1L,4294967295UL,0x0F28BD20L,0L},{0xD840E9FFL,0xE9391545L,0L,0x77CCA225L,0xA435D4CAL,0L,0L},{0x3BC2DCCCL,1UL,0x82EFL,-1L,0x9375C22CL,8L,0xDFL},{4294967295UL,0xBFA0444DL,0xF5EBL,-1L,0UL,0x90F64501L,0xC1L},{4294967293UL,0xEABEF0DBL,-5L,0x02FB053EL,4294967294UL,0x30D975C4L,0x72L},{4294967295UL,0xBFA0444DL,0xF5EBL,-1L,0UL,0x90F64501L,0xC1L}},{{0x1671E8E7L,0xBF462F87L,5L,0xB50DC669L,1UL,0x33CC498EL,1L},{0xF195967EL,4294967293UL,1L,4L,4294967295UL,0x6BFA21E5L,0xBAL},{0xEC7E6477L,4294967288UL,0L,0x174766E9L,0x75A2BCECL,5L,-3L},{0xEC7E6477L,4294967288UL,0L,0x174766E9L,0x75A2BCECL,5L,-3L},{0xF195967EL,4294967293UL,1L,4L,4294967295UL,0x6BFA21E5L,0xBAL},{0x1671E8E7L,0xBF462F87L,5L,0xB50DC669L,1UL,0x33CC498EL,1L},{0x31755331L,1UL,-1L,0x690B03CAL,0UL,-2L,3L},{0xD3C7280DL,0x4630A398L,0xC99CL,0xDDC3B13BL,0xD0BAB927L,0xCFA17B50L,0x32L},{0xBD5AA0FEL,0UL,0xF3D8L,0L,0x305A03C6L,0x016CFABFL,0L}}},{{{0xD840E9FFL,0xE9391545L,0L,0x77CCA225L,0xA435D4CAL,0L,0L},{0xD8A6EAECL,0x12F9550CL,0x0679L,6L,0x81771AEFL,0x26702259L,7L},{0x78E41D21L,0x82F73659L,5L,0L,0xE727C56BL,1L,9L},{0x660198EBL,0UL,0x3767L,0xD334F383L,6UL,0x945F81CEL,-1L},{0x70B6BB97L,0UL,1L,1L,0x37D7CD85L,0xB9A83A11L,-1L},{7UL,1UL,0x9D16L,-10L,4294967286UL,-1L,-8L},{4294967293UL,0xEABEF0DBL,-5L,0x02FB053EL,4294967294UL,0x30D975C4L,0x72L},{0x355FD620L,0x15B76557L,0L,0xE8484AE1L,0UL,-1L,0x4AL},{1UL,0UL,-10L,9L,0UL,0L,-1L}},{{1UL,2UL,0xB007L,0x50A6E0B6L,0UL,0x47AF1B09L,1L},{0x5EDCF4AAL,0xC863BE88L,-4L,0L,0x865DDA48L,-1L,0xA6L},{0x90C80330L,0x30A1C65AL,-1L,-1L,0xC426D9B6L,0x7C4D5170L,0L},{0xB59B8C81L,0x14E89C42L,0x8309L,1L,4294967288UL,-8L,7L},{4294967289UL,0x8AC527A8L,0x32E4L,0xDF77CA82L,0UL,0xE0B6DFF4L,2L},{0x81C7EA1AL,4294967288UL,0x9F1BL,7L,0xD93BB94DL,-5L,0x3FL},{4294967289UL,0x8AC527A8L,0x32E4L,0xDF77CA82L,0UL,0xE0B6DFF4L,2L},{0xB59B8C81L,0x14E89C42L,0x8309L,1L,4294967288UL,-8L,7L},{0x90C80330L,0x30A1C65AL,-1L,-1L,0xC426D9B6L,0x7C4D5170L,0L}},{{0x78E41D21L,0x82F73659L,5L,0L,0xE727C56BL,1L,9L},{0x78E41D21L,0x82F73659L,5L,0L,0xE727C56BL,1L,9L},{4294967293UL,0xEABEF0DBL,-5L,0x02FB053EL,4294967294UL,0x30D975C4L,0x72L},{0x3BC2DCCCL,1UL,0x82EFL,-1L,0x9375C22CL,8L,0xDFL},{0x6D839D27L,0x57968351L,0xBFD7L,0L,4294967294UL,0xB0CA1132L,1L},{0x70B6BB97L,0UL,1L,1L,0x37D7CD85L,0xB9A83A11L,-1L},{0xDB227900L,0x47BD5A7BL,0L,0x252D26D8L,0xCBF780ADL,0x90035978L,4L},{0x355FD620L,0x15B76557L,0L,0xE8484AE1L,0UL,-1L,0x4AL},{7UL,1UL,0x9D16L,-10L,4294967286UL,-1L,-8L}}},{{{0x4DB6E8EDL,0x3C8B3B2FL,1L,0x7405F6D3L,1UL,0x91197B9CL,4L},{0x31755331L,1UL,-1L,0x690B03CAL,0UL,-2L,3L},{0xEC7E6477L,4294967288UL,0L,0x174766E9L,0x75A2BCECL,5L,-3L},{1UL,2UL,0xB007L,0x50A6E0B6L,0UL,0x47AF1B09L,1L},{0UL,4294967295UL,0xCB51L,0x29C0E850L,4294967292UL,0x9EF70869L,0x6AL},{0x9B3DF4F1L,4294967292UL,7L,-5L,1UL,0L,0xF3L},{1UL,4294967295UL,1L,0x9BB77632L,0xB0114CC7L,9L,-8L},{4294967289UL,0x8AC527A8L,0x32E4L,0xDF77CA82L,0UL,0xE0B6DFF4L,2L},{4294967289UL,0x8AC527A8L,0x32E4L,0xDF77CA82L,0UL,0xE0B6DFF4L,2L}},{{7UL,1UL,0x9D16L,-10L,4294967286UL,-1L,-8L},{4294967293UL,0x0E221C90L,0xA152L,1L,4294967286UL,0x12A117C7L,1L},{4294967293UL,0xEABEF0DBL,-5L,0x02FB053EL,4294967294UL,0x30D975C4L,0x72L},{4294967286UL,0xED9AD4CCL,0x7D8CL,-7L,0x7C9FA413L,1L,0xC8L},{4294967293UL,0xEABEF0DBL,-5L,0x02FB053EL,4294967294UL,0x30D975C4L,0x72L},{4294967293UL,0x0E221C90L,0xA152L,1L,4294967286UL,0x12A117C7L,1L},{7UL,1UL,0x9D16L,-10L,4294967286UL,-1L,-8L},{0x28A59DF1L,1UL,0xE29AL,0x83D0C84FL,0UL,0L,0x6FL},{4294967295UL,0xBFA0444DL,0xF5EBL,-1L,0UL,0x90F64501L,0xC1L}},{{5UL,0x0DB8CAC0L,0xC9FFL,-6L,4294967293UL,7L,0x39L},{1UL,4294967295UL,1L,0x9BB77632L,0xB0114CC7L,9L,-8L},{0x90C80330L,0x30A1C65AL,-1L,-1L,0xC426D9B6L,0x7C4D5170L,0L},{4294967295UL,6UL,0x57EAL,0xD866C4FEL,0xC1E5B61EL,1L,-6L},{0xB59B8C81L,0x14E89C42L,0x8309L,1L,4294967288UL,-8L,7L},{0x5EDCF4AAL,0xC863BE88L,-4L,0L,0x865DDA48L,-1L,0xA6L},{0x9B3DF4F1L,4294967292UL,7L,-5L,1UL,0L,0xF3L},{0x81C7EA1AL,4294967288UL,0x9F1BL,7L,0xD93BB94DL,-5L,0x3FL},{0x1ED0F099L,4294967295UL,0x0EDEL,0x7E296882L,4294967292UL,0xB7080122L,0x2FL}}},{{{0UL,6UL,0xEC5EL,0x8A4616F3L,2UL,0x8F96CF09L,0xFFL},{0x6D839D27L,0x57968351L,0xBFD7L,0L,4294967294UL,0xB0CA1132L,1L},{0xE2B37638L,0x1599F2F6L,0xA77BL,-7L,0x94F07019L,0x041BB484L,9L},{0x5D71007EL,0x5881B492L,0L,0L,0UL,0xBA3C68CEL,-9L},{0x28A59DF1L,1UL,0xE29AL,0x83D0C84FL,0UL,0L,0x6FL},{1UL,0UL,-10L,9L,0UL,0L,-1L},{1UL,0UL,-10L,9L,0UL,0L,-1L},{0x28A59DF1L,1UL,0xE29AL,0x83D0C84FL,0UL,0L,0x6FL},{0x5D71007EL,0x5881B492L,0L,0L,0UL,0xBA3C68CEL,-9L}},{{1UL,0xD83BD36DL,-1L,-2L,0xFDB65352L,-7L,0L},{0x4DB6E8EDL,0x3C8B3B2FL,1L,0x7405F6D3L,1UL,0x91197B9CL,4L},{1UL,0xD83BD36DL,-1L,-2L,0xFDB65352L,-7L,0L},{0xBD5AA0FEL,0UL,0xF3D8L,0L,0x305A03C6L,0x016CFABFL,0L},{0x31755331L,1UL,-1L,0x690B03CAL,0UL,-2L,3L},{0xB59B8C81L,0x14E89C42L,0x8309L,1L,4294967288UL,-8L,7L},{0UL,4294967295UL,0xCB51L,0x29C0E850L,4294967292UL,0x9EF70869L,0x6AL},{4294967289UL,0x8AC527A8L,0x32E4L,0xDF77CA82L,0UL,0xE0B6DFF4L,2L},{0x1671E8E7L,0xBF462F87L,5L,0xB50DC669L,1UL,0x33CC498EL,1L}},{{0x05281427L,0xD9EDA7F5L,0xD5B8L,1L,4294967295UL,0x2805B864L,0xDAL},{0x5D71007EL,0x5881B492L,0L,0L,0UL,0xBA3C68CEL,-9L},{6UL,4294967295UL,-1L,6L,0x2F2E9FA6L,5L,0x3DL},{0x70B6BB97L,0UL,1L,1L,0x37D7CD85L,0xB9A83A11L,-1L},{0xD840E9FFL,0xE9391545L,0L,0x77CCA225L,0xA435D4CAL,0L,0L},{0xE2B37638L,0x1599F2F6L,0xA77BL,-7L,0x94F07019L,0x041BB484L,9L},{0UL,6UL,0xEC5EL,0x8A4616F3L,2UL,0x8F96CF09L,0xFFL},{0x355FD620L,0x15B76557L,0L,0xE8484AE1L,0UL,-1L,0x4AL},{4294967292UL,0xCB54D569L,-1L,0x7E15BDB1L,4294967295UL,0x0F28BD20L,0L}}},{{{0xB59B8C81L,0x14E89C42L,0x8309L,1L,4294967288UL,-8L,7L},{1UL,2UL,0xB007L,0x50A6E0B6L,0UL,0x47AF1B09L,1L},{4294967295UL,6UL,0x57EAL,0xD866C4FEL,0xC1E5B61EL,1L,-6L},{0xBD5AA0FEL,0UL,0xF3D8L,0L,0x305A03C6L,0x016CFABFL,0L},{0xBD5AA0FEL,0UL,0xF3D8L,0L,0x305A03C6L,0x016CFABFL,0L},{4294967295UL,6UL,0x57EAL,0xD866C4FEL,0xC1E5B61EL,1L,-6L},{1UL,2UL,0xB007L,0x50A6E0B6L,0UL,0x47AF1B09L,1L},{0xB59B8C81L,0x14E89C42L,0x8309L,1L,4294967288UL,-8L,7L},{1UL,0xD83BD36DL,-1L,-2L,0xFDB65352L,-7L,0L}},{{0x3BC2DCCCL,1UL,0x82EFL,-1L,0x9375C22CL,8L,0xDFL},{0x660198EBL,0UL,0x3767L,0xD334F383L,6UL,0x945F81CEL,-1L},{0x34E4B278L,0x8D6D6A3BL,7L,0xB8ED35A6L,1UL,-9L,0xB6L},{0x5D71007EL,0x5881B492L,0L,0L,0UL,0xBA3C68CEL,-9L},{0xDB227900L,0x47BD5A7BL,0L,0x252D26D8L,0xCBF780ADL,0x90035978L,4L},{4294967292UL,0xCB54D569L,-1L,0x7E15BDB1L,4294967295UL,0x0F28BD20L,0L},{6UL,4294967295UL,-1L,6L,0x2F2E9FA6L,5L,0x3DL},{0x78E41D21L,0x82F73659L,5L,0L,0xE727C56BL,1L,9L},{0x28A59DF1L,1UL,0xE29AL,0x83D0C84FL,0UL,0L,0x6FL}},{{1UL,2UL,0xB007L,0x50A6E0B6L,0UL,0x47AF1B09L,1L},{0xF195967EL,4294967293UL,1L,4L,4294967295UL,0x6BFA21E5L,0xBAL},{4294967289UL,0x8AC527A8L,0x32E4L,0xDF77CA82L,0UL,0xE0B6DFF4L,2L},{4294967295UL,6UL,0x57EAL,0xD866C4FEL,0xC1E5B61EL,1L,-6L},{1UL,0xD83BD36DL,-1L,-2L,0xFDB65352L,-7L,0L},{0x90C80330L,0x30A1C65AL,-1L,-1L,0xC426D9B6L,0x7C4D5170L,0L},{0xEC7E6477L,4294967288UL,0L,0x174766E9L,0x75A2BCECL,5L,-3L},{5UL,0x0DB8CAC0L,0xC9FFL,-6L,4294967293UL,7L,0x39L},{6UL,0xC30AF972L,1L,0x9A7213BFL,0xB5C33DACL,0x3CB9B89BL,-1L}}},{{{0x34E4B278L,0x8D6D6A3BL,7L,0xB8ED35A6L,1UL,-9L,0xB6L},{0x6D839D27L,0x57968351L,0xBFD7L,0L,4294967294UL,0xB0CA1132L,1L},{0x6D839D27L,0x57968351L,0xBFD7L,0L,4294967294UL,0xB0CA1132L,1L},{0x34E4B278L,0x8D6D6A3BL,7L,0xB8ED35A6L,1UL,-9L,0xB6L},{4294967292UL,0xCB54D569L,-1L,0x7E15BDB1L,4294967295UL,0x0F28BD20L,0L},{4294967286UL,0xED9AD4CCL,0x7D8CL,-7L,0x7C9FA413L,1L,0xC8L},{0x660198EBL,0UL,0x3767L,0xD334F383L,6UL,0x945F81CEL,-1L},{0x355FD620L,0x15B76557L,0L,0xE8484AE1L,0UL,-1L,0x4AL},{6UL,4294967295UL,-1L,6L,0x2F2E9FA6L,5L,0x3DL}},{{0x9B3DF4F1L,4294967292UL,7L,-5L,1UL,0L,0xF3L},{0x1671E8E7L,0xBF462F87L,5L,0xB50DC669L,1UL,0x33CC498EL,1L},{0x81C7EA1AL,4294967288UL,0x9F1BL,7L,0xD93BB94DL,-5L,0x3FL},{0x4DB6E8EDL,0x3C8B3B2FL,1L,0x7405F6D3L,1UL,0x91197B9CL,4L},{4294967289UL,0x8AC527A8L,0x32E4L,0xDF77CA82L,0UL,0xE0B6DFF4L,2L},{0x5EDCF4AAL,0xC863BE88L,-4L,0L,0x865DDA48L,-1L,0xA6L},{0xF195967EL,4294967293UL,1L,4L,4294967295UL,0x6BFA21E5L,0xBAL},{4294967288UL,1UL,-1L,1L,0xB88C5F52L,0x352AD078L,0xC3L},{0xB59B8C81L,0x14E89C42L,0x8309L,1L,4294967288UL,-8L,7L}},{{0xD840E9FFL,0xE9391545L,0L,0x77CCA225L,0xA435D4CAL,0L,0L},{0xE2B37638L,0x1599F2F6L,0xA77BL,-7L,0x94F07019L,0x041BB484L,9L},{0UL,6UL,0xEC5EL,0x8A4616F3L,2UL,0x8F96CF09L,0xFFL},{0x355FD620L,0x15B76557L,0L,0xE8484AE1L,0UL,-1L,0x4AL},{4294967292UL,0xCB54D569L,-1L,0x7E15BDB1L,4294967295UL,0x0F28BD20L,0L},{0x355FD620L,0x15B76557L,0L,0xE8484AE1L,0UL,-1L,0x4AL},{0UL,6UL,0xEC5EL,0x8A4616F3L,2UL,0x8F96CF09L,0xFFL},{0xE2B37638L,0x1599F2F6L,0xA77BL,-7L,0x94F07019L,0x041BB484L,9L},{0xD840E9FFL,0xE9391545L,0L,0x77CCA225L,0xA435D4CAL,0L,0L}}},{{{0xD3C7280DL,0x4630A398L,0xC99CL,0xDDC3B13BL,0xD0BAB927L,0xCFA17B50L,0x32L},{0x9B3DF4F1L,4294967292UL,7L,-5L,1UL,0L,0xF3L},{0x4DB6E8EDL,0x3C8B3B2FL,1L,0x7405F6D3L,1UL,0x91197B9CL,4L},{4294967295UL,6UL,0x57EAL,0xD866C4FEL,0xC1E5B61EL,1L,-6L},{6UL,0xC30AF972L,1L,0x9A7213BFL,0xB5C33DACL,0x3CB9B89BL,-1L},{1UL,0xD83BD36DL,-1L,-2L,0xFDB65352L,-7L,0L},{4294967289UL,0x8AC527A8L,0x32E4L,0xDF77CA82L,0UL,0xE0B6DFF4L,2L},{0xBD5AA0FEL,0UL,0xF3D8L,0L,0x305A03C6L,0x016CFABFL,0L},{0xEC7E6477L,4294967288UL,0L,0x174766E9L,0x75A2BCECL,5L,-3L}},{{7UL,1UL,0x9D16L,-10L,4294967286UL,-1L,-8L},{0x5D71007EL,0x5881B492L,0L,0L,0UL,0xBA3C68CEL,-9L},{0xD840E9FFL,0xE9391545L,0L,0x77CCA225L,0xA435D4CAL,0L,0L},{4294967295UL,0xBFA0444DL,0xF5EBL,-1L,0UL,0x90F64501L,0xC1L},{0x70B6BB97L,0UL,1L,1L,0x37D7CD85L,0xB9A83A11L,-1L},{0xD8A6EAECL,0x12F9550CL,0x0679L,6L,0x81771AEFL,0x26702259L,7L},{0x34E4B278L,0x8D6D6A3BL,7L,0xB8ED35A6L,1UL,-9L,0xB6L},{0x34E4B278L,0x8D6D6A3BL,7L,0xB8ED35A6L,1UL,-9L,0xB6L},{0xD8A6EAECL,0x12F9550CL,0x0679L,6L,0x81771AEFL,0x26702259L,7L}},{{0xD3C7280DL,0x4630A398L,0xC99CL,0xDDC3B13BL,0xD0BAB927L,0xCFA17B50L,0x32L},{6UL,0xC30AF972L,1L,0x9A7213BFL,0xB5C33DACL,0x3CB9B89BL,-1L},{4294967289UL,0x8AC527A8L,0x32E4L,0xDF77CA82L,0UL,0xE0B6DFF4L,2L},{6UL,0xC30AF972L,1L,0x9A7213BFL,0xB5C33DACL,0x3CB9B89BL,-1L},{0xD3C7280DL,0x4630A398L,0xC99CL,0xDDC3B13BL,0xD0BAB927L,0xCFA17B50L,0x32L},{0xF195967EL,4294967293UL,1L,4L,4294967295UL,0x6BFA21E5L,0xBAL},{4294967295UL,6UL,0x57EAL,0xD866C4FEL,0xC1E5B61EL,1L,-6L},{1UL,4294967295UL,1L,0x9BB77632L,0xB0114CC7L,9L,-8L},{0x1671E8E7L,0xBF462F87L,5L,0xB50DC669L,1UL,0x33CC498EL,1L}}},{{{0xD840E9FFL,0xE9391545L,0L,0x77CCA225L,0xA435D4CAL,0L,0L},{0x28A59DF1L,1UL,0xE29AL,0x83D0C84FL,0UL,0L,0x6FL},{4294967293UL,0xEABEF0DBL,-5L,0x02FB053EL,4294967294UL,0x30D975C4L,0x72L},{0x6D839D27L,0x57968351L,0xBFD7L,0L,4294967294UL,0xB0CA1132L,1L},{4294967286UL,0xED9AD4CCL,0x7D8CL,-7L,0x7C9FA413L,1L,0xC8L},{1UL,0UL,-10L,9L,0UL,0L,-1L},{6UL,4294967295UL,-1L,6L,0x2F2E9FA6L,5L,0x3DL},{4294967295UL,0xBFA0444DL,0xF5EBL,-1L,0UL,0x90F64501L,0xC1L},{0x78E41D21L,0x82F73659L,5L,0L,0xE727C56BL,1L,9L}},{{0x9B3DF4F1L,4294967292UL,7L,-5L,1UL,0L,0xF3L},{5UL,0x0DB8CAC0L,0xC9FFL,-6L,4294967293UL,7L,0x39L},{0x5EDCF4AAL,0xC863BE88L,-4L,0L,0x865DDA48L,-1L,0xA6L},{1UL,0xD83BD36DL,-1L,-2L,0xFDB65352L,-7L,0L},{0xF195967EL,4294967293UL,1L,4L,4294967295UL,0x6BFA21E5L,0xBAL},{0xF195967EL,4294967293UL,1L,4L,4294967295UL,0x6BFA21E5L,0xBAL},{1UL,0xD83BD36DL,-1L,-2L,0xFDB65352L,-7L,0L},{0x5EDCF4AAL,0xC863BE88L,-4L,0L,0x865DDA48L,-1L,0xA6L},{5UL,0x0DB8CAC0L,0xC9FFL,-6L,4294967293UL,7L,0x39L}},{{0x34E4B278L,0x8D6D6A3BL,7L,0xB8ED35A6L,1UL,-9L,0xB6L},{1UL,0UL,-10L,9L,0UL,0L,-1L},{4294967292UL,0xCB54D569L,-1L,0x7E15BDB1L,4294967295UL,0x0F28BD20L,0L},{0x78E41D21L,0x82F73659L,5L,0L,0xE727C56BL,1L,9L},{0xDB227900L,0x47BD5A7BL,0L,0x252D26D8L,0xCBF780ADL,0x90035978L,4L},{0xD8A6EAECL,0x12F9550CL,0x0679L,6L,0x81771AEFL,0x26702259L,7L},{0xE2B37638L,0x1599F2F6L,0xA77BL,-7L,0x94F07019L,0x041BB484L,9L},{0x28A59DF1L,1UL,0xE29AL,0x83D0C84FL,0UL,0L,0x6FL},{0x660198EBL,0UL,0x3767L,0xD334F383L,6UL,0x945F81CEL,-1L}}},{{{0x4DB6E8EDL,0x3C8B3B2FL,1L,0x7405F6D3L,1UL,0x91197B9CL,4L},{1UL,2UL,0xB007L,0x50A6E0B6L,0UL,0x47AF1B09L,1L},{0xF195967EL,4294967293UL,1L,4L,4294967295UL,0x6BFA21E5L,0xBAL},{4294967289UL,0x8AC527A8L,0x32E4L,0xDF77CA82L,0UL,0xE0B6DFF4L,2L},{4294967295UL,6UL,0x57EAL,0xD866C4FEL,0xC1E5B61EL,1L,-6L},{1UL,0xD83BD36DL,-1L,-2L,0xFDB65352L,-7L,0L},{0x90C80330L,0x30A1C65AL,-1L,-1L,0xC426D9B6L,0x7C4D5170L,0L},{0xEC7E6477L,4294967288UL,0L,0x174766E9L,0x75A2BCECL,5L,-3L},{0x90C80330L,0x30A1C65AL,-1L,-1L,0xC426D9B6L,0x7C4D5170L,0L}},{{0x355FD620L,0x15B76557L,0L,0xE8484AE1L,0UL,-1L,0x4AL},{1UL,0UL,-10L,9L,0UL,0L,-1L},{0x05281427L,0xD9EDA7F5L,0xD5B8L,1L,4294967295UL,0x2805B864L,0xDAL},{0x28A59DF1L,1UL,0xE29AL,0x83D0C84FL,0UL,0L,0x6FL},{0x355FD620L,0x15B76557L,0L,0xE8484AE1L,0UL,-1L,0x4AL},{0x78E41D21L,0x82F73659L,5L,0L,0xE727C56BL,1L,9L},{0x3BC2DCCCL,1UL,0x82EFL,-1L,0x9375C22CL,8L,0xDFL},{0x34E4B278L,0x8D6D6A3BL,7L,0xB8ED35A6L,1UL,-9L,0xB6L},{4294967286UL,0xED9AD4CCL,0x7D8CL,-7L,0x7C9FA413L,1L,0xC8L}},{{1UL,2UL,0xB007L,0x50A6E0B6L,0UL,0x47AF1B09L,1L},{1UL,4294967295UL,1L,0x9BB77632L,0xB0114CC7L,9L,-8L},{0xF195967EL,4294967293UL,1L,4L,4294967295UL,0x6BFA21E5L,0xBAL},{4UL,0x35C0C628L,0x197FL,0x8A8E41DAL,0x8A560CC0L,1L,0x13L},{0x9B3DF4F1L,4294967292UL,7L,-5L,1UL,0L,0xF3L},{0x31755331L,1UL,-1L,0x690B03CAL,0UL,-2L,3L},{1UL,0xD83BD36DL,-1L,-2L,0xFDB65352L,-7L,0L},{4294967288UL,1UL,-1L,1L,0xB88C5F52L,0x352AD078L,0xC3L},{6UL,0xC30AF972L,1L,0x9A7213BFL,0xB5C33DACL,0x3CB9B89BL,-1L}}}};
    char l_823 = 0x24L;
    char *l_831 = &g_223.f6;
    char *l_832 = &g_244.f6;
    int *l_838 = &g_68[2];
    unsigned char l_845[9];
    unsigned char l_854 = 251UL;
    short **l_861 = &g_266[1];
    int l_899 = 0L;
    char **l_900 = &l_832;
    unsigned l_915 = 1UL;
    short l_972 = (-1L);
    int i, j, k;
    for (i = 0; i < 9; i++)
        l_845[i] = 0xCAL;
    l_822[4][0][1] = func_2((((*l_6) = g_5) | (g_5 && (safe_rshift_func_int16_t_s_u(((safe_div_func_uint16_t_u_u((safe_div_func_uint8_t_u_u(g_5, (safe_add_func_int16_t_s_s(l_16, (l_16 != ((*g_268) = func_17(func_19(func_25(((safe_rshift_func_uint16_t_u_s(func_33(g_5, &l_16), 8)) == ((&g_143 != (void*)0) | g_223.f1)), g_244, g_245, g_244, g_244.f1), l_16, g_420, l_16, &l_16)))))))), l_16)) || 4L), 3)))), g_223.f6);

    ;

    ;
    (*l_6) = l_823;
    if ((safe_div_func_int16_t_s_s((0UL ^ 0x2912L), (safe_add_func_int16_t_s_s((safe_mod_func_uint8_t_u_u(((*l_6) != g_64.f1), ((*l_832) ^= (!((*l_831) = ((*l_6) <= (*l_6))))))), (*l_6))))))
    {
        short l_833 = (-4L);
        short *l_835 = &g_646;
        int **l_836 = &g_245;
        int *l_837 = &g_94.f3;
        int l_839 = 4L;
        unsigned short **l_875 = (void*)0;
        struct S0 l_878 = {4294967295UL,0x8391E3F4L,-2L,-8L,1UL,0xE55C5FF9L,0xC1L};
        unsigned short l_890 = 4UL;
        (*l_838) = (((l_833 < 0x49L) < g_834) == func_47(&g_46, ((*l_835) = (l_833 == g_244.f3)), func_41(l_838, (*l_838), &g_68[1]), g_64.f5, l_839));
        if ((+((*l_6) = (*l_6))))
        {
            char l_840[5][10][5] = {{{8L,8L,0x04L,0x8AL,1L},{(-8L),0L,1L,0x8AL,(-1L)},{0xF0L,0x36L,0x5EL,0xF0L,1L},{(-5L),0x05L,0x44L,1L,0x07L},{(-8L),0x36L,(-1L),(-9L),0x35L},{(-1L),0L,0x5EL,0L,0x35L},{0x8AL,8L,0xE6L,(-5L),0x07L},{8L,0x7DL,(-10L),0x8AL,1L},{0xB4L,0L,0xE6L,0xA7L,(-1L)},{(-5L),0x5EL,0x5EL,(-5L),1L}},{{(-5L),(-1L),(-1L),1L,0x2BL},{0xB4L,0x36L,0x44L,(-1L),0x35L},{8L,0x04L,0x5EL,1L,(-4L)},{0x8AL,0x7DL,1L,(-5L),0x2BL},{(-1L),0x7DL,0x04L,0xA7L,1L},{(-8L),0x04L,0xE6L,0x8AL,(-5L)},{0x05L,0x03L,1L,0x05L,0xA4L},{0x95L,0xB3L,0x65L,(-10L),0xC6L},{8L,2L,0x65L,0L,(-1L)},{0x44L,(-3L),1L,0x04L,0xE3L}},{{1L,2L,2L,0x95L,0xC6L},{0x44L,2L,0xD0L,0xE6L,0L},{8L,(-3L),1L,0xE6L,0x90L},{0x95L,0x03L,2L,0x95L,0xA4L},{0x05L,0x1AL,0x65L,0x04L,0x66L},{8L,0x03L,1L,0L,0xE3L},{(-1L),(-3L),2L,(-10L),0xE3L},{0xE6L,2L,2L,0x05L,0x66L},{0x44L,2L,(-9L),0xE6L,0xA4L},{0x37L,(-3L),2L,1L,0x90L}},{{0x05L,2L,2L,0x05L,0L},{0x05L,0xB3L,1L,0x04L,0xC6L},{0x37L,0x03L,0x65L,0L,0xE3L},{0x44L,0xD0L,2L,0x04L,(-1L)},{0xE6L,2L,1L,0x05L,0xC6L},{(-1L),(-1L),0L,0x9BL,0x83L},{0xE3L,0L,0x06L,(-3L),0xD0L},{0x90L,0xA7L,0x8AL,0x90L,0x83L},{0xEFL,0L,7L,0x66L,0x03L},{0xE3L,0x49L,7L,0xCCL,0x65L}},{{1L,(-6L),0x8AL,0xC6L,8L},{0x9BL,(-1L),0x06L,0xEFL,0x03L},{1L,6L,0L,(-3L),2L},{0xE3L,(-6L),(-8L),(-3L),(-3L)},{0xEFL,0xA7L,0x49L,0xEFL,0x83L},{0x90L,0L,7L,0xC6L,2L},{0xE3L,0xA7L,(-9L),0xCCL,8L},{0xFAL,(-6L),0x49L,0x66L,8L},{(-3L),6L,0x06L,0x90L,2L},{1L,(-1L),5L,(-3L),0x83L}}};
            unsigned l_841 = 4UL;
            struct S0 l_843 = {0UL,4294967291UL,0xD54DL,1L,0x29A5CE71L,2L,0x9BL};
            unsigned l_892 = 4294967295UL;
            int i, j, k;
            for (g_94.f2 = 1; (g_94.f2 <= 8); g_94.f2 += 1)
            {
                int *l_844 = &g_94.f3;
                int l_866 = 0x3F99BFAEL;
                short l_893 = (-2L);
                for (g_64.f3 = 8; (g_64.f3 >= 0); g_64.f3 -= 1)
                {
                    int i;
                    (*l_837) = g_61[g_94.f2];
                    if (l_840[2][9][0])
                        break;
                    if (l_841)
                        continue;
                }
            }
        }
        else
        {
            for (g_64.f1 = 0; (g_64.f1 <= 4); g_64.f1 += 1)
            {
                int i;
                (*l_837) |= g_68[g_64.f1];
                for (g_94.f1 = 0; (g_94.f1 <= 3); g_94.f1 += 1)
                {
                    unsigned **l_895 = &g_420;
                    unsigned ***l_894 = &l_895;
                    (*l_837) ^= (*l_838);
                    (*l_894) = &g_420;
                    for (g_223.f3 = 0; (g_223.f3 <= 3); g_223.f3 += 1)
                    {
                        struct S0 *l_896 = &l_878;
                        struct S0 *l_897 = &l_822[4][0][1];
                        (*l_897) = ((*l_896) = l_822[8][0][3]);
                    }
                }
            }
        }
    }
    else
    {
        g_245 = &g_7;

        ;
    }


    for (g_64.f6 = 1; (g_64.f6 >= 0); g_64.f6 -= 1)
    {
        int **l_898 = &g_45;
        char **l_902 = &l_832;
        char **l_903 = (void*)0;
        struct S0 l_910 = {1UL,3UL,0xC320L,-1L,0xBC894680L,9L,0xC7L};
        unsigned char ***l_942 = &g_413;
        char l_952 = 2L;
        short ***l_953 = &l_861;
        int l_994 = 0x35F2CFACL;
        int i;
        (*l_898) = &g_68[g_64.f6];

        ;
        for (g_143 = 0; (g_143 <= 1); g_143 += 1)
        {
            char **l_904 = &l_832;
            int *l_922 = (void*)0;
            unsigned l_923 = 4294967295UL;
            struct S0 l_924 = {4294967295UL,4294967294UL,0xDC38L,0xB2484318L,4294967289UL,0L,0xF3L};
            unsigned l_988 = 4294967293UL;
            char ****l_990 = &g_462;
            short l_997 = (-8L);
            int i;
            if (g_68[(g_143 + 3)])
                break;
            if (l_899)
            {
                char ***l_901[5][1][10] = {{{&l_900,(void*)0,(void*)0,&l_900,(void*)0,&l_900,&l_900,(void*)0,&l_900,(void*)0}},{{&l_900,&l_900,(void*)0,&l_900,&l_900,&l_900,(void*)0,&l_900,&l_900,&l_900}},{{&l_900,&l_900,&l_900,(void*)0,&l_900,(void*)0,&l_900,&l_900,&l_900,&l_900}},{{&l_900,&l_900,&l_900,(void*)0,(void*)0,&l_900,&l_900,&l_900,&l_900,(void*)0}},{{(void*)0,&l_900,&l_900,(void*)0,&l_900,(void*)0,&l_900,(void*)0,&l_900,&l_900}}};
                struct S0 l_908 = {1UL,0xAAB1DFF3L,5L,0x64BB5EC0L,0xA8A06967L,0xE734BEF4L,0x62L};
                int i, j, k;
                l_904 = (l_903 = (l_902 = l_900));

                ;
                for (g_64.f3 = 4; (g_64.f3 >= 1); g_64.f3 -= 1)
                {
                    char l_905[3];
                    int i;
                    for (i = 0; i < 3; i++)
                        l_905[i] = 0x39L;
                }
            }
            else
            {
                int i;
                g_68[(g_64.f6 + 2)] &= 0x581EFF0AL;
                (**l_898) = g_68[(g_143 + 3)];
                if ((**l_898))
                    break;
                (*l_898) = &g_68[2];
            }
            if ((**l_898))
            {
                unsigned l_925 = 0x05EAF022L;
                if (((*l_838) ^ l_923))
                {
                    g_830[1][3] = (void*)0;
                }
                else
                {
                    l_924 = g_94;
                }
                (*g_45) |= l_924.f3;
                (*l_898) = func_41(&l_16, (l_925 = 0x4AEAL), g_926);

                ;
                return l_925;
            }
            else
            {
                unsigned l_931 = 0x9A2EF082L;
                int l_932 = 0x9C571BB9L;
                (**l_898) |= ((*g_926) = (safe_mod_func_int32_t_s_s((safe_rshift_func_int8_t_s_s((0xD073L >= (l_931 = (*l_6))), 6)), l_932)));
            }
            for (g_244.f3 = 0; (g_244.f3 <= 1); g_244.f3 += 1)
            {
                char l_935 = 0xA5L;
                short l_968 = 0xBC53L;
                int l_971[5][1];
                struct S0 l_985 = {0x9BFFED2BL,0xE907EDACL,3L,4L,0xF3367885L,-1L,-1L};
                unsigned l_992 = 0x19DB9283L;
                int i, j;
                for (i = 0; i < 5; i++)
                {
                    for (j = 0; j < 1; j++)
                        l_971[i][j] = (-9L);
                }
            }
        }

        ;
    }
    return (*l_6);
}







static struct S0 func_2(unsigned p_3, unsigned short p_4)
{
    char l_677 = 9L;
    unsigned short *l_678 = &g_61[4];
    int l_681 = 0x3115AB6AL;
    int l_684 = 8L;
    int *l_685 = &g_7;
    unsigned l_686 = 0x8E2D593AL;
    int l_692[9] = {0xC7C0A323L,0xC7C0A323L,0xC7C0A323L,0xC7C0A323L,0xC7C0A323L,0xC7C0A323L,0xC7C0A323L,0xC7C0A323L,0xC7C0A323L};
    unsigned char ****l_708 = &g_412;
    int l_742 = 4L;
    unsigned char l_777 = 255UL;
    char **l_811 = (void*)0;
    char ***l_810 = &l_811;
    unsigned char l_816 = 247UL;
    unsigned l_817 = 0x2387B2F1L;
    struct S0 l_818 = {0x41A6FA26L,0x4B1A72D6L,-1L,0xE8B46F4AL,0x9C74F21FL,0x52359B55L,0x9CL};
    struct S0 *l_819 = (void*)0;
    struct S0 *l_820[10][2][6] = {{{&g_223,&g_244,&g_223,&g_64,&g_64,&l_818},{(void*)0,&g_223,&g_223,&l_818,&l_818,&g_223}},{{&g_223,&g_223,&g_244,(void*)0,&g_64,&l_818},{&g_223,&g_244,&g_64,&g_244,&g_244,&g_244}},{{&g_64,&g_223,&g_64,&l_818,&g_223,&l_818},{(void*)0,&l_818,&g_244,&g_94,&g_223,&g_223}},{{&g_94,&g_223,&g_223,&g_94,&g_244,&l_818},{(void*)0,&l_818,&g_223,&l_818,&g_64,&g_223}},{{&g_64,&g_244,&g_244,&g_244,&g_64,&g_244},{&g_223,&l_818,&g_64,(void*)0,(void*)0,&g_244}},{{&g_244,&g_244,&l_818,&l_818,&g_244,&g_244},{&l_818,&g_223,&g_223,(void*)0,&g_244,&g_94}},{{&g_244,&g_64,&g_244,&g_244,&g_244,&g_64},{&g_244,&g_94,&g_244,(void*)0,&g_223,&g_223}},{{&l_818,&g_244,&g_244,&l_818,&l_818,&g_244},{&g_244,&g_244,(void*)0,&l_818,&g_223,&l_818}},{{&g_64,&g_94,(void*)0,(void*)0,&g_244,(void*)0},{(void*)0,&g_64,(void*)0,&g_223,&g_244,&l_818}},{{&g_223,&g_223,(void*)0,&g_64,&g_244,&g_244},{&g_64,&g_244,&g_244,&g_64,(void*)0,&g_223}}};
    struct S0 l_821 = {0UL,1UL,0xC2D4L,0xC107FDA3L,0x7701755CL,0x889524EBL,4L};
    int i, j, k;
    (*l_685) &= ((*g_45) = (safe_lshift_func_uint16_t_u_s(((((*l_678) ^= (safe_mod_func_uint32_t_u_u((~(*g_420)), (0x1CL & l_677)))) | p_4) || (4294967291UL != (((safe_div_func_uint16_t_u_u(l_677, l_677)) <= (l_681 |= g_94.f3)) ^ (safe_add_func_uint16_t_u_u(p_3, l_677))))), l_684)));
    if ((*l_685))
    {
        unsigned char l_691[8] = {0xFBL,0xFBL,0xFBL,0xFBL,0xFBL,0xFBL,0xFBL,0xFBL};
        struct S0 *l_703 = (void*)0;
        unsigned char ****l_706[10];
        int *l_731 = &g_94.f3;
        struct S0 l_740 = {0x24D9D386L,0UL,0xE3B0L,0x665BC636L,0UL,-6L,0L};
        unsigned short l_747 = 0x47D4L;
        short *l_748 = &g_244.f2;
        int *l_793 = &g_7;
        int i;
        for (i = 0; i < 10; i++)
            l_706[i] = &g_412;
        l_685 = (void*)0;

        ;
        if (l_686)
        {
            int *l_689 = &g_223.f3;
            for (g_94.f1 = (-12); (g_94.f1 <= 9); g_94.f1 = safe_add_func_uint32_t_u_u(g_94.f1, 6))
            {
                int *l_690 = &g_64.f3;
                g_45 = l_689;

                ;
                l_691[3] = ((*l_690) ^= (*g_45));
                if (l_692[7])
                    break;
            }

            ;
            for (g_64.f5 = (-19); (g_64.f5 != 14); g_64.f5++)
            {
                struct S0 *l_695 = &g_223;
                (*l_695) = g_64;
            }
            if (p_3)
            {
                (*g_45) ^= (safe_lshift_func_uint16_t_u_u(p_3, (safe_div_func_uint32_t_u_u((*g_420), p_4))));
            }
            else
            {
                int **l_700[3][5][2] = {{{&l_689,(void*)0},{&l_689,&l_689},{&l_689,(void*)0},{&l_689,&l_689},{&l_689,(void*)0}},{{&l_689,&l_689},{&l_689,(void*)0},{&l_689,&l_689},{&l_689,(void*)0},{&l_689,&l_689}},{{&l_689,(void*)0},{&l_689,&l_689},{&l_689,(void*)0},{&l_689,&l_689},{&l_689,(void*)0}}};
                unsigned char *****l_707 = &l_706[4];
                char *l_709 = &g_244.f6;
                unsigned *l_725 = (void*)0;
                int i, j, k;
                (*g_45) |= ((((((p_4 || p_4) > l_691[6]) ^ l_691[2]) & 0x8AC0L) == p_4) && l_691[1]);
                l_685 = &g_159;

                ;
                for (g_94.f0 = 16; (g_94.f0 >= 50); g_94.f0 = safe_add_func_int32_t_s_s(g_94.f0, 9))
                {
                    (*l_685) = (l_703 != &g_223);
                    if ((*g_45))
                        break;
                }
                if (func_47(&g_159, (*l_685), &g_46, (g_64.f6 || (+p_3)), ((p_3 >= (*g_45)) == ((safe_lshift_func_int16_t_s_u((0x9DL && ((*l_709) = ((((*l_707) = l_706[4]) == l_708) < 0xCAL))), (*l_685))) || 0xEBL))))
                {
                    char l_719 = 2L;
                    short **l_726 = &g_268;
                    int *l_730[9][10] = {{&g_244.f3,&l_681,&g_64.f3,&g_159,&g_68[1],&g_7,&g_223.f3,&g_68[1],&g_244.f3,(void*)0},{&g_68[1],&l_681,&g_68[2],&g_223.f3,&g_7,&g_64.f3,&g_223.f3,&g_94.f3,(void*)0,&g_94.f3},{(void*)0,&g_7,&g_244.f3,&g_68[1],(void*)0,&g_244.f3,&g_7,(void*)0,&g_68[0],&g_68[1]},{&g_64.f3,&g_223.f3,&g_223.f3,(void*)0,&g_68[0],&g_68[0],(void*)0,&g_223.f3,&g_223.f3,&g_64.f3},{(void*)0,&g_244.f3,(void*)0,&g_68[2],&g_159,(void*)0,&g_244.f3,&g_68[0],&l_681,&l_681},{&g_223.f3,&g_68[4],&l_681,&g_244.f3,&g_159,&g_223.f3,(void*)0,(void*)0,&g_64.f3,&g_64.f3},{&g_159,&g_244.f3,&g_223.f3,(void*)0,&g_68[0],&g_68[2],&g_64.f3,&g_7,&g_7,&g_68[1]},{(void*)0,&g_223.f3,&g_68[1],&g_94.f3,(void*)0,&g_223.f3,&g_68[4],&g_223.f3,(void*)0,&g_94.f3},{&g_64.f3,&g_244.f3,&g_64.f3,&g_68[0],&g_7,&g_244.f3,&g_68[0],&g_244.f3,&g_68[4],(void*)0}};
                    int *l_732 = (void*)0;
                    int i, j;
                    if (((*l_685) = ((-1L) && ((*g_45) ^= ((safe_lshift_func_uint8_t_u_s(((safe_lshift_func_uint8_t_u_u(((*l_685) == ((safe_unary_minus_func_uint8_t_u(p_4)) >= ((safe_div_func_int8_t_s_s(((l_719 || (((safe_div_func_int16_t_s_s((safe_unary_minus_func_uint32_t_u((safe_rshift_func_uint8_t_u_s(((void*)0 != l_725), 0)))), (+(*l_685)))) & (((*l_726) = (void*)0) == (void*)0)) || p_4)) || g_7), 0x50L)) != p_4))), p_4)) == 0x30L), l_719)) <= p_3)))))
                    {
                        struct S0 l_727 = {4294967290UL,1UL,0L,0xDD6F2C6BL,0x26A61E3BL,0x71592AA3L,0xFEL};
                        return l_727;
                    }
                    else
                    {
                        struct S0 l_728 = {4294967287UL,0UL,0x345DL,-1L,1UL,0L,0xF6L};
                        int l_729 = 0x103E2217L;
                        int *l_733 = (void*)0;
                        (*l_685) |= (((l_719 != (*l_689)) == (*g_420)) | (l_719 != l_719));
                        l_733 = l_732;
                    }

                    ;
                    if (p_4)
                    {
                        short *l_734 = &g_244.f2;
                        short *l_735 = &g_64.f2;
                        unsigned char ***l_738 = &g_413;
                        (*g_45) = ((g_244.f0 > (((*l_735) = ((*l_734) = (*l_731))) >= ((**l_707) != (*l_708)))) == (*g_420));
                        (*l_689) = ((p_4 ^ (-1L)) >= ((((-3L) != (safe_div_func_int8_t_s_s(((void*)0 != l_738), (p_4 && 65534UL)))) & (((*l_689) | ((*l_685) <= (*l_731))) && p_3)) | p_3));
                    }
                    else
                    {
                        unsigned char *l_739 = (void*)0;
                        int *l_741 = (void*)0;
                        short *l_749 = (void*)0;
                        unsigned char *****l_752[1];
                        unsigned char ******l_753[6] = {&l_752[0],&l_752[0],&l_752[0],&l_752[0],&l_752[0],&l_752[0]};
                        int i;
                        for (i = 0; i < 1; i++)
                            l_752[i] = &g_751;
                        (*l_685) = ((void*)0 == l_739);
                        l_731 = func_41(&g_159, p_4, l_741);

                        ;
                        ;
                        g_68[1] &= ((p_4 | (g_125 |= func_36(l_742, l_732, (safe_div_func_int16_t_s_s(p_4, (((safe_div_func_int8_t_s_s(l_747, ((((*l_726) = l_748) != l_749) && (g_750 == (g_755 = (g_754 = l_752[0])))))) && 255UL) ^ (*g_45))))))) & (*l_689));

                        ;
                        ;
                    }

                    ;
                    ;
                }
                else
                {
                    (*g_45) = (*g_45);
                }

                ;
                ;
            }

            ;
            ;
            ;
            for (g_46 = 0; (g_46 <= 7); g_46 += 1)
            {
                unsigned short **l_757 = (void*)0;
                unsigned short ***l_756 = &l_757;
                int **l_759 = (void*)0;
                int **l_760 = &g_45;
                (*l_756) = &l_678;

                ;
                for (g_223.f2 = 7; (g_223.f2 >= 2); g_223.f2 -= 1)
                {
                    struct S0 l_758 = {0x12934942L,0x81E69E89L,0xE8A1L,-1L,0x090127D7L,0xAF9C42F9L,1L};
                    return l_758;
                }
                (*l_760) = l_689;

                ;
                for (l_740.f3 = 5; (l_740.f3 >= 2); l_740.f3 -= 1)
                {
                    if (p_4)
                        break;
                    for (g_244.f0 = 0; (g_244.f0 <= 0); g_244.f0 += 1)
                    {
                        l_685 = (void*)0;

                        ;
                    }
                    (*l_689) = (-1L);
                }
            }
        }
        else
        {
            unsigned char **l_768 = &g_414;
            int l_769[10][10] = {{0x03A9E512L,0x03A9E512L,1L,1L,0x03A9E512L,0x03A9E512L,1L,1L,0x03A9E512L,0x03A9E512L},{0x03A9E512L,1L,1L,0x03A9E512L,0x03A9E512L,1L,1L,0x03A9E512L,0x03A9E512L,1L},{0x03A9E512L,0x03A9E512L,1L,1L,0x03A9E512L,0x03A9E512L,1L,1L,0x03A9E512L,0x03A9E512L},{0x03A9E512L,1L,1L,0x03A9E512L,0x03A9E512L,1L,1L,0x03A9E512L,0x03A9E512L,1L},{0x03A9E512L,0x03A9E512L,1L,1L,0x03A9E512L,0x03A9E512L,1L,1L,0x03A9E512L,0x03A9E512L},{0x03A9E512L,1L,1L,0x03A9E512L,0x03A9E512L,1L,1L,0x03A9E512L,0x03A9E512L,1L},{0x03A9E512L,0x03A9E512L,1L,1L,0x03A9E512L,0x03A9E512L,1L,1L,0x03A9E512L,0x03A9E512L},{0x03A9E512L,1L,1L,0x03A9E512L,0x03A9E512L,1L,1L,0x03A9E512L,0x03A9E512L,1L},{0x03A9E512L,0x03A9E512L,1L,1L,0x03A9E512L,0x03A9E512L,1L,1L,0x03A9E512L,0x03A9E512L},{0x03A9E512L,1L,1L,0x03A9E512L,0x03A9E512L,1L,1L,0x03A9E512L,0x03A9E512L,1L}};
            int l_770 = 7L;
            struct S0 l_783 = {0x8B15592CL,0x92F4CDA5L,0x4CFCL,7L,0xD607FF45L,-1L,0x2EL};
            int *l_786 = (void*)0;
            int *l_787[3][2] = {{&g_7,(void*)0},{&g_7,&g_7},{(void*)0,&g_7}};
            int **l_788 = &l_685;
            int **l_789 = &l_787[0][1];
            int i, j;
            for (g_123 = 19; (g_123 <= 1); g_123 = safe_sub_func_int32_t_s_s(g_123, 2))
            {
                unsigned l_767[2][1][7];
                int l_771 = 0xA8F6C36AL;
                short *l_776 = &g_94.f2;
                int **l_778 = (void*)0;
                int **l_779[9];
                struct S0 l_780 = {0xDA01D334L,0xDD073FE2L,4L,4L,4294967295UL,2L,-8L};
                struct S0 *l_781 = (void*)0;
                struct S0 *l_782[3];
                int i, j, k;
                for (i = 0; i < 2; i++)
                {
                    for (j = 0; j < 1; j++)
                    {
                        for (k = 0; k < 7; k++)
                            l_767[i][j][k] = 0xD5D967B2L;
                    }
                }
                for (i = 0; i < 9; i++)
                    l_779[i] = &l_731;
                for (i = 0; i < 3; i++)
                    l_782[i] = &g_64;
                g_245 = func_41(&g_68[3], (safe_add_func_int16_t_s_s((safe_div_func_uint16_t_u_u(l_767[1][0][5], ((*l_748) = (*g_268)))), (((0x305CL && (l_768 == ((***g_754) = (*g_412)))) <= (l_771 = (l_769[4][8] <= (l_770 = p_4)))) >= (safe_mod_func_int16_t_s_s(((*l_776) = ((safe_lshift_func_int8_t_s_s(((*l_731) >= 0xBB1CL), 1)) < 0x2A606DD9L)), l_777))))), &g_46);

                ;
                l_783 = l_780;
            }

            ;

            for (g_223.f5 = 0; g_223.f5 < 10; g_223.f5 += 1)
            {
                for (l_684 = 0; l_684 < 10; l_684 += 1)
                {
                    l_769[g_223.f5][l_684] = 0x62E4A05CL;
                }
            }
            l_740.f3 ^= ((*g_45) |= (safe_lshift_func_uint8_t_u_s(1UL, 7)));
            (*l_789) = ((*l_788) = &l_681);

            ;

        }

        ;

        ;
        ;
        ;
        for (g_244.f5 = (-9); (g_244.f5 == (-13)); g_244.f5 = safe_sub_func_int32_t_s_s(g_244.f5, 1))
        {
            int l_792 = (-1L);
            if (l_792)
                break;
        }
        (*l_793) |= (p_3 && func_33(p_4, &l_681));

        ;
    }
    else
    {
        unsigned l_794 = 0xAC020830L;
        unsigned short **l_799 = &l_678;
        unsigned char ***l_801 = &g_413;
        char **l_809 = (void*)0;
        char ***l_808[5];
        int i;
        for (i = 0; i < 5; i++)
            l_808[i] = &l_809;
        l_794 |= ((*l_685) ^ g_244.f0);
        for (l_777 = 0; (l_777 > 1); ++l_777)
        {
            int *l_797 = &g_244.f3;
            int **l_798 = &g_45;
            unsigned short ***l_800 = &l_799;
            g_245 = ((*l_798) = l_797);

            ;
            ;
            (*l_800) = l_799;
            (*l_797) = (l_801 == l_801);
            (*g_245) = ((0xF3L <= (0x151BL || (p_4 != (+(p_4 && (safe_lshift_func_int16_t_s_u((safe_mod_func_uint8_t_u_u((*l_797), (safe_add_func_int8_t_s_s(((((l_808[2] == l_810) == (safe_add_func_uint32_t_u_u((safe_div_func_uint8_t_u_u(p_4, (l_816 || 0x19L))), (*g_420)))) || l_794) >= p_4), (*l_685))))), g_244.f5))))))) == l_817);
        }

        ;
    }

    ;

    ;
    ;
    l_821 = l_818;
    return g_64;
}







static short func_17(int * p_18)
{
    struct S0 l_479 = {0xA8DD4B3FL,0x6788AE86L,0L,-2L,4294967295UL,0L,0xDBL};
    int l_486 = 0x84AE3771L;
    unsigned char l_547[4][10] = {{250UL,1UL,0xADL,1UL,250UL,250UL,1UL,0xADL,1UL,250UL},{250UL,1UL,0xADL,1UL,250UL,250UL,1UL,0xADL,1UL,250UL},{250UL,1UL,0xADL,1UL,250UL,250UL,1UL,0xADL,1UL,250UL},{250UL,1UL,0xADL,1UL,250UL,250UL,1UL,0xADL,1UL,250UL}};
    int l_548 = 0x23BF54EFL;
    int *l_610 = &g_46;
    char l_621 = 9L;
    int **l_672 = &l_610;
    int i, j;
    for (g_223.f0 = (-25); (g_223.f0 == 38); ++g_223.f0)
    {
        unsigned char l_483[5][2] = {{0x39L,0x60L},{0x60L,0x39L},{0x60L,0x60L},{0x39L,0x60L},{0x60L,0x39L}};
        int l_488 = (-2L);
        struct S0 l_500 = {0xA1E393B0L,0x8FD97F93L,3L,0x28B368CAL,0x685C06D0L,1L,1L};
        char *l_512 = &g_64.f6;
        char **l_511 = &l_512;
        int **l_518 = &g_245;
        int l_521 = 0x81FAA47DL;
        unsigned l_524 = 4294967294UL;
        int l_525 = 0xCDE539CDL;
        unsigned char l_600[2];
        unsigned short l_606 = 65533UL;
        struct S0 l_607[3][1][10] = {{{{0xD3D898A2L,0xBF48C2E7L,-1L,0xC26875A8L,4294967286UL,1L,-6L},{0UL,4294967295UL,0xAFCBL,0L,0UL,0xAFB5588AL,0x3EL},{0x44850A0EL,0xD0963241L,0L,1L,0xB4892A85L,0x1D058AC5L,-3L},{1UL,1UL,-1L,0xC43F4E20L,0x18AD95EDL,9L,0L},{0x44850A0EL,0xD0963241L,0L,1L,0xB4892A85L,0x1D058AC5L,-3L},{0UL,4294967295UL,0xAFCBL,0L,0UL,0xAFB5588AL,0x3EL},{0xD3D898A2L,0xBF48C2E7L,-1L,0xC26875A8L,4294967286UL,1L,-6L},{2UL,0x513BB585L,8L,0x015FB9E3L,0xC061C9E1L,0x3A566B73L,0x2EL},{1UL,0xE3CFAD82L,0x6272L,2L,1UL,0L,0x13L},{0UL,1UL,-2L,-1L,4294967295UL,-3L,0xBBL}}},{{{2UL,0x513BB585L,8L,0x015FB9E3L,0xC061C9E1L,0x3A566B73L,0x2EL},{0UL,0xF759D491L,-1L,0x8177B167L,4294967295UL,0x5D4BF706L,0x4DL},{1UL,0xC0360886L,0xCC5DL,0x8F263B85L,0UL,0xBBFECA09L,-1L},{0UL,0x71A9E01FL,-5L,0xC58282E9L,1UL,0xA28A6732L,0L},{0xD3D898A2L,0xBF48C2E7L,-1L,0xC26875A8L,4294967286UL,1L,-6L},{0xD3D898A2L,0xBF48C2E7L,-1L,0xC26875A8L,4294967286UL,1L,-6L},{0UL,0x71A9E01FL,-5L,0xC58282E9L,1UL,0xA28A6732L,0L},{1UL,0xC0360886L,0xCC5DL,0x8F263B85L,0UL,0xBBFECA09L,-1L},{0UL,0xF759D491L,-1L,0x8177B167L,4294967295UL,0x5D4BF706L,0x4DL},{2UL,0x513BB585L,8L,0x015FB9E3L,0xC061C9E1L,0x3A566B73L,0x2EL}}},{{{0xD6699DA8L,0x764BFB68L,-5L,0xC35BE258L,0x22AED1B8L,0xAC728E87L,1L},{0UL,0xF759D491L,-1L,0x8177B167L,4294967295UL,0x5D4BF706L,0x4DL},{1UL,0xE3CFAD82L,0x6272L,2L,1UL,0L,0x13L},{0x15407B8FL,0x006A4FE9L,0L,0x4C17AD9AL,9UL,1L,0xC7L},{1UL,1UL,-1L,0xC43F4E20L,0x18AD95EDL,9L,0L},{0UL,1UL,-2L,-1L,4294967295UL,-3L,0xBBL},{0xD3D898A2L,0xBF48C2E7L,-1L,0xC26875A8L,4294967286UL,1L,-6L},{0UL,1UL,-2L,-1L,4294967295UL,-3L,0xBBL},{1UL,1UL,-1L,0xC43F4E20L,0x18AD95EDL,9L,0L},{0xD6699DA8L,0x764BFB68L,-5L,0xC35BE258L,0x22AED1B8L,0xAC728E87L,1L}}}};
        char ***l_611[9][5] = {{&l_511,&l_511,&l_511,&l_511,&l_511},{(void*)0,(void*)0,(void*)0,&l_511,&l_511},{&l_511,(void*)0,(void*)0,&l_511,(void*)0},{&l_511,(void*)0,&l_511,(void*)0,&l_511},{(void*)0,&l_511,(void*)0,(void*)0,&l_511},{&l_511,&l_511,(void*)0,(void*)0,(void*)0},{&l_511,&l_511,&l_511,&l_511,&l_511},{(void*)0,(void*)0,(void*)0,&l_511,&l_511},{&l_511,(void*)0,(void*)0,&l_511,(void*)0}};
        int *l_641 = (void*)0;
        int i, j, k;
        for (i = 0; i < 2; i++)
            l_600[i] = 0UL;
        for (g_223.f5 = 15; (g_223.f5 >= 4); g_223.f5 = safe_sub_func_uint16_t_u_u(g_223.f5, 7))
        {
            int *l_478 = &g_68[2];
            unsigned *l_487[7] = {&g_94.f0,&g_94.f0,&g_94.f0,&g_94.f0,&g_94.f0,&g_94.f0,&g_94.f0};
            int l_489 = 0L;
            short l_496 = (-4L);
            int **l_507 = &g_245;
            int **l_508 = &g_45;
            char **l_513 = &l_512;
            int i;
        }
        if (func_36(l_479.f2, &g_68[1], l_479.f4))
        {
            (*g_45) &= 0x25C6EDAEL;
        }
        else
        {
            unsigned l_526 = 4294967290UL;
            int *l_532[5][6] = {{&l_525,&l_521,&l_521,&l_525,(void*)0,&g_223.f3},{&g_223.f3,&l_525,&l_525,&l_525,&g_223.f3,&l_486},{&l_525,&g_223.f3,&l_486,&l_486,&g_223.f3,&l_525},{&l_521,&l_525,(void*)0,&g_223.f3,(void*)0,&l_525},{(void*)0,&l_521,&l_486,&l_525,&l_525,&l_486}};
            char **l_536 = (void*)0;
            unsigned char l_562 = 0xCFL;
            unsigned char ***l_580 = (void*)0;
            struct S0 *l_599 = &g_244;
            int i, j;
            if (l_526)
            {
                short *l_529 = &g_94.f2;
                short l_530 = 0x5069L;
                (*g_45) |= (*p_18);
                for (l_524 = 1; (l_524 <= 4); l_524 += 1)
                {
                    int l_531 = 0x6B80F765L;
                    int i;
                    (*g_45) ^= g_68[l_524];
                }
            }
            else
            {
                unsigned char l_535[3][7] = {{0x6FL,0x6FL,0xD7L,0xD7L,0x6FL,0x6FL,0xD7L},{0xF9L,0UL,0xF9L,0UL,0xF9L,0UL,0xF9L},{0x6FL,0xD7L,0xD7L,0x6FL,0x6FL,0xD7L,0xD7L}};
                struct S0 *l_537[8] = {&g_223,&g_64,&g_64,&g_223,&g_64,&g_64,&g_223,&g_64};
                int l_550 = 0x82B0AB12L;
                int *l_565 = &l_479.f3;
                int i, j;
                for (l_500.f3 = 0; (l_500.f3 > 21); l_500.f3 = safe_add_func_int32_t_s_s(l_500.f3, 4))
                {
                    char l_542[3][1];
                    unsigned short *l_561[7] = {&g_61[3],&g_61[3],&g_61[8],&g_61[3],&g_61[3],&g_61[8],&g_61[3]};
                    int i, j;
                    for (i = 0; i < 3; i++)
                    {
                        for (j = 0; j < 1; j++)
                            l_542[i][j] = 0x9AL;
                    }
                    if ((l_535[2][4] ^ 0x82L))
                    {
                        l_511 = l_536;

                        ;
                        if ((*p_18))
                            continue;
                    }
                    else
                    {
                        struct S0 **l_538 = (void*)0;
                        struct S0 **l_539 = &l_537[5];
                        int l_545 = 0x0CF64BA9L;
                        short *l_546 = &l_500.f2;
                        short *l_549[10] = {&g_64.f2,&g_64.f2,&g_64.f2,&g_64.f2,&g_64.f2,&g_64.f2,&g_64.f2,&g_64.f2,&g_64.f2,&g_64.f2};
                        int i;
                        (*l_539) = l_537[5];
                        (*p_18) = ((safe_lshift_func_uint8_t_u_s(l_542[0][0], (func_47(l_532[4][5], l_542[0][0], p_18, (safe_rshift_func_int16_t_s_s((l_550 = ((((!g_159) == ((((((*l_546) ^= ((*g_268) = func_53(&g_68[1], g_64, l_486, g_64.f0))) && l_547[2][6]) || (*g_45)) & l_483[0][0]) & l_548)) < l_535[0][3]) > 0x08E5L)), l_479.f6)), l_542[0][0]) & l_535[2][5]))) || 0xF97B7E1DL);
                    }
                    if ((*g_45))
                        continue;
                    if ((safe_div_func_int16_t_s_s((((safe_rshift_func_int16_t_s_s(0x9361L, l_479.f4)) > ((safe_rshift_func_uint8_t_u_u((safe_add_func_int16_t_s_s(((*g_268) ^= (safe_rshift_func_uint16_t_u_u((l_562 = g_64.f3), l_500.f0))), g_68[1])), 0)) || (safe_lshift_func_int16_t_s_s((*g_268), (((0x9EL <= l_542[0][0]) ^ (func_53(&g_159, g_94, l_542[2][0], g_244.f1) != (*g_45))) & l_479.f0))))) || 0xC0L), l_542[0][0])))
                    {
                        int **l_566 = &l_565;
                        (*l_566) = ((*l_518) = l_565);

                        ;
                    }
                    else
                    {
                        if ((*g_45))
                            break;
                        (*l_565) = (*g_45);
                        return l_542[0][0];


                    }

                    ;
                }


                ;
                for (g_244.f1 = 17; (g_244.f1 >= 27); ++g_244.f1)
                {
                    unsigned l_575 = 0x7B329CE1L;
                    for (l_500.f6 = 6; (l_500.f6 > 5); --l_500.f6)
                    {
                        unsigned char ****l_581 = &l_580;
                        unsigned char *l_586 = (void*)0;
                        unsigned char *l_587 = &l_547[2][6];
                        int l_588 = 0x81EE3BAAL;
                        if ((*g_45))
                            break;
                        (*l_518) = (void*)0;

                        ;
                        l_486 ^= ((safe_sub_func_int32_t_s_s((*p_18), (((safe_rshift_func_uint8_t_u_s(l_575, (safe_mod_func_int8_t_s_s((l_479.f6 != (((*l_565) = ((*l_565) < ((safe_rshift_func_int8_t_s_u(g_94.f3, ((*l_587) = ((((*l_581) = l_580) == (void*)0) || (((*g_268) = ((safe_sub_func_int8_t_s_s(((*l_565) >= (safe_sub_func_int8_t_s_s(l_479.f0, l_575))), 0xD3L)) > (*g_45))) == (*l_565)))))) >= 0UL))) || (*g_45))), l_588)))) < l_588) & (*g_420)))) > l_575);
                    }
                }
            }


            ;
            (*p_18) = (safe_mod_func_int32_t_s_s((((*p_18) & (safe_sub_func_int8_t_s_s(0x9BL, g_123))) && (safe_mod_func_uint16_t_u_u((safe_rshift_func_uint8_t_u_u(l_500.f4, 4)), ((*g_268) = (safe_div_func_uint32_t_u_u(0x64BCC106L, (*g_45))))))), func_53(p_18, ((*l_599) = g_94), l_483[1][1], l_479.f4)));
            return l_600[1];


        }

        ;
        for (l_479.f4 = (-25); (l_479.f4 != 27); l_479.f4++)
        {
            int *l_603 = &g_68[2];
            char ****l_656 = &l_611[8][2];
            int l_668 = (-2L);
            g_245 = l_603;

            ;
            for (l_525 = 0; (l_525 <= 3); l_525 += 1)
            {
                struct S0 l_615 = {0UL,0x43357051L,-3L,1L,4294967286UL,0x3E5543A2L,0L};
            }
        }
    }
    (*l_672) = func_19(l_479, (safe_unary_minus_func_int16_t_s(func_47(p_18, (safe_sub_func_int8_t_s_s(0L, (*l_610))), &g_68[1], func_36((*l_610), &g_46, g_61[8]), (*p_18)))), &g_46, (*l_610), &g_46);

    ;
    ;
    return (**l_672);
}







static int * func_19(struct S0 p_20, unsigned short p_21, int * p_22, int p_23, int * p_24)
{
    int l_445 = 0x2CF6669DL;
    int *l_446 = (void*)0;
    unsigned short *l_449 = (void*)0;
    unsigned short *l_450 = (void*)0;
    unsigned short *l_451 = (void*)0;
    unsigned short *l_452 = (void*)0;
    unsigned short *l_453 = (void*)0;
    unsigned short *l_454 = (void*)0;
    unsigned short *l_455 = &g_61[6];
    char *l_460 = &g_94.f6;
    char **l_459[3][7][10] = {{{&l_460,&l_460,(void*)0,&l_460,&l_460,(void*)0,&l_460,&l_460,(void*)0,&l_460},{&l_460,&l_460,&l_460,(void*)0,&l_460,&l_460,&l_460,(void*)0,&l_460,&l_460},{&l_460,&l_460,&l_460,&l_460,&l_460,(void*)0,&l_460,&l_460,&l_460,&l_460},{&l_460,&l_460,(void*)0,&l_460,(void*)0,&l_460,&l_460,&l_460,&l_460,&l_460},{&l_460,&l_460,&l_460,&l_460,&l_460,&l_460,&l_460,&l_460,&l_460,&l_460},{&l_460,&l_460,&l_460,&l_460,(void*)0,(void*)0,&l_460,&l_460,&l_460,&l_460},{&l_460,&l_460,&l_460,&l_460,&l_460,&l_460,&l_460,(void*)0,&l_460,(void*)0}},{{&l_460,&l_460,&l_460,(void*)0,&l_460,&l_460,&l_460,&l_460,&l_460,&l_460},{&l_460,&l_460,&l_460,(void*)0,(void*)0,&l_460,&l_460,&l_460,(void*)0,&l_460},{&l_460,&l_460,&l_460,&l_460,&l_460,&l_460,&l_460,&l_460,&l_460,&l_460},{&l_460,&l_460,&l_460,&l_460,&l_460,&l_460,&l_460,(void*)0,&l_460,(void*)0},{&l_460,&l_460,&l_460,&l_460,&l_460,&l_460,(void*)0,&l_460,&l_460,&l_460},{&l_460,&l_460,&l_460,&l_460,&l_460,&l_460,(void*)0,&l_460,&l_460,&l_460},{&l_460,&l_460,(void*)0,&l_460,(void*)0,&l_460,&l_460,&l_460,&l_460,&l_460}},{{&l_460,&l_460,&l_460,&l_460,&l_460,&l_460,&l_460,&l_460,(void*)0,(void*)0},{&l_460,&l_460,&l_460,&l_460,&l_460,&l_460,&l_460,&l_460,&l_460,&l_460},{&l_460,&l_460,&l_460,(void*)0,&l_460,(void*)0,&l_460,&l_460,&l_460,&l_460},{(void*)0,&l_460,&l_460,&l_460,&l_460,&l_460,&l_460,(void*)0,(void*)0,&l_460},{&l_460,&l_460,&l_460,&l_460,(void*)0,&l_460,&l_460,(void*)0,&l_460,&l_460},{(void*)0,(void*)0,&l_460,(void*)0,&l_460,&l_460,&l_460,&l_460,&l_460,&l_460},{&l_460,&l_460,&l_460,&l_460,&l_460,&l_460,&l_460,(void*)0,&l_460,&l_460}}};
    char ***l_458 = &l_459[0][0][1];
    char ****l_461 = &l_458;
    unsigned short **l_468 = &l_452;
    unsigned short ***l_467 = &l_468;
    unsigned char *l_469 = &g_123;
    short l_470 = (-4L);
    struct S0 *l_471 = &g_94;
    int i, j, k;
    (*p_22) ^= (safe_sub_func_int8_t_s_s(p_20.f1, g_142[0][0][0]));
    (*p_22) &= (((p_20.f3 ^ ((*l_455) &= (safe_add_func_int8_t_s_s(g_223.f1, (safe_rshift_func_int16_t_s_s(0L, 9)))))) < (safe_mod_func_uint16_t_u_u((((*l_461) = l_458) != g_462), (g_64.f2 | (p_20.f2 > p_20.f1))))) & (-9L));
    (*l_471) = g_244;
    (*l_471) = p_20;
    return &g_68[1];


}







static struct S0 func_25(unsigned short p_26, struct S0 p_27, int * p_28, struct S0 p_29, unsigned short p_30)
{
    unsigned l_263 = 0xF936EE21L;
    int *l_286 = &g_244.f3;
    struct S0 l_287 = {0UL,0x7D689E26L,0L,0x9F623326L,0xAF50E186L,0xC2539A14L,-1L};
    struct S0 l_289 = {0xB4CA8E42L,4294967295UL,0x2C39L,0xE7EA1D27L,4294967290UL,0x7CC9AF1DL,-3L};
    char l_302 = 1L;
    int *l_352 = &l_287.f3;
    unsigned l_355 = 0xC6190E61L;
    int **l_364 = &g_245;
    unsigned char *l_367 = (void*)0;
    unsigned char *l_368[5][3] = {{&g_125,&g_125,&g_125},{&g_123,&g_125,&g_125},{&g_125,&g_123,&g_125},{&g_123,&g_123,&g_123},{&g_125,&g_125,&g_125}};
    char *l_373 = &l_289.f6;
    int *l_401 = (void*)0;
    int i, j;
    for (p_29.f3 = (-6); (p_29.f3 >= 11); p_29.f3 = safe_add_func_uint16_t_u_u(p_29.f3, 1))
    {
        unsigned l_251 = 0x06327222L;
        short *l_267 = &g_94.f2;
        int **l_288[10][5][5] = {{{&l_286,&l_286,&g_245,&g_245,&g_245},{&g_45,&g_245,&l_286,&g_45,&g_245},{&g_245,&g_45,(void*)0,&g_45,&g_245},{(void*)0,&g_45,&g_245,&g_245,&l_286},{&g_245,&g_245,&g_245,&l_286,&l_286}},{{&g_245,&l_286,&l_286,&g_45,&l_286},{&l_286,&l_286,&l_286,&l_286,&g_245},{&l_286,&g_245,(void*)0,&g_45,&g_245},{&l_286,(void*)0,&g_245,&g_45,&g_245},{&g_245,&l_286,&g_245,&g_245,(void*)0}},{{&g_245,&l_286,&g_245,&g_45,&l_286},{&g_245,&g_45,&l_286,&g_45,&g_45},{&g_245,&g_45,&g_245,&l_286,&l_286},{(void*)0,&g_245,&g_245,&g_45,&g_245},{&g_245,(void*)0,&l_286,&l_286,&g_245}},{{&g_245,&g_45,&g_245,&g_245,(void*)0},{&l_286,&g_45,&g_245,&g_45,&g_245},{&g_45,&l_286,&l_286,&g_45,&g_245},{&l_286,&g_45,&g_245,&g_245,&g_245},{(void*)0,(void*)0,&g_245,&g_45,&g_245}},{{&g_245,&g_45,&g_245,&l_286,&l_286},{&g_245,&l_286,(void*)0,(void*)0,&l_286},{&g_245,&g_45,&l_286,(void*)0,&l_286},{&l_286,&g_45,&l_286,&g_45,&g_245},{&l_286,(void*)0,&g_245,&l_286,&g_245}},{{&g_245,&g_45,(void*)0,&g_245,&g_45},{&l_286,&l_286,&g_245,&l_286,&l_286},{&g_45,(void*)0,&l_286,&g_45,&g_245},{&g_245,&l_286,&g_245,&l_286,(void*)0},{(void*)0,&g_245,&g_45,(void*)0,&g_245}},{{&l_286,&l_286,&l_286,&g_245,&l_286},{&g_245,&g_245,&g_245,&g_245,&g_45},{&l_286,&g_45,&g_245,&g_245,&g_245},{&g_45,&g_245,&l_286,&g_245,&g_245},{&l_286,(void*)0,(void*)0,&g_245,&l_286}},{{(void*)0,(void*)0,&g_245,&g_245,&g_245},{&g_245,&g_245,&g_245,&g_245,&l_286},{&g_245,&g_45,&l_286,(void*)0,&g_45},{&l_286,&g_45,&g_245,&l_286,&l_286},{&g_45,&g_245,&l_286,&g_45,&g_245}},{{&l_286,&l_286,&g_245,&l_286,&g_245},{&g_245,&g_245,&g_245,&g_245,(void*)0},{&l_286,&l_286,(void*)0,&l_286,&l_286},{&g_245,&l_286,&l_286,&g_245,&g_45},{&g_245,&l_286,&g_245,&l_286,&l_286}},{{&g_45,&g_245,&g_245,&l_286,&g_245},{&l_286,&l_286,&l_286,&g_45,&l_286},{&g_245,&g_245,&g_45,&g_245,(void*)0},{(void*)0,&g_45,&g_245,(void*)0,&g_245},{&g_245,&g_45,&l_286,&g_245,&g_45}}};
        unsigned short *l_300 = &g_61[6];
        int l_301[6][5][7] = {{{0x15C61B0CL,(-8L),0L,(-1L),0x3E1FDA68L,0xE99B2589L,0x3E1FDA68L},{0L,0xF13AC1AFL,0xF13AC1AFL,0L,0xBCF12418L,0x4AD4536AL,1L},{0x15C61B0CL,(-1L),0x6825E6CCL,0xD43C9A28L,(-1L),(-1L),0xD43C9A28L},{(-8L),0x9594F6ECL,(-8L),0x4AD4536AL,0xD725E3DAL,0xA89FBF3FL,1L},{0xE99B2589L,0xCB4687D5L,0x3E1FDA68L,0x6825E6CCL,0x6B7CABE5L,0x6825E6CCL,0x3E1FDA68L}},{{0xD725E3DAL,0xD725E3DAL,0xBCF12418L,0xC4B03A1CL,(-2L),0xA89FBF3FL,0x9594F6ECL},{1L,0L,(-1L),(-8L),(-8L),(-1L),0L},{0xF13AC1AFL,5L,0xD725E3DAL,(-8L),(-2L),0x4AD4536AL,0xC4B03A1CL},{(-1L),0xE99B2589L,0x6B7CABE5L,0L,0x6B7CABE5L,0xE99B2589L,(-1L)},{0xA89FBF3FL,0xF13AC1AFL,0xD725E3DAL,0xC4B03A1CL,0xB3FAAC7DL,0L,5L}},{{0x6B7CABE5L,0xCB4687D5L,(-1L),(-1L),0xCB4687D5L,0x6B7CABE5L,(-8L)},{(-8L),0x4AD4536AL,0xD725E3DAL,0xA89FBF3FL,1L,0xB3FAAC7DL,0xB3FAAC7DL},{1L,0x15C61B0CL,0x6825E6CCL,0x15C61B0CL,1L,0xD43C9A28L,0x3E1FDA68L},{0x9594F6ECL,0x4AD4536AL,0xB3FAAC7DL,0xF13AC1AFL,0xC4B03A1CL,(-8L),0xC4B03A1CL},{0L,0xCB4687D5L,0xCB4687D5L,0L,0x15C61B0CL,(-1L),0xE99B2589L}},{{0x9594F6ECL,0xF13AC1AFL,1L,(-2L),5L,5L,(-2L)},{1L,0x3E1FDA68L,1L,(-1L),0x6B7CABE5L,(-1L),0xE99B2589L},{(-8L),0L,0xC4B03A1CL,1L,0xBCF12418L,1L,0xC4B03A1CL},{0x6B7CABE5L,0x6B7CABE5L,0x15C61B0CL,(-8L),0L,(-1L),0x3E1FDA68L},{0xA89FBF3FL,0xB3FAAC7DL,5L,0x4AD4536AL,0x4AD4536AL,5L,0xB3FAAC7DL}},{{0xCB4687D5L,0xD43C9A28L,0x6B7CABE5L,1L,0L,(-1L),(-8L)},{5L,(-8L),0xBCF12418L,0xB3FAAC7DL,0xBCF12418L,(-8L),5L},{(-8L),(-1L),0L,1L,0x6B7CABE5L,0L,0xD43C9A28L},{0xBCF12418L,0L,0xF13AC1AFL,0xF13AC1AFL,0L,0xBCF12418L,0x4AD4536AL},{1L,(-1L),0x6B7CABE5L,(-1L),0xE99B2589L,0x6825E6CCL,0x6825E6CCL}},{{0xA89FBF3FL,0x9594F6ECL,1L,0x9594F6ECL,0xA89FBF3FL,(-2L),0xC4B03A1CL},{0x3E1FDA68L,(-1L),0x6825E6CCL,0xCB4687D5L,(-8L),1L,(-8L)},{0xD725E3DAL,0L,0L,0xD725E3DAL,0x9594F6ECL,5L,(-8L)},{0x3E1FDA68L,0xCB4687D5L,0xE99B2589L,0L,0xD43C9A28L,0xD43C9A28L,0L},{0xA89FBF3FL,0xC4B03A1CL,0xA89FBF3FL,5L,0xBCF12418L,0xF13AC1AFL,(-8L)}}};
        unsigned short l_316[8];
        int *l_344 = (void*)0;
        int i, j, k;
        for (i = 0; i < 8; i++)
            l_316[i] = 0x405BL;
        for (g_244.f5 = 18; (g_244.f5 < (-18)); --g_244.f5)
        {
            for (p_26 = 0; (p_26 <= 1); p_26 += 1)
            {
                short l_254 = 1L;
                unsigned short *l_256 = &g_61[6];
                for (g_223.f5 = 0; (g_223.f5 <= 1); g_223.f5 += 1)
                {
                    unsigned short *l_255 = (void*)0;
                    unsigned short **l_257 = &l_256;
                    int l_258 = 0L;
                    struct S0 *l_284 = (void*)0;
                    struct S0 *l_285[5][4][9] = {{{&g_64,&g_223,&g_64,&g_64,&g_223,&g_94,&g_64,&g_64,&g_94},{&g_64,&g_244,&g_64,&g_64,&g_244,&g_94,&g_244,&g_64,&g_64},{&g_244,&g_244,(void*)0,&g_223,&g_64,&g_94,&g_64,&g_244,&g_94},{&g_244,&g_64,&g_94,&g_223,&g_244,&g_94,&g_244,&g_244,&g_94}},{{&g_223,&g_64,(void*)0,&g_64,&g_223,&g_64,&g_64,&g_223,&g_223},{&g_64,(void*)0,&g_64,&g_244,&g_244,&g_64,&g_244,&g_64,&g_64},{(void*)0,&g_64,&g_244,&g_244,&g_244,&g_244,&g_64,(void*)0,&g_64},{&g_64,&g_94,&g_244,&g_244,&g_94,&g_223,&g_244,&g_64,&g_64}},{{&g_64,&g_64,&g_64,&g_64,(void*)0,&g_64,(void*)0,&g_64,&g_64},{(void*)0,(void*)0,&g_64,&g_94,&g_244,&g_64,&g_244,(void*)0,&g_64},{&g_64,&g_64,&g_64,&g_94,(void*)0,&g_223,&g_64,&g_64,&g_223},{&g_94,&g_64,&g_64,&g_64,&g_94,&g_244,&g_244,&g_94,&g_223}},{{&g_64,(void*)0,&g_64,&g_244,&g_244,&g_64,&g_244,&g_64,&g_64},{(void*)0,&g_64,&g_244,&g_244,&g_244,&g_244,&g_64,(void*)0,&g_64},{&g_64,&g_94,&g_244,&g_244,&g_94,&g_223,&g_244,&g_64,&g_64},{&g_64,&g_64,&g_64,&g_64,&g_244,&g_64,&g_244,&g_244,&g_223}},{{&g_244,&g_244,&g_244,&g_64,(void*)0,&g_64,&g_244,&g_244,&g_64},{&g_64,&g_244,&g_64,&g_64,&g_244,&g_244,&g_64,&g_64,&g_244},{&g_64,&g_244,&g_244,&g_244,&g_64,&g_64,&g_94,&g_64,&g_244},{&g_64,&g_244,&g_223,&g_94,&g_244,&g_244,&g_94,&g_64,&g_64}}};
                    int i, j, k;
                }
                l_286 = &g_68[1];

                ;
            }

            ;
            return l_287;
        }
        (*l_286) = (func_53((p_28 = &g_68[0]), l_289, ((*l_286) <= (safe_mod_func_int32_t_s_s((safe_lshift_func_uint16_t_u_u((((*l_300) = ((safe_rshift_func_uint8_t_u_s((0x08D4L != (func_36((g_5 ^ ((p_27.f1 < ((p_29.f2 ^ g_244.f0) < (safe_lshift_func_int16_t_s_s(p_27.f0, 3)))) == 0L)), l_286, p_27.f0) || p_30)), 7)) >= 0xB3L)) != l_301[0][1][3]), 14)), 0x45FCD387L))), g_142[2][2][0]) || g_223.f3);

        ;
        ;
        if (l_302)
            break;
        if ((((0xA352L & ((*l_300) = 65535UL)) <= (p_28 != p_28)) <= ((*g_45) <= (func_53(&g_46, g_223, g_244.f2, (&l_288[7][2][0] != &l_288[7][2][0])) > 65533UL))))
        {
            struct S0 l_311 = {4UL,0xA2844BE8L,4L,2L,1UL,0x12F7E8F0L,-6L};
            int **l_338 = &g_45;
            int ***l_339 = (void*)0;
            int ***l_340 = &l_288[7][2][0];
            unsigned char *l_343[4] = {&g_123,&g_123,&g_123,&g_123};
            int i;
            for (p_27.f3 = 0; (p_27.f3 > 26); ++p_27.f3)
            {
                int l_319 = 2L;
                struct S0 l_320 = {4294967287UL,0x2882098FL,0x947EL,-4L,0x21B8291AL,0xF8CA9529L,0L};
                for (p_27.f2 = (-2); (p_27.f2 != (-25)); p_27.f2--)
                {
                    unsigned l_314[6] = {4294967286UL,4294967286UL,4294967286UL,4294967286UL,4294967286UL,4294967286UL};
                    int i;
                    for (l_287.f2 = 0; (l_287.f2 <= 22); l_287.f2 = safe_add_func_uint16_t_u_u(l_287.f2, 2))
                    {
                        return l_311;
                    }
                }
            }
            (*g_45) = (((*l_340) = l_338) == (void*)0);
            (*p_28) ^= ((*g_45) = (safe_div_func_uint8_t_u_u(((*l_286) = ((*g_268) || p_29.f3)), (-2L))));
        }
        else
        {
            unsigned l_346 = 0x6D7EAB7AL;
            if ((*p_28))
            {
                (*l_286) |= 0x5A5F23C3L;
            }
            else
            {
                struct S0 l_345 = {4294967295UL,0xBC60A1E1L,0x071DL,0L,4294967293UL,-1L,-4L};
                int *l_357 = (void*)0;
                if (func_36(p_27.f3, l_344, g_223.f1))
                {
                    return l_345;
                }
                else
                {
                    unsigned *l_356 = &l_355;
                    if ((*p_28))
                    {
                        return g_94;
                    }
                    else
                    {
                        unsigned short l_347 = 0x35CDL;
                        (*p_28) |= (*g_45);
                        (*g_45) = ((*p_28) &= (*l_286));
                        if (l_346)
                            break;
                        (*p_28) &= l_347;
                    }
                    if ((*g_245))
                    {
                        (*g_245) ^= func_33(g_223.f3, l_352);

                        ;
                        (*g_45) = (safe_rshift_func_uint8_t_u_s(g_223.f1, 5));
                        return g_244;
                    }
                    else
                    {
                        (*g_245) = (safe_div_func_uint16_t_u_u(p_27.f3, p_27.f6));
                        p_28 = l_356;

                        ;
                        if ((*g_245))
                            break;
                    }

                    ;
                }

                ;
                (*g_45) = (*p_28);
            }

            ;
        }

        ;
    }

    ;
    (*l_286) = (safe_add_func_int16_t_s_s(((*g_268) &= (*l_352)), (&g_68[4] != (g_45 = ((*l_364) = p_28)))));

    ;
    ;
    if ((safe_rshift_func_uint8_t_u_s((g_244.f4 != ((((**l_364) = g_46) < g_64.f1) | (p_29.f1 != (safe_mod_func_uint16_t_u_u((*l_352), (g_223.f0 && 65530UL)))))), ((*l_373) = (safe_add_func_int32_t_s_s(0xE6E78B14L, (g_64.f2 > 0x78A555A7L)))))))
    {
        int *l_384 = (void*)0;
        int l_390 = 0xF5E76F51L;
        struct S0 l_394 = {0x5A90CAF5L,0x095C9F63L,0xB080L,-1L,0UL,0x8343BF57L,0x5BL};
        unsigned short *l_430 = &g_61[6];
        unsigned short **l_429 = &l_430;
        g_45 = p_28;
        for (l_287.f1 = 2; (l_287.f1 <= 17); ++l_287.f1)
        {
            char l_389[10][4] = {{0L,0L,(-5L),(-10L)},{(-6L),0x3AL,(-6L),(-5L)},{(-6L),(-5L),(-5L),(-6L)},{0L,(-5L),(-10L),(-5L)},{(-5L),0x3AL,(-10L),(-10L)},{0L,0L,(-5L),(-10L)},{(-6L),0x3AL,(-6L),(-5L)},{(-6L),(-5L),(-5L),(-6L)},{0L,(-5L),(-10L),(-5L)},{(-5L),0x3AL,(-10L),(-10L)}};
            char ***l_395 = (void*)0;
            int *l_427 = &g_94.f3;
            int i, j;
            if ((safe_div_func_int32_t_s_s((safe_rshift_func_uint8_t_u_u(p_30, (g_125 = (safe_lshift_func_int8_t_s_u((((safe_lshift_func_int16_t_s_u(func_47(l_384, func_53(p_28, g_223, ((*l_373) = (safe_div_func_uint8_t_u_u((!0x31L), (safe_div_func_uint8_t_u_u(0x1EL, l_389[0][2]))))), (p_30 & (*l_352))), &g_46, g_244.f4, (*p_28)), 2)) < 0x93L) == l_390), 3))))), g_244.f5)))
            {
                int l_391 = 9L;
                if (l_391)
                    break;
                for (g_223.f2 = 16; (g_223.f2 < 24); g_223.f2 = safe_add_func_int32_t_s_s(g_223.f2, 2))
                {
                    for (p_29.f3 = 0; p_29.f3 < 5; p_29.f3 += 1)
                    {
                        for (p_26 = 0; p_26 < 3; p_26 += 1)
                        {
                            l_368[p_29.f3][p_26] = &g_123;
                        }
                    }
                }
                for (l_289.f5 = 0; (l_289.f5 <= 2); l_289.f5 += 1)
                {
                    return l_394;



                }
            }
            else
            {
                char ****l_396 = &l_395;
                (*l_352) &= ((p_27.f2 > (((*l_396) = l_395) != (void*)0)) <= ((safe_rshift_func_uint8_t_u_u(((((safe_add_func_int32_t_s_s(((*g_245) = (*p_28)), l_389[9][1])) > 0xD6D2L) | (((*g_268) < p_27.f4) == 1UL)) && g_64.f3), 5)) ^ 0x77L));
                if ((*g_45))
                    continue;
                if ((*g_245))
                    break;
            }
            for (p_26 = (-21); (p_26 >= 55); ++p_26)
            {
                unsigned char ***l_415 = &g_413;
                int l_418[8][2] = {{0x69E5E615L,0xBB61147DL},{0xBB61147DL,0x69E5E615L},{0xBB61147DL,0x69E5E615L},{0L,0x69E5E615L},{0x69E5E615L,0L},{0x69E5E615L,0x69E5E615L},{0L,0x69E5E615L},{0x69E5E615L,0L}};
                unsigned *l_421[9] = {&l_289.f0,&l_289.f0,&l_287.f0,&l_289.f0,&l_289.f0,&l_287.f0,&l_289.f0,&l_289.f0,&l_287.f0};
                unsigned short ***l_431 = &l_429;
                int i, j;
                for (l_289.f3 = 2; (l_289.f3 >= 0); l_289.f3 -= 1)
                {
                    for (l_394.f2 = 3; (l_394.f2 >= 0); l_394.f2 -= 1)
                    {
                        return p_27;



                    }
                    (*l_352) = (*p_28);
                    return g_244;



                }
                if ((safe_sub_func_uint8_t_u_u(0x7AL, ((~(((safe_lshift_func_uint16_t_u_s(func_36(p_27.f5, &g_46, (safe_mod_func_uint8_t_u_u(((*g_268) < ((safe_rshift_func_int8_t_s_s((((g_412 = g_412) == l_415) || (((safe_rshift_func_int16_t_s_u(func_53(((*l_364) = &g_159), g_244, l_389[7][0], g_159), 3)) || p_30) <= p_29.f3)), 2)) != l_418[5][1])), p_29.f6))), 14)) <= (*p_28)) >= 4294967290UL)) < p_29.f4))))
                {
                    int l_419 = 3L;
                    char l_422 = 0x2EL;
                    if (((l_419 & p_27.f3) != p_29.f1))
                    {
                        return g_64;


                    }
                    else
                    {
                        return g_64;


                    }
                }
                else
                {
                    unsigned short *l_428 = &g_61[6];
                    (*l_352) |= ((safe_mod_func_uint32_t_u_u(((p_29.f3 > ((((*g_268) = (safe_rshift_func_uint16_t_u_s(l_389[0][2], 2))) < g_94.f0) < 0L)) >= ((*l_428) = (((*l_364) = l_427) != l_427))), ((*g_420) ^= 8UL))) != 1UL);

                    ;
                }

                ;
                ;
                (*l_431) = l_429;
            }
        }

        ;
        ;
        (*l_364) = l_384;

        ;
    }
    else
    {
        for (l_289.f5 = 8; (l_289.f5 >= 3); l_289.f5 -= 1)
        {
            return p_29;



        }
        (*l_286) ^= (safe_div_func_uint8_t_u_u((~6UL), g_223.f2));
    }

    ;
    ;
    for (l_287.f0 = 0; (l_287.f0 <= 4); l_287.f0 += 1)
    {
        unsigned short *l_438 = &g_61[5];
        int i;
        if ((safe_add_func_uint16_t_u_u((safe_sub_func_uint16_t_u_u(((*l_438) = g_68[l_287.f0]), g_68[l_287.f0])), (*g_268))))
        {
            struct S0 *l_440[4];
            struct S0 **l_439 = &l_440[3];
            int i;
            for (i = 0; i < 4; i++)
                l_440[i] = &g_64;
            if ((*p_28))
                break;
            g_68[l_287.f0] = func_33(p_27.f3, p_28);
            (*l_439) = &l_287;


        }
        else
        {
            (*l_364) = &g_68[l_287.f0];

            ;
        }
        if ((*g_45))
            break;
    }

    ;
    return p_27;



}







static unsigned short func_33(unsigned p_34, int * p_35)
{
    unsigned l_40[2][3] = {{4294967295UL,4294967295UL,0x3523E24BL},{4294967295UL,4294967295UL,0x3523E24BL}};
    int **l_141 = &g_45;
    short *l_150 = &g_64.f2;
    int **l_153 = (void*)0;
    unsigned char *l_155 = &g_123;
    struct S0 *l_186 = &g_94;
    int l_211 = 1L;
    int l_214 = 0x3B89F0E9L;
    int *l_229[1];
    int i, j;
    for (i = 0; i < 1; i++)
        l_229[i] = &g_68[0];
    if (g_5)
    {
        int *l_67[9][6][4] = {{{&g_68[4],&g_68[4],&g_68[3],&g_68[1]},{(void*)0,(void*)0,(void*)0,&g_68[1]},{&g_68[1],&g_68[1],&g_68[1],&g_68[1]},{&g_68[1],&g_68[1],&g_68[1],&g_68[4]},{&g_68[1],(void*)0,&g_68[0],&g_68[1]},{&g_68[1],&g_68[1],&g_68[0],&g_68[1]}},{{&g_68[1],(void*)0,&g_68[1],&g_68[0]},{&g_68[1],&g_68[4],&g_68[1],&g_68[4]},{&g_68[1],&g_68[4],(void*)0,&g_68[1]},{(void*)0,(void*)0,&g_68[3],&g_68[1]},{&g_68[4],(void*)0,&g_68[2],&g_68[2]},{&g_68[1],&g_68[1],&g_68[3],&g_68[1]}},{{&g_68[1],&g_68[1],&g_68[2],&g_68[4]},{&g_68[0],(void*)0,&g_68[1],&g_68[2]},{(void*)0,(void*)0,&g_68[3],&g_68[4]},{(void*)0,&g_68[1],(void*)0,&g_68[1]},{(void*)0,&g_68[1],(void*)0,&g_68[2]},{&g_68[1],(void*)0,(void*)0,&g_68[1]}},{{&g_68[1],&g_68[0],&g_68[2],&g_68[4]},{&g_68[1],&g_68[1],&g_68[1],&g_68[1]},{&g_68[0],&g_68[4],&g_68[3],&g_68[1]},{&g_68[1],&g_68[1],&g_68[1],(void*)0},{&g_68[1],&g_68[1],&g_68[1],&g_68[3]},{&g_68[1],&g_68[0],&g_68[1],(void*)0}},{{&g_68[1],&g_68[3],&g_68[3],&g_68[1]},{&g_68[0],&g_68[3],&g_68[1],(void*)0},{&g_68[1],&g_68[1],&g_68[2],(void*)0},{&g_68[1],&g_68[4],(void*)0,&g_68[2]},{&g_68[3],&g_68[1],&g_68[1],&g_68[3]},{&g_68[1],&g_68[1],&g_68[2],&g_68[3]}},{{&g_68[1],&g_68[3],(void*)0,&g_68[3]},{&g_68[1],&g_68[1],&g_68[1],&g_68[3]},{&g_68[1],&g_68[3],(void*)0,&g_68[3]},{&g_68[4],&g_68[1],&g_68[2],&g_68[3]},{&g_68[2],&g_68[1],&g_68[3],&g_68[2]},{&g_68[1],&g_68[4],(void*)0,(void*)0}},{{&g_68[1],&g_68[1],&g_68[0],(void*)0},{&g_68[1],&g_68[3],&g_68[1],&g_68[1]},{&g_68[3],&g_68[3],&g_68[1],(void*)0},{&g_68[2],&g_68[0],&g_68[1],&g_68[3]},{&g_68[3],&g_68[1],&g_68[1],(void*)0},{&g_68[1],&g_68[1],&g_68[2],&g_68[1]}},{{&g_68[3],&g_68[3],&g_68[1],&g_68[1]},{&g_68[1],&g_68[1],&g_68[1],&g_68[2]},{&g_68[1],&g_68[1],(void*)0,&g_68[2]},{&g_68[1],&g_68[1],&g_68[1],&g_68[1]},{&g_68[1],&g_68[1],&g_68[0],(void*)0},{&g_68[2],(void*)0,(void*)0,&g_68[1]}},{{&g_68[1],&g_68[1],&g_68[2],(void*)0},{(void*)0,&g_68[1],(void*)0,&g_68[1]},{&g_68[1],(void*)0,&g_68[3],(void*)0},{&g_68[1],&g_68[1],&g_68[1],&g_68[1]},{&g_68[3],&g_68[1],&g_68[0],&g_68[2]},{&g_68[1],&g_68[1],&g_68[0],&g_68[2]}}};
        int l_100 = 0xF55A02C1L;
        unsigned *l_111 = &g_64.f0;
        unsigned char *l_122 = &g_123;
        unsigned char *l_124 = &g_125;
        short *l_134 = &g_64.f2;
        int i, j, k;
        l_100 ^= func_36(l_40[0][1], func_41(g_45, (p_34 < (((l_40[0][0] && func_47(&g_46, p_34, p_35, g_46, (*g_45))) & 0x41L) < 0x9DL)), l_67[6][4][1]), g_5);

        ;
        (*g_45) &= l_40[1][2];
        g_142[2][4][0] ^= ((safe_sub_func_uint32_t_u_u(((safe_add_func_uint32_t_u_u(((safe_rshift_func_uint8_t_u_u((((p_34 ^ (safe_lshift_func_uint8_t_u_s((safe_rshift_func_int8_t_s_s(((((*l_111) = 0xA51642E7L) == ((safe_add_func_int16_t_s_s((0x786C87C1L ^ ((safe_add_func_uint16_t_u_u((safe_lshift_func_uint8_t_u_s(((*l_124) = ((*l_122) |= (safe_div_func_uint16_t_u_u((safe_lshift_func_int8_t_s_s(g_46, 4)), p_34)))), (safe_add_func_uint16_t_u_u(((safe_mod_func_int8_t_s_s(((safe_lshift_func_uint16_t_u_u((safe_rshift_func_int16_t_s_s(((*l_134) ^= p_34), (safe_lshift_func_uint8_t_u_u(((safe_sub_func_int8_t_s_s(g_61[6], ((safe_rshift_func_int16_t_s_u(((g_64.f3 >= (((void*)0 == l_141) || 0xCAF5L)) != g_68[2]), 13)) && g_64.f4))) < (*g_45)), 5)))), 1)) || 0x4FL), (**l_141))) & (**l_141)), 0x5A08L)))), 6UL)) || g_123)), 0L)) == g_46)) != (**l_141)), g_61[2])), 3))) == 9UL) < (*g_45)), p_34)) | g_5), p_34)) && 0xD1L), g_94.f0)) ^ (**l_141));
    }
    else
    {
        int *l_144[7][1][2] = {{{&g_68[3],&g_46}},{{&g_68[1],&g_68[1]}},{{&g_46,&g_68[1]}},{{&g_68[1],&g_46}},{{&g_68[3],&g_68[3]}},{{&g_68[3],&g_46}},{{&g_68[1],&g_68[1]}}};
        int *l_158 = &g_46;
        short l_217 = 0xF60CL;
        unsigned l_226 = 1UL;
        int i, j, k;
        if (g_143)
        {
            struct S0 l_145[6][5][4] = {{{{0xD4E58FD3L,0x2D827AFFL,0xEFABL,0x566744F5L,4294967295UL,0L,0x4AL},{0x2D24EA24L,0x4EC0B727L,-4L,1L,4294967295UL,0xB538AD10L,-1L},{4294967295UL,1UL,0xEE0FL,-2L,9UL,1L,-1L},{1UL,1UL,9L,0xDFD19A34L,4294967288UL,9L,7L}},{{0xB5969875L,3UL,0x87BBL,0x4A9A9FA4L,4294967295UL,-10L,0x11L},{0x7A2C6987L,4294967288UL,-1L,0xA64F93B8L,0xCEEBA6CAL,1L,-10L},{0xEC6276A1L,0UL,4L,0x7A455DDAL,0x54D3951EL,0xE91F0B04L,0x48L},{1UL,0xE233F4ACL,1L,6L,4294967294UL,4L,8L}},{{0xB5969875L,3UL,0x87BBL,0x4A9A9FA4L,4294967295UL,-10L,0x11L},{1UL,4294967294UL,3L,-8L,0x178527E7L,0x61C8C171L,1L},{4294967295UL,1UL,0xEE0FL,-2L,9UL,1L,-1L},{0xB51C3764L,1UL,-1L,0xE0AD0774L,4294967289UL,0xB63C3F2BL,1L}},{{0xD4E58FD3L,0x2D827AFFL,0xEFABL,0x566744F5L,4294967295UL,0L,0x4AL},{1UL,0xE233F4ACL,1L,6L,4294967294UL,4L,8L},{0x952AE489L,4294967292UL,0x5DAEL,0x9F5B7F4FL,5UL,0xE5673AC8L,4L},{4294967295UL,0xE81E1FADL,0xF183L,0xA7604D3DL,4294967292UL,-7L,3L}},{{0x2D24EA24L,0x4EC0B727L,-4L,1L,4294967295UL,0xB538AD10L,-1L},{4294967287UL,4294967288UL,-3L,1L,0xC5227D83L,1L,0x89L},{4UL,0x7222A015L,0x9F7BL,1L,0UL,0L,0x74L},{0x7A2C6987L,4294967288UL,-1L,0xA64F93B8L,0xCEEBA6CAL,1L,-10L}}},{{{4294967287UL,4294967288UL,-3L,1L,0xC5227D83L,1L,0x89L},{1UL,4294967294UL,3L,-8L,0x178527E7L,0x61C8C171L,1L},{1UL,4294967294UL,3L,-8L,0x178527E7L,0x61C8C171L,1L},{4294967287UL,4294967288UL,-3L,1L,0xC5227D83L,1L,0x89L}},{{0x952AE489L,4294967292UL,0x5DAEL,0x9F5B7F4FL,5UL,0xE5673AC8L,4L},{0xB5969875L,3UL,0x87BBL,0x4A9A9FA4L,4294967295UL,-10L,0x11L},{0UL,0x70141F53L,3L,0x8421D5CAL,1UL,0xA44792A7L,1L},{1UL,1UL,9L,0xDFD19A34L,4294967288UL,9L,7L}},{{0xC0A783F8L,0x97DD2935L,-3L,-10L,0x555FCFD5L,0L,0x4FL},{0x7C529044L,0xA9950EBDL,0L,1L,0x2556593AL,8L,0xC3L},{0xA11968FDL,0x46EF48D8L,0x5F73L,0x16EBDA91L,0x5C0BBC23L,0x960850B4L,1L},{4294967287UL,4294967288UL,-3L,1L,0xC5227D83L,1L,0x89L}},{{1UL,0xE233F4ACL,1L,6L,4294967294UL,4L,8L},{0xD4E58FD3L,0x2D827AFFL,0xEFABL,0x566744F5L,4294967295UL,0L,0x4AL},{4294967295UL,1UL,0xEE0FL,-2L,9UL,1L,-1L},{4294967287UL,4294967288UL,-3L,1L,0xC5227D83L,1L,0x89L}},{{1UL,1UL,9L,0xDFD19A34L,4294967288UL,9L,7L},{0xC0A783F8L,0x97DD2935L,-3L,-10L,0x555FCFD5L,0L,0x4FL},{1UL,4294967294UL,3L,-8L,0x178527E7L,0x61C8C171L,1L},{0UL,0x70141F53L,3L,0x8421D5CAL,1UL,0xA44792A7L,1L}}},{{{0x7C529044L,0xA9950EBDL,0L,1L,0x2556593AL,8L,0xC3L},{0x2D24EA24L,0x4EC0B727L,-4L,1L,4294967295UL,0xB538AD10L,-1L},{0x9E0A6E62L,0x55A95E6AL,1L,0x5B5F3EEAL,8UL,4L,0x12L},{0x7A2C6987L,4294967288UL,-1L,0xA64F93B8L,0xCEEBA6CAL,1L,-10L}},{{0x2BABF483L,1UL,0xA7F0L,1L,1UL,0x6F6D4199L,-6L},{1UL,1UL,0x1B71L,0x95E92766L,0UL,0x2746C757L,-9L},{0UL,0x70141F53L,3L,0x8421D5CAL,1UL,0xA44792A7L,1L},{0x7C529044L,0xA9950EBDL,0L,1L,0x2556593AL,8L,0xC3L}},{{1UL,1UL,9L,0xDFD19A34L,4294967288UL,9L,7L},{0x7A2C6987L,4294967288UL,-1L,0xA64F93B8L,0xCEEBA6CAL,1L,-10L},{1UL,1UL,9L,0xDFD19A34L,4294967288UL,9L,7L},{1UL,4294967294UL,3L,-8L,0x178527E7L,0x61C8C171L,1L}},{{0xC0A783F8L,0x97DD2935L,-3L,-10L,0x555FCFD5L,0L,0x4FL},{0xB5969875L,3UL,0x87BBL,0x4A9A9FA4L,4294967295UL,-10L,0x11L},{0xA11968FDL,0x46EF48D8L,0x5F73L,0x16EBDA91L,0x5C0BBC23L,0x960850B4L,1L},{0x2BABF483L,1UL,0xA7F0L,1L,1UL,0x6F6D4199L,-6L}},{{0xB5969875L,3UL,0x87BBL,0x4A9A9FA4L,4294967295UL,-10L,0x11L},{1UL,1UL,0x1B71L,0x95E92766L,0UL,0x2746C757L,-9L},{0xD4E58FD3L,0x2D827AFFL,0xEFABL,0x566744F5L,4294967295UL,0L,0x4AL},{0xB5969875L,3UL,0x87BBL,0x4A9A9FA4L,4294967295UL,-10L,0x11L}}},{{{4294967295UL,0xE81E1FADL,0xF183L,0xA7604D3DL,4294967292UL,-7L,3L},{0x7C529044L,0xA9950EBDL,0L,1L,0x2556593AL,8L,0xC3L},{0xD4E58FD3L,0x2D827AFFL,0xEFABL,0x566744F5L,4294967295UL,0L,0x4AL},{0UL,0x70141F53L,3L,0x8421D5CAL,1UL,0xA44792A7L,1L}},{{0xB5969875L,3UL,0x87BBL,0x4A9A9FA4L,4294967295UL,-10L,0x11L},{4294967287UL,4294967288UL,-3L,1L,0xC5227D83L,1L,0x89L},{0xA11968FDL,0x46EF48D8L,0x5F73L,0x16EBDA91L,0x5C0BBC23L,0x960850B4L,1L},{0xC0A783F8L,0x97DD2935L,-3L,-10L,0x555FCFD5L,0L,0x4FL}},{{0xC0A783F8L,0x97DD2935L,-3L,-10L,0x555FCFD5L,0L,0x4FL},{0xD4E58FD3L,0x2D827AFFL,0xEFABL,0x566744F5L,4294967295UL,0L,0x4AL},{1UL,1UL,9L,0xDFD19A34L,4294967288UL,9L,7L},{1UL,0xE233F4ACL,1L,6L,4294967294UL,4L,8L}},{{1UL,1UL,9L,0xDFD19A34L,4294967288UL,9L,7L},{1UL,0xE233F4ACL,1L,6L,4294967294UL,4L,8L},{0UL,0x70141F53L,3L,0x8421D5CAL,1UL,0xA44792A7L,1L},{0UL,0x70141F53L,3L,0x8421D5CAL,1UL,0xA44792A7L,1L}},{{0x2BABF483L,1UL,0xA7F0L,1L,1UL,0x6F6D4199L,-6L},{0x2BABF483L,1UL,0xA7F0L,1L,1UL,0x6F6D4199L,-6L},{0x9E0A6E62L,0x55A95E6AL,1L,0x5B5F3EEAL,8UL,4L,0x12L},{0xB51C3764L,1UL,-1L,0xE0AD0774L,4294967289UL,0xB63C3F2BL,1L}}},{{{0x7C529044L,0xA9950EBDL,0L,1L,0x2556593AL,8L,0xC3L},{1UL,1UL,0x1B71L,0x95E92766L,0UL,0x2746C757L,-9L},{1UL,4294967294UL,3L,-8L,0x178527E7L,0x61C8C171L,1L},{0x2D24EA24L,0x4EC0B727L,-4L,1L,4294967295UL,0xB538AD10L,-1L}},{{1UL,1UL,9L,0xDFD19A34L,4294967288UL,9L,7L},{0xB51C3764L,1UL,-1L,0xE0AD0774L,4294967289UL,0xB63C3F2BL,1L},{4294967295UL,1UL,0xEE0FL,-2L,9UL,1L,-1L},{1UL,4294967294UL,3L,-8L,0x178527E7L,0x61C8C171L,1L}},{{1UL,0xE233F4ACL,1L,6L,4294967294UL,4L,8L},{0xB51C3764L,1UL,-1L,0xE0AD0774L,4294967289UL,0xB63C3F2BL,1L},{0xA11968FDL,0x46EF48D8L,0x5F73L,0x16EBDA91L,0x5C0BBC23L,0x960850B4L,1L},{0x2D24EA24L,0x4EC0B727L,-4L,1L,4294967295UL,0xB538AD10L,-1L}},{{0xB51C3764L,1UL,-1L,0xE0AD0774L,4294967289UL,0xB63C3F2BL,1L},{1UL,1UL,0x1B71L,0x95E92766L,0UL,0x2746C757L,-9L},{0x952AE489L,4294967292UL,0x5DAEL,0x9F5B7F4FL,5UL,0xE5673AC8L,4L},{0xB51C3764L,1UL,-1L,0xE0AD0774L,4294967289UL,0xB63C3F2BL,1L}},{{4294967295UL,0xE81E1FADL,0xF183L,0xA7604D3DL,4294967292UL,-7L,3L},{0x2BABF483L,1UL,0xA7F0L,1L,1UL,0x6F6D4199L,-6L},{1UL,1UL,0x1B71L,0x95E92766L,0UL,0x2746C757L,-9L},{0UL,0x70141F53L,3L,0x8421D5CAL,1UL,0xA44792A7L,1L}}},{{{0x7A2C6987L,4294967288UL,-1L,0xA64F93B8L,0xCEEBA6CAL,1L,-10L},{1UL,0xE233F4ACL,1L,6L,4294967294UL,4L,8L},{0xA11968FDL,0x46EF48D8L,0x5F73L,0x16EBDA91L,0x5C0BBC23L,0x960850B4L,1L},{1UL,0xE233F4ACL,1L,6L,4294967294UL,4L,8L}},{{4294967287UL,4294967288UL,-3L,1L,0xC5227D83L,1L,0x89L},{0xD4E58FD3L,0x2D827AFFL,0xEFABL,0x566744F5L,4294967295UL,0L,0x4AL},{4294967295UL,0xE81E1FADL,0xF183L,0xA7604D3DL,4294967292UL,-7L,3L},{0xC0A783F8L,0x97DD2935L,-3L,-10L,0x555FCFD5L,0L,0x4FL}},{{1UL,1UL,9L,0xDFD19A34L,4294967288UL,9L,7L},{4294967287UL,4294967288UL,-3L,1L,0xC5227D83L,1L,0x89L},{1UL,0xBE61B32DL,1L,-1L,0UL,1L,-10L},{0UL,0x70141F53L,3L,0x8421D5CAL,1UL,0xA44792A7L,1L}},{{0x2D24EA24L,0x4EC0B727L,-4L,1L,4294967295UL,0xB538AD10L,-1L},{0x7C529044L,0xA9950EBDL,0L,1L,0x2556593AL,8L,0xC3L},{0x9E0A6E62L,0x55A95E6AL,1L,0x5B5F3EEAL,8UL,4L,0x12L},{0xB5969875L,3UL,0x87BBL,0x4A9A9FA4L,4294967295UL,-10L,0x11L}},{{0x2D24EA24L,0x4EC0B727L,-4L,1L,4294967295UL,0xB538AD10L,-1L},{1UL,1UL,0x1B71L,0x95E92766L,0UL,0x2746C757L,-9L},{1UL,0xBE61B32DL,1L,-1L,0UL,1L,-10L},{0x2BABF483L,1UL,0xA7F0L,1L,1UL,0x6F6D4199L,-6L}}}};
            int *l_164 = &g_64.f3;
            unsigned l_167 = 4294967295UL;
            int i, j, k;
            if (func_53(l_144[4][0][0], l_145[5][3][3], p_34, g_94.f3))
            {
                char *l_148[6][6] = {{&g_64.f6,(void*)0,&g_64.f6,&g_64.f6,(void*)0,(void*)0},{(void*)0,&g_64.f6,(void*)0,(void*)0,&g_64.f6,(void*)0},{(void*)0,&g_64.f6,(void*)0,(void*)0,&g_64.f6,(void*)0},{(void*)0,&g_64.f6,(void*)0,(void*)0,&g_64.f6,(void*)0},{(void*)0,&g_64.f6,(void*)0,(void*)0,&g_64.f6,(void*)0},{(void*)0,&g_64.f6,(void*)0,(void*)0,&g_64.f6,(void*)0}};
                unsigned char l_149 = 254UL;
                int **l_151 = (void*)0;
                struct S0 l_156 = {0xB97F8572L,0xE6C04E2FL,0x2679L,-5L,4294967295UL,0L,-1L};
                short *l_188 = &l_145[5][3][3].f2;
                int i, j;
                (*g_45) = (safe_add_func_uint32_t_u_u(((l_149 = ((**l_141) > 0x94FDL)) ^ (l_150 != (void*)0)), g_142[1][1][0]));
                if ((0UL >= (g_143 & ((0x66C8L | (g_94.f3 >= 0xBF7BL)) >= g_123))))
                {
                    int ***l_152[7];
                    unsigned char *l_154 = &l_149;
                    short l_162 = 3L;
                    int i;
                    for (i = 0; i < 7; i++)
                        l_152[i] = &l_141;
                    (*l_141) = (void*)0;

                    ;
                    if (((*p_35) || (1L == ((l_153 = l_151) == &p_35))))
                    {
                        struct S0 *l_157[8] = {&g_64,&g_64,&g_64,&g_64,&g_64,&g_64,&g_64,&g_64};
                        int i;
                        g_68[1] = (!(*p_35));
                        g_94 = l_156;
                    }
                    else
                    {
                        char l_163 = 0xD5L;
                        g_68[1] = (func_53(l_158, g_94, p_34, g_159) <= (1L >= (safe_sub_func_uint8_t_u_u(l_162, g_143))));
                        l_164 = &g_159;

                        ;
                    }

                    ;
                    for (g_64.f4 = 24; (g_64.f4 >= 32); g_64.f4 = safe_add_func_int32_t_s_s(g_64.f4, 7))
                    {
                        int l_174 = 0x7EA6B481L;
                        short *l_175 = (void*)0;
                        short *l_176 = &l_145[5][3][3].f2;
                        int l_177 = 6L;
                        unsigned *l_182 = (void*)0;
                        unsigned *l_183 = &l_156.f0;
                        unsigned *l_184 = &g_94.f0;
                        unsigned *l_185 = &l_40[0][1];
                        (*l_164) |= 0x90EEBE92L;
                        l_177 |= (65535UL | ((*l_176) = (l_167 || (((safe_mod_func_uint8_t_u_u((safe_add_func_int16_t_s_s(((*l_150) = (safe_lshift_func_uint8_t_u_s(l_174, 4))), (g_159 > p_34))), (*l_158))) != p_34) & (*p_35)))));
                        (*l_164) = ((*l_164) > ((*l_185) = (((g_68[1] <= (safe_lshift_func_int16_t_s_s(((safe_sub_func_uint16_t_u_u(((65535UL | g_64.f0) | ((*l_184) = ((*l_183) = ((g_61[6] | (((void*)0 == l_152[4]) < g_94.f4)) >= (g_143 || g_94.f0))))), 0x2D08L)) | g_64.f4), p_34))) > 0xCBD6L) == l_177)));
                    }
                    for (l_156.f5 = 0; (l_156.f5 <= 0); l_156.f5 += 1)
                    {
                        (*l_164) &= 0x567D7ABBL;
                    }
                }
                else
                {
                    unsigned char **l_189 = &l_155;
                    unsigned char ***l_190 = &l_189;
                    int *l_191 = (void*)0;
                    for (l_156.f5 = 0; (l_156.f5 <= 4); l_156.f5 += 1)
                    {
                        struct S0 **l_187 = &l_186;
                        int i;
                        if ((*l_164))
                            break;
                        (*l_187) = l_186;
                        g_45 = (void*)0;

                        ;
                        g_68[l_156.f5] &= (l_188 != (void*)0);
                    }


                    (*l_190) = l_189;
                    for (l_156.f5 = 0; (l_156.f5 <= 1); l_156.f5 += 1)
                    {
                        int i;
                        p_35 = &g_68[l_156.f5];

                        ;
                        g_68[(l_156.f5 + 2)] ^= (*l_164);
                        if (g_68[2])
                            break;
                    }
                    (*l_141) = &g_68[0];

                    ;
                }

                ;
                ;
            }
            else
            {
                char l_204 = 0xDDL;
                int l_206[8][2][8] = {{{0x9AE2D6AAL,0x1ABC1157L,0x83041FB2L,0x83041FB2L,0x1ABC1157L,0x9AE2D6AAL,(-6L),0x6EA63593L},{0x9AE2D6AAL,0L,0x1C5FAE3BL,0x1ABC1157L,(-6L),0x1ABC1157L,0x1C5FAE3BL,0L}},{{0L,0x1C5FAE3BL,0x84712A33L,0x1ABC1157L,0x6EA63593L,1L,1L,0x6EA63593L},{0x83041FB2L,0x6EA63593L,0x6EA63593L,0x83041FB2L,0L,0L,1L,0x9AE2D6AAL}},{{0x1C5FAE3BL,0x83041FB2L,0x84712A33L,1L,0x84712A33L,0x83041FB2L,0x1C5FAE3BL,(-6L)},{0x84712A33L,0x83041FB2L,0x1C5FAE3BL,(-6L),0L,0L,(-6L),0x1C5FAE3BL}},{{0x6EA63593L,0x6EA63593L,0x83041FB2L,0L,0L,1L,0x9AE2D6AAL,1L},{0x84712A33L,0L,0x6EA63593L,0L,0x1ABC1157L,1L,(-7L),(-6L)}},{{0L,0L,0x83041FB2L,0x6EA63593L,0x6EA63593L,0x83041FB2L,0L,0L},{0x1C5FAE3BL,1L,0x83041FB2L,0x9AE2D6AAL,(-7L),0x1ABC1157L,(-7L),0x9AE2D6AAL}},{{0x6EA63593L,0x84712A33L,0x6EA63593L,(-6L),0x9AE2D6AAL,0x1ABC1157L,0x83041FB2L,0x83041FB2L},{0x83041FB2L,1L,0x1C5FAE3BL,0x1C5FAE3BL,1L,0x83041FB2L,0x9AE2D6AAL,(-7L)}},{{0x83041FB2L,0L,0L,1L,0x9AE2D6AAL,1L,0L,0L},{0x6EA63593L,0L,0x1ABC1157L,1L,(-7L),(-6L),(-6L),(-7L)}},{{0x1C5FAE3BL,(-7L),(-7L),0x1C5FAE3BL,0x6EA63593L,0L,(-6L),0x83041FB2L},{0L,0x1C5FAE3BL,0x1ABC1157L,(-6L),0x1ABC1157L,0x1C5FAE3BL,0L,0x9AE2D6AAL}}};
                int i, j, k;
                for (g_125 = 0; (g_125 < 34); g_125 = safe_add_func_int8_t_s_s(g_125, 1))
                {
                    for (g_64.f5 = 0; (g_64.f5 <= (-15)); g_64.f5 = safe_sub_func_uint32_t_u_u(g_64.f5, 5))
                    {
                        unsigned *l_205 = &g_94.f0;
                        (*l_186) = g_64;
                        l_206[1][0][7] |= (((*g_45) | (((*l_150) = (safe_sub_func_uint8_t_u_u(((*l_155) = p_34), p_34))) > (*l_164))) | ((p_34 && p_34) >= (safe_sub_func_int16_t_s_s((safe_lshift_func_uint16_t_u_s(l_204, (p_34 < (((*l_205) = (g_68[4] != 4294967295UL)) >= g_64.f6)))), g_94.f5))));
                        return g_94.f4;
                    }
                    g_94.f3 ^= ((*l_164) = ((*l_158) = (safe_rshift_func_int16_t_s_u(0x1AFCL, 12))));
                }
            }


            ;
            for (g_94.f6 = (-9); (g_94.f6 <= 25); g_94.f6++)
            {
                (*l_141) = p_35;


                l_211 |= ((*l_164) |= (*g_45));
            }


        }
        else
        {
            unsigned l_215 = 0xF46315E2L;
            int *l_216 = (void*)0;
            char *l_220 = &g_64.f6;
            char **l_219[10][5] = {{&l_220,&l_220,&l_220,(void*)0,&l_220},{&l_220,&l_220,&l_220,&l_220,&l_220},{&l_220,(void*)0,&l_220,&l_220,&l_220},{&l_220,&l_220,&l_220,&l_220,&l_220},{&l_220,&l_220,&l_220,&l_220,&l_220},{&l_220,(void*)0,&l_220,&l_220,&l_220},{&l_220,&l_220,&l_220,&l_220,&l_220},{&l_220,(void*)0,&l_220,&l_220,(void*)0},{&l_220,&l_220,&l_220,&l_220,&l_220},{&l_220,&l_220,&l_220,&l_220,&l_220}};
            int i, j;
            for (g_94.f2 = 1; (g_94.f2 <= 4); g_94.f2 += 1)
            {
                int i;
            }
        }


        (*l_158) = (safe_lshift_func_uint8_t_u_u((p_34 == p_34), (p_34 || p_34)));
        (*l_141) = l_229[0];

        ;
    }

    ;
    if ((p_34 ^ g_64.f5))
    {
        short l_230[6] = {0xC97DL,0xC97DL,0xC97DL,0xC97DL,0xC97DL,0xC97DL};
        struct S0 *l_237 = &g_94;
        int i;
        (**l_141) = ((l_230[2] < ((*p_35) != (~(!(g_46 = (*g_45)))))) > ((safe_mod_func_uint8_t_u_u((safe_mod_func_uint32_t_u_u(((g_94.f4 & p_34) | ((l_237 == l_237) > (p_34 == g_159))), p_34)), 0xCAL)) || p_34));
    }
    else
    {
        for (g_64.f3 = 0; (g_64.f3 >= (-19)); --g_64.f3)
        {
            struct S0 *l_240 = &g_223;
            struct S0 **l_241 = &l_186;
            (*l_141) = &g_159;

            ;
            (*l_241) = l_240;

            ;
            for (g_223.f4 = 10; (g_223.f4 <= 19); g_223.f4 = safe_add_func_uint16_t_u_u(g_223.f4, 1))
            {
                if ((*g_45))
                    break;
            }
            g_223.f3 |= (*g_45);
        }

        ;
        ;
    }

    ;
    ;
    return p_34;
}







static int func_36(unsigned p_37, int * p_38, int p_39)
{
    int *l_95 = &g_94.f3;
    struct S0 l_96 = {0xA426AC6DL,1UL,0xDF7CL,0x78769263L,0x3E4958F9L,0L,0xC7L};
    struct S0 *l_97 = (void*)0;
    struct S0 *l_98 = &g_94;
    struct S0 *l_99 = &g_64;
    g_45 = l_95;

    ;
    (*l_99) = ((*l_98) = l_96);
    return (*l_95);
}







static int * func_41(int * p_42, short p_43, int * p_44)
{
    int *l_71[4] = {&g_68[1],&g_68[1],&g_68[1],&g_68[1]};
    struct S0 *l_75[9][7][4] = {{{&g_64,&g_64,(void*)0,&g_64},{&g_64,&g_64,&g_64,&g_64},{(void*)0,&g_64,&g_64,&g_64},{(void*)0,&g_64,&g_64,&g_64},{&g_64,&g_64,(void*)0,&g_64},{&g_64,&g_64,&g_64,&g_64},{&g_64,&g_64,&g_64,&g_64}},{{(void*)0,&g_64,&g_64,&g_64},{&g_64,&g_64,(void*)0,&g_64},{&g_64,&g_64,&g_64,&g_64},{&g_64,&g_64,&g_64,&g_64},{&g_64,&g_64,&g_64,&g_64},{&g_64,&g_64,(void*)0,&g_64},{&g_64,&g_64,&g_64,&g_64}},{{(void*)0,&g_64,&g_64,&g_64},{(void*)0,&g_64,&g_64,&g_64},{&g_64,&g_64,(void*)0,&g_64},{&g_64,&g_64,&g_64,&g_64},{&g_64,&g_64,&g_64,&g_64},{(void*)0,&g_64,&g_64,&g_64},{&g_64,&g_64,(void*)0,&g_64}},{{&g_64,&g_64,&g_64,&g_64},{&g_64,&g_64,&g_64,&g_64},{&g_64,&g_64,&g_64,&g_64},{&g_64,&g_64,(void*)0,&g_64},{&g_64,&g_64,&g_64,&g_64},{(void*)0,&g_64,&g_64,&g_64},{(void*)0,&g_64,&g_64,&g_64}},{{&g_64,&g_64,(void*)0,&g_64},{&g_64,&g_64,&g_64,&g_64},{&g_64,&g_64,&g_64,&g_64},{(void*)0,&g_64,&g_64,&g_64},{&g_64,&g_64,(void*)0,&g_64},{&g_64,&g_64,&g_64,&g_64},{&g_64,&g_64,&g_64,&g_64}},{{&g_64,&g_64,&g_64,&g_64},{&g_64,&g_64,(void*)0,&g_64},{&g_64,&g_64,&g_64,&g_64},{(void*)0,&g_64,&g_64,&g_64},{&g_64,&g_64,&g_64,&g_64},{&g_64,&g_64,(void*)0,&g_64},{&g_64,&g_64,&g_64,&g_64}},{{(void*)0,&g_64,&g_64,&g_64},{&g_64,&g_64,&g_64,&g_64},{(void*)0,&g_64,(void*)0,&g_64},{&g_64,&g_64,&g_64,&g_64},{(void*)0,&g_64,&g_64,&g_64},{&g_64,&g_64,&g_64,&g_64},{&g_64,&g_64,&g_64,&g_64}},{{&g_64,&g_64,&g_64,&g_64},{&g_64,&g_64,&g_64,&g_64},{&g_64,&g_64,&g_64,&g_64},{&g_64,&g_64,(void*)0,&g_64},{&g_64,&g_64,&g_64,&g_64},{(void*)0,&g_64,&g_64,&g_64},{&g_64,&g_64,&g_64,&g_64}},{{(void*)0,&g_64,(void*)0,&g_64},{&g_64,&g_64,&g_64,&g_64},{(void*)0,&g_64,&g_64,&g_64},{&g_64,&g_64,&g_64,&g_64},{&g_64,&g_64,&g_64,&g_64},{&g_64,&g_64,&g_64,&g_64},{&g_64,&g_64,&g_64,&g_64}}};
    short l_76 = 0xC19DL;
    short l_79 = 0x8BD6L;
    int i, j, k;
    for (g_64.f1 = 0; (g_64.f1 >= 45); g_64.f1 = safe_add_func_int16_t_s_s(g_64.f1, 3))
    {
        int **l_72 = &g_45;
        (*l_72) = l_71[0];

        ;
        (*l_72) = p_42;


        return p_44;


    }
    l_79 &= (((safe_add_func_uint32_t_u_u(((((void*)0 != l_75[8][0][1]) && (&g_61[6] == &g_61[4])) || l_76), (((g_61[7] && ((safe_div_func_uint8_t_u_u((65535UL >= (p_43 != 0xA9E3L)), p_43)) && g_64.f6)) || 9UL) <= 0x97105BA9L))) == 0x6717L) > g_5);
    for (g_64.f4 = 0; (g_64.f4 <= 8); g_64.f4 += 1)
    {
        int **l_80[1][7][7] = {{{&l_71[2],&l_71[0],&l_71[0],&l_71[0],&l_71[0],&l_71[2],&l_71[0]},{&l_71[3],&l_71[0],(void*)0,&l_71[0],&l_71[3],&l_71[3],&l_71[0]},{&l_71[2],&l_71[0],&l_71[2],&g_45,&l_71[0],&l_71[3],&l_71[2]},{(void*)0,&l_71[0],&l_71[3],&g_45,&l_71[3],&l_71[0],(void*)0},{&l_71[0],&l_71[0],&l_71[2],&l_71[0],&l_71[0],&l_71[3],&l_71[0]},{&l_71[0],&l_71[0],&l_71[0],&l_71[0],&l_71[2],&l_71[3],&g_45},{(void*)0,&l_71[3],&l_71[2],&l_71[2],&l_71[2],&l_71[2],&l_71[3]}}};
        int i, j, k;
        p_44 = l_71[0];

        ;
        p_44 = &g_68[1];

        ;
    }
    for (p_43 = 3; (p_43 >= 0); p_43 -= 1)
    {
        struct S0 *l_83 = &g_64;
        unsigned l_89 = 1UL;
        int l_92 = 0x4A8A8F1CL;
        for (g_46 = 0; (g_46 <= 3); g_46 += 1)
        {
            struct S0 *l_81 = &g_64;
            struct S0 **l_82[7] = {&l_81,&l_81,&l_81,&l_81,&l_81,&l_81,&l_81};
            int i;
            g_64.f3 |= ((p_43 | (((l_83 = l_81) != (void*)0) < (((*p_42) <= (safe_unary_minus_func_int16_t_s((-1L)))) <= (safe_rshift_func_uint8_t_u_u(0x9AL, p_43))))) != (safe_lshift_func_int8_t_s_u(l_89, 4)));
            for (g_64.f1 = 0; (g_64.f1 <= 3); g_64.f1 += 1)
            {
                short *l_93 = &l_79;
                int i, j, k;
                g_68[1] |= (((void*)0 == &l_75[(g_46 + 3)][(p_43 + 2)][g_64.f1]) <= (((p_43 | l_89) >= p_43) != (g_64.f0 < (safe_lshift_func_int16_t_s_u(((*l_93) = (l_92 = ((void*)0 == &l_83))), 9)))));
                g_94 = g_64;
                if ((*g_45))
                    break;
            }
        }
    }
    return l_71[0];


}







static short func_47(int * p_48, short p_49, int * p_50, unsigned short p_51, int p_52)
{
    int *l_58 = (void*)0;
    struct S0 l_59 = {0x51F7EE04L,1UL,0xB307L,0x2BAB2BD6L,2UL,5L,1L};
    unsigned short *l_60 = &g_61[6];
    (*g_45) = (func_53(l_58, l_59, p_49, ((*l_60) = (0x075DL | g_46))) && (*g_45));
    return g_64.f5;
}







static unsigned func_53(int * p_54, struct S0 p_55, char p_56, unsigned short p_57)
{
    struct S0 l_62 = {0xC5A97588L,4294967291UL,7L,-9L,3UL,0x2FFABE4BL,-6L};
    struct S0 *l_63[10] = {&l_62,&l_62,&l_62,&l_62,&l_62,&l_62,&l_62,&l_62,&l_62,&l_62};
    int *l_66 = &g_46;
    int **l_65 = &l_66;
    int i;
    g_64 = l_62;
    g_64 = g_64;
    (*l_65) = (void*)0;

    ;
    return g_64.f4;
}





int main (int argc, char* argv[])
{
    int i, j, k;
    int print_hash_value = 0;
    if (argc == 2 && strcmp(argv[1], "1") == 0) print_hash_value = 1;
    platform_main_begin();
    crc32_gentab();
    func_1();
    transparent_crc(g_5, "g_5", print_hash_value);
    transparent_crc(g_7, "g_7", print_hash_value);
    transparent_crc(g_46, "g_46", print_hash_value);
    for (i = 0; i < 9; i++)
    {
        transparent_crc(g_61[i], "g_61[i]", print_hash_value);
        if (print_hash_value) printf("index = [%d]\n", i);

    }
    transparent_crc(g_64.f0, "g_64.f0", print_hash_value);
    transparent_crc(g_64.f1, "g_64.f1", print_hash_value);
    transparent_crc(g_64.f2, "g_64.f2", print_hash_value);
    transparent_crc(g_64.f3, "g_64.f3", print_hash_value);
    transparent_crc(g_64.f4, "g_64.f4", print_hash_value);
    transparent_crc(g_64.f5, "g_64.f5", print_hash_value);
    transparent_crc(g_64.f6, "g_64.f6", print_hash_value);
    for (i = 0; i < 5; i++)
    {
        transparent_crc(g_68[i], "g_68[i]", print_hash_value);
        if (print_hash_value) printf("index = [%d]\n", i);

    }
    transparent_crc(g_94.f0, "g_94.f0", print_hash_value);
    transparent_crc(g_94.f1, "g_94.f1", print_hash_value);
    transparent_crc(g_94.f2, "g_94.f2", print_hash_value);
    transparent_crc(g_94.f3, "g_94.f3", print_hash_value);
    transparent_crc(g_94.f4, "g_94.f4", print_hash_value);
    transparent_crc(g_94.f5, "g_94.f5", print_hash_value);
    transparent_crc(g_94.f6, "g_94.f6", print_hash_value);
    transparent_crc(g_123, "g_123", print_hash_value);
    transparent_crc(g_125, "g_125", print_hash_value);
    for (i = 0; i < 3; i++)
    {
        for (j = 0; j < 6; j++)
        {
            for (k = 0; k < 2; k++)
            {
                transparent_crc(g_142[i][j][k], "g_142[i][j][k]", print_hash_value);
                if (print_hash_value) printf("index = [%d][%d][%d]\n", i, j, k);

            }
        }
    }
    transparent_crc(g_143, "g_143", print_hash_value);
    transparent_crc(g_159, "g_159", print_hash_value);
    transparent_crc(g_223.f0, "g_223.f0", print_hash_value);
    transparent_crc(g_223.f1, "g_223.f1", print_hash_value);
    transparent_crc(g_223.f2, "g_223.f2", print_hash_value);
    transparent_crc(g_223.f3, "g_223.f3", print_hash_value);
    transparent_crc(g_223.f4, "g_223.f4", print_hash_value);
    transparent_crc(g_223.f5, "g_223.f5", print_hash_value);
    transparent_crc(g_223.f6, "g_223.f6", print_hash_value);
    transparent_crc(g_244.f0, "g_244.f0", print_hash_value);
    transparent_crc(g_244.f1, "g_244.f1", print_hash_value);
    transparent_crc(g_244.f2, "g_244.f2", print_hash_value);
    transparent_crc(g_244.f3, "g_244.f3", print_hash_value);
    transparent_crc(g_244.f4, "g_244.f4", print_hash_value);
    transparent_crc(g_244.f5, "g_244.f5", print_hash_value);
    transparent_crc(g_244.f6, "g_244.f6", print_hash_value);
    transparent_crc(g_605, "g_605", print_hash_value);
    transparent_crc(g_619, "g_619", print_hash_value);
    transparent_crc(g_646, "g_646", print_hash_value);
    transparent_crc(g_834, "g_834", print_hash_value);
    transparent_crc(g_891, "g_891", print_hash_value);
    transparent_crc(g_920, "g_920", print_hash_value);
    platform_main_end(crc32_context ^ 0xFFFFFFFFUL, print_hash_value);
    return 0;
}
