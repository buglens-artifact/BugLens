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


union U0 {
   int f0;
   int f1;
};


static unsigned short g_4 = 65535UL;
static char g_19 = (-1L);
static unsigned char g_30 = 0x14L;
static short g_39 = 0xA0C8L;
static int g_73 = 0xD479EA40L;
static short *g_88 = (void*)0;
static unsigned char g_103 = 1UL;
static unsigned char g_107 = 255UL;
static char g_117 = (-10L);
static int *g_120 = &g_73;
static int g_135 = 0xB24C01D5L;
static int *g_134 = &g_135;
static int **g_145 = &g_134;
static int ***g_144 = &g_145;
static char **g_172 = (void*)0;
static char ***g_171 = &g_172;
static short **g_187 = &g_88;
static union U0 *g_202 = (void*)0;
static union U0 g_215 = {0xB13CA659L};
static unsigned char g_246 = 255UL;
static short g_250 = 0L;
static unsigned short g_261 = 6UL;
static unsigned short g_303 = 0x82CCL;
static unsigned char *g_316 = &g_103;
static unsigned char **g_315 = &g_316;
static unsigned char ***g_340 = &g_315;
static unsigned *g_369 = (void*)0;
static unsigned **g_368 = &g_369;
static unsigned **g_381 = &g_369;
static unsigned ***g_380 = &g_381;
static unsigned char g_384 = 1UL;
static unsigned g_388 = 0x64EF6050L;
static char *g_396 = &g_117;
static unsigned g_468 = 1UL;
static char *g_492 = (void*)0;
static char g_541 = 0xBFL;
static unsigned g_565 = 0xF55E6D8CL;
static int *g_728 = (void*)0;
static unsigned g_768 = 0x213BC6AAL;
static union U0 g_814 = {0x97711938L};



static int func_1(void);
static unsigned short func_10(unsigned p_11, union U0 p_12, int p_13, union U0 p_14, int p_15);
static union U0 func_20(unsigned char p_21, char p_22, unsigned p_23, char * p_24);
static char func_35(char p_36, char * p_37);
static unsigned short func_40(char * p_41);
static char * func_42(unsigned p_43, union U0 p_44, unsigned char p_45, unsigned p_46, unsigned char p_47);
static int func_58(int p_59);
static int * func_60(unsigned p_61, unsigned p_62, short * p_63, unsigned p_64, char * p_65);
static unsigned func_66(char * p_67);
static char * func_68(int p_69, unsigned p_70, char * p_71);
static int func_1(void)
{
    short l_9 = 0L;
    char *l_18 = &g_19;
    unsigned char *l_29 = &g_30;
    short *l_38 = &g_39;
    union U0 l_48 = {0xE96F8F9EL};
    union U0 *l_813 = &l_48;
    int *l_819 = &l_48.f1;
    unsigned char l_820 = 0xD8L;
    (*l_819) = (safe_lshift_func_uint16_t_u_s(g_4, (safe_sub_func_uint8_t_u_u((safe_sub_func_uint16_t_u_u(l_9, func_10((safe_mul_func_uint8_t_u_u(l_9, ((*l_18) = 0x82L))), ((*l_813) = func_20((safe_rshift_func_uint16_t_u_s((safe_add_func_int32_t_s_s((g_4 > ((*l_29) = g_4)), (safe_mod_func_uint8_t_u_u((safe_div_func_int8_t_s_s(func_35((((*l_38) = g_4) & func_40((g_396 = func_42(g_4, l_48, g_4, g_4, l_48.f1)))), g_316), 1UL)), l_48.f1)))), l_48.f0)), l_48.f0, l_9, l_29)), g_4, g_814, l_9))), l_9))));



    ;
    ;
    ;
        ;


    (**g_144) = (void*)0;
    return l_820;
}







static unsigned short func_10(unsigned p_11, union U0 p_12, int p_13, union U0 p_14, int p_15)
{
    char *l_815 = &g_117;
    char **l_816 = &g_396;
    short *l_817 = &g_250;
    int l_818 = 0x90CE0CF0L;
    (*g_145) = (void*)0;

    ;
    (*g_145) = func_60(g_565, p_12.f1, l_817, p_14.f1, (*l_816));
    return g_250;
}







