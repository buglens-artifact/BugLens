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
   unsigned f0 : 5;
   unsigned f1 : 6;
   unsigned f2 : 16;
   signed f3 : 28;
   unsigned f4 : 27;
   signed f5 : 6;
};


static unsigned g_23 = 4294967295UL;
static int g_78 = 1L;
static short g_83 = 2L;
static unsigned short g_86 = 0xEB41L;
static unsigned char g_103 = 3UL;
static unsigned g_106 = 4294967291UL;
static short g_130 = 0x7669L;
static int g_139 = (-5L);
static short g_141 = 0xB652L;
static struct S0 g_150 = {1,3,142,665,11138,5};
static struct S0 g_154 = {4,5,105,9495,6406,-0};
static short g_203 = 0xB926L;
static int g_241 = 0xD6D4906CL;
static unsigned g_274 = 4294967295UL;
static short g_330 = 0x4E63L;
static char g_351 = 0x30L;
static unsigned short g_409 = 0x9ACFL;
static int g_512 = 0x30BF8AFAL;
static short g_550 = (-4L);
static unsigned short g_572 = 1UL;



static int func_1(void);
static struct S0 func_2(unsigned p_3, int p_4);
static unsigned func_5(int p_6, unsigned char p_7, char p_8);
static unsigned char func_10(unsigned p_11, unsigned short p_12, int p_13, short p_14);
static unsigned short func_17(int p_18, int p_19, unsigned short p_20, char p_21, unsigned p_22);
static char func_30(struct S0 p_31, char p_32, struct S0 p_33, unsigned short p_34, unsigned p_35);
static int func_41(int p_42, int p_43);
static unsigned char func_46(struct S0 p_47, short p_48, char p_49);
static unsigned short func_52(short p_53, unsigned short p_54, short p_55);
static int func_58(int p_59);
static int func_1(void)
{
    char l_15 = (-1L);
    int l_16 = 0x949F4FFCL;
    struct S0 l_36 = {4,2,116,14021,2655,-1};
    unsigned l_149 = 0xEB6C92F5L;
    int l_845 = 0L;
    char l_875 = 0xDDL;
    unsigned l_886 = 4294967295UL;
    unsigned short l_893 = 0x9276L;
    l_36 = func_2((g_550 = func_5((safe_unary_minus_func_uint8_t_u(func_10((l_16 = l_15), func_17(g_23, (((safe_add_func_uint8_t_u_u(((safe_rshift_func_int8_t_s_s(0xA8L, 7)) == ((safe_mul_func_uint8_t_u_u(g_23, func_30(l_36, ((safe_add_func_uint8_t_u_u((safe_add_func_int32_t_s_s(func_41(((safe_lshift_func_uint8_t_u_u(func_46(l_36, (safe_lshift_func_int8_t_s_s(((func_52(g_23, g_23, (safe_add_func_int32_t_s_s((~((g_83 = func_58(g_23)) && l_36.f1)), g_23))) >= 0x2F16L) ^ g_23), g_23)), l_149), g_23)) && l_36.f4), g_23), g_23)), l_15)) > l_15), g_154, l_149, g_154.f4))) != 0L)), g_154.f1)) != g_23) >= l_36.f0), l_36.f3, g_154.f0, g_154.f4), g_203, g_203))), g_330, g_330)), l_36.f2);
    if ((l_36.f5 = (safe_sub_func_int16_t_s_s((((func_17((g_154.f3 = (l_36.f3 >= (safe_rshift_func_uint8_t_u_u(func_58((func_58(l_36.f2) == ((0L || g_154.f5) != g_86))), 6)))), g_150.f0, ((safe_add_func_int16_t_s_s((safe_mul_func_int16_t_s_s(l_36.f5, 8L)), 1UL)) | l_36.f4), l_36.f4, g_23) && 0x882786D4L) || g_154.f0) == 5UL), g_330))))
    {
        short l_848 = 0x7A49L;
        int l_849 = 0x5495AD8EL;
        struct S0 l_867 = {0,1,63,-14256,1233,2};
        for (g_139 = 0; (g_139 >= (-20)); --g_139)
        {
            l_845 = (safe_rshift_func_int16_t_s_s(g_154.f5, 0));
        }
        for (g_106 = 0; (g_106 == 40); g_106 = safe_add_func_uint8_t_u_u(g_106, 3))
        {
            l_849 = l_848;
            g_150.f3 = ((safe_lshift_func_uint8_t_u_s(g_150.f0, 2)) == (g_512 < l_848));
        }
        for (g_139 = (-15); (g_139 < (-8)); g_139 = safe_add_func_int8_t_s_s(g_139, 5))
        {
            int l_854 = 0x01CF97ADL;
            g_154.f5 = ((((l_854 > 0xCEL) || (~(((safe_mod_func_uint32_t_u_u((((func_58((safe_lshift_func_uint16_t_u_s(0UL, g_572))) <= (l_16 = l_854)) <= ((safe_lshift_func_int16_t_s_u((((safe_mul_func_uint16_t_u_u((safe_lshift_func_int8_t_s_u(g_330, 2)), func_46(g_150, (g_550 = (safe_sub_func_uint16_t_u_u(g_154.f1, l_854))), g_23))) <= g_103) ^ l_36.f1), g_106)) ^ 0UL)) <= l_854), g_241)) == 0xBCBCAF43L) & g_139))) > g_274) > g_23);
            if (g_330)
                continue;
            l_867 = l_36;
            l_36 = l_36;
        }
        l_36.f3 = l_867.f3;
    }
    else
    {
        unsigned short l_874 = 65530UL;
        g_154.f3 = (safe_rshift_func_uint16_t_u_u((safe_lshift_func_int16_t_s_u(((safe_mod_func_uint8_t_u_u(((l_875 = (l_36.f3 = l_874)) != (g_351 = ((g_150.f5 ^ (l_16 = func_52(g_154.f5, ((safe_lshift_func_uint16_t_u_u(l_36.f1, (0x92L == (((l_36.f5 = (((safe_mul_func_uint8_t_u_u((safe_add_func_int8_t_s_s((g_241 && (g_103 = g_154.f4)), ((safe_add_func_uint16_t_u_u(((~g_106) == ((safe_mod_func_uint16_t_u_u(((g_130 = 0x4893L) && 0x59D3L), l_874)) || 0x15L)), l_874)) < 0x5757L))), l_874)) | 0x96A96F33L) & 0xB33024F3L)) == g_154.f5) & 65530UL)))) < g_150.f1), g_512))) < 65528UL))), l_886)) ^ l_874), 4)), l_149));
        l_16 = l_874;
    }
    l_36.f3 = (!(safe_mod_func_int8_t_s_s(g_241, (safe_lshift_func_uint8_t_u_s((l_16 = (safe_add_func_int16_t_s_s((g_572 && (0x157DL ^ ((l_36.f5 = (l_893 = (g_150.f4 || func_30(g_150, l_36.f4, g_150, func_52(g_154.f0, g_141, g_154.f3), g_150.f3)))) == g_409))), 0xF63EL))), 2)))));
    g_150.f3 = ((l_36.f3 = 1L) > (-3L));
    return g_83;
}







