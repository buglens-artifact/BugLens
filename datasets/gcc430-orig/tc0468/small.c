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
   unsigned f0 : 13;
   signed f1 : 16;
   signed f2 : 19;
   signed f3 : 18;
};

struct S1 {
   unsigned short f0;
   const unsigned char f1;
   const char f2;
   char f3;
   unsigned f4;
   unsigned f5;
   int f6;
   const unsigned short f7;
};


static struct S0 g_12 = {15,206,-686,-251};
static unsigned short g_62 = 0x5082L;
static unsigned short g_74 = 65526UL;
static unsigned g_76 = 0x2C04DDAFL;
static int g_81 = 5L;
static const int *g_154 = &g_81;
static char g_158 = 0L;
static short g_167 = (-5L);
static short g_171 = 0xAE20L;
static char g_173 = (-1L);
static char g_228 = 0x6FL;
static int g_310 = 7L;
static unsigned g_332 = 1UL;
static struct S0 g_337 = {4,6,-292,137};
static struct S0 *g_336 = &g_337;
static unsigned *g_346 = &g_76;
static unsigned g_379 = 1UL;
static struct S1 *g_387 = (void*)0;
static const struct S1 g_390 = {6UL,254UL,9L,0xA0L,0UL,0xA3C90181L,0x76FF5385L,0x6D03L};
static int g_418 = 0L;
static int g_610 = 0xE08463D8L;
static unsigned short g_612 = 65527UL;
static unsigned char g_709 = 0xFBL;
static int g_785 = 0xF538693BL;
static unsigned char g_908 = 255UL;
static unsigned g_1062 = 0xC5CDF65EL;
static char g_1165 = 0xACL;
static int g_1166 = 0x768309D5L;
static unsigned short g_1169 = 0xE353L;
static struct S1 **g_1182 = &g_387;
static struct S1 ***g_1181 = &g_1182;
static char g_1190 = 0x8FL;
static unsigned short g_1191 = 0UL;