static union U0 func_20(unsigned char p_21, char p_22, unsigned p_23, char * p_24)
{
    union U0 **l_661 = &g_202;
    union U0 ***l_662 = &l_661;
    int l_663 = 1L;
    short **l_664 = &g_88;
    char l_676 = 0L;
    int ****l_701 = &g_144;
    union U0 *l_759 = &g_215;
    unsigned char ****l_762 = (void*)0;
    unsigned *l_789 = &g_468;
    int *l_805 = &l_663;
    if (l_663)
    {
        union U0 *l_665 = &g_215;
        int l_666 = 0x89DEF182L;
        char *l_675 = (void*)0;
        char *l_677 = (void*)0;
        unsigned l_678 = 4294967286UL;
        unsigned *l_681 = (void*)0;
        short *l_682 = &g_250;
        (*l_661) = (l_665 = &g_215);
        l_678 = func_40(&p_22);
        (**g_144) = func_60((g_468 = (l_666 ^ (g_303 <= 0xF531L))), p_23, l_682, (safe_mul_func_uint8_t_u_u((safe_sub_func_int16_t_s_s((p_21 == p_21), (safe_add_func_int8_t_s_s((*g_396), (((*g_316) = (safe_mul_func_uint8_t_u_u(((void*)0 == &p_23), (*p_24)))) > p_22))))), l_678)), &l_676);

        ;
    }
    else
    {
        char *l_694 = (void*)0;
        short **l_697 = &g_88;
        int l_698 = 0xB07585F6L;
        union U0 l_705 = {1L};
        unsigned *l_720 = &g_468;
        unsigned char ****l_763 = &g_340;
        unsigned l_765 = 4294967290UL;
        unsigned l_767 = 4294967295UL;
        short *l_779 = &g_250;
        (*g_145) = (void*)0;

        ;
        if ((l_663 == (*p_24)))
        {
            short ***l_704 = &l_664;
            unsigned l_712 = 0x3448D234L;
            union U0 l_758 = {-4L};
            unsigned char ****l_764 = &g_340;
            char *l_766 = &g_117;
            if ((safe_rshift_func_int16_t_s_s((l_701 != l_701), 0)))
            {
                unsigned *l_702 = &g_468;
                short *l_703 = &g_39;
                char *l_710 = &g_117;
                int l_711 = 0xF98DF71BL;
                (***l_701) = func_60(((*l_702) = 4294967295UL), p_21, l_703, l_712, &l_676);
            }
            else
            {
                short *l_715 = &g_39;
                int **l_725 = &g_120;
                int **l_726 = (void*)0;
                int **l_727 = (void*)0;
                char *l_729 = (void*)0;
                union U0 **l_755 = &g_202;
                if ((safe_rshift_func_uint16_t_u_s((p_22 & p_23), g_117)))
                {
                    short l_732 = 0xB375L;
                    int l_735 = 0xC7A67DB9L;
                    for (g_388 = 2; (g_388 >= 23); g_388 = safe_add_func_int32_t_s_s(g_388, 9))
                    {
                        if (l_732)
                            break;
                        l_735 = (safe_add_func_int8_t_s_s((*p_24), 0x03L));
                    }
                }
                else
                {
                    char *l_738 = (void*)0;
                    int l_746 = (-8L);
                    int *l_747 = &g_215.f0;
                    (***l_701) = func_60((l_705.f0 || 0L), p_23, l_715, p_22, l_729);
                    (**g_144) = (void*)0;
                    l_705.f1 = (0x0DL == l_698);

                                    }
                for (l_676 = 14; (l_676 < (-20)); --l_676)
                {
                    char l_752 = (-6L);
                    if ((safe_add_func_uint8_t_u_u((~(g_246 = ((g_30 = ((*g_316) = (l_752 && p_22))) == (0x3326939BL ^ ((safe_rshift_func_int16_t_s_s(((void*)0 != l_755), 5)) <= (safe_rshift_func_uint16_t_u_s(2UL, ((void*)0 != &g_340)))))))), p_22)))
                    {
                        return l_758;

                                            }
                    else
                    {
                        g_202 = l_759;
                        if (l_752)
                            break;
                    }
                }
                (**g_144) = (void*)0;
                (*l_725) = &l_698;

                ;
            }


            if (((*p_24) && ((l_767 <= g_768) & (*p_24))))
            {
                int l_769 = 0xD294501EL;
                int *l_770 = (void*)0;
                l_769 = l_758.f0;
                l_705.f1 = l_712;

                                (***l_701) = (void*)0;
                l_758.f1 = (safe_mod_func_int32_t_s_s(l_705.f0, p_23));

                            }
            else
            {
                int *l_773 = (void*)0;
                int *l_774 = &l_705.f1;
                char *l_781 = &g_117;
                unsigned **l_788 = &l_720;
                (*l_774) = (l_698 = p_22);

                                (**g_144) = func_60(p_21, (safe_mul_func_int8_t_s_s((safe_add_func_uint32_t_u_u((0UL <= g_303), l_758.f1)), (p_22 || p_23))), l_779, (safe_unary_minus_func_uint32_t_u((0x67L >= ((l_781 != &p_22) >= 1L)))), &l_676);
                (*l_774) = (((safe_lshift_func_uint16_t_u_u((p_21 < l_767), 12)) >= (l_712 <= (((*l_788) = &g_468) != l_789))) > (*l_774));
                return l_758;


                            }

                                }
        else
        {
            return (*g_202);

                    }


                (**g_144) = (***l_701);
        for (l_705.f0 = 0; (l_705.f0 >= 19); l_705.f0 = safe_add_func_uint32_t_u_u(l_705.f0, 1))
        {
            int *l_792 = (void*)0;
            l_663 = p_22;
            for (g_768 = 0; (g_768 != 8); ++g_768)
            {
                char *l_798 = &l_676;
                char *l_799 = &g_117;
                unsigned l_800 = 0x5A71543FL;
                for (g_39 = 0; (g_39 != 20); g_39 = safe_add_func_int16_t_s_s(g_39, 4))
                {
                    int l_797 = 2L;
                    l_663 = ((l_698 = (l_797 && g_261)) < ((l_798 != (l_799 = &p_22)) & p_22));

                    ;
                    if (l_800)
                        break;
                }

                ;
            }
            (*g_171) = (*g_171);
            l_698 = (p_21 & (safe_sub_func_int8_t_s_s((*p_24), p_22)));
        }

            }

    ;
    (*l_805) = (safe_lshift_func_uint16_t_u_s(p_22, ((0x2AL >= p_22) || (*g_396))));
    (*l_805) = p_22;
    if (p_22)
    {
        short *l_806 = (void*)0;
        int *****l_809 = &l_701;
        char *l_810 = &l_676;
        (*g_145) = func_60(p_23, (*l_805), l_806, (p_21 != (safe_lshift_func_uint8_t_u_u(p_23, 2))), &p_22);
    }
    else
    {
        unsigned char l_811 = 0UL;
        (***l_701) = (*g_145);
        l_811 = p_21;
        if (p_22)
        {
            (*g_145) = (***l_701);
        }
        else
        {
            int *l_812 = &l_663;
            (*g_145) = (void*)0;
            (***l_701) = l_812;

            ;
            return (*g_202);


                    }
    }
    return (**l_661);

    }