static struct S0 func_2(unsigned p_3, int p_4)
{
    int l_557 = 0x02C44D9DL;
    int l_569 = 7L;
    struct S0 l_661 = {4,0,157,-3360,3574,-2};
    unsigned char l_753 = 0UL;
    unsigned l_811 = 0xB60026FFL;
    unsigned char l_814 = 0xC6L;
    if ((safe_mod_func_int32_t_s_s(8L, (safe_lshift_func_uint8_t_u_u((safe_mod_func_int8_t_s_s(l_557, (safe_rshift_func_int8_t_s_u(((g_86 = ((safe_mod_func_int8_t_s_s((g_351 = l_557), (+(!p_4)))) >= (safe_rshift_func_uint16_t_u_s(1UL, 6)))) | 0xB9D0L), func_41(g_150.f5, g_409))))), 2)))))
    {
        char l_573 = 4L;
        int l_583 = 0x563AD9B7L;
        unsigned char l_592 = 1UL;
        short l_606 = 0x5379L;
        struct S0 l_639 = {1,4,51,-12262,1932,-1};
        char l_667 = 5L;
        short l_713 = 0L;
        unsigned l_808 = 4294967295UL;
        if (((g_154.f5 = (-6L)) <= (g_154.f4 = ((safe_rshift_func_uint8_t_u_s(g_150.f1, 4)) == (g_330 ^ ((safe_unary_minus_func_uint32_t_u(0x85570AE5L)) | (safe_mul_func_int16_t_s_s((g_203 = (g_130 > func_58(((l_569 = g_203) >= (l_573 = ((safe_rshift_func_uint16_t_u_s(p_4, (g_572 < 0x26L))) >= p_3)))))), g_154.f2))))))))
        {
            char l_574 = 0x95L;
            unsigned char l_597 = 0UL;
            int l_664 = 1L;
            struct S0 l_676 = {0,5,217,-11037,2155,7};
            l_574 = g_103;
            if ((((safe_rshift_func_uint16_t_u_s((((g_572 = (p_4 && func_10((safe_add_func_uint32_t_u_u((safe_lshift_func_int8_t_s_u(l_574, (safe_sub_func_uint8_t_u_u(l_583, p_4)))), ((safe_mul_func_uint8_t_u_u(0xA9L, (safe_lshift_func_int16_t_s_u(((safe_rshift_func_uint8_t_u_u((g_139 ^ p_3), (safe_add_func_uint8_t_u_u(l_592, ((safe_mul_func_uint16_t_u_u((safe_sub_func_uint16_t_u_u(g_23, 0L)), p_4)) >= g_150.f4))))) <= g_150.f4), 6)))) & l_573))), l_574, p_3, p_3))) >= p_4) != p_3), 0)) || l_597) || l_573))
            {
                unsigned short l_616 = 0x5002L;
                unsigned short l_618 = 0x23E1L;
                int l_634 = 6L;
                unsigned l_635 = 1UL;
                struct S0 l_638 = {2,1,92,-6385,4360,2};
                unsigned l_654 = 0x6E4AB808L;
                for (g_83 = 0; (g_83 != (-12)); g_83 = safe_sub_func_uint8_t_u_u(g_83, 1))
                {
                    unsigned l_607 = 4294967288UL;
                    int l_615 = 2L;
                    struct S0 l_619 = {3,0,17,-13797,5189,6};
                    g_241 = (safe_sub_func_uint16_t_u_u((g_154.f5 != ((g_512 <= (safe_rshift_func_uint16_t_u_s((g_78 < l_592), (g_330 & (func_46((g_150 = g_154), l_592, (((safe_mul_func_uint8_t_u_u((p_3 > g_141), 0xF9L)) >= g_106) >= p_4)) || (-3L)))))) > l_606)), l_607));
                    g_150.f5 = l_557;
                    if ((safe_sub_func_int32_t_s_s(g_512, p_4)))
                    {
                        if (p_4)
                            break;
                    }
                    else
                    {
                        unsigned l_614 = 6UL;
                        int l_617 = 0x042FF525L;
                        l_615 = (safe_sub_func_uint8_t_u_u(func_10((g_274 = (p_3 = (0x7D52L == (((safe_mod_func_uint8_t_u_u((((6L < p_3) & g_154.f2) <= (l_592 <= (g_154.f5 = l_614))), g_141)) == p_3) | l_573)))), g_241, g_203, g_351), 0xFBL));
                        g_154.f3 = (func_46(g_150, (l_616 ^ ((1L < g_150.f2) != g_78)), g_83) | g_130);
                        l_617 = g_154.f1;
                        l_618 = (g_154.f2 != (g_83 ^ l_569));
                    }
                    l_619 = g_154;
                }
                g_154.f5 = l_569;
                l_569 = (((safe_rshift_func_uint16_t_u_u((l_635 = func_17((safe_sub_func_uint8_t_u_u(func_46(g_150, ((safe_lshift_func_uint16_t_u_u(g_150.f5, 6)) < (-7L)), l_557), (safe_mul_func_int8_t_s_s((g_351 = (l_597 ^ (l_616 <= ((safe_mod_func_uint32_t_u_u(((safe_sub_func_int32_t_s_s((safe_sub_func_uint16_t_u_u(p_3, p_3)), 0x246E98B0L)) & 1UL), l_618)) >= g_572)))), 0xA4L)))), g_103, l_634, g_550, g_274)), g_512)) & g_330) < l_597);
                if ((safe_lshift_func_uint16_t_u_u(p_3, 4)))
                {
                    unsigned short l_650 = 0x9A2AL;
                    int l_652 = (-9L);
                    int l_653 = 0xC589CC45L;
                    l_639 = l_638;
                    l_639.f5 = (safe_rshift_func_uint16_t_u_u((safe_rshift_func_int16_t_s_s((p_3 & func_58(func_52(l_569, (safe_add_func_int32_t_s_s((safe_rshift_func_int8_t_s_s(g_150.f2, ((g_103 = 0xFCL) && (p_3 || ((+((((65526UL >= 0x6E54L) | (safe_mul_func_uint8_t_u_u(func_52(g_550, p_4, g_550), p_3))) <= p_3) && g_203)) == 0xDBL))))), g_351)), g_23))), p_4)), 12));
                    l_569 = p_4;
                    if (g_150.f4)
                    {
                        return l_638;
                    }
                    else
                    {
                        short l_651 = (-4L);
                        l_654 = (l_650 | ((l_651 = g_150.f0) && func_10(g_150.f1, g_139, ((g_141 = (l_653 = ((l_652 = 0xE6L) > 0xACL))) ^ (func_58(g_150.f0) != (p_3 ^ g_130))), g_203)));
                        g_241 = (((g_154.f0 || (safe_sub_func_uint16_t_u_u((safe_lshift_func_int16_t_s_u(g_572, p_4)), (safe_mul_func_uint8_t_u_u((l_569 = l_569), ((g_141 ^ (g_241 | g_512)) > (g_154.f4 < (g_154.f3 <= 0xA12BL)))))))) | g_150.f4) <= g_154.f0);
                    }
                }
                else
                {
                    g_150 = l_661;
                }
            }
            else
            {
                struct S0 l_675 = {3,2,118,14458,1723,3};
                if ((l_639.f5 = (0x317F9BE1L >= (l_664 = (0x21F0L > (safe_rshift_func_uint8_t_u_u(g_86, (l_639.f3 ^ p_4))))))))
                {
                    struct S0 l_666 = {1,6,208,-8874,8633,5};
                    if ((func_52(p_4, p_3, (l_639.f5 = (-1L))) == (p_4 == g_150.f4)))
                    {
                        struct S0 l_665 = {2,0,60,6573,2712,-5};
                        l_666 = l_665;
                    }
                    else
                    {
                        g_150.f5 = l_667;
                        g_241 = (safe_mod_func_int16_t_s_s((safe_unary_minus_func_uint16_t_u((safe_sub_func_int8_t_s_s(0x11L, p_3)))), func_58(func_58(p_3))));
                    }
                    for (g_512 = 0; (g_512 <= 12); g_512++)
                    {
                        if (l_661.f3)
                            break;
                        g_150 = l_675;
                        g_154 = (l_676 = l_639);
                        g_150 = g_150;
                    }
                    g_154.f3 = (func_46(g_150, g_330, p_4) && 0x87172074L);
                    l_666 = l_675;
                }
                else
                {
                    int l_689 = (-1L);
                    int l_690 = 0L;
                    g_150.f5 = (g_154.f3 = g_351);
                    for (p_3 = (-3); (p_3 < 6); ++p_3)
                    {
                        unsigned char l_679 = 5UL;
                        int l_688 = 0x07D44712L;
                        struct S0 l_691 = {0,1,147,6335,11451,7};
                        l_661.f3 = l_679;
                        l_690 = (l_689 = (safe_mul_func_int16_t_s_s(func_52(((func_17((l_639.f3 = (safe_mul_func_int8_t_s_s(g_154.f3, (l_661.f5 = (l_688 = (safe_mod_func_int16_t_s_s(((func_41(g_512, l_606) | (l_676.f1 > (p_3 || func_58((l_639.f5 = p_4))))) & ((safe_sub_func_uint32_t_u_u((g_203 != 6UL), 0xC05CB5A4L)) || g_274)), p_3))))))), g_154.f4, p_3, l_676.f4, p_4) < g_550) < p_4), l_689, l_569), g_572)));
                        l_639 = l_691;
                        g_154.f3 = g_139;
                    }
                    l_689 = (safe_add_func_uint8_t_u_u((func_5(p_3, g_512, g_154.f3) ^ g_103), g_572));
                    l_675 = l_676;
                }
                l_675.f5 = (safe_lshift_func_int8_t_s_u(((g_139 != p_3) & ((((l_639.f3 = func_46(l_676, (l_661.f3 != l_676.f2), ((((safe_lshift_func_uint16_t_u_s(func_5(((func_46(l_675, (((safe_sub_func_int16_t_s_s(p_3, (-3L))) == 1UL) | g_154.f0), l_639.f3) == p_4) >= g_512), g_154.f2, l_661.f5), 3)) < 1L) >= l_661.f0) <= l_661.f4))) | 3UL) == p_3) && 2UL)), 1));
            }
            g_150 = g_150;
        }
        else
        {
            struct S0 l_700 = {2,4,241,1502,6472,1};
            g_154 = l_700;
            l_713 = (g_154.f5 = (safe_rshift_func_int16_t_s_s(((safe_mul_func_uint16_t_u_u(((g_103 = (0xC975L <= (safe_add_func_int8_t_s_s((p_4 != (safe_sub_func_uint16_t_u_u(l_700.f5, p_3))), 0xCEL)))) >= func_58(((safe_mod_func_uint32_t_u_u(p_3, (l_700.f3 = ((g_154.f0 = (safe_add_func_int16_t_s_s((0UL || func_46(g_150, l_639.f0, p_3)), g_78))) & l_661.f4)))) != 1UL))), 0x7147L)) <= 0x47E79177L), g_330)));
        }
        if ((func_10(g_241, p_3, l_639.f4, p_3) < g_409))
        {
            struct S0 l_714 = {1,1,184,-8043,7017,-0};
            struct S0 l_715 = {2,0,95,-5298,10884,4};
            l_639 = (l_715 = (l_714 = g_150));
        }
        else
        {
            int l_728 = 0x77B94C2DL;
            struct S0 l_729 = {2,6,221,-6353,765,-5};
            struct S0 l_770 = {1,1,188,7169,3813,3};
            if ((safe_rshift_func_uint8_t_u_u(((l_661.f3 = (((safe_add_func_uint16_t_u_u((g_409 = p_4), (g_86 = g_512))) > (safe_add_func_int16_t_s_s((!(func_41(((p_4 ^ 0xDDBC5C5EL) > func_58(l_583)), g_154.f1) | (safe_lshift_func_uint16_t_u_s((safe_mul_func_int16_t_s_s((safe_sub_func_int8_t_s_s(p_3, 0x96L)), 0L)), p_4)))), 65534UL))) < l_728)) > (-1L)), 2)))
            {
                return l_661;
            }
            else
            {
                unsigned short l_748 = 1UL;
                int l_750 = 5L;
                short l_764 = 0xBD70L;
                int l_766 = (-1L);
                struct S0 l_786 = {2,0,167,-511,5114,3};
                struct S0 l_799 = {0,4,180,5225,9918,-1};
                l_729 = l_639;
                if (((!(+(0x60E00C00L & func_41((g_139 = 0x3EDB204BL), p_4)))) == ((-10L) && (p_3 & p_4))))
                {
                    int l_749 = (-9L);
                    unsigned char l_765 = 0UL;
                    g_241 = (l_557 || g_512);
                    g_154.f3 = (safe_lshift_func_uint16_t_u_u((safe_mul_func_uint8_t_u_u((g_103 = (safe_lshift_func_int8_t_s_s(0x2BL, 5))), (safe_rshift_func_uint16_t_u_u((safe_lshift_func_uint16_t_u_u((((g_83 = p_4) >= (safe_rshift_func_uint16_t_u_u(l_583, 10))) && (l_750 = (func_41(((p_4 == (l_639.f1 && p_4)) < (safe_add_func_int8_t_s_s(((safe_sub_func_int32_t_s_s((g_241 = ((safe_lshift_func_int8_t_s_s(g_154.f3, (0x4866L && 0x3FC4L))) != l_729.f1)), l_748)) && 0x98D6L), l_749))), g_130) & 65532UL))), p_3)), 11)))), p_3));
                    l_728 = 6L;
                    for (l_592 = 0; (l_592 <= 7); l_592++)
                    {
                        l_753 = l_661.f2;
                        if (g_330)
                            continue;
                        l_750 = ((g_150.f4 = l_750) < ((p_3 <= (safe_mul_func_uint16_t_u_u((g_86 = l_639.f3), g_154.f3))) > (safe_sub_func_uint8_t_u_u(((safe_sub_func_uint16_t_u_u(func_58(p_3), g_150.f2)) >= (safe_mod_func_int32_t_s_s((safe_mod_func_int32_t_s_s(l_753, p_3)), l_661.f2))), 0xB3L))));
                        l_765 = (l_764 < g_139);
                    }
                }
                else
                {
                    unsigned l_767 = 0xCB3A03D1L;
                    int l_779 = 0x7C142BA0L;
                    int l_796 = 0L;
                    struct S0 l_798 = {1,6,47,502,201,-7};
                    l_767 = l_766;
                    g_154.f3 = (((g_154.f4 >= ((p_3 ^ p_3) ^ ((((safe_mul_func_uint16_t_u_u(func_46(l_770, p_4, (l_661.f3 = (safe_sub_func_uint8_t_u_u((((g_351 = (l_639.f3 = (!(safe_sub_func_int8_t_s_s(((safe_lshift_func_int16_t_s_u(l_764, 8)) || (safe_sub_func_uint8_t_u_u(l_753, l_779))), (safe_mod_func_int8_t_s_s((l_728 = (((safe_mod_func_uint16_t_u_u(p_3, 0x34BBL)) >= g_409) & p_4)), 4L))))))) >= 0xB2L) >= p_3), p_3)))), 0xD74BL)) >= l_753) <= l_767) >= 0L))) != g_83) != (-7L));
                    for (g_241 = 0; (g_241 <= 10); g_241 = safe_add_func_int16_t_s_s(g_241, 9))
                    {
                        int l_795 = 0x69CC3C14L;
                        int l_797 = 0xCBCAAB50L;
                        l_728 = func_30(g_154, p_4, l_786, (l_796 = (safe_add_func_int16_t_s_s(g_150.f2, ((l_795 = func_58(((safe_mul_func_uint8_t_u_u((0UL ^ 0x4444L), 1L)) != (safe_sub_func_int32_t_s_s(((safe_add_func_int32_t_s_s(g_150.f1, 6UL)) <= 0xA595L), p_4))))) | p_4)))), l_797);
                        return l_798;
                    }
                    g_150 = l_799;
                }
                l_786 = l_729;
                l_639 = l_661;
            }
            l_808 = (safe_sub_func_int16_t_s_s(l_728, (g_203 = (safe_lshift_func_int16_t_s_u(p_3, (l_569 = ((safe_rshift_func_uint16_t_u_u((g_572 = l_770.f1), ((0xE0L > 249UL) != ((safe_mul_func_int16_t_s_s(p_3, (l_661.f3 = (l_569 > 0xC7L)))) < 0xDDL)))) ^ 0xB3L)))))));
        }
        for (g_86 = 0; (g_86 <= 34); g_86++)
        {
            g_150 = l_639;
            g_154.f3 = func_46(g_154, l_583, func_58((0xA2BEL ^ ((!(g_103 = g_572)) == (+l_606)))));
            if (l_639.f0)
            {
                l_811 = (g_154.f3 = g_83);
            }
            else
            {
                l_569 = (p_4 > l_569);
                g_150.f3 = (safe_mod_func_uint16_t_u_u((g_572 = func_58(g_154.f3)), l_814));
                g_154.f5 = (l_639.f3 = (safe_mod_func_uint16_t_u_u((g_203 | (-9L)), p_4)));
            }
            if (l_639.f0)
                break;
        }
        g_150.f5 = (l_713 | (safe_unary_minus_func_int32_t_s((safe_lshift_func_uint16_t_u_u((safe_sub_func_int16_t_s_s((g_154.f2 || l_639.f0), l_639.f2)), 7)))));
    }
    else
    {
        int l_826 = 0x77E78062L;
        char l_827 = (-1L);
        g_150.f3 = (safe_mul_func_uint8_t_u_u((safe_add_func_uint16_t_u_u(g_150.f2, p_4)), l_826));
        g_150.f5 = (l_661.f3 || (l_827 ^ ((((func_52((p_3 & g_78), g_130, g_150.f4) != (safe_lshift_func_int16_t_s_u(l_569, 15))) ^ l_826) == p_4) && 65535UL)));
        for (l_753 = 0; (l_753 <= 57); l_753 = safe_add_func_uint16_t_u_u(l_753, 8))
        {
            struct S0 l_832 = {1,3,153,-11954,7716,-5};
            return l_832;
        }
    }
    return l_661;
}