static unsigned func_1(void);
static struct S0 * func_2(struct S0 * p_3, unsigned p_4, char p_5, short p_6);
static struct S0 * func_7(char p_8, int p_9, unsigned p_10);
static int func_13(unsigned p_14, int p_15);
static struct S0 * func_17(unsigned char p_18, int p_19, const struct S0 * p_20, struct S0 * p_21, struct S0 * p_22);
static unsigned char func_23(struct S0 * p_24, const struct S1 p_25, short p_26, struct S0 * p_27);
static struct S0 * func_28(struct S1 p_29, struct S0 * p_30, struct S0 * p_31, struct S0 * p_32, unsigned p_33);
static struct S1 func_34(struct S0 * const p_35, struct S0 * p_36, unsigned p_37);
static struct S0 * func_38(struct S0 * p_39, struct S0 * p_40, struct S1 p_41, unsigned char p_42);
static struct S0 * func_43(struct S0 * p_44, struct S0 * p_45, struct S0 * p_46, struct S0 p_47);
static unsigned func_1(void)
{
    struct S0 *l_11 = &g_12;
    int l_16 = 6L;
    struct S1 l_227 = {65535UL,0xEFL,-7L,0x27L,2UL,1UL,0x7D8875C3L,0xA49CL};
    struct S0 **l_392 = &g_336;
    int *l_416 = (void*)0;
    int *l_417 = &g_418;
    int *l_1067 = &g_310;
    int *l_1068 = &g_81;
    int *l_1069 = (void*)0;
    int *l_1070 = &l_16;
    int *l_1071 = &g_610;
    short l_1072 = (-1L);
    int *l_1073 = &l_16;
    int *l_1074 = &g_610;
    int *l_1075 = &g_310;
    int *l_1076 = &g_610;
    int l_1077 = 0L;
    int *l_1078 = &g_81;
    int l_1079 = 0x2D91ABD5L;
    int *l_1080 = &l_1079;
    int *l_1081 = &g_310;
    int l_1082 = 0x797587C3L;
    int *l_1083 = &l_16;
    int *l_1084 = &g_310;
    int *l_1085 = &l_1079;
    int *l_1086 = &g_81;
    int *l_1087 = &g_81;
    int *l_1088 = &l_1077;
    int *l_1089 = (void*)0;
    int *l_1090 = &l_1079;
    int *l_1091 = &g_310;
    int *l_1092 = (void*)0;
    int *l_1093 = &l_1082;
    int *l_1094 = &g_81;
    int *l_1095 = &l_1077;
    int l_1096 = 8L;
    int *l_1097 = &g_81;
    int *l_1098 = &l_1082;
    int *l_1099 = (void*)0;
    int *l_1100 = &l_1079;
    int *l_1101 = (void*)0;
    int *l_1102 = &l_1077;
    int *l_1103 = &l_1077;
    int *l_1104 = (void*)0;
    int *l_1105 = &l_16;
    int *l_1106 = &l_1077;
    int *l_1107 = (void*)0;
    int *l_1108 = &g_81;
    int *l_1109 = &l_1096;
    int *l_1110 = &l_1079;
    int *l_1111 = &g_610;
    int *l_1112 = (void*)0;
    int *l_1113 = &l_1077;
    int *l_1114 = &g_610;
    int *l_1115 = (void*)0;
    int *l_1116 = &g_81;
    int *l_1117 = &g_610;
    int *l_1118 = &l_1096;
    int *l_1119 = (void*)0;
    int *l_1120 = &g_310;
    int *l_1121 = &g_610;
    int *l_1122 = &l_1079;
    int *l_1123 = &g_310;
    int *l_1124 = &l_1077;
    int *l_1125 = &l_1077;
    int *l_1126 = (void*)0;
    int *l_1127 = &l_1082;
    int *l_1128 = (void*)0;
    int *l_1129 = &g_310;
    int *l_1130 = &l_1079;
    int *l_1131 = &l_1082;
    int *l_1132 = &g_310;
    int l_1133 = 0x205CD75AL;
    int *l_1134 = &l_1096;
    int *l_1135 = &g_81;
    int *l_1136 = (void*)0;
    int *l_1137 = (void*)0;
    int *l_1138 = (void*)0;
    int *l_1139 = &g_81;
    int *l_1140 = &l_16;
    short l_1141 = 0xB2C5L;
    int *l_1142 = &g_310;
    int *l_1143 = &g_610;
    int *l_1144 = &l_1133;
    int *l_1145 = &l_1077;
    int *l_1146 = &l_1096;
    int l_1147 = 0xDAA739D2L;
    int *l_1148 = &g_310;
    int *l_1149 = &g_610;
    int *l_1150 = &l_16;
    int *l_1151 = &g_81;
    int *l_1152 = &l_16;
    int *l_1153 = &l_1082;
    int *l_1154 = &l_1077;
    int *l_1155 = (void*)0;
    int *l_1156 = &l_1077;
    int *l_1157 = &l_1096;
    int *l_1158 = &g_610;
    int *l_1159 = &l_1147;
    int *l_1160 = &l_16;
    int *l_1161 = &l_1133;
    int *l_1162 = &l_1079;
    int *l_1163 = (void*)0;
    int *l_1164 = &g_81;
    int *l_1167 = &g_610;
    int *l_1168 = &l_16;
    char *l_1186 = &g_228;
    (*l_392) = func_2(func_7((((void*)0 == l_11) & ((void*)0 != &g_12)), ((*l_417) ^= (func_13(l_16, (((*l_392) = func_17(func_23(func_28(func_34(&g_12, func_38(func_43(l_11, l_11, l_11, (*l_11)), l_11, l_227, g_228), g_228), g_336, &g_337, l_11, l_227.f2), g_390, g_390.f6, l_11), l_16, l_11, l_11, &g_337)) != (void*)0)) && 0xB701C6ACL)), l_227.f3), l_227.f2, l_227.f6, g_390.f1);

    ;
    ;
    g_1169--;
    if ((g_337.f3 = (safe_lshift_func_uint8_t_u_u(1UL, (*l_1081)))))
    {
        unsigned **l_1176 = (void*)0;
        struct S0 *l_1179 = (void*)0;
        const struct S1 l_1180 = {8UL,254UL,-1L,0x13L,4294967287UL,0UL,0xF2E55F8AL,65535UL};
        (*l_1149) ^= ((safe_add_func_uint32_t_u_u((l_1176 == (void*)0), (safe_mul_func_uint16_t_u_u(func_23(((*l_392) = l_1179), l_1180, g_418, l_1179), (g_1181 == &g_1182))))) > 4UL);

        ;
        g_12.f2 ^= (-1L);
        (*l_1073) |= ((*l_1109) = func_23(((*l_392) = func_38(&g_12, (*l_392), g_390, g_908)), l_227, l_1180.f2, &g_337));

        ;
    }
    else
    {
        unsigned short l_1183 = 0UL;
        int l_1187 = 0x36FCAFE4L;
        int l_1188 = 0x8AD16CE2L;
        int l_1189 = 0x507A25CDL;
        l_1183--;
        l_1187 = (l_1186 != &g_228);
        g_1191--;
    }
    return (*g_346);
}