static char func_35(char p_36, char * p_37)
{
    char *l_402 = &g_117;
    int l_405 = 1L;
    unsigned **l_410 = &g_369;
    short **l_411 = (void*)0;
    int l_412 = 0x7EB25A57L;
    int *l_575 = &g_135;
    unsigned char ***l_592 = &g_315;
    unsigned l_649 = 0x022A7527L;
    if ((safe_mod_func_uint16_t_u_u((safe_lshift_func_int8_t_s_s((*p_37), func_40(l_402))), (safe_sub_func_int16_t_s_s((l_405 = (l_405 > (safe_div_func_int32_t_s_s(((func_40(l_402) < (safe_mod_func_uint16_t_u_u(((l_410 != (*g_380)) ^ (l_411 == l_411)), p_36))) <= p_36), p_36)))), l_412)))))
    {
        int l_474 = 0xAFED366BL;
        int **l_487 = &g_134;
        if (p_36)
        {
            for (g_246 = 0; (g_246 < 10); g_246 = safe_add_func_int32_t_s_s(g_246, 2))
            {
                return l_405;
            }
        }
        else
        {
            unsigned char l_419 = 0x6DL;
            char *l_420 = &g_117;
            int l_434 = 0x9051D64CL;
            int *l_489 = (void*)0;
            if ((safe_mul_func_uint16_t_u_u(p_36, ((g_39 != (safe_lshift_func_int8_t_s_s((l_419 & func_40(l_420)), (*p_37)))) < 1UL))))
            {
                char *l_427 = &g_117;
                int l_430 = 0xEE1C2826L;
                for (g_250 = 20; (g_250 <= 23); ++g_250)
                {
                    int *l_425 = (void*)0;
                    int *l_426 = &l_405;
                    int ***l_440 = &g_145;
                    (*l_426) = (safe_lshift_func_int8_t_s_s(((*p_37) = ((*l_402) = (*g_396))), 2));
                    if (func_40(&g_117))
                    {
                        short *l_433 = &g_39;
                        int l_435 = (-7L);
                        l_435 = (l_434 = (func_40(l_427) >= (safe_mul_func_uint8_t_u_u((l_430 ^ ((safe_mod_func_int16_t_s_s(((*l_433) = ((*l_426) < func_40(func_68(p_36, (0xCEA1L || 3UL), l_427)))), 0x83ADL)) >= 4294967295UL)), 1UL))));

                        ;
                        (*g_120) = (l_434 & 1L);
                    }
                    else
                    {
                        union U0 *l_436 = &g_215;
                        union U0 **l_437 = &g_202;
                        int ****l_441 = (void*)0;
                        int ****l_442 = &l_440;
                        int ***l_444 = &g_145;
                        int ****l_443 = &l_444;
                        unsigned *l_455 = &g_388;
                        unsigned short *l_456 = (void*)0;
                        unsigned short *l_457 = &g_303;
                        char **l_458 = &l_402;
                        unsigned short *l_459 = &g_261;
                        (*l_437) = l_436;
                        l_405 = (safe_sub_func_uint32_t_u_u((l_434 | (((*l_442) = l_440) != ((*l_443) = (g_144 = &g_145)))), ((safe_mul_func_uint8_t_u_u((*g_316), (safe_div_func_int32_t_s_s((safe_sub_func_uint32_t_u_u(l_412, (safe_mod_func_int16_t_s_s((g_39 = (safe_add_func_uint16_t_u_u((l_430 == (((*l_457) = ((**g_380) != l_455)) >= ((*l_459) = func_40(((*l_458) = &p_36))))), 2L))), l_430)))), p_36)))) == p_36)));

                        ;
                        (*l_426) = ((4294967288UL & (safe_sub_func_int32_t_s_s((((g_261 != 0xC166L) && 0x57L) <= 0x4ACDL), (!((+(safe_div_func_uint16_t_u_u((safe_rshift_func_uint8_t_u_u((safe_sub_func_int32_t_s_s(0xF62E680BL, g_468)), l_419)), 1L))) > (*g_396)))))) || (-4L));
                        if (l_434)
                            break;
                    }
                }

                ;
            }
            else
            {
                int ****l_477 = &g_144;
                unsigned ***l_484 = (void*)0;
                (*g_145) = &l_405;

                ;
                for (g_261 = 0; (g_261 < 28); ++g_261)
                {
                    unsigned l_480 = 0x7001E8C8L;
                    char *l_481 = &g_117;
                    int *l_488 = &l_412;
                    for (g_246 = 0; (g_246 == 26); g_246++)
                    {
                        short l_473 = (-3L);
                        l_473 = ((**g_145) = p_36);
                        (****l_477) = (l_474 & (safe_mod_func_uint8_t_u_u(p_36, ((&g_144 == l_477) & ((safe_mod_func_uint32_t_u_u(((l_434 = l_480) >= func_40(&g_117)), ((((func_40(l_481) & (**g_145)) != (****l_477)) != 0L) | p_36))) >= (*p_37))))));
                    }
                    for (l_480 = 0; (l_480 >= 25); ++l_480)
                    {
                        unsigned ****l_485 = &l_484;
                        short *l_486 = &g_250;
                    }
                    (*l_487) = (*l_487);
                    l_489 = l_488;

                    ;
                }

                ;
            }

            ;
            ;
            ;
            for (l_405 = (-1); (l_405 <= 26); l_405 = safe_add_func_int16_t_s_s(l_405, 1))
            {
                g_73 = p_36;
                return (*g_396);


            }
            (*l_487) = &l_434;

            ;
        }


        ;
        (*g_145) = &l_405;

        ;
    }
    else
    {
        unsigned *l_493 = (void*)0;
        unsigned *l_494 = &g_468;
        int l_504 = 0x0B8B0C2FL;
        short l_509 = (-5L);
        char **l_524 = &g_396;
        char **l_525 = (void*)0;
        union U0 *l_550 = &g_215;
        unsigned ****l_638 = &g_380;
        if (func_40(func_68(l_412, ((*l_494) = p_36), l_402)))
        {
            int l_495 = 0x697AC61EL;
            return l_495;
        }
        else
        {
            unsigned l_496 = 0xFB931D93L;
            char *l_516 = &g_117;
            int l_521 = 0x82E34CCAL;
            short *l_538 = &l_509;
            unsigned *l_580 = &g_565;
            short *l_589 = &g_39;
            int *l_596 = &g_215.f1;
            unsigned short *l_619 = (void*)0;
            unsigned short *l_620 = &g_303;
            union U0 **l_627 = &g_202;
            (**g_144) = (*g_145);
            if (l_496)
            {
                int l_499 = 0xAD2B1335L;
                unsigned l_566 = 4294967294UL;
                int **l_569 = &g_120;
                if ((safe_mul_func_uint16_t_u_u(l_499, l_496)))
                {
                    int l_522 = 1L;
                    if (((safe_rshift_func_uint8_t_u_s(((safe_sub_func_uint16_t_u_u(((((((0xD8L == ((p_36 <= l_504) == (safe_mul_func_uint32_t_u_u((l_412 = p_36), ((safe_add_func_uint8_t_u_u(l_509, ((safe_add_func_int16_t_s_s((l_521 = (safe_mod_func_int8_t_s_s((safe_mod_func_int32_t_s_s(func_40(l_516), (safe_lshift_func_uint16_t_u_u((safe_sub_func_int8_t_s_s((*p_37), (l_405 = (-1L)))), p_36)))), 1UL))), l_522)) >= 4UL))) >= l_499))))) <= l_522) || 0x0CL) <= l_496) > p_36) ^ l_522), 65535UL)) || l_509), 1)) | 5L))
                    {
                        int *l_523 = &l_405;
                        (**g_144) = l_523;

                        ;
                        return (*g_396);


                    }
                    else
                    {
                        (*g_120) = p_36;
                    }
                }
                else
                {
                    unsigned char l_532 = 255UL;
                    char *l_537 = (void*)0;
                    int *l_547 = &l_504;
                    (*g_120) = ((l_405 ^ (((l_524 = (void*)0) != l_525) || l_412)) < (safe_div_func_int16_t_s_s((l_532 = (l_521 = (p_36 < ((7L != ((safe_rshift_func_uint16_t_u_u(0UL, l_499)) != (+p_36))) >= l_499)))), 0xF4A1L)));

                    ;
                    for (l_412 = (-22); (l_412 >= (-21)); l_412 = safe_add_func_uint32_t_u_u(l_412, 5))
                    {
                        short **l_539 = &g_88;
                        char *l_540 = &g_541;
                        int l_546 = (-1L);
                        (*g_145) = func_60(((*l_494) = l_521), (safe_sub_func_uint8_t_u_u((*g_316), ((*l_516) = func_40(l_537)))), ((*l_539) = l_538), p_36, l_540);

                        ;
                        ;
                        l_405 = ((((*g_316) || l_521) <= (((*g_120) = (safe_mul_func_uint8_t_u_u(p_36, (*p_37)))) ^ (safe_div_func_uint8_t_u_u(l_546, func_40((l_540 = &g_541)))))) >= l_499);
                        (*g_120) = 0x2F2BDF8EL;
                        (*g_145) = l_547;

                        ;
                    }

                    ;
                    ;
                    if (l_496)
                    {
                        union U0 **l_548 = (void*)0;
                        union U0 **l_549 = &g_202;
                        (*l_549) = &g_215;
                        (*l_549) = l_550;
                        (*l_547) = (safe_lshift_func_uint8_t_u_s(((*l_547) == (safe_div_func_uint8_t_u_u(p_36, 0x93L))), 4));
                    }
                    else
                    {
                        (*l_547) = (1UL & (safe_add_func_uint16_t_u_u((g_261 = (g_565 ^ p_36)), ((l_509 >= l_566) > l_496))));
                        (*g_120) = (p_36 <= (l_496 && (l_493 == &l_566)));
                        (*l_547) = l_496;
                    }
                    for (g_541 = 24; (g_541 >= (-12)); g_541 = safe_sub_func_uint8_t_u_u(g_541, 6))
                    {
                        return (*p_37);



                    }
                }

                ;
                ;
                ;
                (*g_120) = l_566;
                (*l_569) = ((**g_144) = (**g_144));

                ;
            }
            else
            {
                int *l_573 = &g_135;
                int l_602 = 1L;
                unsigned short l_605 = 0x696FL;
                int l_606 = 1L;
                if (((safe_mul_func_int8_t_s_s(l_496, p_36)) | (l_521 | l_405)))
                {
                    int *l_572 = (void*)0;
                    char *l_585 = &g_541;
                    l_572 = ((*g_145) = (*g_145));
                    if ((l_405 != p_36))
                    {
                        int *l_574 = &l_412;
                        l_574 = l_573;

                        ;
                    }
                    else
                    {
                        (*g_145) = &l_504;

                        ;
                    }

                    ;
                    (**g_144) = l_575;

                    ;
                    (**g_145) = (((safe_mod_func_int8_t_s_s(((*p_37) < 0UL), (*l_573))) >= (safe_mod_func_uint16_t_u_u((((*l_580) = ((void*)0 != l_580)) < (safe_mul_func_int8_t_s_s(func_40(&g_541), 0xC3L))), (safe_div_func_uint8_t_u_u(func_40(l_585), 0xE6L))))) | 0x90E65BC3L);
                }
                else
                {
                    int l_595 = 0x0EDD23C6L;
                    unsigned *l_599 = &g_388;
                    for (g_103 = 11; (g_103 >= 58); ++g_103)
                    {
                        int l_588 = 0x835D3D46L;
                        (**g_144) = func_60(l_588, l_588, l_589, (safe_sub_func_uint32_t_u_u((~(&g_315 != l_592)), (safe_mod_func_int16_t_s_s((l_588 && ((l_504 <= p_36) || ((l_595 = ((*l_538) = (((void*)0 != l_592) || 1L))) | 0x45DCL))), (-2L))))), &g_541);
                        l_596 = ((**g_144) = (**g_144));

                        ;
                        return (*g_396);
                    }
                    (*l_573) = (safe_mul_func_int8_t_s_s((*p_37), (l_599 != l_599)));
                }

                ;
                (*g_120) = ((0xBAL && (((*l_573) = (*l_575)) > (*l_596))) & p_36);
                (**g_144) = (*g_145);
            }

            ;
            ;
            ;
            ;
            (*g_145) = func_60(g_250, (safe_add_func_uint16_t_u_u((*l_596), l_504)), &l_509, (safe_rshift_func_uint8_t_u_u(0xECL, (safe_div_func_int16_t_s_s((safe_mod_func_int16_t_s_s(p_36, (safe_mul_func_uint16_t_u_u((safe_mul_func_int8_t_s_s((65527UL | (((*l_620) = 3UL) & (safe_mul_func_int8_t_s_s((safe_sub_func_int16_t_s_s(0x5E1FL, 0x5B9DL)), (*p_37))))), (*p_37))), g_565)))), p_36)))), l_402);

            ;
            for (g_117 = 0; (g_117 > (-3)); g_117 = safe_sub_func_uint16_t_u_u(g_117, 1))
            {
                union U0 **l_628 = (void*)0;
                short **l_629 = (void*)0;
                short **l_630 = &l_538;
                int l_633 = 0xEECD880BL;
                (*l_575) = ((((l_628 = l_627) == &g_202) <= (((*l_630) = &l_509) != (void*)0)) || ((0x9BEAC9F4L | (l_504 = l_633)) > ((*l_596) < (*l_596))));

                ;
                for (g_541 = 0; (g_541 == (-20)); g_541 = safe_sub_func_int8_t_s_s(g_541, 1))
                {
                    (*l_596) = 0x19911D77L;
                    (*l_575) = func_40(l_516);
                }
            }
        }

        ;
        ;
        ;
        l_504 = (l_509 != ((&g_368 != ((*l_638) = &l_410)) > (((*g_316) = 2UL) != func_40(&p_36))));

        ;
        (*g_145) = (**g_144);
        if ((!p_36))
        {
            int l_641 = 0xB8FDDDCCL;
            unsigned char ****l_646 = &l_592;
            int ****l_647 = (void*)0;
            int ****l_648 = &g_144;
            unsigned char l_650 = 1UL;
            for (l_509 = 0; (l_509 != (-16)); --l_509)
            {
                (*g_145) = (*g_145);
                l_641 = ((*l_575) = 0x8625C242L);
                return l_509;




            }
            (*l_575) = (safe_lshift_func_uint8_t_u_s((*l_575), (*p_37)));
            (*l_575) = ((*l_575) <= ((safe_add_func_uint32_t_u_u((((*p_37) & (((l_641 >= (((((*l_646) = l_592) != &g_315) && g_303) ^ (((*l_648) = &g_145) == &g_145))) <= (l_412 = l_509)) > p_36)) | (*l_575)), 8UL)) <= l_649));
            l_650 = (g_135 | 1L);
        }
        else
        {
            int **l_652 = &g_134;
            int ***l_651 = &l_652;
            int *l_653 = (void*)0;
            int *l_654 = &l_405;
            (*l_651) = ((*g_144) = (*g_144));
            (*l_654) = ((*l_575) = (*l_575));
        }
    }



    ;
    ;
    ;
    return (*l_575);



}







