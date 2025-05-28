int printf(const char *, ...);
#pragma pack(1)
struct a {
  short b;
  int c;
};
union d {
  struct a b;
  short c;
};
short e, g, h;
int f;
long a;
volatile union d b[5][6][8];
volatile short c;
long *l = &a;
void m(void) {
  for (; e;)
    ;
}
int main() {
  int i, j, k;
  m();
  g = *l = f;
  h || c;
  printf("%d\n", (int)a);
  i = 0;
  for (; i < 5; i++) {
    j = 0;
    for (; j < 6; j++) {
      k = 0;
      for (; k < 8; k++) {
        printf("", b[i][j][k].b.b);
        b[i][j][k].b.c;
        b[i][j][k].c;
      }
    }
  }
}