static struct S0 * func_2(struct S0 * p_3, unsigned p_4, char p_5, short p_6)
{
    int *l_419 = &g_310;
    struct S0 * const l_429 = &g_337;
    int l_432 = 0L;
    struct S0 *l_434 = &g_12;
    const struct S1 *l_444 = &g_390;
    const struct S1 **l_443 = &l_444;
    unsigned l_503 = 0xFB33DBD0L;
    unsigned char l_794 = 0x8CL;
    int l_868 = 1L;
    int l_879 = (-10L);
    int l_885 = 0x3134440BL;
    int l_902 = 1L;
    int l_1020 = 0L;
    int l_1027 = 0xFC99613DL;
    int l_1034 = (-1L);
    int l_1066 = 0xD1558054L;
    if (((*l_419) = 1L))
    {
        const short l_422 = 0L;
        struct S0 *l_433 = &g_12;
        struct S0 **l_435 = &g_336;
        const struct S1 *l_441 = &g_390;
        const struct S1 **l_440 = &l_441;
        const struct S1 ***l_442 = &l_440;
        for (g_81 = 19; (g_81 <= 23); g_81 = safe_add_func_uint8_t_u_u(g_81, 3))
        {
            (*l_419) ^= l_422;
        }
        for (g_228 = 19; (g_228 == 23); g_228 = safe_add_func_uint16_t_u_u(g_228, 1))
        {
            (*l_419) = 0L;
            for (g_379 = 0; (g_379 > 9); g_379++)
            {
                struct S0 **l_430 = &g_336;
                int *l_431 = &g_81;
                (*l_419) = (*l_419);
                if (p_5)
                    continue;
                (*l_419) = (safe_add_func_int8_t_s_s(g_390.f2, (func_23(p_3, func_34(l_429, ((*l_430) = &g_337), ((*g_346) = (*g_346))), (*l_419), &g_12) || p_6)));
                l_432 &= ((*l_431) = ((*l_419) |= (-6L)));
            }
        }
        (*l_435) = func_43(p_3, l_433, ((*l_435) = l_434), (*p_3));

        ;
        l_434 = func_38((*l_435), (*l_435), func_34(func_7((safe_add_func_uint32_t_u_u((safe_add_func_uint32_t_u_u(((*g_346) ^= p_5), (((*l_442) = l_440) != l_443))), func_23(l_434, (*l_444), p_6, l_434))), p_4, l_422), &g_337, p_6), p_4);
    }
    else
    {
        int l_447 = 0L;
        struct S0 *l_458 = &g_12;
        int *l_470 = &g_310;
        int l_500 = 0x86A19027L;
        int l_550 = 0x5BDEF914L;
        int l_568 = 0x52F3DC0DL;
        int l_589 = 5L;
        int l_595 = 0x5C854232L;
        unsigned l_683 = 0x5A861F50L;
        struct S1 **l_694 = &g_387;
        struct S1 ***l_693 = &l_694;
        char *l_714 = &g_173;
        const short l_802 = (-1L);
        int l_898 = (-7L);
        int l_983 = (-1L);
        int l_1021 = (-9L);
        int l_1043 = 2L;
        (*l_434) = (*g_336);
        for (g_158 = (-4); (g_158 == (-20)); --g_158)
        {
            short l_463 = 0xE10AL;
            int l_473 = 4L;
            int l_615 = (-1L);
            int l_627 = 0x5B1A384FL;
        }
        if ((l_802 > (*l_470)))
        {
            int *l_805 = &l_432;
            unsigned char *l_810 = &g_709;
            unsigned short *l_819 = &g_612;
            int l_820 = (-1L);
            int *l_821 = &g_310;
            int *l_822 = &l_500;
            int *l_823 = &l_500;
            int *l_824 = (void*)0;
            int *l_825 = &l_595;
            int *l_826 = &g_610;
            int *l_827 = &l_820;
            int *l_828 = &g_610;
            int *l_829 = &l_595;
            int *l_830 = &l_432;
            int *l_831 = &l_820;
            int *l_832 = &l_568;
            int *l_833 = &g_81;
            int *l_834 = &l_595;
            int *l_835 = &g_610;
            int *l_836 = &l_568;
            int *l_837 = &l_820;
            int *l_838 = &g_310;
            int *l_839 = (void*)0;
            int *l_840 = (void*)0;
            int *l_841 = &g_610;
            int *l_842 = &g_310;
            int *l_843 = (void*)0;
            int *l_844 = &l_432;
            int *l_845 = &l_550;
            int *l_846 = &l_550;
            int *l_847 = &l_550;
            int *l_848 = &l_568;
            int *l_849 = &l_595;
            int *l_850 = (void*)0;
            int *l_851 = (void*)0;
            int *l_852 = &g_81;
            int *l_853 = &l_432;
            int *l_854 = &l_595;
            int *l_855 = &l_550;
            int *l_856 = &l_568;
            int l_857 = 1L;
            int *l_858 = &l_568;
            int *l_859 = (void*)0;
            int *l_860 = &g_310;
            int *l_861 = &l_595;
            int *l_862 = (void*)0;
            int *l_863 = &l_568;
            int *l_864 = &l_432;
            int *l_865 = &l_500;
            int *l_866 = &l_568;
            int *l_867 = &g_81;
            int *l_869 = &l_820;
            int *l_870 = &l_820;
            int *l_871 = &g_81;
            int *l_872 = &g_81;
            int *l_873 = (void*)0;
            int *l_874 = &l_500;
            int *l_875 = &g_610;
            int l_876 = 0x2A780D69L;
            int *l_877 = &g_81;
            int *l_878 = &g_610;
            int *l_880 = &l_595;
            int *l_881 = (void*)0;
            int *l_882 = (void*)0;
            int *l_883 = &g_81;
            int *l_884 = &g_81;
            int *l_886 = &l_432;
            int l_887 = 0x1DB85D4DL;
            int *l_888 = &l_432;
            int l_889 = 1L;
            int *l_890 = (void*)0;
            int *l_891 = (void*)0;
            int *l_892 = &l_876;
            int l_893 = 0L;
            int *l_894 = &l_568;
            int *l_895 = &l_879;
            int *l_896 = (void*)0;
            int *l_897 = &l_889;
            int *l_899 = (void*)0;
            int *l_900 = &g_610;
            int *l_901 = &l_857;
            int *l_903 = (void*)0;
            int *l_904 = &l_568;
            int *l_905 = &l_889;
            int *l_906 = (void*)0;
            int *l_907 = &l_550;
            (*l_805) |= ((safe_mod_func_int8_t_s_s((*l_470), 0x4AL)) | (g_709 & p_5));
            l_820 &= ((((safe_mul_func_uint16_t_u_u(((*l_819) |= (safe_sub_func_uint8_t_u_u(((*l_810) |= 253UL), (safe_add_func_int8_t_s_s((g_337.f3 < p_4), ((((1UL <= (0xEBL >= (((*l_805) | ((safe_mul_func_uint8_t_u_u((safe_mul_func_int8_t_s_s((*l_470), ((safe_mod_func_uint16_t_u_u((&l_443 == (void*)0), 0xCABBL)) != 0x3CBE16C7L))), (*l_419))) >= (*l_419))) >= (*g_346)))) || 1UL) == g_74) <= (*g_346))))))), 5L)) >= 0x1CL) <= p_6) & p_4);
            --g_908;
        }
        else
        {
            int *l_911 = &l_898;
            int *l_912 = &l_595;
            int *l_913 = &l_902;
            int *l_914 = &l_595;
            int *l_915 = (void*)0;
            int *l_916 = &l_432;
            int *l_917 = &l_432;
            int *l_918 = &l_868;
            int *l_919 = &g_310;
            int *l_920 = &l_550;
            int *l_921 = (void*)0;
            int *l_922 = &l_432;
            int *l_923 = &g_81;
            int l_924 = 0xB1E7B707L;
            int *l_925 = (void*)0;
            int *l_926 = (void*)0;
            int *l_927 = &l_595;
            int *l_928 = &l_898;
            int l_929 = 0x0C64D308L;
            int *l_930 = &l_898;
            int *l_931 = (void*)0;
            int *l_932 = &l_550;
            int *l_933 = (void*)0;
            int *l_934 = &l_500;
            int *l_935 = &g_310;
            int *l_936 = (void*)0;
            int *l_937 = (void*)0;
            int *l_938 = &l_595;
            int *l_939 = &l_432;
            int *l_940 = &l_550;
            int *l_941 = &l_868;
            int *l_942 = &l_929;
            int *l_943 = &l_432;
            int *l_944 = &l_550;
            int *l_945 = (void*)0;
            int l_946 = 3L;
            int *l_947 = &l_868;
            int *l_948 = &l_929;
            int *l_949 = &l_885;
            int *l_950 = &l_946;
            int *l_951 = &l_924;
            int *l_952 = &l_898;
            int *l_953 = &l_924;
            int *l_954 = &l_550;
            int *l_955 = (void*)0;
            int *l_956 = &l_595;
            int *l_957 = &l_550;
            int *l_958 = &l_929;
            int *l_959 = &l_924;
            int *l_960 = &l_568;
            int l_961 = 0xF7DB00A7L;
            int *l_962 = (void*)0;
            int l_963 = 0x4F860701L;
            int *l_964 = &l_550;
            int *l_965 = (void*)0;
            int *l_966 = &g_81;
            int *l_967 = (void*)0;
            int *l_968 = &l_595;
            int *l_969 = &g_310;
            int *l_970 = &l_879;
            int *l_971 = &l_550;
            int *l_972 = &g_610;
            int *l_973 = &l_595;
            int *l_974 = (void*)0;
            int *l_975 = &l_568;
            int *l_976 = &l_929;
            int *l_977 = &l_902;
            int *l_978 = &l_924;
            int *l_979 = &l_898;
            int *l_980 = &g_610;
            int *l_981 = &l_568;
            int *l_982 = &l_568;
            int *l_984 = &l_946;
            int *l_985 = &l_898;
            int *l_986 = (void*)0;
            int *l_987 = &g_81;
            int *l_988 = &l_983;
            int *l_989 = &l_879;
            int *l_990 = &l_983;
            int *l_991 = (void*)0;
            int *l_992 = &l_868;
            int *l_993 = &l_500;
            int *l_994 = &l_961;
            int *l_995 = &l_550;
            int *l_996 = &l_983;
            int *l_997 = &l_946;
            int *l_998 = (void*)0;
            int *l_999 = &l_595;
            int *l_1000 = (void*)0;
            int *l_1001 = &l_983;
            int *l_1002 = (void*)0;
            int *l_1003 = &l_961;
            int *l_1004 = (void*)0;
            int l_1005 = 0xAC4D55F4L;
            int *l_1006 = &g_81;
            int *l_1007 = &l_929;
            int *l_1008 = &l_983;
            int *l_1009 = &g_81;
            int *l_1010 = &l_432;
            int l_1011 = 0x6C894482L;
            int *l_1012 = &g_310;
            int *l_1013 = &l_1005;
            int *l_1014 = &l_879;
            int l_1015 = (-1L);
            int *l_1016 = &l_885;
            int *l_1017 = &l_924;
            int *l_1018 = &l_885;
            int *l_1019 = &l_961;
            int *l_1022 = &l_961;
            int *l_1023 = &l_868;
            int *l_1024 = &l_568;
            int *l_1025 = &l_946;
            int *l_1026 = &l_595;
            int *l_1028 = (void*)0;
            int *l_1029 = &l_898;
            int *l_1030 = &l_1021;
            int *l_1031 = &l_550;
            int l_1032 = 0x60FA8983L;
            int *l_1033 = &l_1005;
            int *l_1035 = &l_1034;
            int *l_1036 = &l_432;
            int *l_1037 = &l_902;
            int *l_1038 = &l_568;
            int *l_1039 = &l_1011;
            int *l_1040 = &l_946;
            int *l_1041 = &g_310;
            int *l_1042 = (void*)0;
            int *l_1044 = &l_879;
            int *l_1045 = &l_1027;
            int *l_1046 = &l_961;
            int *l_1047 = &l_885;
            int *l_1048 = (void*)0;
            int *l_1049 = (void*)0;
            int *l_1050 = &l_1032;
            int *l_1051 = &l_1020;
            int *l_1052 = &l_1032;
            int *l_1053 = &l_924;
            int *l_1054 = &l_568;
            int *l_1055 = &l_1005;
            int *l_1056 = &l_963;
            int *l_1057 = (void*)0;
            int *l_1058 = &l_868;
            int *l_1059 = &l_898;
            int *l_1060 = &l_1020;
            int *l_1061 = &g_310;
            int **l_1065 = &l_1050;
            ++g_1062;
            (*l_922) = p_4;
            (*l_1065) = &g_610;

            ;
        }
    }