static unsigned func_5(int p_6, unsigned char p_7, char p_8)
{
    unsigned short l_489 = 0x69D9L;
    int l_492 = 0x5E8A83C0L;
    struct S0 l_499 = {2,7,107,-9085,3549,0};
    int l_526 = 0x6E9539AAL;
    char l_533 = 0L;
    if (((!(safe_rshift_func_int16_t_s_s((2L & (((l_492 = ((safe_lshift_func_int8_t_s_u((g_351 = ((p_6 > (safe_mod_func_int32_t_s_s(((safe_add_func_int32_t_s_s(((safe_mod_func_int8_t_s_s(g_154.f3, l_489)) ^ p_7), (safe_rshift_func_uint16_t_u_s((func_41(p_7, (l_489 == 0x67D5L)) || 0L), 12)))) <= 7L), g_154.f0))) & l_489)), 6)) <= g_330)) || 1UL) > 0xC1DE429DL)), 10))) >= 0xC72FL))
    {
        unsigned l_493 = 6UL;
        p_6 = ((65531UL && p_7) <= (g_274 || ((g_150.f4 != (l_493 > g_150.f4)) < (l_492 = (p_7 < (1L > l_493))))));
    }
    else
    {
        int l_505 = 9L;
        struct S0 l_509 = {4,3,172,-4962,7596,-1};
        for (g_274 = 0; (g_274 != 54); g_274 = safe_add_func_int32_t_s_s(g_274, 1))
        {
            unsigned char l_498 = 0x53L;
            char l_513 = 1L;
            for (g_141 = 0; (g_141 <= (-23)); --g_141)
            {
                unsigned l_500 = 0x76228E72L;
                if (l_492)
                {
                    return l_498;
                }
                else
                {
                    p_6 = func_46(l_499, l_500, l_492);
                    if (p_7)
                        break;
                    g_154.f3 = 0x8169DE80L;
                    g_241 = (p_8 | l_500);
                }
                for (l_500 = (-30); (l_500 > 44); l_500 = safe_add_func_uint8_t_u_u(l_500, 1))
                {
                    char l_514 = 0L;
                    int l_515 = 4L;
                    if (l_500)
                        break;
                    if (g_150.f3)
                        break;
                    l_515 = (safe_rshift_func_uint8_t_u_u(((~(l_505 = (((((g_351 = (g_130 || p_6)) ^ (((l_505 & (g_86 = ((safe_unary_minus_func_int16_t_s((l_499.f1 || (l_498 >= (safe_lshift_func_uint8_t_u_u(func_46(l_509, ((safe_sub_func_uint32_t_u_u(((p_7 = g_512) ^ l_513), (-1L))) < g_154.f2), l_513), 1)))))) < p_6))) < 0x28L) > 0x64L)) >= l_514) > g_154.f4) == p_6))) > l_509.f3), 5));
                }
            }
        }
        for (g_83 = 0; (g_83 != (-24)); g_83--)
        {
            g_150 = l_499;
        }
    }
    l_499.f3 = ((l_499.f5 = (((((safe_add_func_uint32_t_u_u(func_46(g_154, p_6, (safe_sub_func_uint16_t_u_u((safe_sub_func_int8_t_s_s(p_7, l_499.f3)), (((safe_add_func_int32_t_s_s(((g_86 = l_526) ^ (((l_499.f1 && (safe_sub_func_int32_t_s_s(func_46(l_499, ((l_492 = ((safe_sub_func_int8_t_s_s(p_7, (safe_rshift_func_int16_t_s_u(((+g_154.f3) != l_499.f1), 9)))) || l_526)) == 0xBBA0L), p_6), g_203))) | l_499.f4) == l_533)), 0xE72DC9ADL)) == p_7) == 9L)))), l_499.f5)) == p_6) < p_7) || g_141) | 3L)) || l_526);
    l_499.f3 = ((l_489 | g_203) != (l_499.f1 | ((safe_sub_func_uint16_t_u_u((safe_mul_func_int8_t_s_s(((safe_mod_func_int16_t_s_s(g_150.f2, g_130)) > (p_7 <= (safe_rshift_func_uint16_t_u_u((l_499.f5 = 0xD5D7L), 8)))), (((g_351 = g_141) && g_154.f5) < l_499.f4))), p_7)) >= l_499.f1)));
    g_154.f5 = (255UL < (safe_rshift_func_uint16_t_u_s((safe_mul_func_int8_t_s_s(((l_492 = ((safe_mul_func_int8_t_s_s(9L, (((+(((safe_lshift_func_uint16_t_u_u(l_499.f5, func_58(l_492))) >= func_41(l_499.f1, p_6)) & g_274)) > l_526) && g_203))) >= 0xF7L)) && 0x3CD88CE5L), 3UL)), 12)));
    return g_154.f2;
}







