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



static int g_2 = (-1L);
static int g_17 = (-1L);
static int g_21 = 0x55467101L;
static int *g_48 = &g_21;
static int **g_47 = &g_48;
static short g_64 = 3L;
static unsigned char g_67 = 0x38L;
static int g_106 = 7L;
static unsigned char g_109 = 1UL;
static unsigned char g_117 = 8UL;
static unsigned char g_121 = 0xA3L;
static char g_123 = 0L;
static short g_199 = 0x9E1EL;
static unsigned g_224 = 0x47877144L;
static char g_252 = (-1L);
static unsigned short g_278 = 9UL;
static unsigned char *g_302 = &g_117;
static unsigned char **g_301 = &g_302;
static unsigned g_453 = 8UL;
static unsigned short *g_499 = &g_278;
static char g_527 = 1L;
static unsigned g_546 = 0UL;
static short **g_606 = (void*)0;
static unsigned g_676 = 4294967295UL;
static unsigned g_832 = 4294967292UL;
static unsigned g_937 = 4294967292UL;
static int *g_953 = &g_17;
static int g_1056 = (-1L);
static unsigned g_1057 = 1UL;
static int g_1071 = (-9L);
static char g_1115 = 0xCBL;
static unsigned g_1118 = 0xE223383FL;
static unsigned char g_1121 = 0x59L;
static unsigned short g_1130 = 0x00F1L;
static char *g_1167 = &g_123;
static short g_1208 = 0x30EAL;
static short g_1276 = 7L;
static unsigned short g_1277 = 1UL;
static unsigned g_1297 = 1UL;
static char g_1394 = 0x5BL;
static short g_1399 = 0x99A4L;
static unsigned short g_1400 = 1UL;
static unsigned short g_1509 = 1UL;
static int g_1516 = 0x2C999121L;
static unsigned *g_1577 = &g_1057;
static unsigned **g_1576 = &g_1577;
static unsigned short **g_1651 = &g_499;
static unsigned short ***g_1650 = &g_1651;
static unsigned short ****g_1649 = &g_1650;
static unsigned char g_1751 = 0xD8L;
static int *g_1806 = &g_1056;
static char g_1948 = (-2L);
static unsigned g_1956 = 4294967286UL;
static short g_1976 = 0x3BDFL;
static unsigned g_1981 = 4294967290UL;
static int g_2042 = 0x8452D1A7L;
static unsigned char g_2057 = 1UL;
static unsigned short **g_2079 = (void*)0;
static unsigned g_2193 = 0xA59E8593L;
static short ***g_2219 = &g_606;
static short ****g_2218 = &g_2219;
static unsigned g_2227 = 2UL;



static unsigned func_1(void);
static int func_9(unsigned char p_10, char p_11, int p_12);
static unsigned short func_23(unsigned char p_24, unsigned short p_25);
static short func_31(unsigned p_32, int p_33, int * p_34, unsigned p_35, int p_36);
static int func_41(int ** p_42, unsigned short p_43);
static unsigned short func_44(int ** p_45, unsigned p_46);
static int ** func_49(int * p_50, short p_51, char p_52);
static int * func_74(unsigned short p_75, short * p_76);
static unsigned char func_90(int * p_91, int * p_92);
static int * func_93(unsigned char p_94, int * p_95, short p_96);
static unsigned func_1(void)
{
    short l_13 = (-7L);
    unsigned char *l_2207 = (void*)0;
    int l_2208 = 0x7B2695ACL;
    unsigned char *l_2209 = &g_67;
    int l_2212 = (-1L);
    int *l_2213 = &g_1516;
    short ****l_2216 = (void*)0;
    short *****l_2217 = &l_2216;
    unsigned **l_2220 = &g_1577;
    int **l_2221 = &g_953;
    int *l_2222 = &g_17;
    int *l_2223 = &l_2212;
    int *l_2224 = (void*)0;
    int *l_2225 = &g_1071;
    int *l_2226 = &g_2042;
    (*l_2213) &= (g_2 ^ (l_2212 = ((safe_div_func_uint16_t_u_u((safe_mul_func_uint8_t_u_u((0x6D7BL || ((safe_div_func_int32_t_s_s(func_9(g_2, l_13, g_2), (l_13 , ((--(*l_2209)) , l_2208)))) > (func_31((+(*g_1577)), l_13, (*g_47), g_1115, l_13) && 0xD2E6L))), l_2208)), l_13)) , g_1394)));
    (*l_2221) = ((*l_2213) , func_93((((((**g_301) , ((*g_1167) >= (*l_2213))) || ((((*g_1577) = (safe_add_func_uint32_t_u_u(((*l_2213) , (&g_1577 == (((((*l_2217) = l_2216) == g_2218) & (*l_2213)) , l_2220))), 5L))) , (*g_302)) , (**g_47))) == 1UL) , (*l_2213)), (*g_47), (*l_2213)));

    ;

    ;
    --g_2227;
    return (*l_2226);
}







static int func_9(unsigned char p_10, char p_11, int p_12)
{
    int *l_1875 = &g_2;
    int **l_1874 = &l_1875;
    int l_1876 = 0x55EABE50L;
    int l_1939 = 0L;
    unsigned char l_1971 = 1UL;
    unsigned short l_2062 = 8UL;
    int *l_2119 = (void*)0;
    int *l_2120 = &g_1071;
    int *l_2121 = &l_1939;
    int *l_2122 = &g_1516;
    int *l_2123 = &g_1071;
    int *l_2124 = &l_1939;
    int *l_2125 = &g_2042;
    int *l_2126 = (void*)0;
    int l_2127 = 0xCD19F5D2L;
    int l_2128 = 8L;
    int l_2129 = 0x14B97321L;
    int l_2130 = (-3L);
    int *l_2131 = (void*)0;
    int *l_2132 = &g_1516;
    int *l_2133 = &g_2042;
    int *l_2134 = (void*)0;
    int *l_2135 = (void*)0;
    int *l_2136 = &l_2127;
    int *l_2137 = &l_2130;
    int l_2138 = 0xAA2154EEL;
    int *l_2139 = &g_1071;
    int *l_2140 = &g_21;
    int *l_2141 = &l_2130;
    int *l_2142 = &l_2138;
    int *l_2143 = &g_1071;
    int *l_2144 = &l_2127;
    int *l_2145 = &l_1876;
    int *l_2146 = &l_1939;
    int *l_2147 = &g_106;
    int *l_2148 = &l_2129;
    int l_2149 = 0xC8BD5A4BL;
    int *l_2150 = &g_1516;
    int *l_2151 = (void*)0;
    int *l_2152 = &l_1876;
    int *l_2153 = (void*)0;
    int *l_2154 = &g_17;
    int *l_2155 = (void*)0;
    int *l_2156 = (void*)0;
    int *l_2157 = &l_2138;
    int l_2158 = (-9L);
    int l_2159 = (-1L);
    int l_2160 = 0L;
    int l_2161 = (-4L);
    int *l_2162 = &l_1939;
    int *l_2163 = &l_2161;
    int *l_2164 = &g_1516;
    int *l_2165 = (void*)0;
    int *l_2166 = &l_2149;
    int *l_2167 = (void*)0;
    int *l_2168 = &l_2161;
    int *l_2169 = &g_106;
    int *l_2170 = &l_2159;
    int *l_2171 = (void*)0;
    int *l_2172 = &l_2129;
    int *l_2173 = &g_17;
    int *l_2174 = &l_2128;
    int *l_2175 = &l_2130;
    int *l_2176 = &l_2129;
    int l_2177 = 0x3F58D7CCL;
    int *l_2178 = &l_2177;
    int *l_2179 = &l_2158;
    int *l_2180 = (void*)0;
    int *l_2181 = &l_2138;
    int *l_2182 = (void*)0;
    int *l_2183 = &g_21;
    int *l_2184 = &g_17;
    int *l_2185 = &g_106;
    int *l_2186 = (void*)0;
    int *l_2187 = &g_2042;
    int *l_2188 = &l_2138;
    int *l_2189 = (void*)0;
    int *l_2190 = &g_106;
    int *l_2191 = &l_2161;
    int *l_2192 = (void*)0;
    char l_2196 = (-8L);
    int *l_2197 = (void*)0;
    int *l_2198 = &g_17;
    int *l_2199 = (void*)0;
    int *l_2200 = (void*)0;
    int *l_2201 = (void*)0;
    unsigned l_2202 = 0xA50D3280L;
    for (p_10 = (-24); (p_10 == 59); p_10 = safe_add_func_uint32_t_u_u(p_10, 8))
    {
        int *l_16 = &g_17;
        int *l_18 = (void*)0;
        int *l_19 = (void*)0;
        int *l_20 = &g_21;
        unsigned short l_26 = 0x6511L;
        int l_1904 = 0xB6CC2A2EL;
        int l_1938 = 0x20CB86EEL;
        unsigned short ***l_1970 = &g_1651;
        int l_1978 = (-5L);
        int l_1980 = 0x50557A6AL;
        int *l_1994 = &g_1056;
        int *l_2077 = (void*)0;
        int *l_2085 = &l_1876;
        (*l_20) = ((*l_16) |= p_12);
        (*l_20) = 0xCDE6BC04L;
        if (g_2)
            break;
    }
    g_2193--;
    l_2202--;
    (*l_2121) = (safe_rshift_func_int8_t_s_s((7L == ((**g_301) & p_11)), 1));
    return (*g_953);
}







