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
   signed f1 : 15;
   unsigned f2 : 7;
   signed f3 : 13;
   unsigned f4 : 30;
   unsigned f5 : 18;
   signed f6 : 11;
};

struct S1 {
   signed f0 : 22;
};

struct S2 {
   const struct S1 f0;
   short f1;
   char f2;
   int f3;
   unsigned f4;
   short f5;
   struct S1 f6;
   int f7;
};


static char g_31 = 0xABL;
static int g_56 = 1L;
static struct S0 g_72 = {1UL,21,1,83,11970,24,29};
static struct S2 g_81 = {{219},-3L,0xA0L,0x60AD585BL,9UL,2L,{41},1L};
static int *g_102 = &g_56;
static int **g_101 = &g_102;
static struct S2 **g_103 = (void*)0;
static unsigned g_111 = 6UL;
static int g_184 = 0L;
static unsigned g_308 = 0xB0C6D8FCL;
static char g_323 = (-5L);
static struct S1 * const g_331 = &g_81.f6;
static struct S1 g_335 = {-667};
static struct S1 *g_337 = (void*)0;
static unsigned char g_367 = 248UL;
static struct S2 g_407 = {{368},-9L,-1L,-10L,0xC0F30DADL,-1L,{-1074},0x85F3CF5AL};
static unsigned short g_410 = 1UL;
static struct S2 *g_429 = &g_81;
static struct S2 **g_428 = &g_429;
static int g_513 = 0L;
static int g_584 = 0L;
static const unsigned char g_618 = 247UL;
static struct S0 *g_642 = &g_72;
static struct S0 **g_641 = &g_642;
static unsigned g_651 = 6UL;
static unsigned short g_746 = 0xED80L;
static struct S2 g_773 = {{504},0L,0x26L,0x6B560384L,4294967295UL,0xAF01L,{-592},1L};
static char g_808 = 0x27L;



static char func_1(void);
static struct S1 func_2(struct S1 p_3, struct S2 p_4, unsigned p_5, unsigned p_6);
static struct S2 func_8(const struct S0 p_9, int p_10, struct S2 p_11);
static const struct S0 func_12(const struct S2 p_13, struct S0 p_14, int p_15, unsigned p_16, int p_17);
static struct S2 func_18(int p_19, struct S1 p_20, int p_21, int p_22);
static struct S1 func_23(struct S2 p_24, struct S1 p_25, unsigned p_26);
static struct S1 func_28(int p_29, int p_30);
static short func_32(unsigned char p_33, int p_34, unsigned char p_35, int p_36);
static const unsigned char func_37(int p_38);
static unsigned char func_48(int p_49, unsigned p_50, unsigned char p_51);
static char func_1(void)
{
    struct S1 l_7 = {-1136};
    struct S2 l_27 = {{-478},0xD3CCL,-6L,-4L,0x91A76A44L,0xD051L,{121},0L};
    struct S0 l_658 = {0x3FBCC873L,46,0,88,17132,48,-30};
    unsigned short l_659 = 0xE5B5L;
    unsigned char l_660 = 0UL;
    (*g_331) = func_2(l_7, func_8(func_12(func_18(l_7.f0, func_23(l_27, func_28(l_27.f7, g_31), l_27.f5), ((g_407.f2 && g_81.f0.f0) < g_407.f7), g_407.f5), l_658, l_659, g_407.f3, l_660), g_31, l_27), l_658.f4, g_651);
    return g_111;
}