    ;
    (*l_419) ^= l_1066;
    l_434 = func_43(l_434, &g_12, p_3, (*p_3));
    return l_434;


}







static struct S0 * func_7(char p_8, int p_9, unsigned p_10)
{
    return &g_337;


}







static int func_13(unsigned p_14, int p_15)
{
    const struct S1 l_413 = {65534UL,0x00L,0xB9L,0xACL,1UL,0x4CBC72CFL,-4L,0xA914L};
    struct S0 *l_414 = &g_12;
    for (g_74 = 0; (g_74 >= 12); ++g_74)
    {
        unsigned short *l_403 = (void*)0;
        unsigned short *l_404 = &g_62;
        char *l_405 = &g_158;
        char *l_406 = &g_173;
        char *l_407 = (void*)0;
        char *l_408 = &g_228;
        short *l_411 = &g_167;
        int l_412 = 0x7EE1CDBDL;
        int *l_415 = &g_310;
        (*l_415) = (safe_add_func_int8_t_s_s((safe_add_func_uint8_t_u_u(((safe_sub_func_uint8_t_u_u((safe_rshift_func_uint16_t_u_u(p_14, ((*l_404) |= g_12.f0))), p_14)) | (((*l_408) &= ((*l_406) &= ((*l_405) = p_15))) < (func_23(func_17(((safe_mul_func_int16_t_s_s(((*l_411) = g_337.f3), ((!l_412) != (g_12.f3 | (-1L))))) < 6UL), p_14, &g_337, &g_12, &g_12), l_413, p_14, l_414) & p_14))), g_171)), l_413.f4));
        return p_14;
    }
    return p_15;
}