static unsigned short func_23(unsigned char p_24, unsigned short p_25)
{
    int *l_37 = &g_17;
    int **l_38 = &l_37;
    int *l_40 = (void*)0;
    int **l_39 = &l_40;
    unsigned *l_1420 = &g_937;
    short *l_1512 = &g_64;
    int l_1513 = 0x5FAE3C82L;
    char l_1514 = 0xAAL;
    int *l_1515 = &g_1516;
    int *l_1517 = &l_1513;
    int *l_1518 = &l_1513;
    int *l_1519 = &g_106;
    int *l_1520 = &g_21;
    int *l_1521 = &l_1513;
    int *l_1522 = &g_17;
    int *l_1523 = &l_1513;
    int *l_1524 = &l_1513;
    int *l_1525 = &l_1513;
    int *l_1526 = &g_21;
    int *l_1527 = &l_1513;
    int *l_1528 = &g_106;
    int *l_1529 = (void*)0;
    int *l_1530 = &l_1513;
    int *l_1531 = (void*)0;
    int *l_1532 = &g_21;
    int *l_1533 = (void*)0;
    int *l_1534 = &l_1513;
    int *l_1535 = &l_1513;
    int *l_1536 = &l_1513;
    int *l_1537 = &g_106;
    int l_1538 = 7L;
    int *l_1539 = (void*)0;
    int *l_1540 = &l_1538;
    int *l_1541 = &g_17;
    unsigned l_1542 = 2UL;
    unsigned char l_1549 = 0xF1L;
    unsigned *l_1575 = (void*)0;
    int **l_1851 = &g_1806;
    int ***l_1850 = &l_1851;
    unsigned short l_1858 = 0x195EL;
    int *l_1861 = &l_1538;
    (*l_1515) ^= ((((*l_1420) = ((safe_lshift_func_int8_t_s_u((safe_lshift_func_int16_t_s_s((((*l_1512) = func_31(((*l_1420) = (g_1297 &= ((((*l_38) = l_37) != ((*l_39) = (void*)0)) , (((((func_41(&l_37, func_44(g_47, g_21)) ^ (safe_rshift_func_int16_t_s_s(0x4A34L, 12))) , (**l_38)) ^ p_25) ^ 0xEC51L) & p_25)))), (*g_953), (*g_47), g_832, p_25)) >= p_25), p_24)), p_25)) <= l_1513)) , l_1514) && 0x4673C1C3L);
    --l_1542;
    if ((safe_div_func_uint8_t_u_u(1UL, (+((p_25 ^ ((p_25 >= ((void*)0 == &g_606)) , ((safe_mod_func_uint32_t_u_u(((*l_1420) = 4294967292UL), l_1549)) != (safe_mul_func_uint8_t_u_u(p_25, ((*l_1536) && 0L)))))) , (-1L))))))
    {
        int *l_1552 = &g_1071;
        int ***l_1559 = &l_38;
        (*l_38) = (l_1552 = (*g_47));

        ;
        ;
        (*l_39) = (g_224 , ((safe_sub_func_int16_t_s_s((&l_1512 != &l_1512), (0L ^ ((func_31((safe_mod_func_uint8_t_u_u((safe_add_func_int16_t_s_s(func_44(&l_1537, ((func_41((g_47 = ((*l_1559) = &g_48)), (*g_499)) && (safe_mod_func_int32_t_s_s(p_24, 0x1F4497B2L))) == p_25)), 0x9619L)), 0xBCL)), p_24, &g_17, g_64, (*g_953)) == g_546) | 0xF3L)))) , (*g_47)));

        ;
        ;
    }
    else
    {
        int *l_1564 = &g_2;
        short *l_1572 = &g_64;
        int *l_1573 = &g_1071;
        unsigned **l_1574 = &l_1420;
        int l_1600 = 0xE242A1A6L;
        int l_1717 = 1L;
        unsigned short l_1758 = 65528UL;
        char l_1776 = 0x4DL;
        unsigned short l_1783 = 0xE43CL;
        unsigned short l_1817 = 0x9AD9L;
        int **l_1836 = &l_1524;
        unsigned short l_1839 = 0xFD6AL;
        unsigned *l_1849 = &g_1297;
        if ((g_1516 ^= ((*l_1524) |= ((((*l_1574) = func_74(((safe_lshift_func_int16_t_s_u((((l_1564 == ((safe_rshift_func_int16_t_s_s((safe_unary_minus_func_int8_t_s(((*g_1167) &= 0xBEL))), (safe_lshift_func_int16_t_s_u((*l_1540), 3)))) , l_1528)) <= (*l_1573)) & (*l_37)), (*g_499))) ^ 0xC2L), &g_1276)) != l_1575) < 65530UL))))
        {
            return (*g_499);
        }
        else
        {
            short l_1584 = 0x34EFL;
            int l_1593 = 0x6A3CCFE0L;
            int l_1597 = 0x2B99F03AL;
            int l_1618 = 0x77D8A86AL;
            int l_1636 = 0x6E54DDECL;
            unsigned l_1645 = 4294967295UL;
            unsigned l_1648 = 1UL;
            int l_1677 = (-3L);
            int l_1772 = (-7L);
            unsigned l_1840 = 0x3FB7F5AAL;
            if (p_25)
            {
                unsigned ***l_1578 = &g_1576;
                int l_1592 = 0L;
                int l_1621 = 0x15E14582L;
                int l_1736 = 1L;
                unsigned short *l_1774 = &g_1509;
                int l_1784 = 0L;
                (*l_39) = &g_21;

                ;
                (*l_1578) = g_1576;
                if (p_24)
                {
                    int **l_1581 = &l_1521;
                    int l_1612 = 0L;
                    int *l_1662 = &g_1516;
                    int *l_1663 = &l_1593;
                    int *l_1664 = &l_1600;
                    int *l_1665 = &l_1636;
                    int *l_1666 = &g_21;
                    int *l_1667 = &g_106;
                    int *l_1668 = &l_1513;
                    int *l_1669 = &g_1071;
                    int *l_1670 = &l_1618;
                    int *l_1671 = &l_1600;
                    int *l_1672 = &l_1612;
                    int *l_1673 = &g_1516;
                    int *l_1674 = &l_1636;
                    int *l_1675 = &l_1600;
                    int *l_1676 = &l_1593;
                    int *l_1678 = &g_21;
                    int *l_1679 = &l_1600;
                    int *l_1680 = (void*)0;
                    int *l_1681 = &l_1621;
                    int *l_1682 = &l_1593;
                    int *l_1683 = (void*)0;
                    int *l_1684 = &l_1612;
                    int *l_1685 = &l_1513;
                    int *l_1686 = &g_1516;
                    int *l_1687 = &l_1621;
                    int *l_1688 = &g_17;
                    int *l_1689 = (void*)0;
                    int *l_1690 = &l_1592;
                    int *l_1691 = &l_1636;
                    int *l_1692 = &l_1612;
                    int *l_1693 = &l_1612;
                    int *l_1694 = &l_1621;
                    int *l_1695 = &g_21;
                    int *l_1696 = &l_1677;
                    int *l_1697 = &g_21;
                    int *l_1698 = &l_1597;
                    int *l_1699 = &l_1593;
                    int *l_1700 = &l_1593;
                    int *l_1701 = &l_1612;
                    int *l_1702 = (void*)0;
                    int *l_1703 = &l_1593;
                    int *l_1704 = &l_1538;
                    int *l_1705 = &g_21;
                    int *l_1706 = &l_1618;
                    int *l_1707 = &l_1597;
                    int *l_1708 = &l_1677;
                    int *l_1709 = &l_1600;
                    int *l_1710 = &g_17;
                    int *l_1711 = &l_1513;
                    int *l_1712 = &g_17;
                    int *l_1713 = &g_17;
                    int *l_1714 = &l_1677;
                    int *l_1715 = &l_1612;
                    int *l_1716 = &l_1600;
                    int *l_1718 = (void*)0;
                    int *l_1719 = &l_1677;
                    int *l_1720 = &l_1538;
                    int *l_1721 = &g_106;
                    int l_1722 = 0L;
                    int *l_1723 = &l_1592;
                    int l_1724 = 0L;
                    int *l_1725 = &g_1071;
                    int *l_1726 = &l_1538;
                    int *l_1727 = (void*)0;
                    int *l_1728 = &l_1593;
                    int *l_1729 = &l_1618;
                    int *l_1730 = (void*)0;
                    int *l_1731 = &l_1513;
                    int *l_1732 = (void*)0;
                    int *l_1733 = &g_21;
                    int *l_1734 = &l_1621;
                    int *l_1735 = (void*)0;
                    int *l_1737 = &g_1071;
                    int *l_1738 = &l_1538;
                    int *l_1739 = &l_1621;
                    int *l_1740 = &g_106;
                    int *l_1741 = &l_1618;
                    int *l_1742 = &l_1612;
                    int *l_1743 = &l_1538;
                    int *l_1744 = &l_1677;
                    int *l_1745 = &l_1600;
                    int *l_1746 = &l_1592;
                    int *l_1747 = &g_1516;
                    int *l_1748 = &l_1612;
                    int *l_1749 = (void*)0;
                    int *l_1750 = &l_1597;
                    for (g_453 = 1; (g_453 > 5); ++g_453)
                    {
                        char l_1583 = (-1L);
                        int l_1585 = (-1L);
                        char l_1588 = 0x24L;
                        int l_1591 = 1L;
                        int l_1594 = 0x8DAFBCDAL;
                        int *l_1595 = (void*)0;
                        int *l_1596 = &l_1513;
                        int *l_1598 = &g_17;
                        int *l_1599 = &l_1593;
                        int *l_1601 = &l_1597;
                        int *l_1602 = &l_1597;
                        int *l_1603 = &l_1594;
                        int *l_1604 = &l_1600;
                        int *l_1605 = &l_1592;
                        int *l_1606 = &g_1071;
                        int *l_1607 = &l_1594;
                        int *l_1608 = &g_17;
                        int *l_1609 = &g_17;
                        int *l_1610 = &l_1592;
                        int *l_1611 = (void*)0;
                        int *l_1613 = &l_1593;
                        int *l_1614 = (void*)0;
                        int *l_1615 = &l_1600;
                        int *l_1616 = &l_1594;
                        int *l_1617 = &l_1597;
                        int *l_1619 = (void*)0;
                        int *l_1620 = &l_1618;
                        int *l_1622 = &g_1516;
                        int *l_1623 = &l_1594;
                        int *l_1624 = &l_1618;
                        int *l_1625 = (void*)0;
                        int *l_1626 = &l_1618;
                        int *l_1627 = &l_1597;
                        int *l_1628 = &l_1600;
                        int *l_1629 = &l_1594;
                        int *l_1630 = &l_1513;
                        int *l_1631 = &g_1516;
                        int *l_1632 = &l_1600;
                        int *l_1633 = &g_1071;
                        int l_1634 = 0xA397C2C9L;
                        int *l_1635 = &l_1634;
                        int *l_1637 = (void*)0;
                        int *l_1638 = &l_1592;
                        int *l_1639 = &l_1618;
                        int *l_1640 = &g_1516;
                        int *l_1641 = (void*)0;
                        int *l_1642 = &g_1071;
                        int *l_1643 = &l_1593;
                        int *l_1644 = &l_1600;
                        (**l_38) |= (((((p_24 | (safe_div_func_uint32_t_u_u((l_1588 , (p_24 , (((safe_mod_func_int32_t_s_s((((((**l_1581) && (p_25 <= l_1584)) || p_24) != 1L) ^ (**l_1581)), (*l_1518))) & p_24) > 0x2929L))), 0x903D0EA5L))) < (-1L)) , 0x94L) , p_24) , (*l_1524));
                        --l_1645;
                        l_1648 = p_24;
                        (*l_1639) ^= (((*l_1607) = ((*g_499) | (((((p_25 , g_1649) == &g_1650) , (p_25 , (((*l_1606) = (((*l_1527) = ((safe_sub_func_uint8_t_u_u((func_31((safe_mod_func_int16_t_s_s(1L, p_24)), ((p_24 >= ((**l_1581) = (safe_div_func_uint32_t_u_u((safe_sub_func_int32_t_s_s((safe_lshift_func_uint16_t_u_s((**g_1651), p_24)), p_25)), p_24)))) < 0x6839L), (*l_1581), g_109, (*l_1633)) == p_25), 0x95L)) != 9UL)) && (**l_1581))) >= p_24))) || 6L) , 7UL))) , 0L);
                    }
                    g_1751++;
                    (*l_1723) = ((safe_lshift_func_uint16_t_u_s(((((l_1592 , p_25) && (safe_rshift_func_uint16_t_u_u(p_25, (0L < (l_1758 < ((safe_rshift_func_uint16_t_u_s((safe_sub_func_int16_t_s_s(p_24, ((*l_1572) = ((safe_div_func_int16_t_s_s(((*l_1530) && l_1677), (**g_1651))) | p_24)))), 14)) | 4294967287UL)))))) == p_25) || (*l_1541)), (*l_1687))) <= (*l_1535));
                }
                else
                {
                    int l_1767 = (-3L);
                    int l_1775 = 0x9C71254BL;
                    (*l_1518) = ((l_1767 = (safe_lshift_func_uint16_t_u_u((***g_1650), 2))) < (l_1776 |= ((((safe_mul_func_uint8_t_u_u((p_25 || ((*l_1528) = p_25)), ((safe_sub_func_uint8_t_u_u(((**g_301) = l_1772), (p_24 != func_31((safe_unary_minus_func_uint16_t_u(l_1736)), (&p_25 == l_1774), &l_1593, l_1775, (*l_1523))))) != p_25))) >= 254UL) && (**g_301)) , p_25)));
                    (*l_1573) = (((*g_499) = (safe_rshift_func_uint16_t_u_s((****g_1649), l_1621))) || p_24);
                    (*l_38) = ((*l_39) = &l_1621);

                    ;
                    ;
                    (*l_1524) ^= p_25;
                }

                ;
                ;
            }
            else
            {
                short ***l_1794 = (void*)0;
                int l_1799 = 0xF30AE64BL;
                for (g_1400 = 1; (g_1400 <= 46); ++g_1400)
                {
                    int l_1789 = 0xA4129D97L;
                    short ***l_1795 = &g_606;
                    short ****l_1796 = &l_1794;
                    int **l_1805 = (void*)0;
                    unsigned char l_1813 = 255UL;
                    (*l_1573) ^= ((*l_1518) , (safe_mod_func_uint8_t_u_u(l_1789, ((4L < (((safe_add_func_int8_t_s_s((*l_1540), p_24)) >= (**l_38)) , (((*l_1796) = (l_1795 = l_1794)) != ((~(((**g_1651) = (***g_1650)) < p_25)) , &g_606)))) & (*l_1535)))));

                    ;
                    if ((safe_div_func_int8_t_s_s(g_1277, (safe_unary_minus_func_int16_t_s((safe_lshift_func_int8_t_s_s(func_31(((((&l_1789 == (g_1806 = l_1537)) < 1UL) != (safe_mod_func_int16_t_s_s(((safe_lshift_func_int8_t_s_u((*l_1526), (65529UL != (safe_mul_func_int8_t_s_s((func_31((((p_25 >= (((*l_1573) && p_25) && p_25)) <= l_1813) < (*g_302)), l_1789, (*l_39), g_1208, p_24) & p_24), (*g_302)))))) <= (**g_1576)), (-3L)))) == 1UL), l_1789, &l_1799, p_25, l_1799), l_1813)))))))
                    {
                        int *l_1814 = &l_1772;
                        l_1814 = &l_1717;

                        ;
                    }
                    else
                    {
                        short l_1822 = 1L;
                        l_1618 ^= ((**l_38) = ((*l_1526) = ((**g_1576) || (((safe_sub_func_uint8_t_u_u(l_1817, (((safe_sub_func_int32_t_s_s(l_1677, (safe_div_func_uint32_t_u_u((--(*g_1577)), g_1516)))) == (l_1593 = (p_24 >= ((safe_add_func_int8_t_s_s(p_25, (safe_add_func_int8_t_s_s((safe_mod_func_int32_t_s_s((p_24 , ((safe_rshift_func_uint16_t_u_s(0xA528L, 2)) && (6UL != 0xDE33BEC0L))), p_25)), l_1813)))) <= (*g_499))))) , (*l_1573)))) >= g_1071) || p_24))));
                        if (g_109)
                            break;
                        (*l_1517) = l_1799;
                    }

                    ;
                }

                ;
            }



            ;
            (*l_1836) = ((safe_unary_minus_func_uint32_t_u(((safe_add_func_uint8_t_u_u((*l_1536), ((((*g_1650) != (void*)0) < p_25) > l_1840))) , p_24))) , (void*)0);

            ;
        }







        ;
        ;
        ;
        (*l_1528) |= func_31((*l_1573), (*l_1573), (*l_1836), (((func_31((safe_div_func_int32_t_s_s((p_24 & 253UL), p_25)), (~(safe_sub_func_int32_t_s_s(p_24, p_24))), (*l_1836), (*l_1573), p_25) > g_1056) || p_24) != 6UL), p_25);
        (*l_1535) = (safe_sub_func_uint32_t_u_u(((((**g_1576) ^ ((safe_add_func_int32_t_s_s(((void*)0 != g_606), (g_937 != (((((*l_1849) = (*l_1530)) <= ((~((*l_1528) |= (((((void*)0 == l_1850) , 0x0806D77BL) , (safe_mul_func_uint16_t_u_u((safe_add_func_uint8_t_u_u(p_25, 0UL)), g_67))) | 0UL))) <= g_937)) , &g_1394) != &g_1115)))) < 0UL)) <= (**g_1651)) ^ p_24), 0x23332E3AL));
    }


    ;





    ;
    ;
    ;
    (*l_38) = &l_1538;



    return (****g_1649);


}