static unsigned char func_10(unsigned p_11, unsigned short p_12, int p_13, short p_14)
{
    short l_332 = 8L;
    int l_333 = 9L;
    int l_347 = 0x11449F1FL;
    struct S0 l_355 = {3,7,227,-9421,415,4};
    unsigned l_391 = 0x595C7453L;
    unsigned short l_410 = 0x0A6EL;
    unsigned char l_465 = 0x40L;
    if (((l_332 == ((g_139 >= (l_333 = func_58(g_23))) && (safe_add_func_int32_t_s_s((l_333 = 0x9282D32FL), p_11)))) || g_154.f0))
    {
        unsigned short l_344 = 65535UL;
        int l_352 = 0L;
        struct S0 l_413 = {0,4,199,-6223,6353,1};
        unsigned l_442 = 0x2E9F4E44L;
        short l_462 = 0L;
        for (g_141 = 0; (g_141 < (-10)); g_141--)
        {
            int l_367 = 0x491A405FL;
            struct S0 l_368 = {2,1,141,-14877,6185,-2};
            if ((0xE021L | (g_154.f3 != (0L != (safe_rshift_func_uint8_t_u_u((l_347 = (((safe_rshift_func_int16_t_s_u((((safe_sub_func_int16_t_s_s(func_41(g_23, g_78), (l_333 = 0x089CL))) != l_344) > (safe_lshift_func_int16_t_s_s(g_274, p_13))), 8)) != 0L) != g_154.f3)), 0))))))
            {
                char l_348 = 1L;
                struct S0 l_369 = {3,6,134,10877,5871,-2};
                unsigned l_411 = 9UL;
                if (func_41(l_348, (l_332 ^ ((safe_sub_func_uint8_t_u_u(((g_351 = func_58(g_330)) != (l_352 = 0x37L)), 1L)) > (l_355.f3 = (safe_add_func_uint8_t_u_u(func_46(l_355, g_23, ((safe_mod_func_int8_t_s_s(g_150.f4, 0x83L)) & 250UL)), g_274)))))))
                {
                    g_154.f3 = (65534UL & g_241);
                    for (g_86 = 0; (g_86 == 55); g_86++)
                    {
                        g_150.f5 = 1L;
                        if (g_150.f4)
                            break;
                    }
                }
                else
                {
                    char l_360 = 0xEFL;
                    l_360 = p_13;
                    g_150 = g_150;
                    for (g_23 = (-14); (g_23 <= 47); g_23++)
                    {
                        if (g_83)
                            break;
                    }
                }
                l_333 = (safe_sub_func_uint16_t_u_u((0xC5682B59L >= ((((g_351 = (p_11 & (safe_rshift_func_uint16_t_u_u(((0xD50EL >= g_154.f2) & l_367), 5)))) != (func_46((l_355 = (l_369 = l_368)), l_347, (+(safe_rshift_func_int8_t_s_u(g_150.f1, 5)))) <= g_154.f4)) >= g_274) || p_11)), p_13));
                for (p_13 = (-9); (p_13 == (-30)); p_13 = safe_sub_func_int16_t_s_s(p_13, 4))
                {
                    char l_408 = 0x6EL;
                    if ((((safe_sub_func_int8_t_s_s((-1L), (g_103 = (safe_mod_func_uint8_t_u_u((safe_rshift_func_uint16_t_u_s((safe_unary_minus_func_int16_t_s(func_58(p_14))), func_41(l_369.f2, ((l_352 == (((safe_sub_func_uint8_t_u_u(g_139, ((l_369.f5 = (safe_sub_func_uint8_t_u_u(((+p_12) <= (safe_mul_func_int16_t_s_s((-7L), p_11))), l_352))) >= g_86))) | l_355.f3) < 0x874FL)) | 250UL)))), 1UL))))) == 0x0FL) & l_369.f3))
                    {
                        unsigned char l_389 = 0xA0L;
                        int l_390 = 0x4C383BE5L;
                        l_389 = func_58((safe_lshift_func_int16_t_s_u(g_241, p_13)));
                        l_352 = l_368.f4;
                        l_391 = (l_390 = ((l_352 = 0x91L) ^ g_150.f5));
                        if (p_14)
                            continue;
                    }
                    else
                    {
                        unsigned l_412 = 4294967286UL;
                        l_352 = ((safe_mul_func_int16_t_s_s((safe_lshift_func_uint16_t_u_s((safe_add_func_int16_t_s_s((l_411 = (((0xC7266704L != (safe_sub_func_uint8_t_u_u(p_13, (safe_add_func_int8_t_s_s(g_203, (0x1314L | g_351)))))) == func_46(l_355, ((g_103 = ((((safe_mod_func_int8_t_s_s((safe_mul_func_uint8_t_u_u((l_408 = (safe_mul_func_int8_t_s_s((g_154.f2 > (0x46E8A0C3L != ((~(p_12 & 9UL)) && g_103))), l_367))), g_150.f1)), g_409)) && 255UL) || p_12) <= l_410)) && p_14), g_274)) >= l_344)), p_14)), 5)), l_352)) && g_330);
                        g_150 = l_355;
                        if (g_141)
                            continue;
                        g_154.f3 = l_412;
                    }
                    g_154 = (l_413 = g_150);
                }
                l_355 = g_150;
            }
            else
            {
                unsigned l_414 = 8UL;
                g_150.f5 = (p_11 < l_414);
            }
            if ((+((safe_mod_func_int32_t_s_s(p_12, (6L | (l_352 = g_103)))) >= p_13)))
            {
                short l_423 = 0xE927L;
                l_367 = func_41((p_13 && l_368.f5), ((((65535UL & ((safe_lshift_func_int16_t_s_s(l_368.f4, 10)) | func_41((safe_mul_func_int16_t_s_s(((safe_rshift_func_int8_t_s_u((g_351 = (l_423 = func_46(l_368, g_154.f5, (l_355.f5 = p_13)))), 3)) == 0x8EL), g_23)), p_11))) != p_11) && p_12) || g_23));
                for (l_352 = 0; (l_352 > 1); l_352 = safe_add_func_int8_t_s_s(l_352, 7))
                {
                    struct S0 l_426 = {3,1,53,4284,9125,0};
                    l_426 = l_368;
                    if (l_355.f5)
                        continue;
                }
            }
            else
            {
                unsigned l_441 = 5UL;
                l_367 = (safe_add_func_int32_t_s_s((~((l_333 = func_41(l_413.f2, (l_441 = (safe_lshift_func_uint16_t_u_s(((0x5AA4L ^ func_41(l_347, l_355.f5)) >= (safe_rshift_func_uint16_t_u_s((safe_sub_func_int8_t_s_s(((g_154.f0 = (safe_rshift_func_int8_t_s_s(((safe_mul_func_int8_t_s_s(((g_23 = 0xC51A138AL) ^ l_413.f4), g_154.f3)) && ((safe_rshift_func_uint16_t_u_s((0x0FCAL & g_106), 12)) == l_368.f4)), 6))) & 4294967288UL), l_344)), g_241))), 6))))) < l_442)), 0xFEC8D1C3L));
            }
            l_355.f5 = (safe_mod_func_int8_t_s_s((((safe_rshift_func_uint8_t_u_u(l_344, (l_368.f5 = (safe_rshift_func_int8_t_s_s(p_12, l_413.f5))))) != (255UL || (safe_rshift_func_int16_t_s_s(l_368.f0, p_13)))) <= (g_150.f3 = (p_11 == g_154.f1))), l_413.f3));
        }
        g_150.f5 = g_130;
        l_413.f3 = g_23;
        for (l_410 = 0; (l_410 > 37); l_410 = safe_add_func_uint32_t_u_u(l_410, 7))
        {
            unsigned short l_466 = 0xFF6EL;
            for (g_241 = 15; (g_241 < 6); g_241 = safe_sub_func_uint32_t_u_u(g_241, 3))
            {
                unsigned l_461 = 4294967294UL;
                int l_467 = 0x78E88200L;
                if (p_13)
                    break;
                l_467 = ((safe_sub_func_int8_t_s_s(((g_330 >= g_351) < (safe_lshift_func_uint16_t_u_u(65535UL, ((g_351 || (l_461 >= (!p_14))) >= g_78)))), ((l_462 & (safe_rshift_func_int8_t_s_u((((l_465 && 0xC3L) <= p_12) != l_466), 4))) & 0xF2BE97FAL))) < l_413.f2);
                l_352 = ((safe_rshift_func_uint8_t_u_u((l_355.f3 = (g_103 = 0x33L)), 7)) ^ (l_467 = (safe_lshift_func_uint16_t_u_s((func_58((6L | l_355.f2)) ^ (func_41((safe_mul_func_int8_t_s_s(p_14, (safe_mod_func_uint16_t_u_u((l_413.f5 = p_12), ((safe_sub_func_uint16_t_u_u(65535UL, (0UL || g_150.f5))) | g_150.f2))))), l_466) & g_154.f1)), 3))));
            }
        }
    }
    else
    {
        struct S0 l_478 = {0,0,84,10985,2676,4};
        l_478 = l_355;
        return l_478.f5;
    }
    g_241 = p_11;
    return p_12;
}