static struct S0 * func_17(unsigned char p_18, int p_19, const struct S0 * p_20, struct S0 * p_21, struct S0 * p_22)
{
    (*g_336) = (*g_336);
    return p_22;


}







static unsigned char func_23(struct S0 * p_24, const struct S1 p_25, short p_26, struct S0 * p_27)
{
    int *l_391 = &g_310;
    (*l_391) = p_25.f4;
    return p_25.f6;
}







static struct S0 * func_28(struct S1 p_29, struct S0 * p_30, struct S0 * p_31, struct S0 * p_32, unsigned p_33)
{
    int l_338 = (-1L);
    int *l_341 = &g_310;
    unsigned *l_345 = &g_76;
    unsigned **l_344 = &l_345;
    short *l_347 = &g_171;
    g_12.f3 = l_338;
    (*l_341) |= (safe_mul_func_int8_t_s_s((p_29.f7 < (g_158 & 0xDDL)), (l_338 | p_33)));
    if ((g_228 && ((((~(0x989FL != (((((*l_347) &= (((g_62 <= (((&g_81 != &l_338) < (g_12.f2 & (safe_add_func_int8_t_s_s((((*l_344) = l_341) == g_346), 7UL)))) & g_332)) == (*l_341)) & (*l_341))) == 2UL) >= g_12.f2) < g_62))) && 0xF9AC471EL) > p_29.f4) >= 1UL)))
    {
        if ((*l_341))
        {
            int *l_348 = &g_310;
            int *l_349 = &g_81;
            int *l_350 = &g_81;
            int *l_351 = &g_81;
            int *l_352 = &l_338;
            int *l_353 = &g_81;
            int *l_354 = &l_338;
            int *l_355 = &l_338;
            int *l_356 = &g_310;
            int *l_357 = &l_338;
            int *l_358 = &g_310;
            int *l_359 = &g_81;
            int *l_360 = &l_338;
            int *l_361 = (void*)0;
            int *l_362 = &l_338;
            int *l_363 = &g_81;
            int *l_364 = &g_310;
            int *l_365 = &g_310;
            int *l_366 = &g_310;
            int *l_367 = &l_338;
            int *l_368 = &g_81;
            int *l_369 = (void*)0;
            int *l_370 = (void*)0;
            int *l_371 = (void*)0;
            int *l_372 = (void*)0;
            int l_373 = 1L;
            int *l_374 = (void*)0;
            int *l_375 = &l_338;
            int *l_376 = &l_373;
            int *l_377 = &g_81;
            int *l_378 = &l_373;
            g_379--;
        }
        else
        {
            for (g_76 = 0; (g_76 <= 17); g_76 = safe_add_func_int8_t_s_s(g_76, 7))
            {
                int *l_384 = &l_338;
                int **l_385 = &l_341;
                int **l_386 = &l_384;
                (*l_385) = l_384;

                ;
                (*l_386) = ((*l_385) = &g_310);

                ;
                ;
                if (p_29.f2)
                    break;
            }
        }
        return &g_337;


    }
    else
    {
        struct S1 **l_388 = (void*)0;
        struct S1 **l_389 = &g_387;
        (*l_389) = g_387;
    }

    ;
    return &g_12;


}