static struct S1 func_2(struct S1 p_3, struct S2 p_4, unsigned p_5, unsigned p_6)
{
    struct S2 **l_719 = &g_429;
    struct S0 *l_722 = &g_72;
    int l_723 = 1L;
    int l_747 = 0x7C182761L;
    char l_776 = 1L;
    unsigned char l_826 = 255UL;
    unsigned l_841 = 4294967295UL;
    struct S1 l_858 = {-721};
    unsigned char l_873 = 0UL;
    struct S1 **l_919 = &g_337;
    struct S1 ***l_918 = &l_919;
    (*g_102) = (safe_mod_func_uint8_t_u_u(((l_719 != l_719) & (safe_lshift_func_int16_t_s_u(((l_722 == l_722) ^ ((l_723 > (safe_mod_func_int16_t_s_s((((void*)0 == &g_331) >= func_37((safe_add_func_uint16_t_u_u((safe_rshift_func_uint16_t_u_u(func_48((((*g_101) == &l_723) != l_723), l_723, g_31), g_81.f4)), g_335.f0)))), 65535UL))) ^ l_723)), 2))), g_410));
    if (l_723)
    {
        (*l_719) = &p_4;
    }
    else
    {
        int *l_730 = &g_184;
        unsigned char l_738 = 1UL;
        struct S2 * const *l_765 = (void*)0;
        struct S2 * const **l_764 = &l_765;
        struct S1 *l_807 = &g_81.f6;
        (*g_101) = l_730;
        for (g_651 = 0; (g_651 > 43); g_651 = safe_add_func_int16_t_s_s(g_651, 5))
        {
            int l_743 = 0x5D23F221L;
            int *l_771 = &l_723;
            struct S2 *l_772 = &g_773;
            struct S2 ***l_805 = &g_103;
            unsigned l_806 = 7UL;
            for (l_723 = 0; (l_723 >= 26); ++l_723)
            {
                int l_737 = 3L;
                (**g_101) ^= (safe_lshift_func_int16_t_s_s((g_72.f4 ^ l_737), func_37(l_738)));
                l_747 |= func_32((((safe_add_func_uint16_t_u_u((func_32((safe_sub_func_int32_t_s_s(func_48(p_4.f7, l_737, (l_743 | (((p_4.f1 | ((safe_lshift_func_int8_t_s_s(((*g_101) != (void*)0), 3)) >= g_618)) ^ 0x9466E4FAL) ^ (func_32(p_4.f3, l_743, p_4.f4, l_723) == 0UL)))), (*l_730))), l_737, g_407.f4, g_746) ^ g_81.f4), p_5)) >= 0x70L) || 1UL), p_4.f6.f0, g_618, l_743);
            }
            (*g_331) = p_3;
            (**g_101) |= ((p_5 && ((safe_mod_func_uint32_t_u_u(g_746, 4294967291UL)) != ((safe_add_func_int32_t_s_s(0x2EA8CD98L, (safe_mod_func_uint8_t_u_u((safe_lshift_func_uint16_t_u_s((safe_rshift_func_uint16_t_u_u((safe_lshift_func_uint16_t_u_s((safe_add_func_int8_t_s_s((~(p_4.f6.f0 != g_81.f6.f0)), ((safe_lshift_func_int8_t_s_s((l_764 == (void*)0), (((safe_add_func_int32_t_s_s((safe_add_func_int8_t_s_s(g_72.f4, p_4.f1)), 0xF4E18C4DL)) > l_747) || l_743))) > l_747))), 3)), 11)), g_407.f0.f0)), p_6)))) && 246UL))) || 1UL);
            if ((func_37(l_723) || (&l_719 != &l_719)))
            {
                int *l_770 = &g_56;
                l_771 = l_770;
            }
            else
            {
                struct S2 ***l_781 = &l_719;
                int l_786 = 1L;
                l_772 = &p_4;
                if ((safe_sub_func_int16_t_s_s(l_776, (*l_771))))
                {
                    (*g_102) ^= (g_513 > (*l_771));
                }
                else
                {
                    unsigned short l_809 = 0x1F26L;
                    for (p_4.f1 = (-16); (p_4.f1 == (-6)); ++p_4.f1)
                    {
                        unsigned short l_779 = 0x2DC9L;
                        (*g_102) = (l_779 == (safe_unary_minus_func_uint32_t_u((func_37(((&l_719 == l_781) > l_779)) < (safe_mod_func_int8_t_s_s(g_407.f4, p_4.f3))))));
                        (*l_771) |= (func_32((safe_mod_func_int8_t_s_s(func_48(g_81.f3, (l_786 <= (((((((p_3.f0 < (safe_rshift_func_uint16_t_u_u(l_776, 6))) < ((p_4.f5 || 0x74A32B8DL) | (safe_add_func_uint16_t_u_u((safe_rshift_func_int16_t_s_s((safe_sub_func_uint8_t_u_u(((func_37(func_48(p_4.f7, g_773.f6.f0, g_81.f4)) != p_4.f1) < 255UL), 8L)), g_56)), (*l_730))))) <= p_5) && 65531UL) < g_56) ^ g_407.f6.f0) > 0x402DD960L)), p_4.f0.f0), p_4.f5)), (*l_730), g_407.f6.f0, (*g_102)) < g_72.f5);
                        p_4.f7 = 0x99B02F9EL;
                        (**g_101) = p_4.f3;
                    }
                    p_3.f0 ^= (((((safe_mod_func_int8_t_s_s(l_776, (safe_add_func_int8_t_s_s(func_48(((safe_add_func_int8_t_s_s(p_4.f5, ((void*)0 != &g_331))) > p_4.f2), (safe_rshift_func_int8_t_s_s(func_37(l_747), (safe_add_func_int32_t_s_s((((&g_103 == l_805) ^ g_184) && g_407.f0.f0), l_806)))), g_410), 0xD6L)))) <= g_72.f6) & 4L) > p_6) | g_81.f2);
                    p_3.f0 |= ((((void*)0 != l_807) == (*l_730)) > (6L & func_32(g_808, g_72.f1, (l_786 != func_48(l_809, g_773.f7, g_111)), l_723)));
                    (*l_719) = &p_4;
                }
                p_4.f7 |= (((*l_771) & ((&g_103 == &g_428) | (g_773.f2 >= (func_32(func_48(l_723, (*l_730), (((safe_mod_func_uint8_t_u_u(((safe_mod_func_uint8_t_u_u(246UL, (safe_sub_func_int16_t_s_s((g_81.f1 && (((safe_sub_func_int8_t_s_s(g_72.f2, p_3.f0)) & 0UL) ^ 1UL)), g_81.f0.f0)))) != l_786), 9L)) & g_407.f6.f0) ^ p_4.f0.f0)), g_111, g_111, (**g_101)) >= (*l_771))))) & 2UL);
                (*l_771) |= (g_407.f2 && (safe_add_func_int8_t_s_s(p_4.f0.f0, func_32(((0x35L || 0xE8L) || 0x29L), p_4.f2, g_407.f6.f0, (*g_102)))));
            }
        }
        (*g_102) = ((**g_101) == (*g_102));
    }
    for (g_81.f7 = 0; (g_81.f7 < (-12)); g_81.f7--)
    {
        const int l_830 = 0L;
        struct S1 l_862 = {-617};
        unsigned short l_916 = 9UL;
        for (g_56 = 0; (g_56 < (-22)); g_56--)
        {
            struct S1 **l_827 = &g_337;
            for (p_5 = 27; (p_5 != 48); p_5 = safe_add_func_int8_t_s_s(p_5, 5))
            {
                l_826 &= func_37((((void*)0 == &p_3) <= 4294967294UL));
            }
            (*l_827) = &g_335;
        }
        for (g_773.f5 = (-13); (g_773.f5 < (-19)); g_773.f5 = safe_sub_func_int16_t_s_s(g_773.f5, 3))
        {
            struct S1 * const *l_836 = &g_331;
            int l_857 = 0x8BD7B8AAL;
            const int *l_901 = &g_184;
            const int **l_900 = &l_901;
            int l_910 = 4L;
            (*g_101) = (*g_101);
            if (p_4.f1)
            {
                p_4.f7 |= ((((l_830 || g_407.f6.f0) | g_773.f2) <= ((*g_102) != 0xE97C2D46L)) & g_407.f2);
                if (func_37(g_773.f0.f0))
                {
                    int *l_831 = &g_513;
                    l_831 = &l_723;
                }
                else
                {
                    unsigned char l_832 = 0UL;
                    struct S1 **l_835 = &g_337;
                    (*g_102) ^= ((l_832 >= ((((safe_add_func_int16_t_s_s(g_773.f1, 65534UL)) < ((l_835 != l_836) >= (&p_4 != &p_4))) > (&g_335 == &g_335)) & l_826)) != 0xB848L);
                    (*g_101) = (*g_101);
                }
                if ((**g_101))
                {
                    unsigned l_850 = 4294967292UL;
                    struct S0 *l_851 = &g_72;
                    if (((safe_lshift_func_int16_t_s_u((((void*)0 == (*g_101)) || 1UL), l_723)) || (+(safe_lshift_func_int8_t_s_s(l_830, (p_4.f7 < (((&g_337 != &g_337) == (**g_101)) && l_841)))))))
                    {
                        p_4.f7 &= ((void*)0 != &g_331);
                    }
                    else
                    {
                        struct S0 *l_852 = &g_72;
                        (**g_101) ^= (safe_mod_func_int16_t_s_s(func_37((safe_sub_func_uint16_t_u_u((((((g_72.f3 ^ (safe_add_func_uint16_t_u_u((safe_sub_func_uint8_t_u_u((func_48(l_850, (l_851 != l_852), (safe_lshift_func_uint8_t_u_s((((g_407.f3 > func_37(p_4.f6.f0)) != (0x6764F146L & (safe_add_func_uint16_t_u_u(p_4.f0.f0, 0L)))) == l_857), p_4.f6.f0))) >= p_4.f5), p_4.f5)), l_830))) | 246UL) && 0x29L) ^ 0x0F5AL) && g_81.f5), g_81.f4))), p_5));
                        if (p_4.f3)
                            continue;
                        l_858 = p_4.f0;
                        if (p_4.f0.f0)
                            continue;
                    }
                    for (g_184 = (-14); (g_184 == 13); g_184++)
                    {
                        int *l_861 = &g_56;
                        (*l_861) = (**g_101);
                        (*l_861) = (*g_102);
                    }
                    return l_862;
                }
                else
                {
                    struct S1 **l_879 = (void*)0;
                    (*g_101) = (*g_101);
                    for (g_407.f4 = 4; (g_407.f4 == 52); g_407.f4 = safe_add_func_int16_t_s_s(g_407.f4, 2))
                    {
                        short l_865 = (-1L);
                        int *l_872 = &l_723;
                        char l_892 = 0xF5L;
                        int *l_893 = &g_584;
                        if (p_5)
                            break;
                        if (p_4.f5)
                            break;
                        (*l_872) &= func_32(func_32(g_773.f6.f0, l_865, (0xE85AL & ((safe_rshift_func_uint8_t_u_u(0x0EL, 6)) < (g_81.f5 == ((safe_lshift_func_int16_t_s_s(0L, p_4.f4)) < (~(~(safe_sub_func_int8_t_s_s(((&g_429 != (void*)0) && (**g_101)), p_6)))))))), (**g_101)), g_513, g_407.f6.f0, p_5);
                        (*l_893) |= (l_873 ^ (~(65531UL > func_48(g_335.f0, (safe_sub_func_uint8_t_u_u((safe_mod_func_uint8_t_u_u((safe_unary_minus_func_int32_t_s((l_879 != (void*)0))), ((safe_lshift_func_int16_t_s_u((safe_add_func_uint32_t_u_u((safe_mod_func_int8_t_s_s(((func_48((func_32(p_4.f5, (safe_add_func_uint16_t_u_u(p_4.f0.f0, (safe_add_func_int16_t_s_s((((safe_lshift_func_uint16_t_u_u((l_857 | (*l_872)), 4)) | l_723) ^ g_773.f3), p_4.f1)))), l_862.f0, p_3.f0) == p_4.f3), p_4.f7, g_773.f0.f0) <= g_81.f7) & p_4.f3), g_72.f5)), p_4.f4)), g_72.f5)) & (-1L)))), p_4.f0.f0)), l_892))));
                    }
                    (*g_102) = func_37(g_72.f6);
                }
                (*g_101) = (*g_101);
            }
            else
            {
                unsigned short l_915 = 0x2A0BL;
                char l_917 = (-3L);
                if ((**g_101))
                {
                    (*g_102) = p_4.f1;
                }
                else
                {
                    int **l_902 = &g_102;
                    (*g_102) &= ((g_407.f3 <= 0x2D99L) == (-1L));
                    if ((&g_429 != (void*)0))
                    {
                        const int *l_894 = (void*)0;
                        const int **l_895 = &l_894;
                        (**g_101) = 0x143BB271L;
                        (*l_895) = l_894;
                        (**g_101) &= p_4.f0.f0;
                        (**g_101) = (**g_101);
                    }
                    else
                    {
                        struct S0 *l_905 = &g_72;
                        (*g_102) = (safe_add_func_uint32_t_u_u((safe_sub_func_int32_t_s_s(func_37(p_4.f5), ((l_900 == l_902) == g_410))), (safe_mod_func_uint8_t_u_u(((*g_641) == l_905), (~p_4.f2)))));
                    }
                }
                l_917 ^= ((*g_102) == ((safe_mod_func_int32_t_s_s(((safe_sub_func_uint8_t_u_u((func_48(p_4.f0.f0, g_773.f4, p_3.f0) ^ l_910), (func_48(p_6, (safe_sub_func_uint8_t_u_u(((safe_sub_func_uint32_t_u_u((g_407.f0.f0 >= g_81.f5), (**g_101))) < (*l_901)), l_915)), l_915) > l_916))) >= l_915), (**l_900))) < (-1L)));
            }
            (**g_101) &= (((&g_773 != &p_4) | l_916) ^ l_873);
        }
    }
    (*l_918) = &g_337;
    return (*g_331);
}