static unsigned short func_40(char * p_41)
{
    int l_397 = 1L;
    return l_397;
}







static char * func_42(unsigned p_43, union U0 p_44, unsigned char p_45, unsigned p_46, unsigned char p_47)
{
    int l_55 = 0xC930F888L;
    unsigned ***l_389 = &g_368;
    unsigned *l_392 = &g_388;
    int *l_393 = &g_73;
    union U0 **l_394 = (void*)0;
    char *l_395 = &g_117;
    (*l_393) = (safe_div_func_uint16_t_u_u((((safe_div_func_int16_t_s_s((safe_sub_func_int16_t_s_s((l_55 < ((*l_392) = (safe_lshift_func_int16_t_s_s(((func_58(p_46) || ((p_44.f1 = (&g_381 == l_389)) && 4294967295UL)) > (safe_div_func_int32_t_s_s(l_55, (-1L)))), g_4)))), (-8L))), p_46)) > p_45) < 0xA0431243L), p_46));


    ;
    ;
    ;

    (*l_393) = 0x3FC6B856L;
    g_202 = &g_215;

    ;
    return l_395;


}







static int func_58(int p_59)
{
    int *l_72 = &g_73;
    int **l_74 = &l_72;
    char *l_75 = (void*)0;
    unsigned ***l_382 = (void*)0;
    unsigned char *l_383 = &g_384;
    unsigned *l_385 = (void*)0;
    unsigned *l_386 = (void*)0;
    unsigned *l_387 = &g_388;
    (**g_144) = func_60(func_66(func_68(p_59, (((*l_74) = l_72) != &g_73), l_75)), ((*l_387) = (g_4 | ((*l_383) = (g_380 == l_382)))), g_88, p_59, l_75);


    ;
    ;
    ;

    return (**l_74);
}