static struct S1 func_34(struct S0 * const p_35, struct S0 * p_36, unsigned p_37)
{
    int *l_232 = &g_81;
    int *l_233 = &g_81;
    int *l_234 = &g_81;
    int *l_235 = (void*)0;
    int *l_236 = &g_81;
    int *l_237 = &g_81;
    int *l_238 = &g_81;
    int *l_239 = &g_81;
    int *l_240 = &g_81;
    int *l_241 = &g_81;
    int *l_242 = &g_81;
    int *l_243 = (void*)0;
    int l_244 = 0L;
    int *l_245 = &g_81;
    int *l_246 = &g_81;
    int *l_247 = (void*)0;
    int *l_248 = (void*)0;
    int *l_249 = &g_81;
    int *l_250 = &l_244;
    int *l_251 = (void*)0;
    int *l_252 = &g_81;
    int *l_253 = &l_244;
    int *l_254 = (void*)0;
    int *l_255 = &g_81;
    int *l_256 = &g_81;
    int *l_257 = &g_81;
    int *l_258 = &g_81;
    int *l_259 = &l_244;
    int *l_260 = &g_81;
    int *l_261 = &l_244;
    int *l_262 = &g_81;
    int *l_263 = &g_81;
    int *l_264 = &l_244;
    int *l_265 = &g_81;
    int *l_266 = &g_81;
    int *l_267 = (void*)0;
    int l_268 = 0x4B8F0B0EL;
    int *l_269 = (void*)0;
    int *l_270 = (void*)0;
    int *l_271 = (void*)0;
    int *l_272 = &l_268;
    int *l_273 = &l_268;
    int *l_274 = &l_268;
    int l_275 = 0L;
    int *l_276 = (void*)0;
    int *l_277 = &g_81;
    int *l_278 = &l_268;
    int *l_279 = &l_268;
    int *l_280 = &l_244;
    int *l_281 = (void*)0;
    int *l_282 = (void*)0;
    int *l_283 = &g_81;
    int *l_284 = &l_268;
    int *l_285 = &l_275;
    int *l_286 = (void*)0;
    int *l_287 = &l_268;
    int *l_288 = &l_244;
    int *l_289 = &g_81;
    int *l_290 = &l_244;
    int *l_291 = &l_268;
    int *l_292 = &l_244;
    int *l_293 = &l_268;
    int *l_294 = &l_268;
    int *l_295 = &g_81;
    int *l_296 = (void*)0;
    int l_297 = 0x6DED90B5L;
    int *l_298 = &l_275;
    int *l_299 = (void*)0;
    int *l_300 = &l_268;
    int *l_301 = &l_244;
    int *l_302 = &l_244;
    int *l_303 = &l_268;
    int *l_304 = &g_81;
    int *l_305 = &l_297;
    int l_306 = 0xDE39AE17L;
    int *l_307 = &l_268;
    int *l_308 = &l_306;
    int *l_309 = &l_275;
    int *l_311 = &l_275;
    int *l_312 = &l_268;
    int *l_313 = &l_297;
    int *l_314 = &l_268;
    int *l_315 = (void*)0;
    int *l_316 = &l_297;
    int *l_317 = &l_275;
    int *l_318 = &l_297;
    int *l_319 = &l_268;
    int *l_320 = &g_310;
    int *l_321 = &l_268;
    int *l_322 = &l_268;
    int *l_323 = (void*)0;
    int *l_324 = &g_310;
    int *l_325 = (void*)0;
    int *l_326 = &g_81;
    int *l_327 = &l_244;
    int *l_328 = &l_275;
    int *l_329 = (void*)0;
    int *l_330 = &l_275;
    int *l_331 = &l_275;
    struct S1 l_335 = {5UL,1UL,0L,0L,0x2265D7B4L,0UL,0x3C526259L,0x638CL};
    ++g_332;
    (*l_245) = (*l_285);
    return l_335;
}







static struct S0 * func_38(struct S0 * p_39, struct S0 * p_40, struct S1 p_41, unsigned char p_42)
{
    short l_229 = 0L;
    int *l_230 = (void*)0;
    int *l_231 = &g_81;
    (*l_231) = l_229;
    return p_39;


}