static unsigned short func_17(int p_18, int p_19, unsigned short p_20, char p_21, unsigned p_22)
{
    unsigned short l_209 = 0x45A3L;
    int l_210 = 0xDAB9F7BFL;
    int l_211 = 0x7BBEFFA2L;
    int l_228 = (-1L);
    int l_229 = (-1L);
    int l_240 = 7L;
    unsigned short l_264 = 0xEA65L;
    struct S0 l_265 = {2,0,59,-6181,1611,-7};
    short l_270 = 0x27A4L;
    unsigned short l_275 = 0x8974L;
    for (p_19 = 15; (p_19 <= (-8)); p_19 = safe_sub_func_uint32_t_u_u(p_19, 5))
    {
        unsigned l_208 = 4294967293UL;
        p_18 = func_30(g_150, l_208, g_150, l_209, ((l_209 != p_19) >= (l_211 = (l_210 = 4294967294UL))));
    }
    if (l_211)
    {
        struct S0 l_243 = {3,7,203,11470,3492,-2};
        unsigned l_272 = 0x86501103L;
        for (g_78 = (-25); (g_78 > (-23)); g_78 = safe_add_func_uint32_t_u_u(g_78, 1))
        {
            int l_236 = 6L;
            struct S0 l_239 = {2,0,71,16248,9016,3};
            char l_271 = 1L;
            if (((g_141 != (safe_sub_func_uint8_t_u_u((safe_sub_func_uint32_t_u_u((safe_sub_func_int8_t_s_s((safe_mod_func_uint8_t_u_u(((safe_mod_func_uint16_t_u_u(l_210, ((l_210 < ((safe_lshift_func_int8_t_s_u(((safe_lshift_func_uint16_t_u_s(((l_229 = l_228) == p_19), p_21)) != (safe_sub_func_uint32_t_u_u((safe_rshift_func_int8_t_s_u((l_228 >= (!(func_41(l_236, (safe_mod_func_int8_t_s_s((g_241 = (l_240 = func_46(l_239, l_209, p_22))), g_203))) ^ l_239.f2))), g_154.f0)), g_23))), g_154.f4)) <= p_19)) && p_20))) | p_19), p_22)), 0xC3L)), 0xAFE74C3FL)), 0xE3L))) >= p_19))
            {
                unsigned l_242 = 0xD01F5253L;
                p_18 = (((l_240 = l_242) == (g_83 || p_19)) >= l_239.f2);
                l_243 = l_239;
                for (g_83 = 0; (g_83 <= 2); g_83 = safe_add_func_int16_t_s_s(g_83, 1))
                {
                    unsigned l_252 = 4294967295UL;
                    l_243 = g_150;
                    for (g_23 = 0; (g_23 != 20); ++g_23)
                    {
                        return l_242;
                    }
                    l_239 = g_154;
                    for (g_141 = (-18); (g_141 > (-19)); g_141--)
                    {
                        int l_259 = 0x0686086EL;
                        l_239.f3 = (g_130 > ((1L | l_243.f3) < (p_19 >= (((l_252 >= (!((safe_lshift_func_uint16_t_u_u(g_154.f0, 15)) != (p_20 < (safe_rshift_func_int16_t_s_s(0x929AL, ((safe_mod_func_int8_t_s_s(0x67L, l_259)) < 0x4EF56502L))))))) & l_259) & g_103))));
                        g_150 = l_239;
                    }
                }
                if (g_106)
                    continue;
            }
            else
            {
                short l_273 = 0x0D66L;
                int l_290 = 2L;
                p_18 = ((safe_mul_func_int16_t_s_s(((g_274 = (((safe_mul_func_uint8_t_u_u((g_103 = l_264), l_243.f2)) != func_46(l_243, ((func_46((g_154 = (l_265 = l_239)), (0x59D55D07L != p_21), (l_229 = p_18)) > (safe_rshift_func_uint16_t_u_u((safe_mul_func_int8_t_s_s(l_270, l_271)), 14))) <= g_241), l_272)) >= l_273)) && l_275), g_106)) == g_83);
                l_243.f3 = (p_18 = (g_241 ^ (safe_sub_func_uint32_t_u_u((l_265.f5 = g_78), ((safe_mul_func_uint8_t_u_u(p_20, (func_41(p_22, (0x1D68L | p_21)) >= (g_83 > ((safe_mul_func_uint8_t_u_u(((safe_mul_func_uint8_t_u_u(g_86, l_265.f3)) != 0L), l_272)) || l_273))))) & g_83)))));
                g_154.f3 = (((l_243.f2 < (safe_sub_func_int8_t_s_s((((((l_290 = (safe_mul_func_uint16_t_u_u((safe_mod_func_uint32_t_u_u(0x64180A0BL, l_239.f1)), (p_18 > (g_150.f1 < 0x44F7L))))) & (safe_lshift_func_uint16_t_u_u((~(~(safe_unary_minus_func_uint8_t_u((safe_sub_func_uint16_t_u_u(0x098AL, (g_83 = p_18))))))), ((safe_add_func_int32_t_s_s((safe_unary_minus_func_int32_t_s((p_22 || 0xDE36L))), g_150.f3)) < (-1L))))) && p_18) != p_21) != p_19), 4L))) < p_18) < g_154.f1);
                l_243 = l_265;
            }
        }
        p_18 = (7L < l_265.f3);
    }
    else
    {
        unsigned l_329 = 4294967294UL;
        for (p_19 = 0; (p_19 > 0); p_19++)
        {
            unsigned l_321 = 0xC0C74532L;
            int l_331 = 0x1456EAE4L;
            l_331 = (safe_rshift_func_uint16_t_u_s((safe_add_func_uint16_t_u_u((func_41((safe_add_func_int32_t_s_s((safe_sub_func_uint16_t_u_u(((safe_mul_func_int8_t_s_s(g_154.f5, ((((safe_lshift_func_uint8_t_u_s((g_78 > (safe_add_func_uint32_t_u_u(p_21, (safe_add_func_int32_t_s_s((func_41(((safe_sub_func_int16_t_s_s((safe_sub_func_int32_t_s_s(l_321, (safe_rshift_func_int16_t_s_u(((g_150.f2 = ((safe_rshift_func_int16_t_s_u((l_210 = p_19), g_150.f5)) < (safe_mul_func_int8_t_s_s(p_21, g_154.f3)))) | (safe_unary_minus_func_uint16_t_u(((((0x62L && (-1L)) <= l_321) && l_321) && g_150.f3)))), p_21)))), l_321)) || l_329), g_203) & p_20), p_18))))), g_154.f2)) == 0x94D29A29L) != p_20) | 0L))) < 1L), 0L)), g_330)), l_265.f3) >= 0x4A689631L), 6UL)), p_20));
            if (g_154.f1)
                continue;
        }
        g_150.f5 = g_203;
    }
    return g_78;
}