static struct S2 func_8(const struct S0 p_9, int p_10, struct S2 p_11)
{
    int *l_662 = &g_56;
    int *l_663 = &g_56;
    struct S1 **l_672 = &g_337;
    const struct S0 *l_702 = &g_72;
    int *** const l_713 = &g_101;
    struct S2 l_716 = {{-219},0x3FD2L,0x08L,0x023D4949L,0x4647A5E6L,-1L,{414},1L};
    (*l_662) = 0x2E3C8E29L;
    (*g_101) = l_663;
    if ((safe_lshift_func_int16_t_s_u(g_56, 11)))
    {
        int l_673 = 0x782D04C3L;
        int *l_676 = (void*)0;
        int *l_677 = &g_407.f7;
        p_11.f6.f0 |= (safe_add_func_int16_t_s_s(((-1L) != ((*l_662) ^ g_31)), ((0xB4L <= (g_407.f5 == p_11.f7)) || (g_56 >= 251UL))));
        (*g_428) = &p_11;
        (*l_662) = (**g_101);
        (*l_677) ^= ((func_32((*l_662), ((!(safe_lshift_func_uint8_t_u_s(((l_672 != (void*)0) <= (*l_662)), l_673))) != p_9.f1), (safe_add_func_int16_t_s_s((*l_663), func_48(l_673, ((*g_102) | 0x8617510EL), (*l_663)))), (*g_102)) | 0L) == l_673);
    }
    else
    {
        int * const *l_712 = (void*)0;
        int * const **l_711 = &l_712;
        short l_714 = (-1L);
        for (g_31 = 3; (g_31 < (-25)); --g_31)
        {
            unsigned char l_684 = 7UL;
            int *l_715 = (void*)0;
            for (g_81.f7 = 0; (g_81.f7 != (-29)); --g_81.f7)
            {
                struct S2 *l_691 = (void*)0;
                for (g_111 = (-1); (g_111 == 60); g_111 = safe_add_func_int16_t_s_s(g_111, 9))
                {
                    (**g_101) |= 0x72960468L;
                    if (l_684)
                        break;
                }
                if ((&l_663 == &l_662))
                {
                    unsigned l_689 = 0x8DCD70FCL;
                    int * const l_699 = &g_513;
                    (*g_102) ^= (safe_sub_func_uint8_t_u_u(0xF9L, p_11.f2));
                    for (g_513 = 0; (g_513 == 2); ++g_513)
                    {
                        const struct S0 *l_690 = &g_72;
                        l_689 |= (*g_102);
                        (*g_102) |= func_48((g_72.f6 <= l_689), g_81.f5, p_9.f4);
                        l_690 = &p_9;
                        (*g_428) = l_691;
                    }
                    for (p_11.f1 = 0; (p_11.f1 > 27); p_11.f1 = safe_add_func_int16_t_s_s(p_11.f1, 5))
                    {
                        const unsigned short l_696 = 0x5AA1L;
                        p_11.f7 &= (((safe_rshift_func_uint8_t_u_u((1L >= (&g_102 != (void*)0)), ((l_696 < ((*g_102) == (g_513 == ((void*)0 == l_699)))) == 65529UL))) && 0x1BL) <= (-1L));
                    }
                }
                else
                {
                    (*g_102) = (**g_101);
                }
                for (g_56 = 0; (g_56 > (-17)); --g_56)
                {
                    if ((*g_102))
                        break;
                    l_702 = &p_9;
                }
            }
            p_11.f7 &= (safe_add_func_uint8_t_u_u(g_56, (safe_lshift_func_int8_t_s_u(g_31, (safe_lshift_func_int8_t_s_u((safe_lshift_func_uint16_t_u_u(((((l_711 != l_713) > 0xAEA73374L) && l_714) > (g_72.f2 ^ g_56)), p_9.f3)), g_407.f3))))));
            (**g_101) = (p_10 > g_308);
        }
        (*g_101) = (*g_101);
    }
    return l_716;
}