static int * func_60(unsigned p_61, unsigned p_62, short * p_63, unsigned p_64, char * p_65)
{
    (**g_144) = (void*)0;

    ;
    (**g_144) = (void*)0;
    return (**g_144);


}







static unsigned func_66(char * p_67)
{
    unsigned l_123 = 4294967293UL;
    int *l_138 = &g_135;
    short **l_185 = (void*)0;
    union U0 *l_221 = &g_215;
    char l_304 = 0x3AL;
    unsigned char **l_314 = (void*)0;
    unsigned l_376 = 0x4E106F96L;
    unsigned short l_379 = 0x28F8L;
    if ((safe_rshift_func_int8_t_s_s((l_123 <= (l_123 & (((*p_67) || (*p_67)) < l_123))), 5)))
    {
        char **l_128 = (void*)0;
        char **l_129 = (void*)0;
        char *l_131 = &g_117;
        char **l_130 = &l_131;
        char *l_133 = &g_117;
        char **l_132 = &l_133;
        int l_150 = 0x83981A73L;
        int l_199 = 6L;
        unsigned short *l_275 = &g_261;
        unsigned char ***l_339 = &l_314;
        unsigned *l_343 = &l_123;
        int l_344 = 0x00328345L;
        int l_345 = (-2L);
        if ((safe_add_func_int8_t_s_s((((*l_132) = ((*l_130) = func_68(g_117, (+g_117), p_67))) != &g_117), ((l_123 || ((g_107 == (+((g_134 == (void*)0) == 1UL))) & 0x4341L)) <= (-1L)))))
        {
            int **l_139 = (void*)0;
            int **l_140 = &g_120;
            int *l_141 = &g_73;
            unsigned short l_154 = 65532UL;
            unsigned *l_155 = &l_123;
            unsigned char *l_156 = (void*)0;
            unsigned char *l_157 = &g_103;
            unsigned char *l_158 = &g_107;
            int l_161 = 1L;
            unsigned char l_166 = 255UL;
            union U0 *l_180 = (void*)0;
            char **l_192 = (void*)0;
            int *l_262 = &g_73;
            (***g_144) = ((*g_134) == ((((*l_141) = (safe_rshift_func_uint16_t_u_s((l_138 != ((*l_140) = l_138)), (*l_138)))) != ((safe_rshift_func_int8_t_s_u((g_144 == (void*)0), 4)) & 0x7483L)) ^ 255UL));

            ;
            if ((safe_sub_func_uint32_t_u_u((safe_mod_func_uint8_t_u_u(l_150, ((safe_unary_minus_func_int16_t_s(((*l_141) || g_135))) & ((safe_mul_func_int8_t_s_s(l_154, (((*l_155) = 0xBB8780ECL) != (l_150 < (0xF1L >= ((*l_158) = ((*l_157) = (*l_138)))))))) >= (safe_lshift_func_uint16_t_u_u((l_150 > g_4), 8)))))), 0L)))
            {
                unsigned l_165 = 0UL;
                int *l_177 = &g_135;
                union U0 *l_214 = &g_215;
                char l_224 = 0x98L;
                if (l_161)
                {
                    unsigned short l_162 = 1UL;
                    (*l_138) = (((&g_117 != (void*)0) >= l_162) < g_117);
                }
                else
                {
                    int *l_168 = &g_73;
                    char ***l_173 = (void*)0;
                    for (l_150 = 0; (l_150 >= 13); l_150 = safe_add_func_uint8_t_u_u(l_150, 4))
                    {
                    }
                    if (l_166)
                    {
                        int *l_167 = &g_135;
                        (*g_145) = ((*l_140) = l_167);
                        (*l_167) = ((*l_138) != (*l_167));
                    }
                    else
                    {
                        short l_174 = 0L;
                        (*g_145) = l_168;

                        ;
                        (*l_168) = (safe_mul_func_uint16_t_u_u(((((*p_67) = (g_171 == l_173)) == (((*l_138) = (l_150 <= l_174)) & (*l_141))) || ((*l_138) <= g_135)), (*l_168)));
                        (*l_168) = (g_73 && g_4);
                    }

                    ;
                    (**g_145) = (*l_138);
                }

                ;
                for (l_154 = 17; (l_154 <= 8); l_154 = safe_sub_func_int32_t_s_s(l_154, 4))
                {
                    l_177 = l_138;
                    for (g_103 = (-12); (g_103 != 36); ++g_103)
                    {
                        union U0 **l_181 = (void*)0;
                        union U0 **l_182 = &l_180;
                        (*l_182) = l_180;
                    }
                    for (g_103 = 0; (g_103 < 29); g_103 = safe_add_func_uint16_t_u_u(g_103, 3))
                    {
                        short ***l_186 = &l_185;
                        g_187 = ((*l_186) = l_185);

                        ;
                    }
                    (**g_145) = (*l_177);
                }

                ;
                for (l_161 = 21; (l_161 == (-24)); l_161--)
                {
                    (**l_140) = (((safe_sub_func_uint16_t_u_u(g_73, (((*g_171) = l_192) != (void*)0))) < (safe_mod_func_uint32_t_u_u((safe_mod_func_uint32_t_u_u(0UL, (*l_177))), (safe_sub_func_uint16_t_u_u((**l_140), 1L))))) > l_199);
                    for (g_135 = (-2); (g_135 != 26); g_135 = safe_add_func_int16_t_s_s(g_135, 8))
                    {
                        union U0 **l_203 = &l_180;
                        int *l_204 = &g_135;
                        (*l_203) = g_202;
                        (**g_144) = l_204;

                        ;
                        return (*l_177);


                    }
                    if ((safe_lshift_func_int16_t_s_s((0x6139L ^ 1UL), (&l_138 != (*g_144)))))
                    {
                        int *l_207 = &l_150;
                        (*l_140) = l_207;

                        ;
                    }
                    else
                    {
                        unsigned short l_208 = 0x5552L;
                        (**l_140) = l_208;
                    }
                }

                ;
                if (((*l_141) = (safe_add_func_int32_t_s_s(((*l_177) <= l_199), (((**g_144) != ((*l_140) = (*l_140))) || (((*l_157) = g_117) == 8UL))))))
                {
                    int *l_213 = &g_73;
                    (*g_120) = (**l_140);
                    if ((((*l_141) < (*p_67)) < (&g_172 != &g_172)))
                    {
                        (*l_140) = l_213;

                        ;
                    }
                    else
                    {
                        union U0 **l_216 = &l_180;
                        (*l_216) = l_214;

                        ;
                        (**g_145) = 0L;
                        (**g_145) = (*l_213);
                    }

                    ;
                    ;
                    for (l_123 = 0; (l_123 > 4); l_123++)
                    {
                        union U0 *l_219 = &g_215;
                        union U0 **l_220 = (void*)0;
                        l_177 = ((**g_144) = &l_199);

                        ;
                        ;
                        l_221 = l_219;
                        (*g_145) = l_138;

                        ;
                    }

                    ;
                    if ((safe_div_func_uint32_t_u_u((*l_138), 0x3E86663AL)))
                    {
                        return (*l_213);


                    }
                    else
                    {
                        return l_224;


                    }
                }
                else
                {
                    unsigned l_245 = 0x666C7B7FL;
                    (*l_138) = ((safe_add_func_uint32_t_u_u(g_73, (g_246 = (safe_add_func_uint16_t_u_u((safe_lshift_func_int8_t_s_u(((*g_120) <= (safe_sub_func_int8_t_s_s((*p_67), (safe_mod_func_uint16_t_u_u(g_103, g_117))))), 7)), (safe_mod_func_int8_t_s_s(((safe_div_func_int16_t_s_s((safe_div_func_uint16_t_u_u((safe_lshift_func_uint8_t_u_u(1UL, ((*l_138) ^ (safe_mod_func_int16_t_s_s(l_245, 0x0EF8L))))), l_150)), (*l_177))) >= l_199), 0x2CL))))))) <= 0UL);
                    (***g_144) = 0L;
                    (*l_177) = l_150;
                    for (g_73 = 0; (g_73 >= 13); g_73++)
                    {
                        short *l_249 = &g_250;
                        (*l_138) = ((*l_138) ^ (((*l_249) = l_199) && (*l_177)));
                        return l_245;


                    }
                }
            }
            else
            {
                unsigned short l_253 = 6UL;
                unsigned short *l_256 = &l_154;
                (**g_145) = (safe_sub_func_int8_t_s_s((*p_67), (g_261 = ((l_253 >= (g_107 & (safe_mod_func_uint16_t_u_u(((*l_256) = g_4), ((safe_mul_func_int8_t_s_s(l_150, (safe_lshift_func_int16_t_s_s(l_253, l_253)))) | ((l_253 ^ (*l_138)) | (*p_67))))))) <= g_250))));
                (*g_134) = (*l_138);
            }

            ;
            ;
            ;
            (*l_141) = (*g_120);
            (**g_144) = l_262;

            ;
        }
        else
        {
            unsigned short l_263 = 0xEE3BL;
            (**g_145) = ((l_150 && l_263) > ((-1L) | (*l_138)));
            (*l_138) = l_199;
        }

        ;
        ;
        ;
        if ((**g_145))
        {
            short *l_270 = (void*)0;
            short *l_271 = &g_250;
            int l_272 = (-1L);
            int *l_279 = &g_215.f1;
            (***g_144) = (*l_138);
            (*l_279) = (((*g_120) = (safe_sub_func_uint16_t_u_u(g_4, (safe_rshift_func_int16_t_s_s(l_150, 12))))) && (safe_mul_func_int16_t_s_s((l_272 = (l_199 = ((*l_271) = 1L))), ((*p_67) < (((l_275 != l_271) | (*g_134)) < (safe_rshift_func_int16_t_s_s(l_150, (safe_unary_minus_func_uint8_t_u(g_107)))))))));

        }
        else
        {
            char l_293 = 1L;
            unsigned short *l_302 = &g_303;
            (*l_138) = (safe_unary_minus_func_int8_t_s((safe_mod_func_int16_t_s_s(((safe_mul_func_uint16_t_u_u(65531UL, (l_150 & (+g_215.f1)))) < (((safe_rshift_func_int8_t_s_s((safe_sub_func_int8_t_s_s((safe_mod_func_uint32_t_u_u((l_293 <= l_199), (safe_lshift_func_uint8_t_u_s(g_135, l_150)))), (safe_mul_func_int8_t_s_s((safe_sub_func_uint32_t_u_u((safe_sub_func_uint16_t_u_u(((*l_302) = ((*l_275) = (*l_138))), g_135)), 6UL)), 0UL)))), l_304)) != 0UL) >= 7UL)), (*l_138)))));
            if (((**g_145) = (safe_mul_func_uint8_t_u_u(((*p_67) | ((*l_138) != 0xECL)), (safe_unary_minus_func_int32_t_s(0xE1C7F332L))))))
            {
                unsigned char ***l_317 = &g_315;
                int l_318 = 0x2101FBCBL;
                (*g_120) = (safe_sub_func_int8_t_s_s((safe_add_func_uint8_t_u_u((safe_lshift_func_uint16_t_u_s(0UL, 7)), (((l_314 != ((*l_317) = g_315)) || (*g_316)) & l_318))), l_293));
                for (l_304 = 19; (l_304 <= (-14)); l_304 = safe_sub_func_uint16_t_u_u(l_304, 6))
                {
                    (*g_120) = 0x1668D167L;
                    for (g_73 = 0; (g_73 == (-26)); g_73 = safe_sub_func_int16_t_s_s(g_73, 8))
                    {
                        unsigned l_325 = 0UL;
                        l_318 = ((((safe_div_func_uint16_t_u_u(((((*p_67) > (*g_316)) & (**g_315)) || l_150), l_325)) <= l_199) <= (**g_145)) <= (l_199 <= l_318));
                    }
                    for (g_250 = (-1); (g_250 > 20); g_250++)
                    {
                        union U0 **l_328 = &l_221;
                        (*l_328) = &g_215;
                        if ((*l_138))
                            continue;
                    }
                }
                for (l_304 = 4; (l_304 <= 9); l_304 = safe_add_func_uint32_t_u_u(l_304, 3))
                {
                    unsigned short l_331 = 0UL;
                    if (l_331)
                        break;
                    return g_103;


                }
            }
            else
            {
                int l_332 = 0x15A9D2C5L;
                return l_332;


            }
        }

        if (((safe_rshift_func_int16_t_s_s(((safe_lshift_func_int8_t_s_u((safe_div_func_uint16_t_u_u((((g_340 = l_339) != (void*)0) == (((*l_343) = ((*l_138) >= ((safe_add_func_int32_t_s_s((&g_172 != (void*)0), 1UL)) & 0x5294L))) <= (*l_138))), (0x4215L | l_199))), l_344)) & (*l_138)), 5)) <= l_345))
        {
            unsigned **l_346 = (void*)0;
            unsigned *l_348 = &l_123;
            unsigned **l_347 = &l_348;
            int l_355 = 0xE247ED1BL;
            (*g_145) = (**g_144);
            l_199 = (l_343 != ((*l_347) = g_120));

            ;
            for (l_199 = 0; (l_199 < (-28)); l_199--)
            {
                char l_360 = 5L;
                unsigned char *l_364 = (void*)0;
                for (g_250 = 0; (g_250 != 29); ++g_250)
                {
                    unsigned l_363 = 0UL;
                    if ((((**g_145) = 5L) || (safe_add_func_int16_t_s_s((l_355 >= ((((*l_343) = g_103) != (safe_add_func_uint16_t_u_u(((*l_138) && 4294967295UL), ((safe_div_func_int16_t_s_s(((l_360 && ((*l_138) > (safe_rshift_func_int8_t_s_s(0x0DL, 2)))) != (*g_134)), l_363)) || l_360)))) && 0xDAL)), 0x5BE3L))))
                    {
                        (**g_145) = ((void*)0 == l_364);
                    }
                    else
                    {
                        union U0 **l_365 = &l_221;
                        int **l_366 = &l_138;
                        (*l_365) = (void*)0;

                        ;
                        (*l_366) = ((**g_144) = l_138);

                        ;
                        return l_363;



                    }
                }
            }
        }
        else
        {
            int *l_367 = &l_199;
            unsigned ***l_370 = &g_368;
            (**g_144) = l_367;

            ;
            (*l_138) = (*l_138);
            (*l_370) = g_368;
        }

        ;
        ;
        (*l_138) = ((*l_130) != p_67);
    }
    else
    {
        int ***l_371 = &g_145;
        (**g_145) = 0x01364F4DL;
        (***g_144) = (!((l_371 == &g_145) < (safe_mul_func_uint8_t_u_u((*l_138), (*l_138)))));
        (*g_120) = (safe_mul_func_uint16_t_u_u(l_376, (safe_rshift_func_int8_t_s_u(l_379, 3))));
    }



    ;
    ;
    (*g_340) = (*g_340);

    ;
    ;
    return (*l_138);


}







