int printf(const char *, ...);
short a, e;
struct c {
  signed d;
  long f;
  signed g : 1;
} n[7][10][3], q;
union h {
  unsigned d;
};
int l, o;
long m;
char p;
volatile int r;
short(s)() { return a ?: a; }
struct c t() {
  return q;
}
int main() {
  int i, j, k, b = 2;
  struct c v = t();
  short *u = &e;
  long *c = &m;
  union h d = {};
  *c &= (*u = l) || b;
  o = s() <= (p && r && d.d);
  i = 0;
  for (; i < 2; i++) {
    j = 0;
    for (; j < 10; j++) {
      k = 0;
      for (; k < 3; k++) {
        printf("", n[i][j][k]);
        printf("", n[i][j][k].g);
      }
    }
  }
  printf("%d\n", e);
  return 0;
}