static struct S0 * func_43(struct S0 * p_44, struct S0 * p_45, struct S0 * p_46, struct S0 p_47)
{
    int *l_48 = (void*)0;
    int *l_49 = (void*)0;
    unsigned short l_58 = 0x3066L;
    unsigned short *l_59 = (void*)0;
    unsigned short *l_60 = (void*)0;
    unsigned short *l_61 = &g_62;
    unsigned short *l_73 = &g_74;
    unsigned *l_75 = &g_76;
    int l_82 = 1L;
    int l_120 = 0x7EEBE844L;
    unsigned char l_137 = 0xD2L;
    struct S0 *l_146 = &g_12;
    unsigned l_163 = 0xD14953B5L;
    p_47.f3 ^= g_12.f1;
    if ((safe_sub_func_int32_t_s_s(g_12.f1, (((p_47.f0 | ((safe_rshift_func_uint16_t_u_s((safe_mul_func_int8_t_s_s((p_47.f0 <= ((safe_lshift_func_int16_t_s_u((-8L), l_58)) == ((*l_75) = ((((~p_47.f2) | (((*l_61)++) >= ((g_12.f1 || p_47.f2) < (safe_mul_func_int16_t_s_s((((+(safe_rshift_func_int8_t_s_s((safe_lshift_func_uint8_t_u_s((safe_rshift_func_uint16_t_u_u(((*l_73) = p_47.f1), p_47.f1)), 3)), 0))) | p_47.f0) != (-9L)), g_12.f0))))) != 0L) == p_47.f2)))), p_47.f0)), p_47.f2)) <= g_12.f2)) & g_12.f3) < g_12.f0))))
    {
        int *l_77 = (void*)0;
        int *l_78 = (void*)0;
        int *l_79 = (void*)0;
        int *l_80 = &g_81;
        int *l_83 = &l_82;
        int l_84 = 8L;
        int *l_85 = &l_84;
        int *l_86 = &l_82;
        int *l_87 = &l_84;
        int *l_88 = &l_82;
        int *l_89 = (void*)0;
        int *l_90 = &g_81;
        int *l_91 = &l_82;
        int *l_92 = &g_81;
        int *l_93 = (void*)0;
        int *l_94 = (void*)0;
        int *l_95 = &l_82;
        int *l_96 = &l_84;
        int *l_97 = (void*)0;
        int *l_98 = &g_81;
        int *l_99 = &l_82;
        int *l_100 = &l_82;
        int *l_101 = &l_84;
        int *l_102 = (void*)0;
        int *l_103 = &g_81;
        int *l_104 = &l_84;
        int *l_105 = &l_82;
        int *l_106 = &g_81;
        int *l_107 = (void*)0;
        int *l_108 = &g_81;
        int *l_109 = (void*)0;
        int *l_110 = &l_84;
        int *l_111 = &l_82;
        int *l_112 = &g_81;
        int *l_113 = &l_82;
        int *l_114 = &l_84;
        int *l_115 = &g_81;
        int l_116 = 0x7548BA02L;
        int *l_117 = &l_82;
        int *l_118 = &l_116;
        int *l_119 = &l_82;
        int *l_121 = &l_84;
        int *l_122 = &l_120;
        int *l_123 = (void*)0;
        int *l_124 = &l_84;
        int *l_125 = &g_81;
        int *l_126 = (void*)0;
        int *l_127 = &g_81;
        int *l_128 = (void*)0;
        int *l_129 = (void*)0;
        int *l_130 = &l_116;
        int *l_131 = &l_82;
        int *l_132 = (void*)0;
        int l_133 = 0L;
        int *l_134 = (void*)0;
        int *l_135 = (void*)0;
        int *l_136 = &l_133;
        g_12.f2 ^= p_47.f3;
        l_137++;
    }
    else
    {
        unsigned l_144 = 1UL;
        int *l_155 = &l_120;
        struct S0 *l_214 = &g_12;
        int **l_215 = &l_48;
        unsigned l_224 = 0x1A5778D3L;
        for (l_82 = 0; (l_82 != (-23)); l_82--)
        {
            const int *l_174 = &g_81;
            unsigned l_186 = 0x1D7298C4L;
            if (g_12.f2)
            {
                if (g_81)
                    break;
                g_12.f1 = (safe_add_func_int32_t_s_s(0xCBCAB5D9L, l_144));
            }
            else
            {
                int *l_145 = &g_81;
                struct S0 **l_147 = &l_146;
                (*l_145) = 0x7CD71D57L;
                if (((((*l_147) = l_146) == (void*)0) < ((p_47.f2 != p_47.f2) | 0x80L)))
                {
                    const int *l_152 = (void*)0;
                    for (g_74 = (-16); (g_74 != 21); ++g_74)
                    {
                        int **l_150 = (void*)0;
                        int **l_151 = &l_145;
                        const int **l_153 = (void*)0;
                        g_12.f1 ^= ((*l_145) = (*l_145));
                        (*l_151) = &l_120;

                        ;
                        (**l_151) ^= 8L;
                        g_154 = l_152;

                        ;
                    }

                    ;
                    if (g_12.f1)
                    {
                        const int **l_156 = &g_154;
                        char *l_157 = &g_158;
                        short *l_166 = &g_167;
                        unsigned char l_170 = 0x86L;
                        char *l_172 = &g_173;
                        l_155 = l_155;
                        (*l_156) = l_152;

                        ;
                        g_12.f2 &= ((((((*l_157) = ((!((*l_155) ^= p_47.f3)) && p_47.f1)) != ((*l_172) ^= (g_171 &= (safe_sub_func_uint32_t_u_u(((((safe_mod_func_int8_t_s_s(g_81, l_163)) && ((*l_166) = (g_12.f0 != (safe_mul_func_int8_t_s_s(g_62, 0x4FL))))) >= g_12.f0) & ((*l_75) = (safe_sub_func_int32_t_s_s(p_47.f2, l_170)))), 0x511B60CEL))))) < 0xF3L) & p_47.f0) < g_12.f3);
                    }
                    else
                    {
                        const int **l_175 = &g_154;
                        (*l_175) = l_174;

                        ;
                        return &g_12;


                    }

                    ;
                    g_12.f2 = (p_47.f1 ^= ((*l_145) = p_47.f0));
                }
                else
                {
                    unsigned char l_191 = 251UL;
                    for (g_173 = (-26); (g_173 > (-10)); ++g_173)
                    {
                        int **l_178 = (void*)0;
                        int **l_179 = (void*)0;
                        int **l_180 = &l_48;
                        int ***l_181 = &l_178;
                        unsigned char *l_184 = (void*)0;
                        unsigned char *l_185 = &l_137;
                        short *l_202 = &g_167;
                        (*l_180) = &g_81;

                        ;
                        (*l_181) = l_178;
                        (*l_155) = (safe_mul_func_int8_t_s_s((((*l_185) = 0x1BL) <= l_186), (safe_mod_func_int32_t_s_s(((safe_mul_func_int16_t_s_s(g_12.f3, l_191)) < (safe_rshift_func_int16_t_s_s((safe_add_func_int8_t_s_s((safe_lshift_func_uint8_t_u_s((0x1762L ^ g_171), ((g_74 ^ ((safe_add_func_int16_t_s_s(1L, (safe_add_func_uint8_t_u_u((((*l_202) = (-1L)) || (*l_48)), g_12.f3)))) | (*l_174))) ^ p_47.f1))), 255UL)), 9))), g_74))));
                        (*p_45) = (*p_46);
                    }

                    ;
                    p_47.f1 |= (((safe_unary_minus_func_uint32_t_u((safe_rshift_func_uint8_t_u_s((safe_lshift_func_uint8_t_u_s(((p_47.f3 | (safe_rshift_func_int8_t_s_u(g_171, (g_81 <= 65528UL)))) && (*l_174)), g_81)), g_12.f3)))) & p_47.f3) && 0x66L);
                    for (l_186 = 0; (l_186 >= 50); l_186++)
                    {
                        int *l_212 = &g_81;
                        int **l_213 = &l_49;
                        (*l_213) = l_212;

                        ;
                    }

                    ;
                }

                ;
                ;
                ;
                if ((*l_145))
                    break;
                g_12.f2 = (&p_47 == l_214);
            }

            ;
            ;
            return &g_12;


        }

        ;
        ;
        (*l_215) = &l_82;

        ;
        for (g_158 = 20; (g_158 != (-29)); g_158 = safe_sub_func_uint32_t_u_u(g_158, 3))
        {
            for (l_163 = 10; (l_163 > 21); l_163 = safe_add_func_uint16_t_u_u(l_163, 8))
            {
                p_47.f2 ^= (safe_rshift_func_int16_t_s_u(g_12.f0, (safe_sub_func_int16_t_s_s((**l_215), l_224))));
            }
        }
    }