static const struct S0 func_12(const struct S2 p_13, struct S0 p_14, int p_15, unsigned p_16, int p_17)
{
    int l_661 = 0xED2DD816L;
    l_661 |= p_14.f0;
    return p_14;
}







static struct S2 func_18(int p_19, struct S1 p_20, int p_21, int p_22)
{
    int **l_594 = (void*)0;
    int *l_595 = (void*)0;
    int *l_596 = &g_584;
    struct S2 l_657 = {{-1553},-9L,0x69L,0L,0x93F83081L,0x76C4L,{1448},0x63F4DBC3L};
    (*l_596) |= (l_594 != (void*)0);
    (*l_596) = (safe_sub_func_uint32_t_u_u((0x8673L || (safe_sub_func_int8_t_s_s((func_37(g_367) >= g_81.f6.f0), 1L))), 9UL));
    if (func_37(p_19))
    {
        struct S0 l_601 = {0x6C2B0465L,-140,9,-43,3303,13,-12};
        struct S0 *l_602 = &g_72;
        (*l_602) = l_601;
        if (((void*)0 != &p_21))
        {
            (*l_602) = g_72;
        }
        else
        {
            int l_605 = 0x689A74B3L;
            unsigned l_614 = 4294967295UL;
            struct S0 *l_635 = &g_72;
            for (g_81.f5 = 0; (g_81.f5 == (-20)); g_81.f5--)
            {
                unsigned char l_617 = 248UL;
                if (l_605)
                    break;
                (*g_101) = &g_56;
                if ((safe_mod_func_uint16_t_u_u((((&g_337 != (void*)0) == (((+(safe_add_func_int8_t_s_s(7L, g_81.f3))) >= (safe_lshift_func_int8_t_s_s((((p_20.f0 || (safe_rshift_func_int16_t_s_u(func_32(l_614, p_21, (safe_lshift_func_uint8_t_u_u(func_48(((((g_72.f6 & (g_410 && l_617)) >= p_20.f0) ^ p_19) != 0x9FA6E6CBL), p_20.f0, p_21), p_22)), p_20.f0), 13))) != 255UL) == g_31), g_72.f6))) >= 0x8EC0EEBCL)) != l_601.f2), p_19)))
                {
                    short l_621 = 0L;
                    (*g_102) |= g_618;
                    p_20.f0 &= func_32((1UL && func_32(l_617, p_22, (safe_sub_func_uint32_t_u_u(g_81.f3, l_621)), (**g_101))), ((((safe_add_func_int8_t_s_s((g_81.f7 != p_19), g_31)) < 255UL) < 254UL) >= g_72.f0), l_617, l_617);
                }
                else
                {
                    unsigned l_634 = 4294967293UL;
                    if ((*g_102))
                    {
                        int ***l_628 = (void*)0;
                        int l_633 = 0xB14510EFL;
                        struct S0 **l_636 = &l_602;
                        p_20.f0 |= (((&g_72 == (void*)0) >= ((l_614 | ((safe_mod_func_uint8_t_u_u((l_628 != &g_101), (safe_add_func_uint32_t_u_u(p_21, ((g_72.f6 | (safe_lshift_func_uint16_t_u_s(func_32(l_633, func_32(g_407.f3, l_634, l_617, (**g_101)), g_81.f0.f0, l_617), g_81.f3))) & p_19))))) & 0x47C3L)) < g_407.f4)) ^ p_21);
                        (*l_636) = l_635;
                        (**g_101) |= (safe_lshift_func_int16_t_s_u(((safe_lshift_func_uint8_t_u_u((g_641 != &g_642), 4)) > ((safe_add_func_uint8_t_u_u(p_19, 0x7CL)) || (5UL | (safe_add_func_int8_t_s_s(0xEDL, (safe_sub_func_int32_t_s_s((&g_335 != (void*)0), g_410))))))), 7));
                    }
                    else
                    {
                        (*l_596) = 7L;
                        (**g_641) = (*l_602);
                    }
                    (**g_101) |= (0x5DD5L == (1UL ^ p_20.f0));
                    if (l_634)
                        continue;
                }
            }
        }
        (*g_641) = (void*)0;
    }
    else
    {
        unsigned l_652 = 1UL;
        unsigned l_653 = 0x7A3927CCL;
        int *l_654 = &g_513;
        struct S2 *l_655 = (void*)0;
        if ((((((p_21 && 0xA2D4L) || g_335.f0) || (p_19 | (0xDEA87103L | 4294967286UL))) != g_407.f0.f0) | (safe_add_func_uint32_t_u_u(g_651, p_22))))
        {
            (*l_596) ^= l_652;
        }
        else
        {
            struct S2 *l_656 = (void*)0;
            l_653 &= 8L;
            (*g_101) = l_654;
            l_656 = l_655;
        }
        (*l_596) |= p_20.f0;
    }
    return l_657;
}