static short func_31(unsigned p_32, int p_33, int * p_34, unsigned p_35, int p_36)
{
    int l_1428 = (-10L);
    int *l_1441 = &g_106;
    int *l_1442 = &g_1071;
    int *l_1443 = &g_1071;
    int *l_1444 = &l_1428;
    int *l_1445 = (void*)0;
    int *l_1446 = &g_21;
    int *l_1447 = (void*)0;
    int *l_1448 = &g_1071;
    int *l_1449 = &g_21;
    int *l_1450 = &l_1428;
    int *l_1451 = &g_17;
    int *l_1452 = &g_1071;
    int *l_1453 = &g_106;
    int *l_1454 = (void*)0;
    int l_1455 = 0x71334AC4L;
    int *l_1456 = &g_106;
    int *l_1457 = &g_106;
    int *l_1458 = &l_1455;
    int *l_1459 = &g_21;
    int *l_1460 = &l_1428;
    int *l_1461 = &g_106;
    int l_1462 = 0x03257449L;
    int *l_1463 = &l_1455;
    int *l_1464 = (void*)0;
    int *l_1465 = &l_1462;
    int *l_1466 = &g_21;
    int *l_1467 = (void*)0;
    int *l_1468 = &l_1455;
    int *l_1469 = &l_1455;
    int *l_1470 = (void*)0;
    int *l_1471 = (void*)0;
    int *l_1472 = &g_17;
    int *l_1473 = (void*)0;
    int *l_1474 = &l_1455;
    int *l_1475 = &g_1071;
    int *l_1476 = &l_1462;
    int *l_1477 = (void*)0;
    int *l_1478 = (void*)0;
    int l_1479 = (-1L);
    int *l_1480 = &l_1462;
    int *l_1481 = &l_1428;
    int l_1482 = (-9L);
    int *l_1483 = &g_1071;
    int *l_1484 = &l_1455;
    int *l_1485 = &g_17;
    int *l_1486 = &l_1428;
    int *l_1487 = (void*)0;
    int *l_1488 = &g_17;
    int *l_1489 = &l_1428;
    int *l_1490 = &g_106;
    int *l_1491 = &l_1455;
    int *l_1492 = &l_1462;
    int *l_1493 = &l_1428;
    int *l_1494 = &l_1479;
    int *l_1495 = &l_1479;
    int *l_1496 = &g_106;
    int *l_1497 = &l_1428;
    int *l_1498 = (void*)0;
    int l_1499 = (-7L);
    int *l_1500 = &l_1499;
    int *l_1501 = &l_1455;
    int *l_1502 = &g_21;
    int *l_1503 = &l_1455;
    int *l_1504 = (void*)0;
    int *l_1505 = &l_1482;
    int *l_1506 = &g_1071;
    int *l_1507 = &l_1499;
    int *l_1508 = (void*)0;
    for (g_1115 = 0; (g_1115 <= (-4)); g_1115 = safe_sub_func_int16_t_s_s(g_1115, 9))
    {
        int l_1427 = (-10L);
        char *l_1429 = &g_527;
        unsigned char l_1436 = 255UL;
        int l_1437 = 0x2FB83032L;
        int **l_1438 = &g_953;
    }
    g_1509++;
    return p_33;
}