    ;
    ;
    if ((g_12.f1 < (p_47.f1 <= g_12.f2)))
    {
        int *l_225 = (void*)0;
        int **l_226 = &l_225;
        (*l_226) = l_225;
    }
    else
    {
        return &g_12;


    }
    return &g_12;


}





int main (void)
{
    int print_hash_value = 0;
    platform_main_begin();
    crc32_gentab();
    func_1();
    transparent_crc(g_12.f0, "g_12.f0", print_hash_value);
    transparent_crc(g_12.f1, "g_12.f1", print_hash_value);
    transparent_crc(g_12.f2, "g_12.f2", print_hash_value);
    transparent_crc(g_12.f3, "g_12.f3", print_hash_value);
    transparent_crc(g_62, "g_62", print_hash_value);
    transparent_crc(g_74, "g_74", print_hash_value);
    transparent_crc(g_76, "g_76", print_hash_value);
    transparent_crc(g_81, "g_81", print_hash_value);
    transparent_crc(g_158, "g_158", print_hash_value);
    transparent_crc(g_167, "g_167", print_hash_value);
    transparent_crc(g_171, "g_171", print_hash_value);
    transparent_crc(g_173, "g_173", print_hash_value);
    transparent_crc(g_228, "g_228", print_hash_value);
    transparent_crc(g_310, "g_310", print_hash_value);
    transparent_crc(g_332, "g_332", print_hash_value);
    transparent_crc(g_337.f0, "g_337.f0", print_hash_value);
    transparent_crc(g_337.f1, "g_337.f1", print_hash_value);
    transparent_crc(g_337.f2, "g_337.f2", print_hash_value);
    transparent_crc(g_337.f3, "g_337.f3", print_hash_value);
    transparent_crc(g_379, "g_379", print_hash_value);
    transparent_crc(g_390.f0, "g_390.f0", print_hash_value);
    transparent_crc(g_390.f1, "g_390.f1", print_hash_value);
    transparent_crc(g_390.f2, "g_390.f2", print_hash_value);
    transparent_crc(g_390.f3, "g_390.f3", print_hash_value);
    transparent_crc(g_390.f4, "g_390.f4", print_hash_value);
    transparent_crc(g_390.f5, "g_390.f5", print_hash_value);
    transparent_crc(g_390.f6, "g_390.f6", print_hash_value);
    transparent_crc(g_390.f7, "g_390.f7", print_hash_value);
    transparent_crc(g_418, "g_418", print_hash_value);
    transparent_crc(g_610, "g_610", print_hash_value);
    transparent_crc(g_612, "g_612", print_hash_value);
    transparent_crc(g_709, "g_709", print_hash_value);
    transparent_crc(g_785, "g_785", print_hash_value);
    transparent_crc(g_908, "g_908", print_hash_value);
    transparent_crc(g_1062, "g_1062", print_hash_value);
    transparent_crc(g_1165, "g_1165", print_hash_value);
    transparent_crc(g_1166, "g_1166", print_hash_value);
    transparent_crc(g_1169, "g_1169", print_hash_value);
    transparent_crc(g_1190, "g_1190", print_hash_value);
    transparent_crc(g_1191, "g_1191", print_hash_value);
    platform_main_end(crc32_context ^ 0xFFFFFFFFUL, print_hash_value);
    return 0;
}