static struct S1 func_23(struct S2 p_24, struct S1 p_25, unsigned p_26)
{
    short l_382 = 0xB439L;
    int *l_385 = &g_184;
    int l_386 = 0x73AF1AFBL;
    struct S0 *l_391 = (void*)0;
    unsigned char l_397 = 0x54L;
    const unsigned short l_402 = 0x15AAL;
    struct S2 *l_406 = &g_407;
    int l_420 = 0L;
    unsigned l_473 = 5UL;
    struct S2 ***l_488 = &g_103;
    unsigned l_492 = 0x4EFB914CL;
    struct S1 *l_543 = &g_407.f6;
    struct S2 ***l_592 = &g_428;
    l_386 ^= (~(safe_mod_func_int16_t_s_s((((safe_mod_func_int32_t_s_s((((func_32((safe_lshift_func_int16_t_s_u((safe_sub_func_int8_t_s_s((g_81.f2 == l_382), (safe_mod_func_uint16_t_u_u((((-1L) > (l_382 > (l_385 == l_385))) | g_81.f5), g_72.f6)))), g_72.f2)), p_24.f1, (*l_385), (*l_385)) < g_81.f2) & g_72.f5) & g_111), 0x719EA2F4L)) <= (*l_385)) || 0x4499L), (*l_385))));
    (*l_385) &= p_24.f2;
    if ((&l_385 != (void*)0))
    {
        struct S0 l_400 = {0x882E834EL,-67,2,-43,5207,232,40};
        for (p_24.f1 = (-13); (p_24.f1 == 28); p_24.f1++)
        {
            for (p_24.f4 = (-19); (p_24.f4 >= 5); p_24.f4++)
            {
                struct S0 **l_392 = (void*)0;
                struct S0 **l_393 = &l_391;
                int **l_396 = &l_385;
                int *l_398 = (void*)0;
                int *l_399 = &g_81.f7;
                (*l_393) = l_391;
                (*l_399) &= (func_32(g_81.f2, ((((0x15F6L | p_24.f1) > (safe_lshift_func_uint16_t_u_s(((0xACL < (l_396 == &l_385)) > p_24.f3), l_397))) > ((*l_385) != g_81.f2)) == p_24.f1), g_81.f1, g_308) > g_81.f3);
                g_72 = l_400;
            }
            (*l_385) ^= 0x74B98C5EL;
        }
    }
    else
    {
        unsigned char l_401 = 2UL;
        int *l_403 = &g_184;
        (*l_385) = func_37((func_32(g_335.f0, (&p_24 != &p_24), (*l_385), l_401) >= l_402));
        (*g_101) = &l_386;
        (*g_101) = (*g_101);
        (*g_101) = l_403;
    }
    for (p_24.f4 = 0; (p_24.f4 > 58); ++p_24.f4)
    {
        struct S2 **l_408 = (void*)0;
        int l_409 = (-1L);
        char l_437 = 0x17L;
        unsigned char l_462 = 0xA7L;
        struct S0 **l_511 = &l_391;
        int l_589 = 0x1777CCA3L;
        l_406 = &g_81;
        if (((void*)0 != l_408))
        {
            (*l_385) |= 0x72320E0FL;
        }
        else
        {
            (*l_385) = ((&g_335 != (void*)0) | l_409);
        }
        (*g_101) = &l_409;
    }
    return (*l_543);
}