static int func_41(int ** p_42, unsigned short p_43)
{
    int l_53 = 0x9CC02768L;
    int *l_62 = &g_17;
    short *l_63 = &g_64;
    unsigned char *l_65 = (void*)0;
    unsigned char *l_66 = &g_67;
    int l_1343 = (-5L);
    int *l_1344 = &g_17;
    int *l_1345 = (void*)0;
    int *l_1346 = &g_106;
    int *l_1347 = &g_106;
    int *l_1348 = &g_106;
    int *l_1349 = (void*)0;
    int *l_1350 = &g_17;
    int l_1351 = 0x33CFFB83L;
    int l_1352 = (-1L);
    int *l_1353 = (void*)0;
    int *l_1354 = &l_1352;
    int *l_1355 = &g_1071;
    int *l_1356 = &l_1352;
    int *l_1357 = &l_1352;
    int *l_1358 = &g_1071;
    int *l_1359 = &g_1071;
    int *l_1360 = &l_1343;
    int l_1361 = 0xCEE0753EL;
    int *l_1362 = &g_17;
    int *l_1363 = &g_21;
    int *l_1364 = &l_1352;
    int *l_1365 = &g_1071;
    int l_1366 = 0xA31C4E62L;
    int *l_1367 = &g_17;
    int *l_1368 = &l_1361;
    int *l_1369 = &l_1366;
    int *l_1370 = (void*)0;
    int *l_1371 = &l_1343;
    int l_1372 = (-1L);
    int l_1373 = 0L;
    int l_1374 = 0xD04E19C9L;
    int *l_1375 = (void*)0;
    int *l_1376 = &l_1343;
    int l_1377 = 0x0AB8B10EL;
    int *l_1378 = &g_17;
    int *l_1379 = &l_1351;
    int *l_1380 = &g_1071;
    int *l_1381 = &g_1071;
    int *l_1382 = (void*)0;
    int *l_1383 = &l_1361;
    int l_1384 = 0x6E9AC450L;
    int *l_1385 = &g_21;
    int *l_1386 = &l_1343;
    int *l_1387 = &l_1343;
    int *l_1388 = &l_1352;
    int *l_1389 = (void*)0;
    int *l_1390 = (void*)0;
    int *l_1391 = &l_1351;
    int *l_1392 = &g_106;
    int *l_1393 = &l_1352;
    int *l_1395 = &g_1071;
    int *l_1396 = &l_1384;
    int *l_1397 = &l_1343;
    int *l_1398 = &l_1374;
    int l_1409 = (-1L);
    char **l_1416 = (void*)0;
    char **l_1417 = (void*)0;
    (**g_47) |= (((*l_62) | (*g_499)) < (*g_953));
    g_1400--;
    (**g_47) |= (safe_rshift_func_int8_t_s_s((((((p_43 == (safe_div_func_uint8_t_u_u(((**g_301) = p_43), (*l_1344)))) && 0x58L) || ((safe_rshift_func_int16_t_s_u(l_1409, 1)) ^ (l_65 != l_65))) && ((safe_mul_func_uint16_t_u_u((safe_sub_func_uint16_t_u_u(((*g_499) &= (+(safe_div_func_int16_t_s_s((+(l_1416 != (l_1417 = ((((*g_1167) = ((*l_1365) = 0x50L)) && p_43) , (void*)0)))), 0xEDA6L)))), 0x3129L)), p_43)) , (*l_1392))) , p_43), p_43));
    return (*l_1380);
}







static unsigned short func_44(int ** p_45, unsigned p_46)
{
    (*g_48) &= 0xEEA3821CL;
    (**p_45) = (**p_45);
    return g_17;
}







static int ** func_49(int * p_50, short p_51, char p_52)
{
    int *l_73 = &g_17;
    int l_1232 = (-1L);
    int l_1233 = (-1L);
    int *l_1234 = &l_1233;
    int *l_1235 = &g_17;
    int *l_1236 = &g_106;
    int *l_1237 = (void*)0;
    int *l_1238 = &g_21;
    int *l_1239 = &g_21;
    int *l_1240 = (void*)0;
    int *l_1241 = &g_17;
    int *l_1242 = &g_106;
    int *l_1243 = &l_1232;
    int *l_1244 = &g_1071;
    int *l_1245 = &g_1071;
    int *l_1246 = &l_1233;
    int *l_1247 = &l_1233;
    int *l_1248 = &g_1071;
    int *l_1249 = &g_106;
    int *l_1250 = &l_1233;
    int *l_1251 = &g_17;
    int *l_1252 = &g_21;
    int *l_1253 = &l_1233;
    int *l_1254 = (void*)0;
    int *l_1255 = &l_1233;
    int *l_1256 = &g_1071;
    int *l_1257 = &g_1071;
    int *l_1258 = &l_1233;
    int *l_1259 = &l_1232;
    int l_1260 = 0x2C3D097FL;
    int *l_1261 = &g_106;
    int l_1262 = (-3L);
    int *l_1263 = &g_106;
    int *l_1264 = &l_1232;
    int l_1265 = 0xC84018C8L;
    int *l_1266 = (void*)0;
    int *l_1267 = (void*)0;
    int *l_1268 = &l_1232;
    int *l_1269 = (void*)0;
    int l_1270 = 0xEFCD6B4BL;
    int *l_1271 = (void*)0;
    int *l_1272 = &l_1233;
    int *l_1273 = &g_21;
    int *l_1274 = &g_21;
    int *l_1275 = (void*)0;
    short ***l_1317 = &g_606;
    for (g_67 = 6; (g_67 > 24); g_67 = safe_add_func_uint8_t_u_u(g_67, 2))
    {
        int l_72 = 0L;
        int *l_87 = &g_21;
        char l_1217 = (-1L);
        short *l_1230 = (void*)0;
        unsigned char l_1231 = 3UL;
        if (((safe_sub_func_int32_t_s_s(l_72, l_72)) & ((!((void*)0 != &g_64)) >= (((p_50 == l_73) != (-5L)) | p_52))))
        {
            short l_97 = (-6L);
            unsigned char *l_107 = (void*)0;
            unsigned char *l_108 = &g_109;
            unsigned char *l_116 = &g_117;
            unsigned char *l_120 = &g_121;
            char *l_122 = &g_123;
            short *l_955 = (void*)0;
            int **l_1209 = &g_48;
            short l_1216 = 0x3B1EL;
            (*l_1209) = func_74((safe_rshift_func_uint8_t_u_u((safe_mul_func_uint8_t_u_u((safe_rshift_func_int16_t_s_u((safe_add_func_int32_t_s_s((p_52 >= (safe_rshift_func_uint16_t_u_s((((((void*)0 == l_87) >= ((*g_48) | 0x5AE70F58L)) != (*l_87)) && (**g_47)), 10))), 0x499F9DD1L)), (*g_499))), p_52)), 2)), l_955);

            ;



            if ((*l_87))
            {
                int ***l_1228 = &l_1209;
                unsigned l_1229 = 0x902EDE3AL;
                (**l_1228) = (p_50 = l_73);

                ;
            }
            else
            {
                if (l_1231)
                    break;
                return &g_953;


            }

            ;
            (*l_1209) = l_87;

            ;
        }
        else
        {
            return &g_48;


        }




        return &g_48;


    }

    ;



    g_1277--;
    for (l_1233 = (-8); (l_1233 < 15); l_1233 = safe_add_func_uint8_t_u_u(l_1233, 5))
    {
        int l_1282 = 0L;
        short *l_1285 = &g_199;
        short **l_1284 = &l_1285;
        char l_1286 = 0L;
        int l_1287 = 0x35EA5EECL;
        int *l_1312 = &g_1056;
        int **l_1311 = &l_1312;
        int ***l_1310 = &l_1311;
        unsigned short **l_1334 = &g_499;
        unsigned short ***l_1333 = &l_1334;
        int l_1342 = 0x24A0C58BL;
    }
    return &g_48;


}