static char * func_68(int p_69, unsigned p_70, char * p_71)
{
    int l_82 = 9L;
    int *l_87 = &g_73;
    char *l_116 = &g_117;
    char **l_115 = &l_116;
    int **l_119 = &l_87;
    for (p_69 = (-20); (p_69 >= 2); ++p_69)
    {
        unsigned char l_110 = 0UL;
        int **l_111 = (void*)0;
        int ***l_112 = &l_111;
        if ((safe_add_func_uint32_t_u_u((+0x3E87122AL), (safe_mul_func_int8_t_s_s(l_82, 255UL)))))
        {
            int *l_83 = &g_73;
            int **l_84 = (void*)0;
            int **l_85 = &l_83;
            (*l_83) = l_82;
            (*l_85) = l_83;
        }
        else
        {
            int *l_86 = &g_73;
            int *l_97 = &l_82;
            unsigned char *l_102 = &g_103;
            unsigned char **l_104 = (void*)0;
            unsigned char *l_106 = &g_107;
            unsigned char **l_105 = &l_106;
            l_87 = l_86;
            (*l_86) = ((void*)0 != g_88);
            l_110 = (safe_div_func_int32_t_s_s(g_73, (safe_div_func_int32_t_s_s((safe_add_func_int32_t_s_s(((*l_97) = (safe_lshift_func_int8_t_s_u((-1L), 1))), (65535UL == (((*l_102) = (safe_div_func_int16_t_s_s(((safe_rshift_func_uint16_t_u_s(g_4, 6)) || 0xF93B76F0L), (*l_86)))) != (((*l_105) = p_71) == (void*)0))))), (safe_sub_func_uint8_t_u_u(((p_69 | 0xB790EB5CL) >= (*l_87)), 0L))))));

            ;
        }
        (*l_112) = l_111;
        for (l_110 = 11; (l_110 >= 46); l_110++)
        {
            char ***l_118 = &l_115;
            (*l_118) = l_115;
        }
    }
    (*l_119) = &g_73;
    g_120 = (*l_119);

    ;
    return &g_117;


}