static char func_30(struct S0 p_31, char p_32, struct S0 p_33, unsigned short p_34, unsigned p_35)
{
    struct S0 l_155 = {3,6,145,-283,8057,1};
    l_155 = p_33;
    for (g_83 = 29; (g_83 >= 21); g_83 = safe_sub_func_int8_t_s_s(g_83, 8))
    {
        int l_173 = 0xF553DE48L;
        for (g_103 = (-26); (g_103 == 52); ++g_103)
        {
            int l_166 = 0x75E0FD25L;
            struct S0 l_185 = {0,1,154,-11235,8957,5};
            int l_194 = (-1L);
            char l_200 = (-8L);
            g_154.f3 = (p_31.f0 < (safe_mod_func_int8_t_s_s((safe_rshift_func_uint8_t_u_s((safe_mul_func_uint8_t_u_u(l_166, (safe_mod_func_uint16_t_u_u(((l_173 = (g_86 = (safe_rshift_func_int8_t_s_s((safe_sub_func_uint32_t_u_u((func_46(g_154, l_173, (((safe_sub_func_int32_t_s_s(((safe_rshift_func_int8_t_s_s(0x8DL, ((4UL & (safe_lshift_func_int16_t_s_u(((g_130 && 0x449A3136L) >= p_34), 13))) <= 0xCFDAL))) && (-1L)), g_150.f0)) < 0xB2L) || g_154.f5)) < 1UL), l_155.f0)), l_166)))) | 0xBA64L), p_31.f1)))), p_35)), l_166)));
            for (g_130 = (-6); (g_130 >= (-18)); g_130--)
            {
                unsigned l_184 = 0x5184A0F1L;
                l_166 = (safe_mul_func_int16_t_s_s(l_173, (~(func_46((p_33 = (p_31 = g_150)), g_150.f5, g_150.f5) <= (p_35 | func_58(((g_154.f2 = l_173) && l_184)))))));
                l_185 = g_154;
                if (((p_33.f4 == (p_34 = p_33.f5)) ^ (safe_mod_func_uint8_t_u_u(((safe_mod_func_uint16_t_u_u(((safe_lshift_func_int8_t_s_u(g_150.f0, (g_86 & g_154.f0))) == l_155.f5), p_33.f3)) & (g_141 = ((safe_lshift_func_uint8_t_u_s(p_31.f2, 0)) > 0xF07F47E0L))), l_155.f1))))
                {
                    g_150 = g_154;
                    l_194 = p_31.f4;
                    p_31.f3 = (safe_unary_minus_func_int32_t_s(l_184));
                    g_154.f5 = 0x958245BBL;
                }
                else
                {
                    char l_196 = 0xC9L;
                    return l_196;
                }
                for (p_32 = 0; (p_32 == 14); p_32 = safe_add_func_int8_t_s_s(p_32, 6))
                {
                    g_154.f3 = ((safe_unary_minus_func_int32_t_s(p_31.f0)) < ((l_200 = (l_185.f5 = func_46(l_155, g_150.f3, p_33.f5))) >= g_154.f0));
                    for (g_106 = 0; (g_106 > 46); ++g_106)
                    {
                        return g_203;
                    }
                    if (func_58(l_155.f0))
                    {
                        g_154.f5 = g_154.f2;
                        if (g_78)
                            continue;
                    }
                    else
                    {
                        g_150.f3 = (p_34 & l_173);
                    }
                }
            }
        }
        p_31 = g_154;
    }
    l_155.f3 = ((l_155.f3 & l_155.f2) < (func_52((safe_mul_func_uint8_t_u_u(0x49L, l_155.f3)), p_31.f2, l_155.f4) > (+func_41(func_41((func_41(l_155.f5, p_34) | l_155.f4), p_34), p_33.f0))));
    p_31.f3 = (0x48DD3C90L > 0x2602EF28L);
    return g_86;
}