static int * func_74(unsigned short p_75, short * p_76)
{
    int **l_962 = &g_953;
    char l_970 = 1L;
    int l_1024 = 0x44343D89L;
    int l_1044 = 1L;
    short l_1070 = 0xE8B3L;
    if ((((*g_48) = ((safe_mul_func_uint8_t_u_u((safe_add_func_int32_t_s_s((safe_sub_func_int8_t_s_s(g_453, ((*g_302) = p_75))), (p_75 ^ (func_44(l_962, ((((**l_962) >= p_75) >= (safe_rshift_func_uint8_t_u_s((((*g_48) ^= (4UL || (safe_lshift_func_int16_t_s_u(p_75, (safe_unary_minus_func_int16_t_s((safe_add_func_int8_t_s_s(g_2, (**l_962))))))))) & 0x1DA16024L), p_75))) < (**l_962))) & l_970)))), p_75)) ^ 0xD3CDL)) , 5L))
    {
        unsigned char l_973 = 1UL;
        int l_976 = 4L;
        unsigned l_988 = 0x208F4664L;
        unsigned l_991 = 0x63827B19L;
        short *l_992 = (void*)0;
        short *l_993 = &g_199;
        unsigned l_1048 = 1UL;
        int *l_1064 = &g_1056;
        int **l_1063 = &l_1064;
        int l_1086 = (-7L);
        int l_1185 = 0xA3ACE75BL;
        int *l_1186 = &l_976;
        if ((safe_sub_func_uint8_t_u_u(l_973, (safe_lshift_func_int16_t_s_s((l_976 ^= ((void*)0 == &g_302)), 4)))))
        {
            int *l_977 = &g_17;
            return l_977;


        }
        else
        {
            int l_978 = 0xD53FEE85L;
            unsigned *l_979 = &g_832;
            (*g_953) = (g_67 && ((*l_979) |= (g_937 |= l_978)));
            (**g_47) ^= (safe_add_func_int32_t_s_s(((**l_962) = 0xF18BEC34L), 6UL));
            (*l_962) = (*g_47);

            ;
        }

        ;
        if ((safe_sub_func_uint32_t_u_u(0x7FC82B21L, ((&p_76 != ((safe_div_func_uint32_t_u_u((safe_lshift_func_int8_t_s_u(p_75, (((l_988 & (((safe_div_func_int16_t_s_s(l_988, ((*l_993) = ((((+((*g_302) = (((void*)0 != g_606) ^ func_44(l_962, (((l_991 || 1UL) <= l_973) || 0UL))))) < l_976) ^ 1L) || 1UL)))) && p_75) == p_75)) , (**g_47)) ^ l_976))), g_121)) , (void*)0)) ^ l_973))))
        {
            int *l_994 = &g_106;
            int *l_995 = &g_106;
            int *l_996 = (void*)0;
            int *l_997 = &g_17;
            int *l_998 = &l_976;
            int *l_999 = &g_106;
            int *l_1000 = &g_21;
            int *l_1001 = (void*)0;
            int *l_1002 = &g_17;
            int *l_1003 = &g_17;
            int *l_1004 = &l_976;
            int *l_1005 = &g_106;
            int *l_1006 = &l_976;
            int *l_1007 = (void*)0;
            int *l_1008 = (void*)0;
            int *l_1009 = &g_21;
            int *l_1010 = &g_17;
            int *l_1011 = &g_17;
            int l_1012 = 0x35BC6A01L;
            int *l_1013 = &l_976;
            int *l_1014 = &g_21;
            int *l_1015 = (void*)0;
            int *l_1016 = &l_1012;
            int *l_1017 = &g_17;
            int *l_1018 = &g_106;
            int *l_1019 = &l_1012;
            int *l_1020 = (void*)0;
            int *l_1021 = (void*)0;
            int *l_1022 = &l_976;
            int *l_1023 = &g_17;
            int *l_1025 = &l_976;
            int *l_1026 = (void*)0;
            int *l_1027 = (void*)0;
            int *l_1028 = &l_1012;
            int *l_1029 = &l_1012;
            int *l_1030 = &l_1012;
            int *l_1031 = &g_21;
            int *l_1032 = &l_976;
            int *l_1033 = (void*)0;
            int *l_1034 = &l_976;
            int *l_1035 = &l_1024;
            int *l_1036 = (void*)0;
            int *l_1037 = &g_21;
            int *l_1038 = (void*)0;
            int *l_1039 = &g_21;
            int *l_1040 = &g_17;
            int *l_1041 = &g_21;
            int *l_1042 = (void*)0;
            int *l_1043 = &g_17;
            int *l_1045 = &l_1044;
            int l_1046 = 1L;
            int *l_1047 = &l_1044;
            int *l_1055 = &g_1056;
            char l_1065 = 0x6FL;
            ++l_1048;
            if ((safe_mul_func_int8_t_s_s((func_90((p_75 , func_93((*g_302), (*l_962), g_67)), ((g_1057 |= ((*l_1016) , ((*l_1055) = (safe_div_func_uint32_t_u_u(g_676, (-1L)))))) , (*l_962))) && (-2L)), 0x67L)))
            {
                unsigned l_1060 = 4294967293UL;
                int *l_1068 = (void*)0;
                short l_1069 = 0xF1ECL;
                int l_1082 = 0x7FC87E8EL;
                int l_1084 = 0xAB5B5F34L;
                int l_1085 = 0xF009315BL;
                int l_1087 = (-7L);
                int l_1088 = 0x42099F83L;
                int l_1089 = 0x47B40B4BL;
                char l_1096 = 0xE3L;
                char l_1106 = 0xEEL;
                if (((safe_lshift_func_uint16_t_u_u((*g_499), (g_676 != (safe_add_func_int16_t_s_s(((void*)0 != l_1063), l_1065))))) , (*g_953)))
                {
                    unsigned l_1072 = 1UL;
                    for (l_1012 = 0; (l_1012 > 2); l_1012 = safe_add_func_int32_t_s_s(l_1012, 2))
                    {
                        (*l_1031) |= ((*l_1045) = 0x06C3FCD1L);
                        (*l_1047) = 0x9444579EL;
                        (*l_962) = l_1068;

                        ;
                        --l_1072;
                    }

                    ;
                    (*l_994) ^= (p_75 && (safe_add_func_int16_t_s_s((safe_mod_func_int32_t_s_s(((*l_1041) = p_75), (safe_mul_func_int16_t_s_s((l_976 = (((-9L) < p_75) , (((*l_993) ^= 0L) , l_988))), ((~g_117) == p_75))))), (*l_1002))));
                }
                else
                {
                    short l_1081 = 1L;
                    int l_1083 = 0x319E91C9L;
                    int l_1090 = 0x4D127046L;
                    int *l_1091 = (void*)0;
                    int l_1092 = 0xEDD4D125L;
                    int *l_1093 = &g_17;
                    int *l_1094 = &l_1088;
                    int *l_1095 = (void*)0;
                    int *l_1097 = &l_1092;
                    int *l_1098 = &l_1083;
                    int *l_1099 = (void*)0;
                    int *l_1100 = &g_106;
                    int *l_1101 = &g_21;
                    int *l_1102 = &g_106;
                    int *l_1103 = &l_1082;
                    int *l_1104 = &g_106;
                    int *l_1105 = &l_1092;
                    int *l_1107 = (void*)0;
                    int *l_1108 = &l_1024;
                    int *l_1109 = &l_1024;
                    int *l_1110 = &l_1083;
                    int l_1111 = 0xDC300E30L;
                    int *l_1112 = (void*)0;
                    int *l_1113 = &l_1087;
                    int *l_1114 = &g_17;
                    int *l_1116 = &g_1071;
                    int *l_1117 = &l_976;
                    g_1118++;
                    g_1121++;
                    (*l_1043) |= p_75;
                    for (l_1046 = (-30); (l_1046 <= 26); ++l_1046)
                    {
                        unsigned *l_1128 = &g_224;
                        int l_1129 = 0x6265B6BBL;
                        char *l_1149 = (void*)0;
                        char *l_1150 = &l_1096;
                        (*l_1108) &= (~((l_1129 = (((p_75 && (safe_lshift_func_int16_t_s_s((-1L), 3))) | (*g_499)) == (((*l_1128) = (**l_962)) < p_75))) >= (**l_962)));
                        g_1130++;
                        (*l_1017) = (safe_lshift_func_uint16_t_u_s((((*l_1063) = &g_2) == &l_1090), 11));

                        ;
                        (*l_1014) = (*l_1110);
                    }

                    ;
                }

                ;
                ;
            }
            else
            {
                return &g_1071;


            }

            ;

            ;
            ;
            (*l_1030) = ((*l_1025) >= (((*g_499) = p_75) < ((safe_add_func_int32_t_s_s(l_1048, p_75)) < l_1086)));
            return (*l_962);


        }
        else
        {
            int *l_1155 = (void*)0;
            int l_1162 = 0x41BAF853L;
            char *l_1168 = &g_252;
            unsigned short **l_1202 = &g_499;
            (*g_48) = ((**l_962) , (safe_mod_func_int16_t_s_s(((*l_993) = 0x219EL), (**l_962))));
            (*l_962) = l_1155;

            ;
            if (p_75)
            {
                int **l_1171 = &l_1155;
                int *l_1174 = &l_976;
                (*l_962) = func_93((p_75 , ((g_1167 = &l_970) != l_1168)), (*g_47), (safe_rshift_func_int16_t_s_u(g_1130, ((*g_302) , ((*g_499)--)))));

                ;

                ;
                ;
                (*l_1174) = 0x5655EE9BL;
                (*l_1174) |= (l_1155 != (void*)0);
            }
            else
            {
                short l_1183 = 0xEA58L;
                int *l_1184 = (void*)0;
                unsigned char *l_1192 = (void*)0;
                unsigned char **l_1191 = &l_1192;
                short l_1195 = (-1L);
                unsigned short **l_1204 = (void*)0;
                unsigned short ***l_1203 = &l_1204;
                char **l_1205 = &l_1168;
                char *l_1207 = (void*)0;
                char **l_1206 = &l_1207;
                (*l_1186) = (((*l_993) &= (safe_mul_func_uint8_t_u_u(p_75, (((p_75 , l_1186) != (*g_47)) , (*g_1167))))) & 0x79B7L);
                (*g_47) = (((((**g_301) == (**g_301)) > 0UL) , 0xECC1B9D6L) , &l_1086);

                ;
                (*l_962) = func_93((p_75 != (p_75 , ((safe_div_func_int16_t_s_s(func_90(&l_976, &l_976), ((*l_993) = (safe_sub_func_uint32_t_u_u((safe_mul_func_int8_t_s_s((*g_1167), (l_1192 != ((*l_1206) = ((*l_1205) = ((((l_1202 = (void*)0) == ((*l_1203) = &g_499)) & g_252) , l_1192)))))), 4294967293UL))))) != g_676))), (*g_47), g_121);

                ;

                ;
                ;
                ;
                ;
            }

            ;

            ;
            ;
            ;
            ;
        }

        ;

        ;
        ;
        (*l_1186) = g_1208;
        (*l_1186) &= p_75;
    }
    else
    {
        (*g_953) = (**g_47);
    }




    ;
    return &g_106;



}