int main (int argc, char* argv[])
{
    int print_hash_value = 0;
    if (argc == 2 && strcmp(argv[1], "1") == 0) print_hash_value = 1;
    platform_main_begin();
    crc32_gentab();
    func_1();
    transparent_crc(g_4, "g_4", print_hash_value);
    transparent_crc(g_19, "g_19", print_hash_value);
    transparent_crc(g_30, "g_30", print_hash_value);
    transparent_crc(g_39, "g_39", print_hash_value);
    transparent_crc(g_73, "g_73", print_hash_value);
    transparent_crc(g_103, "g_103", print_hash_value);
    transparent_crc(g_107, "g_107", print_hash_value);
    transparent_crc(g_117, "g_117", print_hash_value);
    transparent_crc(g_135, "g_135", print_hash_value);
    transparent_crc(g_215.f0, "g_215.f0", print_hash_value);
    transparent_crc(g_215.f1, "g_215.f1", print_hash_value);
    transparent_crc(g_246, "g_246", print_hash_value);
    transparent_crc(g_250, "g_250", print_hash_value);
    transparent_crc(g_261, "g_261", print_hash_value);
    transparent_crc(g_303, "g_303", print_hash_value);
    transparent_crc(g_384, "g_384", print_hash_value);
    transparent_crc(g_388, "g_388", print_hash_value);
    transparent_crc(g_468, "g_468", print_hash_value);
    transparent_crc(g_541, "g_541", print_hash_value);
    transparent_crc(g_565, "g_565", print_hash_value);
    transparent_crc(g_768, "g_768", print_hash_value);
    transparent_crc(g_814.f0, "g_814.f0", print_hash_value);
    transparent_crc(g_814.f1, "g_814.f1", print_hash_value);
    platform_main_end(crc32_context ^ 0xFFFFFFFFUL, print_hash_value);
    return 0;
}