static int func_41(int p_42, int p_43)
{
    struct S0 l_151 = {3,2,112,10242,10839,-1};
    g_150 = l_151;
    l_151 = g_150;
    l_151.f3 = (safe_mod_func_int16_t_s_s((-9L), (0UL || g_150.f5)));
    return p_43;
}







static unsigned char func_46(struct S0 p_47, short p_48, char p_49)
{
    g_150 = g_150;
    p_47 = p_47;
    return g_130;
}







static unsigned short func_52(short p_53, unsigned short p_54, short p_55)
{
    short l_102 = 0x356DL;
    int l_105 = (-1L);
    char l_140 = 5L;
    struct S0 l_142 = {3,4,5,2045,3529,2};
    if (p_54)
    {
        unsigned char l_84 = 255UL;
        int l_104 = 0x1A67D551L;
        int l_129 = 0x4D98BCDAL;
        struct S0 l_143 = {1,1,21,4342,1101,7};
        if ((l_84 || (g_23 && 65535UL)))
        {
            int l_85 = (-1L);
            l_85 = func_58(g_83);
            g_86 = (p_53 | p_54);
        }
        else
        {
            unsigned l_89 = 0x6CBFC796L;
            g_106 = ((((l_89 ^ (safe_mul_func_int16_t_s_s((safe_sub_func_int8_t_s_s((safe_mul_func_int8_t_s_s((safe_lshift_func_int16_t_s_u(p_54, 4)), (safe_rshift_func_uint8_t_u_u(g_86, 5)))), (g_103 = (safe_mul_func_int16_t_s_s((g_83 = g_83), l_102))))), (func_58(l_84) ^ (l_105 = (l_104 = 0xA4B5445DL)))))) != (g_23 <= l_84)) >= (-1L)) && 0L);
            l_105 = (((safe_sub_func_uint8_t_u_u(0x26L, (safe_add_func_uint32_t_u_u(l_89, (safe_rshift_func_uint16_t_u_u(((safe_lshift_func_uint16_t_u_u(((safe_lshift_func_int8_t_s_s(((((l_104 = p_54) ^ (safe_rshift_func_uint16_t_u_s(p_54, (g_103 != (safe_lshift_func_uint8_t_u_u(((safe_add_func_uint8_t_u_u(((safe_lshift_func_uint16_t_u_u((safe_lshift_func_int8_t_s_u((safe_mod_func_uint8_t_u_u(((+((((((g_130 = (l_129 = l_84)) <= (((g_83 = (safe_sub_func_uint8_t_u_u((safe_add_func_uint32_t_u_u((safe_mod_func_uint16_t_u_u(l_89, p_55)), l_84)), p_53))) && (-7L)) == 1L)) || g_86) >= 0L) || 0x310EL) > g_78)) | g_103), g_103)), g_86)), g_86)) >= l_105), p_54)) <= g_106), 1)))))) <= p_55) | l_105), g_86)) || 0xEAL), 4)) | 0L), 3)))))) != 4294967295UL) < p_53);
            g_141 = (l_140 = (safe_lshift_func_uint8_t_u_u(0xCEL, ((~(g_139 = g_23)) | l_104))));
        }
        l_143 = l_142;
    }
    else
    {
        unsigned char l_146 = 0UL;
        l_146 = (safe_add_func_int32_t_s_s(g_141, func_58(g_139)));
    }
    l_105 = (safe_rshift_func_int8_t_s_s(0x81L, 2));
    return l_142.f1;
}