static struct S1 func_28(int p_29, int p_30)
{
    char l_47 = (-5L);
    char l_53 = 0L;
    int *l_85 = &g_56;
    int ***l_89 = (void*)0;
    unsigned l_105 = 0x16371A01L;
    struct S0 *l_127 = &g_72;
    struct S1 l_160 = {1145};
    unsigned char l_196 = 0x10L;
    char l_238 = (-2L);
    struct S2 *l_242 = &g_81;
    struct S2 **l_241 = &l_242;
    unsigned l_316 = 1UL;
    int *l_338 = (void*)0;
    unsigned short l_350 = 6UL;
    struct S1 l_373 = {1285};
    if (((func_32(((((func_37(((safe_add_func_int8_t_s_s((-1L), (((safe_sub_func_uint8_t_u_u((g_31 ^ (0L | ((safe_rshift_func_int8_t_s_u(((+p_29) != ((safe_mod_func_int16_t_s_s((-4L), l_47)) == l_47)), l_47)) >= func_48(l_47, g_31, p_30)))), p_29)) || l_47) | l_47))) && l_47)) & g_31) < p_30) < g_31) & g_31), l_47, l_53, p_29) > 0xD8D2L) != 0xD735L))
    {
        unsigned short l_61 = 0UL;
        int *l_68 = &g_56;
        if (g_31)
        {
            int *l_62 = &g_56;
            (*l_62) = (safe_sub_func_uint16_t_u_u(l_47, ((~(0x9D8D7774L > 0x6A66835AL)) >= (g_56 < (safe_mod_func_uint8_t_u_u((l_61 < p_29), p_30))))));
            g_56 |= (-1L);
        }
        else
        {
            int * const l_64 = &g_56;
            int * const *l_63 = &l_64;
            int * const **l_65 = (void*)0;
            int * const **l_66 = (void*)0;
            int * const **l_67 = &l_63;
            (*l_67) = l_63;
        }
        (*l_68) |= p_29;
        for (l_53 = 0; (l_53 >= 11); ++l_53)
        {
            if (g_31)
            {
                (*l_68) = (*l_68);
            }
            else
            {
                int **l_71 = &l_68;
                struct S0 *l_73 = &g_72;
                (*l_71) = &p_30;
                (*l_73) = g_72;
            }
        }
    }
    else
    {
        int *l_77 = &g_56;
        int ** const l_76 = &l_77;
        struct S2 *l_80 = &g_81;
        struct S0 *l_152 = &g_72;
        if ((p_29 > l_53))
        {
            unsigned short l_79 = 0x816DL;
            short l_92 = 0xF933L;
            int *l_112 = &g_56;
            if (g_56)
            {
                unsigned short l_78 = 0x54A9L;
                char l_86 = 0L;
                int l_123 = 0xF4ECBCE0L;
                if ((safe_add_func_int32_t_s_s(func_32((((l_76 == (void*)0) | l_78) < (func_48(l_78, (l_79 != (((void*)0 == &g_72) & l_78)), ((0x77380A6AL || g_72.f4) <= p_29)) || g_72.f5)), l_78, g_72.f5, g_31), g_72.f4)))
                {
                    struct S2 **l_82 = &l_80;
                    int **l_91 = &l_85;
                    int ***l_90 = &l_91;
                    int *l_93 = &g_81.f7;
                    (*l_82) = l_80;
                    for (g_81.f4 = (-21); (g_81.f4 == 54); g_81.f4++)
                    {
                        (*l_76) = l_85;
                    }
                    (*l_93) |= ((l_79 > (func_32(l_86, func_37(((safe_rshift_func_uint16_t_u_u(0UL, 1)) && (l_89 != l_90))), (***l_90), ((*l_85) & ((p_29 <= 1L) > l_79))) ^ l_86)) & l_92);
                }
                else
                {
                    struct S0 * const l_126 = &g_72;
                    int l_128 = 1L;
                    int l_129 = 0x4A045A3BL;
                    for (g_81.f4 = 2; (g_81.f4 > 53); g_81.f4++)
                    {
                        unsigned short l_104 = 0x3DB6L;
                        g_81.f7 |= (safe_rshift_func_uint16_t_u_s((p_30 < (((((((safe_unary_minus_func_uint32_t_u((safe_mod_func_uint8_t_u_u((((g_81.f3 > ((void*)0 == g_101)) == (((g_103 != (void*)0) & func_48(l_92, g_72.f3, g_56)) || p_30)) >= p_30), g_72.f2)))) & l_104) > 0x058BBDFDL) >= l_105) ^ 0xD53FL) ^ p_29) && (*l_85))), 7));
                        (**l_76) = ((*g_101) == (*g_101));
                    }
                    if (p_29)
                    {
                        (*l_76) = &p_30;
                    }
                    else
                    {
                        int *l_106 = &g_81.f7;
                        (*l_106) ^= (**l_76);
                        (*g_101) = (*g_101);
                        (*l_106) = ((**g_101) & ((((((safe_mul_func_int8_t_s_s(g_111, ((*g_101) == l_112))) > (((safe_mod_func_int32_t_s_s(((safe_rshift_func_int16_t_s_s(((safe_lshift_func_uint16_t_u_s(((*l_85) == (*l_106)), 6)) == (**g_101)), 3)) & (*l_85)), p_29)) | (*l_106)) ^ g_81.f2)) != 0x9696L) & 0xB0L) <= 0x9D581DC2L) > g_81.f0.f0));
                    }
                    for (l_53 = 0; (l_53 == 18); l_53 = safe_add_func_uint16_t_u_u(l_53, 5))
                    {
                        (*l_112) = 0x8397568CL;
                        l_123 &= ((((safe_mod_func_uint16_t_u_u((*l_112), p_30)) != (*l_112)) ^ 5UL) > g_31);
                        l_128 &= (safe_sub_func_int32_t_s_s((l_126 != l_127), func_37((*l_77))));
                        l_129 &= func_32(p_30, g_81.f3, l_86, func_37((6UL >= (l_128 > (-1L)))));
                    }
                }
                for (l_47 = 11; (l_47 >= (-18)); l_47 = safe_sub_func_int8_t_s_s(l_47, 1))
                {
                    struct S2 **l_132 = (void*)0;
                    struct S2 **l_133 = &l_80;
                    (*l_133) = &g_81;
                    if ((*l_77))
                        break;
                    (**g_101) = (p_30 <= (*l_85));
                }
            }
            else
            {
                short l_141 = 0L;
                int *l_144 = &g_56;
                (**l_76) = (*l_77);
                if (p_29)
                {
                    struct S2 **l_138 = &l_80;
                    (*l_112) |= (safe_rshift_func_uint8_t_u_u((p_29 ^ g_72.f4), (g_72.f1 == (p_29 || (safe_lshift_func_uint8_t_u_s(0x88L, 2))))));
                    (*l_138) = (void*)0;
                    (**g_101) ^= 0L;
                }
                else
                {
                    (*l_112) = func_48(((**l_76) | (249UL != g_72.f6)), (safe_sub_func_uint8_t_u_u((+(*l_77)), p_30)), l_141);
                    for (g_72.f0 = 0; (g_72.f0 != 34); g_72.f0 = safe_add_func_int16_t_s_s(g_72.f0, 1))
                    {
                        (*l_77) = (*g_102);
                        (**g_101) &= p_29;
                    }
                    if ((((*g_102) < ((*g_101) == l_144)) || g_81.f1))
                    {
                        p_30 ^= (*g_102);
                    }
                    else
                    {
                        (*l_127) = (*l_127);
                        (**l_76) ^= (safe_mod_func_int8_t_s_s(g_81.f1, 1UL));
                        return g_81.f6;
                    }
                }
            }
        }
        else
        {
            int l_147 = 0xD4814448L;
            int *l_153 = &g_81.f7;
            (*l_77) &= p_29;
            (*l_153) |= (func_32(l_147, (safe_lshift_func_uint8_t_u_u(((~0x90FA72BBL) == (safe_rshift_func_int16_t_s_u(func_48(g_81.f4, g_81.f0.f0, ((l_152 == (void*)0) != (&g_72 == l_127))), (**l_76)))), 7)), p_29, (*l_77)) != (-1L));
        }
    }
    for (g_81.f7 = 0; (g_81.f7 != (-29)); g_81.f7--)
    {
        struct S0 *l_156 = &g_72;
        int l_179 = 1L;
        short l_183 = 0x161FL;
        if (p_29)
        {
            struct S0 **l_157 = &l_156;
            (*l_157) = l_156;
            (*g_102) = 3L;
            (**g_101) = p_30;
        }
        else
        {
            int l_164 = 1L;
            int l_171 = 0L;
            struct S1 l_172 = {866};
            int **l_182 = &l_85;
            for (g_81.f4 = 0; (g_81.f4 != 17); ++g_81.f4)
            {
                (*g_101) = &p_30;
                return l_160;
            }
            for (g_111 = 0; (g_111 != 60); g_111++)
            {
                unsigned short l_163 = 0xF467L;
                p_30 |= (0x5BDEL & p_29);
                l_171 &= func_32(l_163, (((-2L) & (func_32(l_164, (func_32((((safe_rshift_func_uint8_t_u_u((safe_rshift_func_int8_t_s_u(g_56, (l_163 != (*g_102)))), 4)) >= (g_72.f6 < p_30)) == (safe_add_func_int8_t_s_s(((*l_85) > p_29), p_29))), p_30, g_111, p_29) || l_164), p_29, l_164) == p_30)) <= 0x33B09B23L), g_31, l_163);
                return l_172;
            }
            (*l_85) = (!((1UL ^ ((p_29 == ((safe_lshift_func_int16_t_s_s(((p_29 & (((safe_add_func_uint32_t_u_u(0xC2E1585BL, (((l_179 | (safe_rshift_func_uint8_t_u_s((g_81.f7 ^ ((g_81.f3 == ((&g_102 != l_182) | 0x13F4F6D3L)) ^ g_81.f4)), 6))) ^ (**g_101)) != p_29))) && g_81.f3) == (**l_182))) && 0x3475L), (**l_182))) > p_30)) < 0x7DL)) < l_183));
        }
        if ((**g_101))
            break;
        g_184 |= (*l_85);
        return g_81.f6;
    }
    if (((+(g_81.f1 != (safe_rshift_func_uint8_t_u_s(((**g_101) | (safe_rshift_func_int8_t_s_u(0x1EL, (safe_sub_func_uint32_t_u_u((safe_add_func_uint16_t_u_u(((func_37(g_81.f1) < ((*l_85) ^ g_72.f1)) < func_48((safe_unary_minus_func_int8_t_s(2L)), ((safe_rshift_func_int8_t_s_u(p_29, (*l_85))) < (*l_85)), l_196)), g_81.f4)), (**g_101)))))), 6)))) || 5L))
    {
        short l_203 = (-8L);
        (*g_102) = (((0x84B9L | ((safe_rshift_func_uint8_t_u_s((safe_add_func_uint16_t_u_u(((((**g_101) != p_29) | (safe_lshift_func_int8_t_s_u(((p_30 <= (l_203 >= (func_37((safe_lshift_func_uint16_t_u_u(((safe_sub_func_int16_t_s_s((g_81.f7 >= p_29), l_203)) && (*l_85)), g_72.f1))) && p_30))) != 1L), 1))) | g_81.f6.f0), l_203)), p_29)) | p_29)) && 0x9FL) <= l_203);
        (*g_102) = l_203;
        (*g_102) = (**g_101);
    }
    else
    {
        short l_230 = 0xD199L;
        const int *l_309 = &g_56;
        int l_372 = 1L;
        if ((safe_sub_func_int16_t_s_s((p_30 > (func_32((safe_add_func_int32_t_s_s((-1L), p_29)), (p_29 <= ((safe_rshift_func_int16_t_s_s((func_37(g_31) ^ ((((void*)0 != &l_127) != (((p_29 | g_81.f0.f0) <= 0UL) >= 0xA52C59D5L)) & 9L)), 11)) > p_29)), g_81.f4, (**g_101)) < p_30)), g_81.f2)))
        {
            unsigned char l_225 = 0x17L;
            int l_231 = 0x44A9B1B6L;
            struct S2 * const l_233 = &g_81;
            unsigned short l_298 = 1UL;
            struct S2 ***l_318 = &g_103;
            struct S1 *l_336 = &g_81.f6;
            for (g_81.f2 = 0; (g_81.f2 >= 20); g_81.f2++)
            {
                struct S2 *l_232 = &g_81;
                g_81.f7 ^= (g_72.f6 || func_32(g_56, (~p_30), p_29, (safe_rshift_func_int16_t_s_u(func_48(((safe_unary_minus_func_int32_t_s((safe_sub_func_int8_t_s_s((l_225 > ((safe_lshift_func_uint16_t_u_s((255UL <= (!(safe_lshift_func_uint16_t_u_u((!(~((**g_101) | p_29))), 2)))), func_48(g_81.f5, g_72.f6, l_230))) >= l_231)), 0x3EL)))) > (*l_85)), p_29, l_230), 5))));
                (*g_102) ^= (l_232 == l_233);
            }
            if ((safe_mod_func_uint16_t_u_u(3UL, 65535UL)))
            {
                const char l_270 = 0x00L;
                unsigned l_271 = 0xF29779F3L;
                (**g_101) ^= (safe_mod_func_int32_t_s_s(p_30, (0xD9B3265BL ^ l_238)));
                for (l_105 = 9; (l_105 < 41); l_105++)
                {
                    struct S2 ***l_243 = &g_103;
                    struct S1 *l_245 = &g_81.f6;
                    struct S1 **l_244 = &l_245;
                    int l_279 = (-5L);
                    (*l_243) = l_241;
                    (*l_244) = &l_160;
                    if (p_30)
                    {
                        int *l_248 = (void*)0;
                        int *l_249 = &g_184;
                        (*l_249) ^= ((~p_29) || (safe_add_func_uint32_t_u_u(g_81.f5, (!(*g_102)))));
                        g_81.f6.f0 ^= (g_184 || (safe_lshift_func_uint8_t_u_u((safe_rshift_func_uint16_t_u_u((safe_add_func_int32_t_s_s(((&g_103 != &g_103) <= func_32((safe_sub_func_int16_t_s_s(l_230, ((((safe_add_func_int8_t_s_s(p_30, ((**g_101) >= (((~func_48((safe_lshift_func_int8_t_s_u(0x14L, 3)), (func_37(g_81.f7) <= 0x5D4DA4FFL), p_30)) != l_225) && g_72.f3)))) > p_30) >= (*l_249)) && 0x934A2F95L))), p_30, g_72.f6, (**g_101))), p_30)), p_29)), 4)));
                        return g_81.f6;
                    }
                    else
                    {
                        char l_274 = 1L;
                        int l_284 = 3L;
                        (*l_85) = ((0x51L == (safe_sub_func_uint8_t_u_u((safe_sub_func_int8_t_s_s((safe_rshift_func_int16_t_s_u((safe_lshift_func_uint16_t_u_u((func_37((0xEA250765L < l_270)) | (*g_102)), l_271)), l_230)), (safe_add_func_uint16_t_u_u(p_30, (((*l_85) <= l_274) < 0x0CL))))), (-1L)))) <= 0UL);
                        (*l_85) = (g_81.f1 >= (((safe_sub_func_uint16_t_u_u((safe_sub_func_uint16_t_u_u(((l_279 != (((((**g_101) < ((func_48(p_30, g_72.f3, g_81.f3) && l_270) ^ (safe_sub_func_int8_t_s_s((safe_lshift_func_int16_t_s_u(((func_37(p_29) & l_284) <= 8L), l_230)), p_29)))) | p_30) | g_56) <= 253UL)) >= p_30), g_184)), p_29)) | l_279) && l_279));
                    }
                }
                (*g_102) |= (safe_rshift_func_int8_t_s_u(l_230, (g_72.f1 && p_29)));
            }
            else
            {
                struct S2 **l_289 = &l_242;
                int l_297 = 0x0CCB52ADL;
                int **l_347 = &l_85;
                int *l_351 = &l_297;
                if (((!(safe_sub_func_uint32_t_u_u(4294967295UL, (((&l_233 == l_289) >= p_29) >= ((+((((safe_unary_minus_func_uint16_t_u((safe_add_func_uint8_t_u_u((safe_mod_func_int8_t_s_s(((safe_mod_func_uint32_t_u_u((((p_30 ^ l_231) == l_225) != (((((0xA575788BL == (*g_102)) | p_29) > 9UL) && g_111) ^ 1L)), 0xA5B5B071L)) < 0x5FL), 0x52L)), (*l_85))))) < 0x868CL) <= l_231) == p_29)) < l_297))))) == l_298))
                {
                    unsigned l_301 = 0x1144BCF0L;
                    int l_315 = 0x00120B93L;
                    struct S2 ***l_319 = &g_103;
                    const unsigned l_322 = 6UL;
                    int l_330 = 1L;
                    struct S1 **l_332 = (void*)0;
                    struct S1 *l_334 = &l_160;
                    struct S1 **l_333 = &l_334;
                    if ((safe_mod_func_uint8_t_u_u((func_48(l_297, (*l_85), ((g_72.f5 || (l_301 == (((safe_lshift_func_uint8_t_u_s(func_37(l_231), 2)) <= l_301) > l_231))) != (safe_mod_func_uint32_t_u_u(((safe_add_func_int32_t_s_s((**g_101), 0x005B03ECL)) && g_31), g_308)))) == 255UL), 0xD2L)))
                    {
                        const int **l_310 = &l_309;
                        struct S0 **l_317 = &l_127;
                        (*l_85) = p_30;
                        (*l_310) = l_309;
                        l_316 |= ((((safe_mod_func_int16_t_s_s(p_30, (safe_mod_func_int16_t_s_s((l_298 > (-2L)), func_48(l_315, ((((((((*g_102) != ((l_231 | (*g_102)) || l_297)) & g_81.f5) != (*l_85)) != 0x59536371L) != (**g_101)) <= g_81.f0.f0) > g_81.f6.f0), l_225))))) != (-6L)) >= l_231) >= g_81.f6.f0);
                        (*l_317) = l_127;
                    }
                    else
                    {
                        int *l_325 = &g_81.f7;
                        (*l_325) |= ((l_318 == l_319) != ((0UL <= (p_30 | ((((safe_add_func_uint32_t_u_u(l_322, ((1L ^ g_323) < (safe_unary_minus_func_uint8_t_u((*l_309)))))) && l_315) || p_30) < 1UL))) | g_184));
                        l_330 = (safe_rshift_func_uint16_t_u_u((safe_add_func_int8_t_s_s((-2L), p_30)), p_30));
                        (*l_325) = func_37(g_81.f4);
                        (**g_101) = (*l_85);
                    }
                    (*l_333) = g_331;
                    return g_335;
                }
                else
                {
                    g_337 = l_336;
                    (*g_101) = l_338;
                }
                (*l_351) ^= ((((((safe_lshift_func_int16_t_s_u(func_48(p_29, ((safe_rshift_func_int8_t_s_u(g_56, p_29)) == (safe_sub_func_int16_t_s_s((p_30 && p_30), (safe_sub_func_int8_t_s_s((&g_102 == l_347), (((safe_sub_func_uint16_t_u_u((*l_309), (l_350 | p_29))) | 0UL) <= 0x61F3L)))))), p_29), p_29)) > (**l_347)) > 0x662EE07EL) && (-7L)) >= p_30) == g_56);
                if (p_30)
                {
                    l_231 ^= func_37(g_81.f4);
                }
                else
                {
                    (*l_85) = (safe_rshift_func_uint16_t_u_u(func_37((*l_309)), func_37((g_81.f6.f0 == (safe_rshift_func_uint8_t_u_u(p_29, 1))))));
                    for (l_225 = (-8); (l_225 >= 48); l_225 = safe_add_func_int8_t_s_s(l_225, 9))
                    {
                        (*l_351) = (p_29 ^ g_72.f5);
                    }
                    for (g_81.f5 = 0; (g_81.f5 >= (-11)); g_81.f5 = safe_sub_func_uint8_t_u_u(g_81.f5, 7))
                    {
                        struct S1 *l_360 = &g_81.f6;
                        int l_361 = 0xFA400113L;
                        (**l_347) ^= ((l_360 != &g_335) == p_30);
                        l_361 &= 0xEB184F4DL;
                    }
                    (*l_336) = (*g_337);
                }
                (*l_347) = (*g_101);
            }
            p_30 |= (*l_309);
            l_231 &= 0x407F62ADL;
        }
        else
        {
            int *l_362 = &g_184;
            struct S0 * const l_363 = &g_72;
            int ***l_366 = (void*)0;
            (*g_101) = l_362;
            p_30 = ((void*)0 == l_363);
            (*g_101) = (*g_101);
            for (g_111 = 0; (g_111 > 15); ++g_111)
            {
                int l_368 = 0x7299EE65L;
                short l_371 = 0x3E57L;
                (*l_362) |= (l_89 != l_366);
                l_372 |= ((func_48(p_29, (func_37(((g_367 != g_81.f6.f0) < (l_368 || (g_81.f7 & 0xCEL)))) == (safe_mod_func_uint8_t_u_u(1UL, (*l_362)))), l_371) == p_30) && g_81.f3);
            }
        }
        (*g_331) = l_373;
    }
    (*l_127) = (*l_127);
    return l_160;
}