static unsigned char func_90(int * p_91, int * p_92)
{
    int *l_954 = &g_106;
    (*p_91) = (-1L);
    (*p_92) |= 0xDEB0C346L;
    (*l_954) |= (*p_91);
    return (**g_301);
}







static int * func_93(unsigned char p_94, int * p_95, short p_96)
{
    unsigned l_148 = 0x0FE2C0A0L;
    int l_151 = 7L;
    int l_157 = 0xA2ABDB3BL;
    int l_162 = 0xE0F6012CL;
    int l_175 = 5L;
    int l_180 = (-10L);
    int l_196 = (-2L);
    int l_201 = (-1L);
    int l_204 = 5L;
    int l_206 = 1L;
    int l_210 = (-4L);
    int **l_227 = &g_48;
    unsigned short *l_323 = &g_278;
    int *l_332 = &l_157;
    unsigned short *l_498 = &g_278;
    unsigned char l_603 = 1UL;
    unsigned char l_632 = 7UL;
    int **l_841 = (void*)0;
    for (p_96 = 0; (p_96 == 1); p_96 = safe_add_func_int16_t_s_s(p_96, 5))
    {
        int *l_126 = &g_106;
        int *l_127 = &g_17;
        int *l_128 = (void*)0;
        int *l_129 = &g_106;
        int *l_130 = &g_106;
        int *l_131 = &g_17;
        int *l_132 = &g_17;
        int *l_133 = &g_21;
        int *l_134 = &g_21;
        int *l_135 = (void*)0;
        int *l_136 = &g_17;
        int *l_137 = &g_106;
        int *l_138 = &g_17;
        int *l_139 = (void*)0;
        int *l_140 = &g_106;
        int *l_141 = (void*)0;
        int *l_142 = &g_21;
        int *l_143 = (void*)0;
        int l_144 = 0x11C9306AL;
        int *l_145 = &g_17;
        int *l_146 = &g_106;
        int *l_147 = &l_144;
        int *l_152 = &l_151;
        int *l_153 = &g_106;
        int *l_154 = &g_21;
        int *l_155 = &g_17;
        int *l_156 = &l_144;
        int *l_158 = &g_21;
        int *l_159 = &g_106;
        int *l_160 = &g_21;
        int *l_161 = &l_151;
        int *l_163 = &l_151;
        int l_164 = 0x0E1E3E4BL;
        int *l_165 = (void*)0;
        int *l_166 = &g_21;
        int *l_167 = &g_106;
        int *l_168 = &g_17;
        int *l_169 = &l_144;
        int *l_170 = &l_157;
        int *l_171 = &l_162;
        int *l_172 = &l_151;
        int l_173 = 0L;
        int *l_174 = &l_144;
        int *l_176 = &g_21;
        int l_177 = 0x527DF68DL;
        int *l_178 = (void*)0;
        int *l_179 = &l_162;
        int *l_181 = (void*)0;
        int *l_182 = &g_106;
        int *l_183 = &g_21;
        int *l_184 = &g_17;
        int *l_185 = &l_151;
        int *l_186 = (void*)0;
        int *l_187 = &l_151;
        int *l_188 = &l_144;
        int *l_189 = &g_21;
        int *l_190 = (void*)0;
        int *l_191 = (void*)0;
        int *l_192 = &l_173;
        int *l_193 = &g_106;
        int *l_194 = &g_21;
        int *l_195 = &g_21;
        int *l_197 = &l_151;
        int *l_198 = &l_175;
        int *l_200 = &l_177;
        int *l_202 = &l_151;
        int *l_203 = &g_17;
        int *l_205 = &l_201;
        int *l_207 = (void*)0;
        int *l_208 = &l_201;
        int *l_209 = &g_21;
        int *l_211 = (void*)0;
        int *l_212 = &l_162;
        int *l_213 = &l_173;
        int *l_214 = &l_162;
        int *l_215 = &l_206;
        int l_216 = 0x513F79C9L;
        int *l_217 = &l_210;
        int *l_218 = &g_21;
        int *l_219 = &l_157;
        int *l_220 = &l_206;
        int *l_221 = &l_201;
        int *l_222 = &l_164;
        int l_223 = 0x45870CA5L;
        int ***l_230 = (void*)0;
        int ***l_231 = &g_47;
        (*g_47) = (*g_47);
        --l_148;
        ++g_224;
        (**l_227) = func_44(l_227, ((g_109 ^ ((0UL == (+(g_123 = (func_44(l_227, (((*l_231) = &p_95) == &g_48)) <= (safe_mul_func_uint8_t_u_u(p_96, (safe_add_func_int8_t_s_s((g_106 | g_67), g_123)))))))) > 0x90AAL)) != p_96));

        ;
    }


    ;
    p_95 = p_95;
    if ((p_96 ^ g_224))
    {
        int **l_238 = (void*)0;
        char *l_245 = (void*)0;
        char *l_246 = &g_123;
        char *l_247 = (void*)0;
        char *l_248 = (void*)0;
        char *l_249 = (void*)0;
        char *l_250 = (void*)0;
        char *l_251 = &g_252;
        unsigned char *l_253 = (void*)0;
        unsigned char *l_254 = &g_121;
        unsigned short l_312 = 65533UL;
        unsigned short l_357 = 0x73D7L;
        int l_384 = (-1L);
        int l_402 = 0x6BC6BD49L;
        int l_420 = (-1L);
        int l_429 = 0xFBA1E86DL;
        int l_438 = 0x3E21F936L;
        unsigned l_488 = 0xFE23A00BL;
        int **l_512 = &l_332;
        int *l_513 = (void*)0;
        int *l_514 = &l_180;
        int *l_516 = &l_429;
        int **l_515 = &l_516;
        int *l_517 = &l_206;
        short *l_518 = &g_64;
        short *l_519 = &g_199;
        int *l_520 = &l_384;
        int ***l_521 = &l_227;
        int ***l_522 = &g_47;
        if ((safe_add_func_uint16_t_u_u(((void*)0 == l_238), (safe_div_func_int16_t_s_s((((((safe_unary_minus_func_uint8_t_u(((*l_254) = (safe_unary_minus_func_int8_t_s((safe_div_func_uint8_t_u_u(p_96, ((*l_251) = ((g_64 , func_44(&g_48, g_224)) , ((*l_246) = (g_2 , g_117))))))))))) , 4294967295UL) , (void*)0) != &g_48) , p_96), 1L)))))
        {
            unsigned l_255 = 0xCCE42A8BL;
            int **l_266 = &g_48;
            char *l_291 = &g_252;
            ++l_255;
            for (g_106 = 0; (g_106 >= (-27)); g_106 = safe_sub_func_int32_t_s_s(g_106, 1))
            {
                short l_269 = 0L;
                unsigned char *l_317 = &g_67;
            }
            (*l_227) = (g_117 , (*l_266));
        }
        else
        {
            unsigned short l_331 = 0x89A3L;
            l_162 &= (safe_div_func_int32_t_s_s(((0xFB74B672L | func_44(l_227, p_96)) , ((**l_227) &= l_331)), p_96));
            l_332 = (*g_47);


        }


        if ((+(**g_47)))
        {
            unsigned char **l_340 = &l_254;
            int l_366 = 0x7E5A97E3L;
            unsigned char l_369 = 0x84L;
            int *l_372 = (void*)0;
            int *l_373 = &l_162;
            int *l_374 = (void*)0;
            int *l_375 = &g_106;
            int *l_376 = &l_204;
            int *l_377 = (void*)0;
            int *l_378 = &l_206;
            int *l_379 = (void*)0;
            int *l_380 = &l_162;
            int *l_381 = &l_196;
            int *l_382 = &l_196;
            int *l_383 = &l_204;
            int *l_385 = (void*)0;
            int *l_386 = &l_204;
            int *l_387 = &l_201;
            int *l_388 = &g_21;
            int *l_389 = &g_21;
            int *l_390 = (void*)0;
            int *l_391 = &l_206;
            int *l_392 = &l_196;
            int *l_393 = (void*)0;
            int *l_394 = &l_157;
            int *l_395 = &l_201;
            int *l_396 = &l_175;
            int *l_397 = (void*)0;
            int *l_398 = &l_157;
            int *l_399 = &g_106;
            int *l_400 = &l_206;
            int *l_401 = &l_204;
            int *l_403 = &l_151;
            int *l_404 = &l_162;
            int *l_405 = &l_366;
            int *l_406 = &l_366;
            int *l_407 = &l_162;
            int *l_408 = (void*)0;
            int *l_409 = &g_17;
            int *l_410 = &l_384;
            int *l_411 = &l_204;
            int *l_412 = (void*)0;
            int *l_413 = &l_210;
            int *l_414 = &g_21;
            int *l_415 = &g_17;
            int *l_416 = &l_162;
            int *l_417 = &l_162;
            int *l_418 = &l_175;
            int *l_419 = &l_175;
            int *l_421 = &l_204;
            int l_422 = 0x8AACDA7BL;
            int *l_423 = &l_384;
            int *l_424 = &l_366;
            int *l_425 = &l_157;
            int *l_426 = (void*)0;
            int *l_427 = &l_210;
            int *l_428 = &l_210;
            int *l_430 = &l_162;
            int *l_431 = &l_210;
            int *l_432 = (void*)0;
            int *l_433 = &l_204;
            int *l_434 = &l_402;
            int *l_435 = &l_206;
            int *l_436 = &l_402;
            int *l_437 = &l_420;
            int *l_439 = &g_17;
            int *l_440 = (void*)0;
            int *l_441 = &l_366;
            int *l_442 = &l_429;
            int *l_443 = &l_420;
            int *l_444 = (void*)0;
            int *l_445 = &l_157;
            int *l_446 = &g_21;
            int *l_447 = &l_402;
            int *l_448 = &l_151;
            int *l_449 = (void*)0;
            int l_450 = 0x18DA4701L;
            int *l_451 = &l_162;
            int *l_452 = (void*)0;
            for (g_224 = 11; (g_224 > 43); ++g_224)
            {
                char l_350 = 1L;
                int l_351 = 0x8A431967L;
                for (g_64 = 26; (g_64 != (-12)); g_64--)
                {
                    int l_337 = 4L;
                    int *l_341 = (void*)0;
                    int *l_342 = &l_201;
                    int *l_343 = &l_175;
                    int *l_344 = &g_21;
                    int *l_345 = &l_210;
                    int *l_346 = &l_196;
                    int *l_347 = &l_151;
                    int *l_348 = &l_201;
                    int *l_349 = &l_201;
                    int *l_352 = &l_162;
                    int *l_353 = (void*)0;
                    int *l_354 = &l_206;
                    int l_355 = 0xF90C5357L;
                    int *l_356 = &l_204;
                    (**g_47) ^= l_337;
                    for (g_106 = 0; (g_106 != 2); ++g_106)
                    {
                        (*g_47) = (*g_47);
                        if ((*p_95))
                            continue;
                        (**l_227) &= ((void*)0 != l_340);
                        (*l_227) = p_95;
                    }
                    ++l_357;
                    (*l_349) |= (safe_mul_func_int16_t_s_s(func_44(&g_48, (p_94 & (safe_mul_func_uint8_t_u_u((*l_347), func_44((g_21 , &g_48), (((*l_352) |= (*g_48)) == (((((&g_47 == ((l_366 , ((safe_rshift_func_uint8_t_u_s(0xDAL, g_106)) , (*g_48))) , (void*)0)) ^ p_96) & 0x49L) , l_369) != 0xB9L))))))), l_369));
                }
                (*l_227) = (*l_227);
            }
            l_366 ^= (safe_rshift_func_int8_t_s_s(g_17, 3));
            --g_453;
        }
        else
        {
            unsigned l_456 = 0x70B2A593L;
            int **l_457 = (void*)0;
            unsigned char **l_458 = &g_302;
            (*p_95) = (*l_332);
            (**g_47) &= (l_456 , l_456);
            (*g_47) = p_95;
            if ((*p_95))
            {
                unsigned char ***l_473 = (void*)0;
                int l_478 = 0xBEE1E9C6L;
                unsigned *l_486 = &l_148;
                unsigned *l_487 = &g_224;
                unsigned short **l_497 = &l_323;
                int *l_500 = &l_201;
                for (l_312 = (-7); (l_312 >= 27); l_312 = safe_add_func_int32_t_s_s(l_312, 7))
                {
                    short *l_479 = &g_199;
                    (*g_48) = (safe_lshift_func_int16_t_s_u(((*l_479) ^= (+((safe_mul_func_int16_t_s_s(p_94, 0UL)) , (safe_rshift_func_int8_t_s_u(((**l_227) ^ ((1L & g_109) <= ((safe_sub_func_int16_t_s_s((((void*)0 == l_473) , g_2), ((safe_lshift_func_uint16_t_u_s(((safe_sub_func_uint8_t_u_u(7UL, (*g_302))) , g_17), 3)) == 65535UL))) , p_96))), l_478))))), 12));
                    if ((**g_47))
                        continue;
                    (*g_47) = p_95;
                }
                (*l_332) &= (-5L);
                (*g_48) = func_44(&l_332, (((-4L) == (p_94 > (p_94 , (((!((((~((func_44(&g_48, p_96) , p_94) < ((*l_487) = ((safe_add_func_uint16_t_u_u((safe_lshift_func_int8_t_s_u((((((*l_486) = g_2) == 0xDEE9DC35L) , p_96) == 0x0912981AL), 7)), p_94)) || 0x83CF0072L)))) , 0x5CL) && p_94) ^ g_106)) || l_488) > g_453)))) , g_121));
                (*l_332) = ((**g_301) , (safe_mod_func_int32_t_s_s(((*g_48) | 1L), ((((*l_246) = ((((*l_251) = g_21) || (safe_rshift_func_int16_t_s_u(p_94, (safe_mod_func_int32_t_s_s((l_429 ^= ((*l_500) = ((safe_mod_func_int8_t_s_s((((*l_497) = &g_278) == (g_499 = l_498)), p_96)) || l_478))), g_123))))) | p_94)) | l_478) , p_94))));
            }
            else
            {
                unsigned l_503 = 0xFF5A8673L;
                for (l_206 = 0; (l_206 < 18); ++l_206)
                {
                    if ((*p_95))
                        break;
                }
                (**g_47) = ((((*l_323) = 1UL) , ((void*)0 == l_251)) , (*g_48));
                (*g_48) = (safe_div_func_int32_t_s_s((l_503 , (+(((**l_227) ^ ((*p_95) < (p_96 && (**g_301)))) <= (**l_227)))), (((*p_95) ^ ((-4L) < ((((*g_499) && p_94) , (*l_227)) != (void*)0))) ^ (*g_499))));
            }
        }
        (*l_520) &= (l_429 ^= (((*l_519) = ((*l_518) |= ((-3L) != ((*l_517) = (safe_mul_func_int8_t_s_s(((safe_rshift_func_int16_t_s_u((((*l_332) = g_67) , ((((*l_514) = (safe_sub_func_uint16_t_u_u(func_44(l_512, ((**g_47) != g_224)), p_94))) , (*l_227)) == ((*l_515) = (*g_47)))), p_94)) , p_94), 0L)))))) && 2UL));


        if ((((((**g_301) <= g_252) & (((*l_521) = (g_117 , &p_95)) != ((*l_522) = &g_48))) != (0x8684L == ((*l_332) , (p_95 == (void*)0)))) <= 0x44DDL))
        {
            return (*g_47);


        }
        else
        {
            unsigned l_528 = 6UL;
            int *l_536 = (void*)0;
            for (g_121 = 18; (g_121 == 37); g_121 = safe_add_func_int8_t_s_s(g_121, 3))
            {
                if ((**g_47))
                    break;
                (*g_47) = (*g_47);
            }
            l_528++;
            for (g_17 = 0; (g_17 >= 10); ++g_17)
            {
                for (g_527 = (-4); (g_527 == 29); g_527++)
                {
                    int *l_535 = &l_384;
                    (**l_521) = l_535;

                    ;
                }
                (*g_47) = l_536;

                ;
            }



        }


        ;

        ;
    }
    else
    {
        unsigned *l_537 = &g_224;
        int ***l_540 = &l_227;
        int l_545 = 0x547DCFADL;
        char *l_556 = &g_123;
        unsigned char **l_584 = &g_302;
        unsigned *l_586 = &g_224;
        int l_601 = 0L;
        int *l_610 = &g_2;
        int **l_609 = &l_610;
        unsigned short l_722 = 7UL;
        int *l_842 = &g_106;
        short l_881 = (-2L);
        unsigned char l_882 = 0x9BL;
        short l_945 = 0xA94CL;
        l_332 = (p_95 = ((((**g_301) | (((*l_537) = p_96) | (safe_lshift_func_int16_t_s_s(func_44(((*l_540) = &g_48), g_21), ((!(safe_add_func_uint8_t_u_u(p_96, (safe_mod_func_int32_t_s_s(l_545, (((g_546 = (((0xD9B55EE1L <= g_109) , (*g_301)) != &p_94)) & g_527) || g_123)))))) && 0x3CL))))) != g_278) , (*g_47)));


        for (l_175 = 0; (l_175 == 10); l_175++)
        {
            int l_549 = 0x4ABB3CF0L;
            int *l_553 = &g_17;
            int l_597 = 1L;
            unsigned l_626 = 0x0FFDB39CL;
            int l_647 = 0x4C56C392L;
            int l_652 = 0L;
            int l_661 = 0x2D5A2506L;
            short l_729 = (-5L);
        }
        (*l_842) ^= ((g_676 && (*g_302)) | (*l_332));
        if ((((-5L) & ((**g_47) | 4294967295UL)) & (**g_301)))
        {
            short l_854 = 1L;
            int *l_855 = (void*)0;
            int *l_856 = (void*)0;
            int *l_857 = &l_545;
            (*l_857) &= ((safe_div_func_uint8_t_u_u((safe_unary_minus_func_int8_t_s(((safe_lshift_func_uint8_t_u_u((safe_mod_func_int8_t_s_s((safe_add_func_int32_t_s_s((**g_47), 4294967287UL)), p_94)), 1)) && ((safe_add_func_uint16_t_u_u((((*g_302) , (func_44(((*l_540) = (*l_540)), (g_527 , 0x5C1B1496L)) ^ p_96)) && l_854), g_106)) , 0UL)))), 0x97L)) && (*g_499));
            for (l_148 = (-8); (l_148 > 3); l_148++)
            {
                (*l_332) = (p_96 == ((*p_95) , ((**g_47) || 1UL)));
            }
        }
        else
        {
            unsigned l_880 = 0UL;
            int **l_887 = (void*)0;
            int **l_888 = &l_332;
            int *l_889 = &l_601;
            int *l_890 = &g_21;
            int *l_891 = &l_204;
            int *l_892 = &l_175;
            int *l_893 = &l_204;
            int *l_894 = &l_151;
            int *l_895 = &l_175;
            int *l_896 = &g_106;
            int l_897 = 1L;
            int *l_898 = &g_106;
            int l_899 = (-3L);
            int *l_900 = (void*)0;
            int *l_901 = &l_206;
            int *l_902 = &l_196;
            int *l_903 = &l_206;
            int *l_904 = &l_206;
            int *l_905 = &l_196;
            int *l_906 = (void*)0;
            int *l_907 = &l_175;
            int *l_908 = &l_206;
            int *l_909 = &l_196;
            int *l_910 = &l_204;
            int *l_911 = (void*)0;
            int *l_912 = &l_899;
            int *l_913 = (void*)0;
            int *l_914 = &l_175;
            int *l_915 = &g_21;
            int *l_916 = &l_175;
            int *l_917 = &l_204;
            int *l_918 = &g_106;
            int *l_919 = (void*)0;
            int *l_920 = &l_175;
            int *l_921 = &l_157;
            int *l_922 = &l_175;
            int *l_923 = &l_175;
            int *l_924 = &l_897;
            int *l_925 = &l_175;
            int *l_926 = &l_545;
            int *l_927 = &l_196;
            int *l_928 = &l_206;
            int *l_929 = &g_17;
            int *l_930 = &l_210;
            int *l_931 = (void*)0;
            int *l_932 = &l_162;
            int *l_933 = &l_897;
            int *l_934 = (void*)0;
            int *l_935 = &l_201;
            int *l_936 = &l_151;
            char *l_944 = &g_123;
            if ((*l_842))
            {
                p_95 = (p_96 , (((safe_lshift_func_int16_t_s_s(0x1DF9L, 3)) ^ g_17) , p_95));
            }
            else
            {
                int ***l_872 = &l_841;
                int ****l_873 = &l_872;
                int *l_883 = &l_204;
                unsigned *l_886 = &g_832;
                (*l_883) |= (safe_div_func_uint16_t_u_u((safe_mod_func_int16_t_s_s((safe_mul_func_uint16_t_u_u(func_44(&l_332, ((0xA512L <= (safe_div_func_uint16_t_u_u((safe_rshift_func_uint8_t_u_u(((~(((g_676 , (!(((*l_873) = l_872) != (void*)0))) & ((*l_323) = (*g_499))) , ((safe_add_func_uint8_t_u_u(0x29L, (((0x4CL > ((~(((((*l_842) = ((~((safe_sub_func_int32_t_s_s((safe_add_func_int32_t_s_s(((*p_95) = (**g_47)), l_880)), p_96)) , l_881)) & g_123)) , 0L) , (*l_873)) != (void*)0)) , (**g_301))) >= 0L) > 0L))) | (*g_302)))) , l_880), (*g_302))), 0x7CC1L))) || l_882)), p_96)), 0x85C9L)), g_64));
                (***l_540) = (safe_div_func_int32_t_s_s(func_44(&g_48, l_880), ((*l_842) = p_94)));
                (**g_47) = (p_96 > func_44(&g_48, ((*l_886) &= ((*l_586) = g_121))));
            }
            (*l_888) = ((*g_47) = (*g_47));
            --g_937;
            for (g_121 = 0; (g_121 >= 12); g_121++)
            {
                unsigned char l_950 = 6UL;
                if ((safe_mul_func_int8_t_s_s(((l_944 == l_556) ^ p_94), (1L ^ ((*l_918) = (((l_945 < (4294967288UL ^ (safe_sub_func_uint8_t_u_u(func_44((*l_540), ((*l_586) &= (&g_2 != (void*)0))), g_109)))) < 4294967291UL) ^ (**g_301)))))))
                {
                    for (l_632 = (-4); (l_632 < 21); l_632 = safe_add_func_uint16_t_u_u(l_632, 4))
                    {
                        if ((*p_95))
                            break;
                        if ((*p_95))
                            continue;
                    }
                    return (**l_540);



                }
                else
                {
                    (*l_888) = (*g_47);
                    l_950++;
                }
                (*l_898) = (l_950 , (*g_48));
                (*l_896) &= (*p_95);
            }
        }
    }



    ;

    return g_953;



}