static int func_58(int p_59)
{
    char l_65 = 1L;
    int l_69 = 1L;
    int l_82 = 1L;
    if (g_23)
    {
        unsigned l_64 = 4294967286UL;
        unsigned l_66 = 0x1F059960L;
        l_69 = (safe_lshift_func_uint16_t_u_u((((l_66 = (l_65 = (safe_lshift_func_uint8_t_u_s(l_64, l_64)))) <= ((safe_mod_func_uint16_t_u_u((((g_78 = ((g_23 & (((l_69 < (safe_add_func_uint16_t_u_u(l_64, p_59))) == l_64) && l_64)) & (safe_sub_func_uint16_t_u_u((safe_sub_func_int16_t_s_s((safe_mod_func_uint8_t_u_u(4UL, p_59)), p_59)), p_59)))) < l_64) < 0UL), p_59)) < p_59)) >= g_23), 2));
    }
    else
    {
        unsigned char l_81 = 0x7BL;
        for (l_65 = 0; (l_65 < 4); l_65 = safe_add_func_uint16_t_u_u(l_65, 1))
        {
            l_81 = ((65528UL > p_59) ^ (p_59 == g_23));
            l_69 = g_78;
            return l_82;
        }
    }
    return p_59;
}





int main (int argc, char* argv[])
{
    int print_hash_value = 0;
    if (argc == 2 && strcmp(argv[1], "1") == 0) print_hash_value = 1;
    platform_main_begin();
    crc32_gentab();
    func_1();
    transparent_crc(g_23, "g_23", print_hash_value);
    transparent_crc(g_78, "g_78", print_hash_value);
    transparent_crc(g_83, "g_83", print_hash_value);
    transparent_crc(g_86, "g_86", print_hash_value);
    transparent_crc(g_103, "g_103", print_hash_value);
    transparent_crc(g_106, "g_106", print_hash_value);
    transparent_crc(g_130, "g_130", print_hash_value);
    transparent_crc(g_139, "g_139", print_hash_value);
    transparent_crc(g_141, "g_141", print_hash_value);
    transparent_crc(g_150.f0, "g_150.f0", print_hash_value);
    transparent_crc(g_150.f1, "g_150.f1", print_hash_value);
    transparent_crc(g_150.f2, "g_150.f2", print_hash_value);
    transparent_crc(g_150.f3, "g_150.f3", print_hash_value);
    transparent_crc(g_150.f4, "g_150.f4", print_hash_value);
    transparent_crc(g_150.f5, "g_150.f5", print_hash_value);
    transparent_crc(g_154.f0, "g_154.f0", print_hash_value);
    transparent_crc(g_154.f1, "g_154.f1", print_hash_value);
    transparent_crc(g_154.f2, "g_154.f2", print_hash_value);
    transparent_crc(g_154.f3, "g_154.f3", print_hash_value);
    transparent_crc(g_154.f4, "g_154.f4", print_hash_value);
    transparent_crc(g_154.f5, "g_154.f5", print_hash_value);
    transparent_crc(g_203, "g_203", print_hash_value);
    transparent_crc(g_241, "g_241", print_hash_value);
    transparent_crc(g_274, "g_274", print_hash_value);
    transparent_crc(g_330, "g_330", print_hash_value);
    transparent_crc(g_351, "g_351", print_hash_value);
    transparent_crc(g_409, "g_409", print_hash_value);
    transparent_crc(g_512, "g_512", print_hash_value);
    transparent_crc(g_550, "g_550", print_hash_value);
    transparent_crc(g_572, "g_572", print_hash_value);
    platform_main_end(crc32_context ^ 0xFFFFFFFFUL, print_hash_value);
    return 0;
}