static short func_32(unsigned char p_33, int p_34, unsigned char p_35, int p_36)
{
    unsigned l_54 = 1UL;
    int *l_55 = &g_56;
    (*l_55) |= (l_54 < 1UL);
    return (*l_55);
}







static const unsigned char func_37(int p_38)
{
    return g_31;
}







static unsigned char func_48(int p_49, unsigned p_50, unsigned char p_51)
{
    unsigned char l_52 = 0x9CL;
    return l_52;
}





int main (int argc, char* argv[])
{
    int print_hash_value = 0;
    if (argc == 2 && strcmp(argv[1], "1") == 0) print_hash_value = 1;
    platform_main_begin();
    crc32_gentab();
    func_1();
    transparent_crc(g_31, "g_31", print_hash_value);
    transparent_crc(g_56, "g_56", print_hash_value);
    transparent_crc(g_72.f0, "g_72.f0", print_hash_value);
    transparent_crc(g_72.f1, "g_72.f1", print_hash_value);
    transparent_crc(g_72.f2, "g_72.f2", print_hash_value);
    transparent_crc(g_72.f3, "g_72.f3", print_hash_value);
    transparent_crc(g_72.f4, "g_72.f4", print_hash_value);
    transparent_crc(g_72.f5, "g_72.f5", print_hash_value);
    transparent_crc(g_72.f6, "g_72.f6", print_hash_value);
    transparent_crc(g_81.f0.f0, "g_81.f0.f0", print_hash_value);
    transparent_crc(g_81.f1, "g_81.f1", print_hash_value);
    transparent_crc(g_81.f2, "g_81.f2", print_hash_value);
    transparent_crc(g_81.f3, "g_81.f3", print_hash_value);
    transparent_crc(g_81.f4, "g_81.f4", print_hash_value);
    transparent_crc(g_81.f5, "g_81.f5", print_hash_value);
    transparent_crc(g_81.f6.f0, "g_81.f6.f0", print_hash_value);
    transparent_crc(g_81.f7, "g_81.f7", print_hash_value);
    transparent_crc(g_111, "g_111", print_hash_value);
    transparent_crc(g_184, "g_184", print_hash_value);
    transparent_crc(g_308, "g_308", print_hash_value);
    transparent_crc(g_323, "g_323", print_hash_value);
    transparent_crc(g_335.f0, "g_335.f0", print_hash_value);
    transparent_crc(g_367, "g_367", print_hash_value);
    transparent_crc(g_407.f0.f0, "g_407.f0.f0", print_hash_value);
    transparent_crc(g_407.f1, "g_407.f1", print_hash_value);
    transparent_crc(g_407.f2, "g_407.f2", print_hash_value);
    transparent_crc(g_407.f3, "g_407.f3", print_hash_value);
    transparent_crc(g_407.f4, "g_407.f4", print_hash_value);
    transparent_crc(g_407.f5, "g_407.f5", print_hash_value);
    transparent_crc(g_407.f6.f0, "g_407.f6.f0", print_hash_value);
    transparent_crc(g_407.f7, "g_407.f7", print_hash_value);
    transparent_crc(g_410, "g_410", print_hash_value);
    transparent_crc(g_513, "g_513", print_hash_value);
    transparent_crc(g_584, "g_584", print_hash_value);
    transparent_crc(g_618, "g_618", print_hash_value);
    transparent_crc(g_651, "g_651", print_hash_value);
    transparent_crc(g_746, "g_746", print_hash_value);
    transparent_crc(g_773.f0.f0, "g_773.f0.f0", print_hash_value);
    transparent_crc(g_773.f1, "g_773.f1", print_hash_value);
    transparent_crc(g_773.f2, "g_773.f2", print_hash_value);
    transparent_crc(g_773.f3, "g_773.f3", print_hash_value);
    transparent_crc(g_773.f4, "g_773.f4", print_hash_value);
    transparent_crc(g_773.f5, "g_773.f5", print_hash_value);
    transparent_crc(g_773.f6.f0, "g_773.f6.f0", print_hash_value);
    transparent_crc(g_773.f7, "g_773.f7", print_hash_value);
    transparent_crc(g_808, "g_808", print_hash_value);
    platform_main_end(crc32_context ^ 0xFFFFFFFFUL, print_hash_value);
    return 0;
}