int main (int argc, char* argv[])
{
    int print_hash_value = 0;
    if (argc == 2 && strcmp(argv[1], "1") == 0) print_hash_value = 1;
    platform_main_begin();
    crc32_gentab();
    func_1();
    transparent_crc(g_2, "g_2", print_hash_value);
    transparent_crc(g_17, "g_17", print_hash_value);
    transparent_crc(g_21, "g_21", print_hash_value);
    transparent_crc(g_64, "g_64", print_hash_value);
    transparent_crc(g_67, "g_67", print_hash_value);
    transparent_crc(g_106, "g_106", print_hash_value);
    transparent_crc(g_109, "g_109", print_hash_value);
    transparent_crc(g_117, "g_117", print_hash_value);
    transparent_crc(g_121, "g_121", print_hash_value);
    transparent_crc(g_123, "g_123", print_hash_value);
    transparent_crc(g_199, "g_199", print_hash_value);
    transparent_crc(g_224, "g_224", print_hash_value);
    transparent_crc(g_252, "g_252", print_hash_value);
    transparent_crc(g_278, "g_278", print_hash_value);
    transparent_crc(g_453, "g_453", print_hash_value);
    transparent_crc(g_527, "g_527", print_hash_value);
    transparent_crc(g_546, "g_546", print_hash_value);
    transparent_crc(g_676, "g_676", print_hash_value);
    transparent_crc(g_832, "g_832", print_hash_value);
    transparent_crc(g_937, "g_937", print_hash_value);
    transparent_crc(g_1056, "g_1056", print_hash_value);
    transparent_crc(g_1057, "g_1057", print_hash_value);
    transparent_crc(g_1071, "g_1071", print_hash_value);
    transparent_crc(g_1115, "g_1115", print_hash_value);
    transparent_crc(g_1118, "g_1118", print_hash_value);
    transparent_crc(g_1121, "g_1121", print_hash_value);
    transparent_crc(g_1130, "g_1130", print_hash_value);
    transparent_crc(g_1208, "g_1208", print_hash_value);
    transparent_crc(g_1276, "g_1276", print_hash_value);
    transparent_crc(g_1277, "g_1277", print_hash_value);
    transparent_crc(g_1297, "g_1297", print_hash_value);
    transparent_crc(g_1394, "g_1394", print_hash_value);
    transparent_crc(g_1399, "g_1399", print_hash_value);
    transparent_crc(g_1400, "g_1400", print_hash_value);
    transparent_crc(g_1509, "g_1509", print_hash_value);
    transparent_crc(g_1516, "g_1516", print_hash_value);
    transparent_crc(g_1751, "g_1751", print_hash_value);
    transparent_crc(g_1948, "g_1948", print_hash_value);
    transparent_crc(g_1956, "g_1956", print_hash_value);
    transparent_crc(g_1976, "g_1976", print_hash_value);
    transparent_crc(g_1981, "g_1981", print_hash_value);
    transparent_crc(g_2042, "g_2042", print_hash_value);
    transparent_crc(g_2057, "g_2057", print_hash_value);
    transparent_crc(g_2193, "g_2193", print_hash_value);
    transparent_crc(g_2227, "g_2227", print_hash_value);
    platform_main_end(crc32_context ^ 0xFFFFFFFFUL, print_hash_value);
    return 0;
}
